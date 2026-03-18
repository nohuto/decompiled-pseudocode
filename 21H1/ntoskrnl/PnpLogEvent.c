/*
 * XREFs of PnpLogEvent @ 0x14089DADC
 * Callers:
 *     PpCheckInDriverDatabase @ 0x1407231E0 (PpCheckInDriverDatabase.c)
 *     PnpQueryID @ 0x14072C7E0 (PnpQueryID.c)
 *     PnpFixupID @ 0x14072C968 (PnpFixupID.c)
 *     PiIsDriverBlocked @ 0x140769384 (PiIsDriverBlocked.c)
 *     PiInitializeDDB @ 0x1407699E0 (PiInitializeDDB.c)
 *     PpBootDDBHelper @ 0x14078B3F0 (PpBootDDBHelper.c)
 *     PnpLogDuplicateDevice @ 0x14089E420 (PnpLogDuplicateDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A4AB7C (IopInitializePlugPlayServices.c)
 * Callees:
 *     IoWriteErrorLogEntry @ 0x14037DA50 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1404FFDE8 (IoAllocateGenericErrorLogEntry.c)
 */

void __fastcall PnpLogEvent(const void **a1, const void **a2, int a3, const void *a4, unsigned int Size)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  _WORD *GenericErrorLogEntry; // rax
  _WORD *v13; // rbx
  char *v14; // rdi
  char *v15; // rdi

  v9 = 0LL;
  v10 = 0LL;
  if ( a1 )
    v10 = *(unsigned __int16 *)a1 + 2LL;
  if ( a2 )
    v9 = *(unsigned __int16 *)a2 + 2LL;
  v11 = (Size + 40 + 1LL) & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 + v11 + v9 <= 0xF0 )
  {
    GenericErrorLogEntry = IoAllocateGenericErrorLogEntry((unsigned __int8)v10 + (unsigned __int8)v11
                                                                               + (unsigned __int8)v9);
    v13 = GenericErrorLogEntry;
    if ( GenericErrorLogEntry )
    {
      GenericErrorLogEntry[3] = v11;
      v14 = (char *)GenericErrorLogEntry + v11;
      *((_DWORD *)GenericErrorLogEntry + 3) = a3;
      *((_DWORD *)GenericErrorLogEntry + 5) = a3;
      GenericErrorLogEntry[1] = Size;
      if ( Size )
        memmove(GenericErrorLogEntry + 20, a4, Size);
      if ( a1 )
      {
        v13[2] = 1;
        memmove(v14, a1[1], *(unsigned __int16 *)a1);
        v15 = &v14[*(unsigned __int16 *)a1];
        *(_WORD *)v15 = 0;
        v14 = v15 + 2;
      }
      if ( a2 )
      {
        ++v13[2];
        memmove(v14, a2[1], *(unsigned __int16 *)a2);
        *(_WORD *)&v14[*(unsigned __int16 *)a2] = 0;
      }
      IoWriteErrorLogEntry(v13);
    }
  }
}

/*
 * XREFs of PiSwBusRelationAdd @ 0x140764970
 * Callers:
 *     PiSwProcessRemove @ 0x1406619F8 (PiSwProcessRemove.c)
 *     PiSwIrpStartCreateWorker @ 0x140765DC0 (PiSwIrpStartCreateWorker.c)
 * Callees:
 *     RtlInsertElementGenericTableAvl @ 0x1402DEF50 (RtlInsertElementGenericTableAvl.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140563B98 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     McTemplateK0zzzd_EtwWriteTransfer @ 0x140563CAC (McTemplateK0zzzd_EtwWriteTransfer.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiSwBusRelationAdd(NTSTRSAFE_PCWSTR pszSrc, __int64 a2, __int64 a3)
{
  int PWSTR; // eax
  __int64 v6; // rcx
  __int64 v7; // r8
  PVOID v8; // rdi
  signed int v9; // ebx
  _WORD *v10; // rax
  _QWORD *inserted; // rax
  __int64 *v12; // rdx
  char *v13; // rax
  _OWORD Buffer[2]; // [rsp+40h] [rbp-20h] BYREF
  BOOLEAN NewElement; // [rsp+A0h] [rbp+40h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h]

  P = 0LL;
  NewElement = 0;
  memset(Buffer, 0, sizeof(Buffer));
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzz_EtwWriteTransfer(
      (__int64)pszSrc,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationAdd_Start,
      a3,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      pszSrc);
  PWSTR = PnpAllocatePWSTR(pszSrc);
  v8 = P;
  v9 = PWSTR;
  if ( PWSTR >= 0 )
  {
    v9 = 0;
    if ( P )
    {
      v6 = 0x7FFFLL;
      v10 = P;
      do
      {
        if ( !*v10 )
          break;
        ++v10;
        --v6;
      }
      while ( v6 );
      v9 = v6 == 0 ? 0xC000000D : 0;
      if ( v6 )
      {
        LOWORD(v6) = 2 * v6;
        *((_QWORD *)&Buffer[0] + 1) = P;
        LOWORD(Buffer[0]) = -2 - v6;
        WORD1(Buffer[0]) = -(__int16)v6;
      }
    }
    if ( v9 >= 0 )
    {
      inserted = RtlInsertElementGenericTableAvl(&PiSwBusRelationsTable, Buffer, 0x20u, &NewElement);
      if ( inserted )
      {
        if ( NewElement )
        {
          P = 0LL;
          inserted[3] = inserted + 2;
          inserted[2] = inserted + 2;
        }
        *(_QWORD *)(a2 + 112) = inserted;
        v6 = a2 + 96;
        v12 = (__int64 *)inserted[3];
        v13 = (char *)(inserted + 2);
        if ( (char *)*v12 != v13 )
          __fastfail(3u);
        *(_QWORD *)v6 = v13;
        *(_QWORD *)(a2 + 104) = v12;
        *v12 = v6;
        *((_QWORD *)v13 + 1) = v6;
        _InterlockedIncrement((volatile signed __int32 *)a2);
        v8 = P;
      }
      else
      {
        v9 = -1073741670;
      }
    }
  }
  if ( v8 )
    ExFreePoolWithTag(v8, 0x57706E50u);
  if ( (byte_140C0DD4C & 2) != 0 )
    McTemplateK0zzzd_EtwWriteTransfer(
      v6,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_RelationAdd_Stop,
      v7,
      *(const wchar_t **)(a2 + 8),
      *(const wchar_t **)(a2 + 16),
      pszSrc,
      v9);
  return (unsigned int)v9;
}

/*
 * XREFs of DifZwDeviceIoControlFileWrapper @ 0x14061F970
 * Callers:
 *     <none>
 * Callees:
 *     ZwDeviceIoControlFile @ 0x14041B840 (ZwDeviceIoControlFile.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DifGetAPIThunkContextById @ 0x140604844 (DifGetAPIThunkContextById.c)
 *     DifGetReturnAddressForWrappers @ 0x140628C98 (DifGetReturnAddressForWrappers.c)
 */

NTSTATUS __fastcall DifZwDeviceIoControlFileWrapper(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *APIThunkContextById; // rdi
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 ReturnAddressForWrappers; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  _QWORD **v23; // rdi
  _QWORD *v24; // rbx
  _QWORD v25[12]; // [rsp+58h] [rbp-59h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v25, 0, sizeof(v25));
  APIThunkContextById = DifGetAPIThunkContextById(521);
  if ( !APIThunkContextById )
    goto LABEL_18;
  if ( ViVerifierEnabled && ((VfRuleClasses & 0xFFA9F6E6) != 0 || (VfRuleClasses & 0x200000000LL) != 0)
    || (VfRuleClasses & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)APIThunkContextById + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v19 = *((_DWORD *)APIThunkContextById + 3);
  if ( (v19 & 0x18) == 0 )
  {
    if ( (v19 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    ReturnAddressForWrappers = DifGetReturnAddressForWrappers(v15, v14, v17, v18);
    goto LABEL_12;
  }
  ReturnAddressForWrappers = retaddr;
LABEL_12:
  v25[0] = ReturnAddressForWrappers;
LABEL_13:
  v25[6] = IoStatusBlock;
  LODWORD(v25[5]) = IoControlCode;
  v25[4] = InputBuffer;
  LODWORD(v25[3]) = InputBufferLength;
  v25[2] = OutputBuffer;
  LODWORD(v25[1]) = OutputBufferLength;
  v25[10] = FileHandle;
  v25[9] = Event;
  v25[8] = ApcRoutine;
  v25[7] = ApcContext;
  for ( i = (__int64 *)APIThunkContextById[4]; i != APIThunkContextById + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      ((void (__fastcall *)(_QWORD *))*(i - 1))(v25);
  }
LABEL_18:
  result = ZwDeviceIoControlFile(
             FileHandle,
             Event,
             ApcRoutine,
             ApcContext,
             IoStatusBlock,
             IoControlCode,
             InputBuffer,
             InputBufferLength,
             OutputBuffer,
             OutputBufferLength);
  LODWORD(v25[11]) = result;
  if ( APIThunkContextById )
  {
    v23 = (_QWORD **)(APIThunkContextById + 6);
    v24 = *v23;
    if ( *v23 != v23 )
    {
      do
      {
        if ( v24 != (_QWORD *)16 )
          ((void (__fastcall *)(_QWORD *))*(v24 - 1))(v25);
        v24 = (_QWORD *)*v24;
      }
      while ( v24 != v23 );
      return v25[11];
    }
  }
  return result;
}

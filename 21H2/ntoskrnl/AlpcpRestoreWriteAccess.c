/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x1406F60E8
 * Callers:
 *     AlpcViewDestroyProcedure @ 0x1406F6A30 (AlpcViewDestroyProcedure.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1407A4E8C (AlpcpExposeViewAttributeInSenderContext.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdi
  void *v6; // rcx
  _KPROCESS *Process; // rsi
  _OWORD v8[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, sizeof(v8));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(void **)(a1 + 64);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v6 )
  {
    if ( *(_KPROCESS **)(a1 + 32) != Process )
    {
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0LL, (__int64)v8, a4);
      v6 = *(void **)(a1 + 64);
    }
    MmUnsecureVirtualMemory(v6);
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess((__int64)v8, 0LL);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = a1;
}

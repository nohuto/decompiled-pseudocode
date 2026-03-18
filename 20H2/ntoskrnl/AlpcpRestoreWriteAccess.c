/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x140685CD0
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x1405F7698 (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140685570 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x1406245E0 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1)
{
  __int64 v2; // rdi
  void *v3; // rcx
  _KPROCESS *Process; // rsi
  _OWORD v5[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v5, 0, sizeof(v5));
  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(void **)(a1 + 64);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v3 )
  {
    if ( *(_KPROCESS **)(a1 + 32) != Process )
    {
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0, (__int64)v5);
      v3 = *(void **)(a1 + 64);
    }
    MmUnsecureVirtualMemory(v3);
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess((__int64)v5, 0);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v2 + 72) = 0LL;
  *(_QWORD *)(v2 + 80) = a1;
}

/*
 * XREFs of AlpcpRestoreWriteAccess @ 0x14063864C
 * Callers:
 *     AlpcpExposeViewAttributeInSenderContext @ 0x140615DDC (AlpcpExposeViewAttributeInSenderContext.c)
 *     AlpcViewDestroyProcedure @ 0x140635B50 (AlpcViewDestroyProcedure.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MmUnsecureVirtualMemory @ 0x140635790 (MmUnsecureVirtualMemory.c)
 */

void __fastcall AlpcpRestoreWriteAccess(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdi
  void *v6; // rcx
  _KPROCESS *Process; // rsi
  __int64 v8; // r8
  _DWORD *v9; // r9
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(void **)(a1 + 64);
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( v6 )
  {
    if ( *(_KPROCESS **)(a1 + 32) != Process )
    {
      KiStackAttachProcess(*(_KPROCESS **)(a1 + 32), 0LL, (__int64)v10, a4);
      v6 = *(void **)(a1 + 64);
    }
    MmUnsecureVirtualMemory(v6);
    if ( *(_KPROCESS **)(a1 + 32) != Process )
      KiUnstackDetachProcess((__int64)v10, 0LL, v8, v9);
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  *(_DWORD *)(a1 + 72) |= 1u;
  *(_QWORD *)(v5 + 72) = 0LL;
  *(_QWORD *)(v5 + 80) = a1;
}

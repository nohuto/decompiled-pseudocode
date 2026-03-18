/*
 * XREFs of MmProbeAndLockProcessPages @ 0x140638710
 * Callers:
 *     CcAsyncReadPrefetch @ 0x1402BE260 (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x1402A68D0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

// local variable allocation has failed, the output may be wrong!
void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  __int64 v8; // r8
  _DWORD *v9; // r9
  _OWORD v10[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v10, 0, sizeof(v10));
  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v6 = 1;
    KiStackAttachProcess(Process, 0LL, (__int64)v10, *(_DWORD **)&Operation);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v10, 0LL, v8, v9);
}

/*
 * XREFs of MmProbeAndLockProcessPages @ 0x1406036D0
 * Callers:
 *     CcAsyncReadPrefetch @ 0x140265230 (CcAsyncReadPrefetch.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     MmProbeAndLockPages @ 0x14024D8A0 (MmProbeAndLockPages.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

void __stdcall MmProbeAndLockProcessPages(
        PMDL MemoryDescriptorList,
        PEPROCESS Process,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  int v6; // ebx
  LOCK_OPERATION v7; // edi
  _OWORD v8[3]; // [rsp+28h] [rbp-60h] BYREF

  memset(v8, 0, sizeof(v8));
  v6 = 0;
  v7 = Operation != IoReadAccess;
  if ( Process != KeGetCurrentThread()->ApcState.Process )
  {
    v6 = 1;
    KiStackAttachProcess(Process, 0LL, (__int64)v8);
  }
  MmProbeAndLockPages(MemoryDescriptorList, AccessMode, v7);
  if ( v6 )
    KiUnstackDetachProcess((__int64)v8, 0LL);
}

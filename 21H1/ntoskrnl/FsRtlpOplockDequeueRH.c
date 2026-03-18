/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1402F5C84
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140254990 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestShareableOplock @ 0x14025A570 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x14025AF44 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1402F56F8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1402F5884 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402FF660 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140373290 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14038FC2C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x1402F5CCC (IoGetOplockFullFoExt.c)
 */

__int64 __fastcall FsRtlpOplockDequeueRH(__int64 a1)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v2; // rdx
  __int64 result; // rax
  _QWORD *v4; // rcx

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24));
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  result = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = result;
  *(_QWORD *)(result + 8) = v4;
  return result;
}

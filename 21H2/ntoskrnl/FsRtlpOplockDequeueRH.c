/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x140356AA0
 * Callers:
 *     FsRtlpRequestShareableOplock @ 0x1402057F0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x140206224 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpOplockCleanup @ 0x1402AD5D0 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1402AEF00 (FsRtlUninitializeOplock.c)
 *     FsRtlCheckOplockEx2 @ 0x140353D20 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374AD0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1403930CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0B48 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405EA170 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x1403567B8 (IoGetOplockFullFoExt.c)
 */

__int64 __fastcall FsRtlpOplockDequeueRH(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v4; // r9
  __int64 result; // rax
  _QWORD *v6; // rcx

  OplockFullFoExt = IoGetOplockFullFoExt(*(_QWORD *)(a1 + 24), a2, a3, a1);
  if ( OplockFullFoExt )
    *(_QWORD *)(OplockFullFoExt + 40) = 0LL;
  result = *v4;
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
    __fastfail(3u);
  *v6 = result;
  *(_QWORD *)(result + 8) = v6;
  return result;
}

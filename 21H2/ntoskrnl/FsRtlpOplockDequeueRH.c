/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1403617F0
 * Callers:
 *     FsRtlpOplockCleanup @ 0x14022B930 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x14022D260 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1402AA120 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402AAB54 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlCheckOplockEx2 @ 0x14035EA70 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140374620 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x140361508 (IoGetOplockFullFoExt.c)
 */

__int64 __fastcall FsRtlpOplockDequeueRH(__int64 a1)
{
  __int64 OplockFullFoExt; // rax
  _QWORD *v2; // r9
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

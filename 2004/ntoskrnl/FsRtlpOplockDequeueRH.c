/*
 * XREFs of FsRtlpOplockDequeueRH @ 0x1403329B4
 * Callers:
 *     FsRtlCheckOplockEx2 @ 0x140291210 (FsRtlCheckOplockEx2.c)
 *     FsRtlpRequestShareableOplock @ 0x140296DF0 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402977C4 (FsRtlpOplockEnqueueRH.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140332428 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockCleanup @ 0x1403325B4 (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x14033BF60 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403740A0 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039079C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140689350 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     IoGetOplockFullFoExt @ 0x1403329FC (IoGetOplockFullFoExt.c)
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

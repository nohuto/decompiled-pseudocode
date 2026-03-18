/*
 * XREFs of MiIsImageFullyRetpolined @ 0x140970A74
 * Callers:
 *     MiUnloadSystemImage @ 0x1406F4FB8 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x140970C20 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x140287970 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x1402D9A20 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(_QWORD *)(a1 + 48));
}

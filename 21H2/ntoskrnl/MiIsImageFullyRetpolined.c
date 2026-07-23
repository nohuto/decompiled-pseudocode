/*
 * XREFs of MiIsImageFullyRetpolined @ 0x1408D0C14
 * Callers:
 *     MiUnloadSystemImage @ 0x1406A84A8 (MiUnloadSystemImage.c)
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0DC8 (MiMarkKernelImageRetpolineBits.c)
 * Callees:
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     RtlIsImageFullyRetpolined @ 0x140371978 (RtlIsImageFullyRetpolined.c)
 */

__int64 __fastcall MiIsImageFullyRetpolined(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 112) )
    return (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(MiSectionControlArea(*(_QWORD *)(a1 + 112)) + 96) + 32LL) + 72LL) >> 5) & 1;
  else
    return RtlIsImageFullyRetpolined(*(void **)(a1 + 48));
}

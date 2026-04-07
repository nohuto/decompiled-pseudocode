/*
 * XREFs of ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800B7630
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Opacity(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  *((double *)this + 7) = *((float *)a2 + 5);
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 35) + 104LL))((char *)this - 280);
  return 0LL;
}

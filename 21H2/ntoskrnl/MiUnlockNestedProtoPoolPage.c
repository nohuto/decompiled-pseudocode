/*
 * XREFs of MiUnlockNestedProtoPoolPage @ 0x1402469DC
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiConvertStandbyToProto @ 0x140367128 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiLockNestedPageAtDpcInline @ 0x140258F30 (MiLockNestedPageAtDpcInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 */

__int64 __fastcall MiUnlockNestedProtoPoolPage(__int64 a1)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1);
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

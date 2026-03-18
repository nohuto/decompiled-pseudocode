/*
 * XREFs of MiUnlockNestedProtoPoolPage @ 0x140318B64
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x1402B988C (MiCopyDataPageToImagePage.c)
 *     MiConvertStandbyToProto @ 0x140364328 (MiConvertStandbyToProto.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140285870 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402FE700 (MiLockNestedPageAtDpcInline.c)
 */

__int64 __fastcall MiUnlockNestedProtoPoolPage(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  MiLockNestedPageAtDpcInline(a1, a2, a3, a4);
  *(_BYTE *)(a1 + 34) &= ~0x20u;
  MiRemoveLockedPageChargeAndDecRef(a1);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}

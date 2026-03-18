/*
 * XREFs of ?xxxPromotePointer@PointerPromotion@@YAHGKK@Z @ 0x1C02193E0
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z @ 0x1C02191D4 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YAXAEBUtagPOINTER_INFO@@GG@Z.c)
 *     EditionPromotePointer @ 0x1C02197C0 (EditionPromotePointer.c)
 * Callees:
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0218564 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x1C0218974 (-PromotePointerInternal@@YAHGKPEAUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z @ 0x1C0218B78 (-PromoteToMouse@Pointer@InputTraceLogging@@SAXKGKG@Z.c)
 *     ?ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z @ 0x1C0218DEC (-ValidatePointerPromotion@@YAHGKPEAKPEAPEAUtagMOUSE_PROMOTION_ENTRY@@1@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0218F9C (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

__int64 __fastcall PointerPromotion::xxxPromotePointer(PointerPromotion *this, unsigned int a2, unsigned int a3)
{
  __int16 v4; // bx
  struct tagMOUSE_PROMOTION_ENTRY *v6; // r8
  unsigned int v7; // edx
  unsigned int v9; // edx
  unsigned int v10; // ebx
  struct tagMOUSE_PROMOTION_ENTRY *v11[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+30h] BYREF
  struct tagMOUSE_PROMOTION_ENTRY *v13; // [rsp+78h] [rbp+38h] BYREF

  v12 = a3;
  v4 = (__int16)this;
  v13 = 0LL;
  v11[0] = 0LL;
  InputTraceLogging::Pointer::PromoteToMouse(a2, (__int16)this, a3, 0);
  if ( !(unsigned int)ValidatePointerPromotion(v4, a2, &v12, &v13, v11) )
    return 0LL;
  if ( !word_1C0339BC0 )
  {
LABEL_11:
    v6 = v13;
    v9 = v12;
LABEL_12:
    if ( v9 == 0x10000000 )
    {
      dword_1C0339BE8 |= 8u;
      return 1LL;
    }
    else
    {
      v10 = PromotePointerInternal(v4, v9, v6, v11[0]);
      xxxProcessMousePromotionQueue();
      return v10;
    }
  }
  if ( word_1C0339BC0 != v4 || (v6 = v13, dword_1C0339BC4 != *((_DWORD *)v13 + 8)) )
  {
    ForceCompletePendingPromotion();
    v12 = a3;
    if ( (unsigned int)ValidatePointerPromotion(v4, a2, &v12, &v13, v11) )
      goto LABEL_11;
    return 0LL;
  }
  LOBYTE(v7) = v12;
  if ( (v12 & 0x80000) == 0 )
  {
    v9 = (dword_1C0339BD4 != 0 ? 50331648 : 0x1000000) | ((dword_1C0339BD0 != 0) + 1) | v12 & 0xFFFF00;
    goto LABEL_12;
  }
  if ( dword_1C0339BD0 )
    v7 = v12 >> 1;
  return v7 & 1;
}

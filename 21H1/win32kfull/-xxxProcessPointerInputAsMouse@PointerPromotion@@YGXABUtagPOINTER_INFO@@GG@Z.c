/*
 * XREFs of ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9
 * Callers:
 *     _EditionProcessPointerInputAsMouse@12 @ 0x17DEAC (_EditionProcessPointerInputAsMouse@12.c)
 * Callees:
 *     ?CancelAutoPromotion@@YGXXZ @ 0x17CCBB (-CancelAutoPromotion@@YGXXZ.c)
 *     ?CoalesceMousePromotionEntry@@YGHABUtagPOINTER_INFO@@G@Z @ 0x17CD53 (-CoalesceMousePromotionEntry@@YGHABUtagPOINTER_INFO@@G@Z.c)
 *     ?DetectPromotionType@@YGKPBUtagMOUSE_PROMOTION_ENTRY@@0@Z @ 0x17CE6B (-DetectPromotionType@@YGKPBUtagMOUSE_PROMOTION_ENTRY@@0@Z.c)
 *     ?HandleLossOfPrimary@@YGHAAUtagPOINTER_INFO@@@Z @ 0x17D05C (-HandleLossOfPrimary@@YGHAAUtagPOINTER_INFO@@@Z.c)
 *     ?PopulateMousePromotionEntry@@YGXPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagPOINTER_INFO@@GG@Z @ 0x17D16B (-PopulateMousePromotionEntry@@YGXPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagPOINTER_INFO@@GG@Z.c)
 *     ?PromoteToMouse@Pointer@InputTraceLogging@@SGXKGKG@Z @ 0x17D519 (-PromoteToMouse@Pointer@InputTraceLogging@@SGXKGKG@Z.c)
 *     ?QueueMousePromotionEntry@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z @ 0x17D58C (-QueueMousePromotionEntry@@YGXAAUtagMOUSE_PROMOTION_QUEUE@@PAUtagMOUSE_PROMOTION_ENTRY@@@Z.c)
 *     ?ResetMousePromotionInfo@@YGXGG@Z @ 0x17D5C0 (-ResetMousePromotionInfo@@YGXGG@Z.c)
 *     ?WantDirectPromotion@@YGHABUtagPOINTER_INFO@@PAK@Z @ 0x17D7CB (-WantDirectPromotion@@YGHABUtagPOINTER_INFO@@PAK@Z.c)
 *     ?xxxProcessMousePromotionQueue@@YGXXZ @ 0x17D847 (-xxxProcessMousePromotionQueue@@YGXXZ.c)
 *     ?xxxPromotePointer@PointerPromotion@@YGHGKK@Z @ 0x17DB68 (-xxxPromotePointer@PointerPromotion@@YGHGKK@Z.c)
 */

void __userpurge PointerPromotion::xxxProcessPointerInputAsMouse(
        struct tagMOUSE_PROMOTION_ENTRY *a1@<edx>,
        const void *a2@<ecx>,
        PointerPromotion *this,
        const struct tagPOINTER_INFO *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  int v6; // ebx
  __int16 v7; // si
  __int16 v8; // ax
  bool v9; // zf
  unsigned int v10; // eax
  int v11; // edi
  int v12; // eax
  char v13; // al
  PointerPromotion *v14; // eax
  unsigned int v15; // [esp+0h] [ebp-68h]
  struct tagPOINTER_INFO *v16; // [esp+0h] [ebp-68h]
  unsigned __int16 v17; // [esp+4h] [ebp-64h]
  unsigned int v18; // [esp+4h] [ebp-64h]
  unsigned int v19; // [esp+8h] [ebp-60h]
  struct tagMOUSE_PROMOTION_ENTRY *v20; // [esp+Ch] [ebp-5Ch] BYREF
  int v21[22]; // [esp+10h] [ebp-58h] BYREF

  v20 = a1;
  v6 = 0;
  qmemcpy(v21, a2, sizeof(v21));
  v7 = v21[1];
  InputTraceLogging::Pointer::PromoteToMouse(v21[1], v21[2], 0, (unsigned __int16)this, v15, v17);
  v8 = v21[3];
  if ( (v21[3] & 0x2000) == 0 )
  {
    if ( !HandleLossOfPrimary(v16) )
      goto LABEL_30;
    v8 = v21[3];
    v7 = v21[1];
  }
  v9 = (v8 & 0x8000) == 0;
  v10 = dword_2752FC;
  if ( !v9 )
  {
    v10 = dword_2752FC & 0xFFFFFFF7;
    dword_2752FC &= ~8u;
  }
  if ( v7 != word_275248 || ((unsigned __int8)this & 0x10) != 0 )
  {
    if ( (v10 & 2) != 0 )
    {
      CancelAutoPromotion();
      v10 = dword_2752FC;
    }
    dword_2752FC = v10 & 0xFFFFFFF7;
    ResetMousePromotionInfo(v7);
  }
  v11 = CoalesceMousePromotionEntry(v21, (char)this);
  if ( !v11 )
  {
    v12 = Win32AllocPoolZInit(48, 1886221141);
    v6 = v12;
    if ( !v12 )
      goto LABEL_30;
    PopulateMousePromotionEntry(v21, v12, v20, this, (unsigned __int16)v16, v18);
  }
  dword_27524C = v21[2];
  dword_2752F4 = v21[5];
  if ( v6 )
  {
    v13 = dword_2752FC;
    if ( (dword_2752FC & 2) != 0 )
    {
      if ( (dword_2752FC & 4) != 0 )
      {
        *(_DWORD *)(v6 + 44) &= ~1u;
        v13 = dword_2752FC;
      }
      if ( (v13 & 0x10) != 0 )
        *(_DWORD *)(v6 + 44) |= 0x40u;
      QueueMousePromotionEntry(&dword_27528C, v6);
      if ( (*(_DWORD *)(v6 + 16) & 0x40000) != 0 )
        dword_2752FC &= 0xFFFFFFE9;
      goto LABEL_30;
    }
    QueueMousePromotionEntry(dword_275254, v6);
  }
  if ( v11 || v6 )
  {
    v20 = 0;
    if ( (dword_2752FC & 8) != 0 )
    {
      v14 = (PointerPromotion *)DetectPromotionType(0, (_DWORD *)dword_275258);
      if ( v14 != (PointerPromotion *)0x10000000 )
        PointerPromotion::xxxPromotePointer(v14, (unsigned __int16)v16, v18, v19);
    }
    else if ( WantDirectPromotion((int)v21, (int *)&v20) )
    {
      PointerPromotion::xxxPromotePointer(v20, (unsigned __int16)v16, v18, v19);
    }
  }
LABEL_30:
  xxxProcessMousePromotionQueue();
}

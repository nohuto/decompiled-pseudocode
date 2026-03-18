/*
 * XREFs of ?CoalesceMousePromotionEntry@@YGHABUtagPOINTER_INFO@@G@Z @ 0x17CD53
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     ?CanCoalesceMousePromotionEntry@@YGHPBUtagMOUSE_PROMOTION_ENTRY@@ABUtagPOINTER_INFO@@@Z @ 0x17CC9A (-CanCoalesceMousePromotionEntry@@YGHPBUtagMOUSE_PROMOTION_ENTRY@@ABUtagPOINTER_INFO@@@Z.c)
 */

int __fastcall CoalesceMousePromotionEntry(_DWORD *a1, char a2)
{
  _DWORD *v2; // edi
  _DWORD *v4; // edx
  int v5; // esi
  unsigned int v6; // edx
  unsigned __int64 v7; // rax
  int v8; // esi
  int v9; // ecx
  unsigned __int64 v10; // rax
  bool v11; // cf
  int v12; // ecx
  int v13; // eax
  int v15; // [esp+8h] [ebp-Ch]
  unsigned int v16; // [esp+10h] [ebp-4h]

  v2 = (_DWORD *)dword_275258;
  v15 = dword_275258;
  if ( !dword_275258 || !CanCoalesceMousePromotionEntry(dword_275258, a1) )
    return 0;
  v2[1] = v4[10];
  v2[2] = v4[11];
  v2[9] = v4[2];
  v5 = MEMORY[0xFFDF0004];
  v6 = MEMORY[0xFFDF0324];
  v16 = MEMORY[0xFFDF0320];
  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
  {
    do
    {
      _mm_pause();
      v6 = MEMORY[0xFFDF0324];
      v16 = MEMORY[0xFFDF0320];
    }
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    v2 = (_DWORD *)v15;
    v5 = MEMORY[0xFFDF0004];
  }
  v7 = (unsigned int)v5 * (unsigned __int64)v6;
  v8 = v7 >> 24;
  v9 = (_DWORD)v7 << 8;
  v10 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v16) >> 24;
  v11 = __CFADD__((_DWORD)v10, v9);
  v2[6] = v10 + v9;
  v12 = v2[11];
  v2[7] = HIDWORD(v10) + v11 + v8;
  v13 = v12;
  if ( (v12 & 8) == 0 && (a2 & 4) != 0 )
  {
    v13 = v12 | 8;
    v2[11] = v12 | 8;
  }
  if ( (v13 & 0x10) == 0 && (a2 & 8) != 0 )
    v2[11] = v13 | 0x10;
  return 1;
}

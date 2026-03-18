/*
 * XREFs of ?PopulateMousePromotionEntry@@YGXPAUtagMOUSE_PROMOTION_ENTRY@@ABUtagPOINTER_INFO@@GG@Z @ 0x17D16B
 * Callers:
 *     ?xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z @ 0x17D9D9 (-xxxProcessPointerInputAsMouse@PointerPromotion@@YGXABUtagPOINTER_INFO@@GG@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge PopulateMousePromotionEntry(
        _DWORD *a1@<edx>,
        int a2@<ecx>,
        struct tagMOUSE_PROMOTION_ENTRY *a3,
        const struct tagPOINTER_INFO *a4,
        unsigned __int16 a5,
        unsigned __int16 a6)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // eax
  int v10; // esi
  unsigned int v11; // edx
  unsigned int v12; // ebx

  v6 = a1[10];
  v7 = a2;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = v6;
  *(_DWORD *)(a2 + 8) = a1[11];
  *(_DWORD *)(a2 + 12) = *a1;
  *(_DWORD *)(a2 + 16) = a1[3];
  v8 = a1[2];
  *(_DWORD *)(a2 + 32) = v8;
  *(_DWORD *)(a2 + 36) = v8;
  *(_WORD *)(a2 + 40) = (unsigned __int8)a3 & 0x7F;
  v9 = *(_DWORD *)(a2 + 44) | 1;
  *(_DWORD *)(a2 + 44) = v9;
  if ( ((unsigned __int8)a4 & 1) != 0 )
  {
    v9 |= 2u;
    *(_DWORD *)(a2 + 44) = v9;
    if ( ((unsigned __int8)a4 & 2) != 0 )
    {
      v9 |= 4u;
      *(_DWORD *)(a2 + 44) = v9;
    }
  }
  if ( ((unsigned __int8)a4 & 4) != 0 )
  {
    v9 |= 8u;
    *(_DWORD *)(a2 + 44) = v9;
  }
  if ( ((unsigned __int8)a4 & 8) != 0 )
    *(_DWORD *)(a2 + 44) = v9 | 0x10;
  v10 = MEMORY[0xFFDF0004];
  v11 = MEMORY[0xFFDF0324];
  v12 = MEMORY[0xFFDF0320];
  if ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
  {
    do
    {
      _mm_pause();
      v11 = MEMORY[0xFFDF0324];
      v12 = MEMORY[0xFFDF0320];
    }
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
    v7 = a2;
    v10 = MEMORY[0xFFDF0004];
  }
  *(_QWORD *)(v7 + 24) = (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)v12) >> 24)
                       + (((unsigned int)v10 * (unsigned __int64)v11) << 8);
}

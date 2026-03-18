/*
 * XREFs of ?GdiUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0xF6D59
 * Callers:
 *     _GreUpdateSpriteVisRgn@8 @ 0x363E0 (_GreUpdateSpriteVisRgn@8.c)
 * Callees:
 *     ?vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z @ 0x381B6 (-vSpUpdateSpriteVisRgn@@YGXPAUHDEV__@@K@Z.c)
 */

void __fastcall GdiUpdateSpriteVisRgn(int *a1, int a2)
{
  unsigned int v4; // esi
  int *v5; // [esp+10h] [ebp-8h] BYREF
  _BYTE v6[4]; // [esp+14h] [ebp-4h] BYREF

  v5 = a1;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v6, (struct PDEVOBJ *)&v5);
  if ( a1[26] )
  {
    v4 = 0;
    do
      vSpUpdateSpriteVisRgn(*(_DWORD *)(a1[27] + 4 * v4++), a2);
    while ( v4 < a1[26] );
  }
  else
  {
    vSpUpdateSpriteVisRgn(a1[16], a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v6);
}

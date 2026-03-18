/*
 * XREFs of _GreSubtractRgnRectList@16 @ 0x24CD0
 * Callers:
 *     ?CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z @ 0x37040 (-CalcVisRgnWorker@@YGHQAUtagWND@@PAPAUHRGN__@@K@Z.c)
 * Callees:
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?bSubtract@RGNOBJAPI@@QAEHPAU_RECTL@@0H@Z @ 0x24D40 (-bSubtract@RGNOBJAPI@@QAEHPAU_RECTL@@0H@Z.c)
 *     ?iComplexity@RGNOBJ@@QBEJXZ @ 0x5A892 (-iComplexity@RGNOBJ@@QBEJXZ.c)
 */

int __fastcall GreSubtractRgnRectList(HRGN a1, struct _RECTL *a2, struct _RECTL *a3, int a4)
{
  int v4; // esi
  _DWORD v7[3]; // [esp+Ch] [ebp-Ch] BYREF

  v4 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a1, 0);
  if ( v7[0] )
  {
    if ( RGNOBJAPI::bSubtract((RGNOBJAPI *)v7, a2, a3, a4) )
    {
      v4 = RGNOBJ::iComplexity((RGNOBJ *)v7);
    }
    else if ( v7[0] )
    {
      RGNOBJ::vSet((RGNOBJ *)v7);
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v4;
}

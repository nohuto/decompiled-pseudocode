/*
 * XREFs of _EngControlSprites@8 @ 0x1E3508
 * Callers:
 *     ?iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D7E66 (-iOpenGLExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z.c)
 * Callees:
 *     ?vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z @ 0x1E1301 (-vSpDeviceControlSprites@@YGXPAUHDEV__@@PAVEWNDOBJ@@K@Z.c)
 */

BOOL __stdcall EngControlSprites(WNDOBJ *pwo, FLONG fl)
{
  int v3; // edi
  unsigned int v4; // edi
  int v5; // eax
  struct EWNDOBJ *v6; // [esp+0h] [ebp-18h]
  unsigned int v7; // [esp+4h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-Ch]
  int v9; // [esp+10h] [ebp-8h] BYREF
  _BYTE v10[4]; // [esp+14h] [ebp-4h] BYREF

  if ( fl != 1 && fl != 2 )
    return 0;
  v9 = *(_DWORD *)(*(_DWORD *)(pwo[2].rclClient.right + 16) + 28);
  v3 = *(_DWORD *)(v9 + 16);
  v8 = v3;
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v10, (struct PDEVOBJ *)&v9);
  if ( *(_DWORD *)(v3 + 104) )
  {
    v4 = 0;
    v5 = v8;
    do
    {
      vSpDeviceControlSprites((int)pwo, *(_DWORD *)(*(_DWORD *)(v5 + 108) + 4 * v4), (HDEV)fl, v6, v7);
      v5 = v8;
      ++v4;
    }
    while ( v4 < *(_DWORD *)(v8 + 104) );
  }
  else
  {
    vSpDeviceControlSprites((int)pwo, v9, (HDEV)fl, v6, v7);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v10);
  return 1;
}

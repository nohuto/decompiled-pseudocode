/*
 * XREFs of ?bCleanupSpriteStateRects@@YGHPAUHDEV__@@PAU_SPRITESTATE@@@Z @ 0xB0A32
 * Callers:
 *     _bSetDevDragRect@16 @ 0xB08E8 (_bSetDevDragRect@16.c)
 *     _bSetDevPreviewRect@24 @ 0x1E3D0B (_bSetDevPreviewRect@24.c)
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 */

int __fastcall bCleanupSpriteStateRects(int a1, int a2)
{
  HDEV *v4; // esi
  int v5; // ebx
  HDEV v6; // eax
  _DWORD *v7; // edi

  if ( *(_DWORD *)(a2 + 688) )
  {
    v4 = (HDEV *)(a2 + 712);
    v5 = 4;
    do
    {
      if ( *v4 )
      {
        GreDeleteSprite(*v4, *(HWND *)(a2 + 692));
        *v4 = 0;
      }
      ++v4;
      --v5;
    }
    while ( v5 );
    *(_DWORD *)(a2 + 688) = 0;
  }
  if ( *(_DWORD *)(a2 + 696) )
  {
    v6 = *(HDEV *)(a2 + 728);
    if ( v6 )
    {
      GreDeleteSprite(v6, *(HWND *)(a2 + 700));
      *(_DWORD *)(a2 + 728) = 0;
    }
    *(_DWORD *)(a2 + 696) = 0;
    *(_DWORD *)(a2 + 700) = 0;
    v7 = (_DWORD *)(a2 + 736);
    *v7++ = 0;
    *v7++ = 0;
    *v7 = 0;
    v7[1] = 0;
  }
  return 1;
}

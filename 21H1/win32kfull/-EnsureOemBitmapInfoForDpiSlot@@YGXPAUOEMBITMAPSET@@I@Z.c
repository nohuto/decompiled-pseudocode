/*
 * XREFs of ?EnsureOemBitmapInfoForDpiSlot@@YGXPAUOEMBITMAPSET@@I@Z @ 0x91206
 * Callers:
 *     ?CreateDPIBitmapStrip@@YGHI@Z @ 0x90002 (-CreateDPIBitmapStrip@@YGHI@Z.c)
 *     _GetOemBitmapInfoForDpi@8 @ 0x911CC (_GetOemBitmapInfoForDpi@8.c)
 * Callees:
 *     ?ArrangeFrameControls@@YGFHHPAUOEMBITMAPSET@@@Z @ 0x912A4 (-ArrangeFrameControls@@YGFHHPAUOEMBITMAPSET@@@Z.c)
 *     ?UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z @ 0x9139A (-UpdateFrameControlMetricsSize@@YGFPAUOEMBITMAPSET@@I@Z.c)
 */

void __thiscall EnsureOemBitmapInfoForDpiSlot(_DWORD *this)
{
  int v2; // ebx
  __int16 updated; // ax
  unsigned int v4; // edi
  int v5; // eax
  struct OEMBITMAPSET *v6; // [esp+0h] [ebp-18h]
  int v7; // [esp+0h] [ebp-18h]
  unsigned int v8; // [esp+4h] [ebp-14h]
  struct OEMBITMAPSET *v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-Ch]
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v2 = 1;
  if ( !this[1] || !this[2] )
  {
    updated = UpdateFrameControlMetricsSize(v6, v8);
    v10 = updated;
    v4 = 1;
    v12 = 0x7FFFFFFF;
    v11 = updated;
    do
    {
      v5 = v4 * ArrangeFrameControls((int)this, v7, v9);
      if ( v12 > v5 )
      {
        v2 = v4;
        v12 = v5;
      }
      ++v4;
      v11 += v10;
    }
    while ( v4 <= 5 );
    this[1] = v10 * v2;
    this[2] = ArrangeFrameControls((int)this, v7, v9);
  }
}

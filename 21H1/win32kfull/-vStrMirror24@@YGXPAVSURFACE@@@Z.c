/*
 * XREFs of ?vStrMirror24@@YGXPAVSURFACE@@@Z @ 0x22A8A0
 * Callers:
 *     ?EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54K@Z @ 0x4C3B0 (-EngStretchBltNew@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 *     _NtGdiAlphaBlend@48 @ 0x5AABA (_NtGdiAlphaBlend@48.c)
 *     _NtGdiTransparentBlt@44 @ 0xC151A (_NtGdiTransparentBlt@44.c)
 *     ?EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINTL@@PAU_RECTL@@54KPAH@Z @ 0x1EE497 (-EngStretchBltOld@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAUtagCOLORADJUSTMENT@@PAU_POINT.c)
 * Callees:
 *     <none>
 */

void __stdcall vStrMirror24(struct SURFACE *a1)
{
  struct SURFACE *v1; // esi
  int v2; // edi
  __int16 *v3; // ebx
  int v4; // ecx
  __int16 *v5; // eax
  __int16 *v6; // esi
  int v7; // ebx
  __int16 *v8; // edi
  __int16 v9; // cx
  char v10; // dl
  int i; // [esp+Ch] [ebp-14h]
  int v12; // [esp+18h] [ebp-8h]
  __int16 *v13; // [esp+1Ch] [ebp-4h]

  v1 = a1;
  v2 = 0;
  v12 = 0;
  v3 = (__int16 *)*((_DWORD *)a1 + 12);
  v13 = v3;
  v4 = *((_DWORD *)a1 + 8) / 2;
  for ( i = v4; v2 < *((_DWORD *)v1 + 9); v12 = v2 )
  {
    v5 = (__int16 *)((char *)v3 + 3 * *((_DWORD *)v1 + 8) - 3);
    if ( v4 > 0 )
    {
      v6 = v3;
      v7 = v4;
      v8 = v5;
      do
      {
        v9 = *v6;
        v10 = *((_BYTE *)v6 + 2);
        *v6 = *v8;
        v6 = (__int16 *)((char *)v6 + 3);
        *((_BYTE *)v6 - 1) = *((_BYTE *)v8 + 2);
        *v8 = v9;
        v8 = (__int16 *)((char *)v8 - 3);
        *((_BYTE *)v8 + 5) = v10;
        --v7;
      }
      while ( v7 );
      v1 = a1;
      v2 = v12;
      v3 = v13;
      v4 = i;
    }
    v3 = (__int16 *)((char *)v3 + *((_DWORD *)v1 + 13));
    ++v2;
    v13 = v3;
  }
}

/*
 * XREFs of _DxgkEngColorFillViaGDI@20 @ 0x1D4198
 * Callers:
 *     <none>
 * Callees:
 *     _NtGdiPatBlt@24 @ 0x56C7C (_NtGdiPatBlt@24.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __stdcall DxgkEngColorFillViaGDI(HDC a1, _DWORD *a2, int a3, int a4, int a5)
{
  int v5; // esi
  int SolidBrush; // eax
  int v7; // eax
  int v8; // ebx
  _DWORD *v9; // esi
  _DWORD *v10; // eax
  int v11; // ebx
  int v12; // eax
  bool v13; // zf
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+18h] [ebp-10h]
  _DWORD v18[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v5 = 0;
  if ( a1 )
  {
    memset(v18, 0, sizeof(v18));
    XDCOBJ::vLock((XDCOBJ *)v18, a1);
    if ( v18[0] )
    {
      SolidBrush = GreCreateSolidBrush(BYTE2(a5) | ((BYTE1(a5) | ((unsigned __int8)a5 << 8)) << 8));
      v17 = SolidBrush;
      if ( SolidBrush )
      {
        v7 = GreSelectBrush(a1, SolidBrush);
        v8 = a4;
        v16 = v7;
        if ( a4 )
        {
          v9 = a2;
          if ( a2 )
          {
            v10 = (_DWORD *)(a3 + 4);
            v15 = a3 + 4;
            while ( 1 )
            {
              v5 = NtGdiPatBlt(
                     a1,
                     *(v10 - 1) + *v9,
                     (struct XDCOBJ *)(*v10 + v9[1]),
                     *(_DWORD *)(v15 + 4) - *(v10 - 1),
                     v10[2] - *v10,
                     (struct EXFORMOBJ *)0xF00021);
              v10 = (_DWORD *)(v15 + 16);
              v15 += 16;
              if ( !--v8 )
                break;
              v9 = a2;
            }
          }
          else
          {
            v11 = a3 + 4;
            do
            {
              v12 = NtGdiPatBlt(
                      a1,
                      *(_DWORD *)(v11 - 4),
                      *(struct XDCOBJ **)v11,
                      *(_DWORD *)(v11 + 4) - *(_DWORD *)(v11 - 4),
                      *(_DWORD *)(v11 + 8) - *(_DWORD *)v11,
                      (struct EXFORMOBJ *)0xF00021);
              v13 = a4-- == 1;
              v11 += 16;
              v5 = v12;
            }
            while ( !v13 );
          }
          v7 = v16;
        }
        if ( v7 )
          GreSelectBrush(a1, v7);
        GreDeleteObject(v17);
      }
      if ( v18[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v18);
    }
  }
  return v5;
}

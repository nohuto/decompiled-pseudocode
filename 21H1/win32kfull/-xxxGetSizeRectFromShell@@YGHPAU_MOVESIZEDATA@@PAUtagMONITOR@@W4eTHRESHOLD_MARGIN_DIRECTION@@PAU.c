/*
 * XREFs of ?xxxGetSizeRectFromShell@@YGHPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@@Z @ 0x174406
 * Callers:
 *     ?xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x175C45 (-xxxSizeRectFromHitTarget@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 * Callees:
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1718DA (-IsProperRectForArrangement@@YGHQBUtagRECT@@0W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@PAUtagRECT@@3PAUtagWND@@33@Z @ 0x172538 (-TransformShellProvidedRectangles@@YGXPAU_MOVESIZEDATA@@PAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIREC.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z @ 0x19C3BB (-xxxArrangementRectangleHandler@CallShell@@YG_NPAUHWND__@@UtagPOINT@@PAUtagRECT@@2@Z.c)
 */

int __fastcall xxxGetSizeRectFromShell(int a1, int a2, int a3, int *a4)
{
  int v5; // eax
  int v6; // eax
  int *v7; // edi
  int v8; // edx
  struct tagPOINT v10; // [esp-4h] [ebp-54h]
  struct tagRECT *v11; // [esp+4h] [ebp-4Ch]
  struct tagRECT *v12; // [esp+8h] [ebp-48h]
  int v13; // [esp+10h] [ebp-40h]
  _DWORD v15[4]; // [esp+1Ch] [ebp-34h] BYREF
  _DWORD v16[4]; // [esp+2Ch] [ebp-24h] BYREF
  int v17[4]; // [esp+3Ch] [ebp-14h] BYREF

  memset(v17, 0, sizeof(v17));
  memset(v15, 0, sizeof(v15));
  v13 = *(_DWORD *)(_gptiCurrent + 248);
  v5 = *(_DWORD *)(v13 + 200);
  if ( v5
    && (*(_BYTE *)(a1 + 308) & 0x18) == 0
    && *(_DWORD *)(v5 + 8) != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 8)
    && (a3 == 1 || a3 == 2) )
  {
    v6 = *(_DWORD *)(a1 + 248);
    if ( (v6 & 8) != 0 )
    {
      *(_DWORD *)(a1 + 248) = v6 | 2;
      *a4 = *(_DWORD *)(a1 + 216);
      a4[1] = *(_DWORD *)(a1 + 220);
      a4[2] = *(_DWORD *)(a1 + 224);
      a4[3] = *(_DWORD *)(a1 + 228);
    }
    else
    {
      v10.x = *(_DWORD *)(a1 + 280);
      if ( CallShell::xxxArrangementRectangleHandler((CallShell *)v15, *(HWND *)(a1 + 276), v10, v11, v12) )
      {
        if ( PtInRect(v15, *(_DWORD *)(a1 + 276), *(_DWORD *)(a1 + 280)) )
        {
          memset(v16, 0, sizeof(v16));
          v7 = (int *)(*(_DWORD *)(a2 + 20) + 32);
          if ( IntersectRect(v16, v17, v7) )
          {
            v8 = 0;
            while ( v16[v8] == v17[v8] )
            {
              if ( ++v8 == 4 )
              {
                if ( IsProperRectForArrangement(v7, v17, a3) )
                {
                  TransformShellProvidedRectangles(
                    (_DWORD *)a1,
                    a2,
                    a3,
                    v17,
                    (int)v15,
                    *(_DWORD *)(v13 + 200),
                    a4,
                    a1 + 232);
                  *(_DWORD *)(a1 + 248) |= 2u;
                }
                return (*(_DWORD *)(a1 + 248) >> 1) & 1;
              }
            }
          }
        }
      }
    }
  }
  return (*(_DWORD *)(a1 + 248) >> 1) & 1;
}

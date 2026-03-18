/*
 * XREFs of _OffsetChildren@20 @ 0x2AECC
 * Callers:
 *     _xxxScrollWindowEx@32 @ 0x2B61E (_xxxScrollWindowEx@32.c)
 *     ?zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z @ 0x2B94A (-zzzChangeStates@@YGJPAUtagWND@@PAUtagSMWP@@@Z.c)
 *     _UpdateWindowPositionsForDpiBoundaryChange@4 @ 0x9B526 (_UpdateWindowPositionsForDpiBoundaryChange@4.c)
 *     _zzzUpdateLayeredWindow@40 @ 0xBABAE (_zzzUpdateLayeredWindow@40.c)
 * Callees:
 *     _OffsetWindow@16 @ 0x2AF60 (_OffsetWindow@16.c)
 *     _IsDpiBoundaryBetweenWindows@8 @ 0x2B03C (_IsDpiBoundaryBetweenWindows@8.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _ScaleDpiOffsetWithSubpixel@16 @ 0x151870 (_ScaleDpiOffsetWithSubpixel@16.c)
 */

int __fastcall OffsetChildren(int a1, int a2, int a3, int a4, int a5)
{
  int result; // eax
  int v7; // esi
  int v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // [esp+1Ch] [ebp-18h] BYREF
  int v12; // [esp+20h] [ebp-14h]
  int v13; // [esp+24h] [ebp-10h]
  int v14; // [esp+28h] [ebp-Ch]
  int v15; // [esp+2Ch] [ebp-8h]

  result = 0;
  v15 = a2;
  v7 = *(_DWORD *)(a1 + 60);
  if ( v7 )
  {
    v8 = 0;
    v14 = a2;
    v13 = a3;
    while ( 1 )
    {
      if ( a4 && !IntersectRect(*(_DWORD *)(v7 + 20) + 52) )
        goto LABEL_18;
      if ( IsDpiBoundaryBetweenWindows(v7) )
      {
        v11 = v15;
        v12 = a3;
        ScaleDpiOffsetWithSubpixel(&v11, v7 + 124, v7, a1);
        v15 = v11;
        v8 = 1;
        v10 = v12;
        a3 = v12;
      }
      else
      {
        v10 = a3;
        *(float *)(v7 + 124) = *(float *)(a1 + 124);
        *(float *)(v7 + 128) = *(float *)(a1 + 128);
      }
      OffsetWindow(v10, v9);
      if ( v8 )
      {
        v15 = v14;
        a3 = v13;
      }
      result = *(_DWORD *)(v7 + 60);
      v8 = 0;
      if ( !result )
      {
LABEL_18:
        while ( 1 )
        {
          result = *(_DWORD *)(v7 + 48);
          if ( result )
            break;
          v7 = *(_DWORD *)(v7 + 56);
          if ( v7 == a1 )
            return result;
        }
      }
      v7 = result;
    }
  }
  return result;
}

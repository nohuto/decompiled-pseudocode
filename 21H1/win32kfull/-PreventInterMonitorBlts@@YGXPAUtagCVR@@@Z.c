/*
 * XREFs of ?PreventInterMonitorBlts@@YGXPAUtagCVR@@@Z @ 0x13F989
 * Callers:
 *     ?BltValidInit@@YGHPAUtagSMWP@@@Z @ 0x3C58C (-BltValidInit@@YGHPAUtagSMWP@@@Z.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcmp @ 0xF9295 (_memcmp.c)
 */

void __thiscall PreventInterMonitorBlts(_DWORD *this)
{
  int v2; // ecx
  int v3; // edx
  _DWORD *i; // ebx
  int *MonitorRect; // esi
  int v6; // eax
  bool v7; // zf
  _DWORD *v8; // esi
  int v9; // ecx
  int v10; // edi
  int v11; // edx
  int v12[4]; // [esp+10h] [ebp-68h] BYREF
  int v13[4]; // [esp+20h] [ebp-58h] BYREF
  _DWORD *v14; // [esp+30h] [ebp-48h]
  int v15[4]; // [esp+34h] [ebp-44h] BYREF
  int Buf1; // [esp+44h] [ebp-34h] BYREF
  int v17; // [esp+48h] [ebp-30h]
  int v18; // [esp+4Ch] [ebp-2Ch]
  int v19; // [esp+50h] [ebp-28h]
  int v20; // [esp+54h] [ebp-24h] BYREF
  int v21; // [esp+58h] [ebp-20h]
  int v22; // [esp+5Ch] [ebp-1Ch]
  int v23; // [esp+60h] [ebp-18h]
  int Buf2; // [esp+64h] [ebp-14h] BYREF
  int v25; // [esp+68h] [ebp-10h]
  int v26; // [esp+6Ch] [ebp-Ch]
  int v27; // [esp+70h] [ebp-8h]

  Buf2 = 0;
  v14 = this;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  Buf1 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( !ERECTL::bWrapped((ERECTL *)(this + 11)) )
  {
    v2 = this[15];
    v3 = this[16];
    v15[0] = this[11] - v2;
    v15[2] = this[13] - v2;
    v15[1] = this[12] - v3;
    v15[3] = this[14] - v3;
    for ( i = *(_DWORD **)(_gpDispInfo + 56); i; i = (_DWORD *)i[7] )
    {
      MonitorRect = GetMonitorRect(i, v12);
      v6 = i[5];
      v13[0] = *MonitorRect++;
      v7 = (*(_BYTE *)(v6 + 12) & 1) == 0;
      v13[1] = *MonitorRect++;
      v13[2] = *MonitorRect;
      v13[3] = MonitorRect[1];
      if ( !v7 && IntersectRect(&v20, v15, v13) )
      {
        v8 = v14;
        v9 = v14[15];
        v10 = v9 + v20;
        v11 = v14[16];
        v26 = v9 + v22;
        Buf2 = v9 + v20;
        v25 = v11 + v21;
        v27 = v11 + v23;
        IntersectRect(&Buf1, &Buf2, v13);
        if ( !memcmp(&Buf1, &Buf2, 0x10u) )
        {
          if ( !memcmp(&v20, v15, 0x10u) )
            return;
        }
        else
        {
          if ( !v8[23] )
            v8[23] = CreateEmptyRgn();
          GreSetRectRgn(_ghrgnInv2, v10, v25, v26, v27);
          GreSetRectRgn(_ghrgnGDC, Buf1, v17, v18, v19);
          GreCombineRgn(_ghrgnInv2, _ghrgnInv2, _ghrgnGDC, 4);
          GreCombineRgn(v8[23], v8[23], _ghrgnInv2, 2);
        }
      }
    }
  }
}

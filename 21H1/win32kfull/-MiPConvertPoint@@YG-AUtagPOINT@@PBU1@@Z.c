/*
 * XREFs of ?MiPConvertPoint@@YG?AUtagPOINT@@PBU1@@Z @ 0x14D3EC
 * Callers:
 *     ?GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z @ 0x14CF17 (-GeneratePointerMessageFromMouse@@YGHPAUtagQMSG@@I0PAUtagWND@@H@Z.c)
 * Callees:
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _MiPGetPhysicalRect@0 @ 0xCB4FC (_MiPGetPhysicalRect@0.c)
 *     _GetScreenRect@0 @ 0xCB540 (_GetScreenRect@0.c)
 */

int __thiscall MiPConvertPoint(int *this)
{
  INT *v2; // eax
  int *ScreenRect; // eax
  INT v4; // edi
  INT *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v9[4]; // [esp+10h] [ebp-30h] BYREF
  INT v10; // [esp+20h] [ebp-20h]
  INT v11; // [esp+24h] [ebp-1Ch]
  INT b; // [esp+28h] [ebp-18h]
  INT v13; // [esp+2Ch] [ebp-14h]
  int v14; // [esp+30h] [ebp-10h] BYREF
  int v15; // [esp+34h] [ebp-Ch]
  int v16; // [esp+38h] [ebp-8h]
  int v17; // [esp+3Ch] [ebp-4h]

  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v5 = (INT *)(*_gpDispInfo + 12);
    v10 = *v5++;
    v6 = *(unsigned __int16 *)(_gpsi + 6242);
    v7 = *this;
    v11 = *v5++;
    b = *v5;
    v13 = v5[1];
    return 2540 * (v7 - v10) / v6;
  }
  else
  {
    v2 = MiPGetPhysicalRect(&v14);
    v10 = *v2;
    v11 = v2[1];
    b = v2[2];
    v13 = v2[3];
    ScreenRect = GetScreenRect(v9);
    v14 = *ScreenRect;
    v15 = ScreenRect[1];
    v16 = ScreenRect[2];
    v17 = ScreenRect[3];
    v4 = EngMulDiv(*this - v14, b, v16 - v14);
    EngMulDiv(this[1] - v15, v13, v17 - v15);
  }
  return v4;
}

/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x180122A0C
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x18011FF84 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x180121A00 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180123678 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180123A44 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180027FE0 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180120DD8 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180122784 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(ControllerProcessor *this, struct tagPOINT a2, char a3)
{
  LONG y; // r14d
  int v7; // eax
  ULONGLONG TickCount64; // rax
  int v9; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  struct tagPOINT v12; // [rsp+28h] [rbp-D8h] BYREF
  int v13; // [rsp+30h] [rbp-D0h]
  int v14; // [rsp+34h] [rbp-CCh]
  _BYTE v15[24]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v17; // [rsp+60h] [rbp-A0h]
  int v18; // [rsp+68h] [rbp-98h]
  __int64 v19; // [rsp+70h] [rbp-90h]
  int v20; // [rsp+9Ch] [rbp-64h]
  int v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+A4h] [rbp-5Ch]
  __int16 v23; // [rsp+AAh] [rbp-56h]
  int v24; // [rsp+B4h] [rbp-4Ch]
  int v25; // [rsp+B8h] [rbp-48h]
  char v26; // [rsp+CCh] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+248h] [rbp+148h]

  v12 = a2;
  y = a2.y;
  if ( IsEdition(253345LL) )
    a3 = 1;
  if ( a3 || *((_DWORD *)this + 83) != a2.x || *((_DWORD *)this + 84) != y )
  {
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v16, 0, 0x1B0uLL);
    v18 = 432;
    v16[0] = 4096;
    v16[2] = GetTickCount();
    v17 = PerformanceCount;
    v19 = *((_QWORD *)this + 38);
    v23 = a3 != 0;
    v26 = a3;
    if ( a3 )
    {
      GetPointerDeviceRects(-1LL, v15, &v12);
      v24 = 0xFFFF * (a2.x - v12.x) / (v13 - v12.x - 1);
      v25 = 0xFFFF * (y - v12.y) / (v14 - v12.y - 1);
    }
    else
    {
      *(_QWORD *)((char *)this + 332) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &v12);
      v7 = a2.x - *((_DWORD *)this + 83);
      v25 = y - *((_DWORD *)this + 84);
      v24 = v7;
    }
    TickCount64 = GetTickCount64();
    if ( *((_BYTE *)this + 7720)
      && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *((_QWORD *)this + 963) )
    {
      ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
      v21 = *((_DWORD *)this + 1928);
      v22 = *((_DWORD *)this + 1929);
      *((_BYTE *)this + 7720) = 0;
      v20 = 1;
    }
    *(struct tagPOINT *)((char *)this + 332) = a2;
    v9 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v16);
    if ( v9 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1823LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v9);
      __debugbreak();
    }
  }
  return 0LL;
}

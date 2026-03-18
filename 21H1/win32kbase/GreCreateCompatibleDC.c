/*
 * XREFs of GreCreateCompatibleDC @ 0x1C008AFD0
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C008B0C0 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C00A7A88 (InitUserScreen.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreSetLayout @ 0x1C006A460 (GreSetLayout.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0080370 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0081D80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0146F28 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v6; // rcx
  __int64 v7; // [rsp+20h] [rbp-20h] BYREF
  int v8; // [rsp+28h] [rbp-18h]
  int v9; // [rsp+2Ch] [rbp-14h]
  __int64 v10; // [rsp+30h] [rbp-10h] BYREF
  int v11; // [rsp+38h] [rbp-8h]
  int v12; // [rsp+3Ch] [rbp-4h]
  int v13; // [rsp+50h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v7 = 0LL;
    v8 = 0;
    v9 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v7, a1);
    if ( v7 )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v7 + 48), 1u, 0);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        v10 = 0LL;
        v11 = 0;
        v12 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v10, DisplayDC);
        v3 = v7;
        if ( v10 && (*(_DWORD *)(v7 + 520) & 1) != 0 )
        {
          DC::vSetDpiScaling(v10, *(_QWORD *)(v7 + 524));
          v3 = v7;
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v10);
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v7);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v13);
    v1 = (HDC)GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 1u, 0);
    if ( !v13 )
      UserSessionSwitchLeaveCrit(v6);
  }
  return v1;
}

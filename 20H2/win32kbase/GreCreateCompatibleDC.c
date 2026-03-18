/*
 * XREFs of GreCreateCompatibleDC @ 0x1C004DB90
 * Callers:
 *     InitUserScreen @ 0x1C001F2FC (InitUserScreen.c)
 *     NtGdiCreateCompatibleDC @ 0x1C004DB70 (NtGdiCreateCompatibleDC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0042800 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 *     GreSetLayout @ 0x1C00A0420 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C013E718 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  __int64 v2; // rdi
  HDC DisplayDC; // rax
  unsigned int v4; // r8d
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // [rsp+20h] [rbp-20h] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  int v12; // [rsp+2Ch] [rbp-14h]
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  int v14; // [rsp+38h] [rbp-8h]
  int v15; // [rsp+3Ch] [rbp-4h]
  int v16; // [rsp+50h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v13 = 0LL;
    v14 = 0;
    v15 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v13, a1);
    v2 = v13;
    if ( v13 )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(HDEV *)(v13 + 48), 1u);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        v10 = 0LL;
        v11 = 0;
        v12 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v10, DisplayDC);
        if ( v10 && (*(_DWORD *)(v2 + 520) & 1) != 0 )
          DC::vSetDpiScaling(v10, *(_QWORD *)(v2 + 524));
        v4 = *(_DWORD *)(*(_QWORD *)(v2 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v10);
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v13);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
    v1 = (HDC)GreCreateDisplayDC(*(HDEV *)(gpDispInfo + 40), 1u);
    if ( !v16 )
      UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  }
  return v1;
}

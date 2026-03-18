/*
 * XREFs of GreCreateCompatibleDC @ 0x1C0091E80
 * Callers:
 *     InitUserScreen @ 0x1C00139D8 (InitUserScreen.c)
 *     NtGdiCreateCompatibleDC @ 0x1C0091F70 (NtGdiCreateCompatibleDC.c)
 * Callees:
 *     GreSetLayout @ 0x1C003CF80 (GreSetLayout.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00873F0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0088E50 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     GreCreateDisplayDC @ 0x1C0091A00 (GreCreateDisplayDC.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00927E0 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0140BD8 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  __int64 v3; // rdx
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
    v10 = 0LL;
    v11 = 0;
    v12 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v10, a1);
    if ( v10 )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v10 + 48), 1u, 0);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        v13 = 0LL;
        v14 = 0;
        v15 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v13, DisplayDC);
        v3 = v10;
        if ( v13 && (*(_DWORD *)(v10 + 520) & 1) != 0 )
        {
          DC::vSetDpiScaling(v13, *(_QWORD *)(v10 + 524));
          v3 = v10;
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v13);
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v10);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
    v1 = (HDC)GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 1u, 0);
    if ( !v16 )
      UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  }
  return v1;
}

/*
 * XREFs of ?MilCompositionEngine_CreateCursorController@@YAJ_KPEAPEAUIDwmCursorController@@@Z @ 0x18002F890
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z @ 0x18002F914 (-EnsureCursorState@CCursorManager@@AEAAJ_KPEAPEAVCCursorState@@@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800BB27C (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 */

__int64 __fastcall MilCompositionEngine_CreateCursorController(unsigned __int64 a1, struct IDwmCursorController **a2)
{
  CCursorManager *v4; // rcx
  int v5; // eax
  int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct CCursorState *v10; // [rsp+40h] [rbp+18h] BYREF
  _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+20h] BYREF

  if ( g_pConnection )
  {
    v10 = 0LL;
    v11 = &g_CursorManager;
    EnterCriticalSection(&g_CursorManager);
    v5 = CCursorManager::EnsureCursorState(v4, a1, &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\cursor\\cursormanager.cpp",
        (const char *)(unsigned int)v5);
    }
    else
    {
      v6 = 0;
      *a2 = v10;
    }
    CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v11);
    if ( v6 >= 0 )
      return 0LL;
    v8 = 34LL;
  }
  else
  {
    v6 = -2147483634;
    v8 = 33LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\exportsg.cpp",
    (const char *)(unsigned int)v6);
  return (unsigned int)v6;
}

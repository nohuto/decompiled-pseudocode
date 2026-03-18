/*
 * XREFs of DpiFinishPnPTransitionCallback @ 0x1C0195680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z @ 0x1C0195704 (-CheckPnPTransitionForSession@DXGSESSIONMGR@@QEAAEPEAXK@Z.c)
 *     DxgkCompletePnPTransition @ 0x1C01957B4 (DxgkCompletePnPTransition.c)
 *     ?FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z @ 0x1C0195880 (-FinishPnPTransitionOnSession@DXGSESSIONMGR@@QEAAXPEAXK@Z.c)
 */

unsigned __int8 __fastcall DpiFinishPnPTransitionCallback(void *a1, __int64 a2, unsigned int a3)
{
  char v3; // bl
  struct DXGGLOBAL *v6; // rax
  struct DXGGLOBAL *Global; // rax

  v3 = 1;
  if ( (_DWORD)a2 == 1 )
  {
    if ( a1 )
    {
      Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
      DXGSESSIONMGR::FinishPnPTransitionOnSession(*((DXGSESSIONMGR **)Global + 102), a1, a3);
    }
  }
  else if ( (_DWORD)a2 == 2 )
  {
    DxgkCompletePnPTransition(a1);
  }
  else if ( !(_DWORD)a2 && a1 )
  {
    v6 = DXGGLOBAL::GetGlobal((__int64)a1, a2);
    return DXGSESSIONMGR::CheckPnPTransitionForSession(*((DXGSESSIONMGR **)v6 + 102), a1, a3);
  }
  return v3;
}

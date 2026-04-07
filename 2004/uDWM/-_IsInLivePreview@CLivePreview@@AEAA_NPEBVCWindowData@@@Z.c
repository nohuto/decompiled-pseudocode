/*
 * XREFs of ?_IsInLivePreview@CLivePreview@@AEAA_NPEBVCWindowData@@@Z @ 0x1800837A4
 * Callers:
 *     ?ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z @ 0x180015CD8 (-ShowWindow@CTopLevelWindow3D@@QEAAJ_N0@Z.c)
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x18001A8C0 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z @ 0x180026F84 (-OnWindowShowHide@CLivePreview@@QEAAJPEAVCWindowData@@PEA_N_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0F0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z @ 0x18002A2C0 (-ShouldShowTransition@CTopLevelWindow3D@@AEAA_NW4WindowAnimationType@1@@Z.c)
 *     ?ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z @ 0x18009CA04 (-ShouldShowTransition@CWindowArrangementTransition@@AEAA_NPEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CLivePreview::_IsInLivePreview(CLivePreview *this, const struct CWindowData *a2)
{
  char v2; // r9
  __int64 v3; // r8

  v2 = 0;
  v3 = (unsigned int)(*((_DWORD *)this + 82) - 1);
  if ( (int)v3 >= 0 )
  {
    while ( *(const struct CWindowData **)(*((_QWORD *)this + 38) + 40 * v3) != a2 )
    {
      v3 = (unsigned int)(v3 - 1);
      if ( (int)v3 < 0 )
        return v2;
    }
    return 1;
  }
  return v2;
}

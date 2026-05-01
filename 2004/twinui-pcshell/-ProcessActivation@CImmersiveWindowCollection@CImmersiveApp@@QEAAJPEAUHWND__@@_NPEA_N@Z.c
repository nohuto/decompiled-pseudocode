/*
 * XREFs of ?ProcessActivation@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUHWND__@@_NPEA_N@Z @ 0x18017FA54
 * Callers:
 *     ?HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z @ 0x180023B40 (-HandleActivation@CImmersiveApp@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ?_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180020D54 (-_SetGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18002459C (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z @ 0x1800245C8 (-_FindWindow@CImmersiveWindowCollection@CImmersiveApp@@AEBAJPEAUHWND__@@PEA_K@Z.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180024678 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z @ 0x1801835FC (-_SetApplicationWindow@CImmersiveWindowCollection@CImmersiveApp@@AEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::CImmersiveWindowCollection::ProcessActivation(
        CImmersiveApp::CImmersiveWindowCollection *this,
        HWND a2,
        __int64 a3,
        bool *a4)
{
  int v6; // edi
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0;
  v8[0] = 0LL;
  CImmersiveApp::CImmersiveWindowCollection::_FindWindow(this, a2, &v9);
  v6 = 0;
  if ( v9 )
  {
    v6 = CImmersiveApp::CImmersiveWindowCollection::_SetApplicationWindow(this, v9);
    if ( v6 < 0 )
      goto LABEL_6;
    *a4 = 1;
  }
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost(this) )
  {
    CImmersiveApp::CImmersiveWindowCollection::_SetGhostStatus((__int64)this, 0);
    CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual(this);
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v8);
  return (unsigned int)v6;
}

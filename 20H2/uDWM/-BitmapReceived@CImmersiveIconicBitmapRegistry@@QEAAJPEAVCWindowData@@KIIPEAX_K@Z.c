/*
 * XREFs of ?BitmapReceived@CImmersiveIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEAX_K@Z @ 0x180089740
 * Callers:
 *     ?SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x18009931C (-SetIconicThumbnail@CWindowList@@AEAAJKPEBUMILCMD_DWM_REDIRECTION_SETICONICTHUMBNAIL@@PEBU_REMOT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000432C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x180010EAC (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z @ 0x180084A50 (-Create@CBitmapSource@@SAJIIIIPEBXPEAPEAV1@@Z.c)
 *     McTemplateU0qp_EtwEventWriteTransfer @ 0x180084CB0 (McTemplateU0qp_EtwEventWriteTransfer.c)
 *     ?_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180089F44 (-_AcceptBitmap@CImmersiveIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 */

__int64 __fastcall CImmersiveIconicBitmapRegistry::BitmapReceived(
        CImmersiveIconicBitmapRegistry *this,
        HWND *a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6,
        unsigned __int64 a7)
{
  __int64 v9; // rbp
  unsigned __int64 v11; // rcx
  bool v12; // bl
  HWND ShellWindowForDesktop; // rax
  unsigned __int64 v14; // rax
  _DWORD *v15; // r14
  int v16; // eax
  CBaseObject *v17; // rdi
  unsigned int v18; // ebx
  CBaseObject *v19; // r8
  DWORD v21; // [rsp+30h] [rbp-38h] BYREF
  CBaseObject *v22; // [rsp+38h] [rbp-30h] BYREF
  DWORD dwProcessId; // [rsp+78h] [rbp+10h] BYREF

  v22 = 0LL;
  v9 = a4;
  if ( GetWindowThreadProcessId(a2[5], &v21) && a3 == v21 )
  {
    v12 = 1;
  }
  else
  {
    v12 = 0;
    ShellWindowForDesktop = CWindowList::GetShellWindowForDesktop(*((CWindowList **)CDesktopManager::s_pDesktopManagerInstance
                                                                  + 61));
    if ( ShellWindowForDesktop )
    {
      dwProcessId = 0;
      GetWindowThreadProcessId(ShellWindowForDesktop, &dwProcessId);
      v12 = dwProcessId == a3;
    }
  }
  if ( (*((_BYTE *)a2 + 610) & 4) != 0
    && (v11 = a5 * v9, v11 <= 0xFFFFFFFF)
    && (v14 = 4LL * (unsigned int)v11, v14 <= 0xFFFFFFFF)
    && a7 >= (unsigned int)v14
    && v12 )
  {
    v15 = a6;
    v16 = CBitmapSource::Create(v9, a5, v9, a5, a6, &v22);
    v17 = v22;
    v18 = v16;
    if ( v16 >= 0 )
    {
      v19 = v22;
      *((_DWORD *)a2 + 42) = *v15 & 0xFF00 | ((unsigned __int8)*v15 << 16) | (unsigned __int8)BYTE2(*v15);
      CImmersiveIconicBitmapRegistry::_AcceptBitmap(this, (struct CWindowData *)a2, v19);
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D1DC0, 1LL, v16, 0x172u);
    }
    if ( v17 )
      CBaseObject::Release(v17);
  }
  else
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0qp_EtwEventWriteTransfer(v11, (__int64)&UdwmManageIconicThumbnail_Info, 1LL, a2[5]);
    v18 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800D1DC0, 1LL, -2147024809, 0x16Eu);
  }
  return v18;
}

/*
 * XREFs of ?UpdateOffset@VirtualDesktopGestureContext@@QEAAXHH@Z @ 0x180421EAC
 * Callers:
 *     ?ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z @ 0x18041F9C0 (-ContinueSwipe@VirtualDesktopGestureHandler@@UEAAJHHHHI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z @ 0x18041F44C (-AddVelocityToHistory@VirtualDesktopGestureContext@@AEAAXH@Z.c)
 *     ?CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z @ 0x18041FA14 (-CreateAdjacentDesktop@VirtualDesktopGestureContext@@AEAAJPEA_NIH@Z.c)
 *     ?RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z @ 0x1804212CC (-RemoveAdjacentThumbnails@VirtualDesktopGestureContext@@AEAAXI@Z.c)
 *     ?UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z @ 0x1804220F8 (-UpdateOffset@VirtualDesktopGestureWindow@@QEAAXM@Z.c)
 */

void __fastcall VirtualDesktopGestureContext::UpdateOffset(VirtualDesktopGestureContext *this, int a2, int a3)
{
  int v3; // ebp
  int v4; // esi
  int v6; // ebx
  double v7; // xmm1_8
  bool v8; // sf
  int AdjacentDesktop; // eax
  int v10; // eax
  float v11; // xmm6_4
  float v12; // xmm0_4
  VirtualDesktopGestureWindow **v13; // rbx
  VirtualDesktopGestureWindow **v14; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v3 = -a2;
  v4 = 0;
  if ( !*((_BYTE *)this + 66) )
    v3 = a2;
  v6 = -a3;
  if ( !*((_BYTE *)this + 66) )
    v6 = a3;
  VirtualDesktopGestureContext::AddVelocityToHistory(this, v6);
  v7 = (double)(int)abs32(v6) * 1000.0 / (double)*((int *)this + 12);
  if ( v7 > 1.5 )
    v3 = (int)((double)v3 * 1.5 / v7);
  *((_DWORD *)this + 14) += v3;
  v8 = *((int *)this + 14) < 0;
  if ( *((int *)this + 14) > 0 )
  {
    if ( !*((_BYTE *)this + 65) )
    {
      if ( !*((_BYTE *)this + 60) )
      {
        AdjacentDesktop = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 62, 3u, -1);
        if ( AdjacentDesktop >= 0 )
          *((_BYTE *)this + 60) = 1;
        else
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x222,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)AdjacentDesktop);
      }
      if ( *((_BYTE *)this + 62) && (double)*((int *)this + 14) >= (double)*((int *)this + 12) * 0.1 )
      {
        VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 4);
        *((_BYTE *)this + 63) = 0;
LABEL_26:
        *((_BYTE *)this + 65) = 1;
        goto LABEL_27;
      }
      goto LABEL_27;
    }
    v8 = *((int *)this + 14) < 0;
  }
  if ( v8 && !*((_BYTE *)this + 65) )
  {
    if ( !*((_BYTE *)this + 61) )
    {
      v10 = VirtualDesktopGestureContext::CreateAdjacentDesktop(this, (bool *)this + 63, 4u, 1);
      if ( v10 >= 0 )
        *((_BYTE *)this + 61) = 1;
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x233,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v10);
    }
    if ( *((_BYTE *)this + 63) && (double)-*((_DWORD *)this + 14) >= (double)*((int *)this + 12) * 0.1 )
    {
      VirtualDesktopGestureContext::RemoveAdjacentThumbnails(this, 3);
      *((_BYTE *)this + 62) = 0;
      goto LABEL_26;
    }
  }
LABEL_27:
  LOBYTE(v4) = *((_BYTE *)this + 62) != 0;
  v11 = (float)*((int *)this + 14) / (float)*((int *)this + 12);
  if ( v11 <= (float)v4 )
  {
    v12 = (float)-(*((_BYTE *)this + 63) != 0);
    if ( v12 > v11 )
      v11 = v11 + (float)((float)(v12 - v11) * 0.80000001);
  }
  else
  {
    v11 = v11 - (float)((float)(v11 - (float)v4) * 0.80000001);
  }
  v13 = (VirtualDesktopGestureWindow **)*((_QWORD *)this + 9);
  v14 = &v13[*((_QWORD *)this + 10)];
  while ( v13 != v14 )
    VirtualDesktopGestureWindow::UpdateOffset(*v13++, v11);
}

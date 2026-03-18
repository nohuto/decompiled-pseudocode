/*
 * XREFs of ?ProcessSetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE@@@Z @ 0x18023E904
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResource@@@Z @ 0x18023EA6C (-SetSurface@CSceneSurfaceMaterialInput@@QEAAJPEAVCResource@@@Z.c)
 *     ?SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18023EAF8 (-SetSurfaceContentRect@CSceneSurfaceMaterialInput@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMil3DRectF@.c)
 */

__int64 __fastcall CSceneSurfaceMaterialInput::ProcessSetSurface(
        CSceneSurfaceMaterialInput *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SCENESURFACEMATERIALINPUT_SETSURFACE *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // edx
  struct CResource *ResourceWithoutType; // rdi
  int v10; // eax
  unsigned int v11; // edi
  float v12[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v3 = 0LL;
  v5 = *((_DWORD *)a3 + 2);
  ResourceWithoutType = 0LL;
  if ( !v5
    || (ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, v5),
        (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
          ResourceWithoutType,
          201LL))
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)ResourceWithoutType + 56LL))(
         ResourceWithoutType,
         35LL) )
  {
    v10 = CSceneSurfaceMaterialInput::SetSurface(this, ResourceWithoutType);
    v11 = v10;
    if ( v10 >= 0 )
    {
      do
      {
        v12[v3] = (float)*((int *)a3 + v3 + 3);
        ++v3;
      }
      while ( v3 < 4 );
      CSceneSurfaceMaterialInput::SetSurfaceContentRect(this, v12);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x36,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\spatialsurfacematerialinput.cpp",
      (const char *)0x88980403LL);
    return 2291663875LL;
  }
}

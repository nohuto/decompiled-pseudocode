/*
 * XREFs of ?SetWindowRegionAsync@ShellExperienceView@Cortana@TwinUI@@AEAAJPEAUHWND__@@PEAUHRGN__@@H@Z @ 0x18001D008
 * Callers:
 *     ?SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z @ 0x18001CEB0 (-SetDrawingRegion@ShellExperienceView@Cortana@TwinUI@@UEAAJ_KE@Z.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___ @ 0x18001D0FC (Windows--Internal--ComTaskPool--QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHRGN__@@@Z @ 0x18001D214 (-reset@-$unique_storage@U-$resource_policy@PEAUHRGN__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$integ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall TwinUI::Cortana::ShellExperienceView::SetWindowRegionAsync(
        TwinUI::Cortana::ShellExperienceView *this,
        HWND a2,
        HRGN a3,
        int a4)
{
  HRGN v4; // rbx
  HRGN RectRgn; // rax
  __int64 v10; // r8
  int v11; // edi
  __int64 v13; // rdx
  int v14[2]; // [rsp+20h] [rbp-38h] BYREF
  HGDIOBJ ho; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HRGN hrgnDst; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  hrgnDst = 0LL;
  if ( a3 )
  {
    RectRgn = CreateRectRgn(0, 0, 0, 0);
    wil::details::unique_storage<wil::details::resource_policy<HRGN__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HRGN__ *,HRGN__ *,0,std::nullptr_t>>::reset(
      &hrgnDst,
      RectRgn);
    v4 = hrgnDst;
    if ( hrgnDst )
    {
      if ( CombineRgn(hrgnDst, a3, 0LL, 5) )
        goto LABEL_4;
      v11 = -2147467259;
      v13 = 379LL;
    }
    else
    {
      v11 = -2147467259;
      v13 = 378LL;
    }
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanashellexperienceview.cpp",
      (const char *)(unsigned int)v11,
      v14[0]);
    goto LABEL_7;
  }
LABEL_4:
  v10 = *((unsigned int *)this + 76);
  ho = v4;
  v4 = 0LL;
  *(_QWORD *)v14 = a2;
  v16 = a4;
  v11 = Windows::Internal::ComTaskPool::QueueTask__lambda_2743f96ca4684a8efa4b094fa43a59d9___(this, 258LL, v10, v14);
  if ( ho )
    DeleteObject(ho);
  if ( v11 < 0 )
  {
    v13 = 387LL;
    goto LABEL_13;
  }
LABEL_7:
  if ( v4 )
    DeleteObject(v4);
  return (unsigned int)v11;
}

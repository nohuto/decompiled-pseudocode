/*
 * XREFs of ?ProcessFreeze@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_FREEZE@@@Z @ 0x1801F630C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180151814 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x180159DF0 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 *     ?UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilStretch@@@Z @ 0x1801AFC70 (-UpdateFromVisualSurface@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_VECTOR_2F@@11W4Enum@MilSt.c)
 */

__int64 __fastcall CVisualSurface::ProcessFreeze(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_FREEZE *a3)
{
  int v4; // r10d
  struct CResource *v5; // rdx
  int v6; // eax
  unsigned int v7; // edi
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !*((_BYTE *)this + 152) || *((_BYTE *)this + 153) )
    return 0LL;
  v4 = *((_DWORD *)this + 22);
  v5 = (struct CResource *)*((_QWORD *)this + 7);
  *((_BYTE *)this + 153) = 1;
  v6 = CCachedVisualImage::UpdateFromVisualSurface(
         **((_QWORD **)this + 12),
         v5,
         (float *)this + 16,
         (float *)this + 18,
         (float *)this + 20,
         v4);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x106,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
      (const char *)(unsigned int)v6);
    return v7;
  }
  v9 = **((_QWORD **)this + 12);
  *(_BYTE *)(v9 + 1800) = 1;
  v10 = CComposition::RegisterSnapshotToPerform(*(CComposition **)(v9 + 16), (struct CCachedVisualImage *)v9);
  v12 = v10;
  if ( v10 >= 0 )
    return 0LL;
  MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x126u, 0LL);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x108,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\visualsurface.cpp",
    (const char *)v12);
  return v12;
}

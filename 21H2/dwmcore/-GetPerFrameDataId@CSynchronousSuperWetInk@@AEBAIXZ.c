/*
 * XREFs of ?GetPerFrameDataId@CSynchronousSuperWetInk@@AEBAIXZ @ 0x180241404
 * Callers:
 *     ?CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@PEAPEAVCComputeScribble@@@Z @ 0x180240ED0 (-CreateScribble@CSynchronousSuperWetInk@@UEAAJPEAVCD3DDevice@@AEBUDCompWetInkStrokeRenderState@@.c)
 *     ?Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180241250 (-Draw@CSynchronousSuperWetInk@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180177B90 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall CSynchronousSuperWetInk::GetPerFrameDataId(
        CSynchronousSuperWetInk *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = *((unsigned int *)this + 43);
  v5 = 0;
  if ( (_DWORD)v4 )
  {
    v6 = (unsigned int)(v4 - 1);
    if ( (_DWORD)v6 )
    {
      if ( (_DWORD)v6 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          592LL,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\synchronoussuperwetink.cpp",
          a4);
      return *((unsigned int *)this + 44);
    }
    else
    {
      return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 23) + 104LL) + 304LL))(
               *(_QWORD *)(*((_QWORD *)this + 23) + 104LL),
               v6,
               0LL);
    }
  }
  else
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 23) + 104LL);
    if ( v8 )
      return (*(unsigned int (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v8 + 280LL))(v8, v4, 0LL);
    return v5;
  }
}

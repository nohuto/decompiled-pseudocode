/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1801202BC
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180121E74 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x1801205E0 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180122784 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

void __fastcall ControllerProcessor::ApplyPanDeltaToScroll(ControllerProcessor *this)
{
  float v1; // xmm1_4
  float v3; // xmm7_4
  int v4; // edi
  __int16 v5; // ax
  int v6; // eax
  _BYTE v7[92]; // [rsp+20h] [rbp-1E8h] BYREF
  __int16 v8; // [rsp+7Ch] [rbp-18Ch]
  __int16 v9; // [rsp+7Eh] [rbp-18Ah]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v1 = *((float *)this + 101);
  if ( v1 != 0.0 || *((float *)this + 102) != 0.0 )
  {
    LODWORD(v3) = *((_DWORD *)this + 102) & _xmm;
    if ( COERCE_FLOAT(LODWORD(v1) & _xmm) <= v3 )
      v4 = (int)*((float *)this + 102);
    else
      LOWORD(v4) = -(__int16)(int)v1;
    ControllerProcessor::BuildMouseInputInfo(this, v7, 0LL);
    v5 = 2048;
    v9 = v4;
    if ( COERCE_FLOAT(LODWORD(v1) & _xmm) <= v3 )
      v5 = 1024;
    v8 = v5;
    v6 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v7);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1695LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v6);
      __debugbreak();
    }
    *((_DWORD *)this + 101) = 0;
    *((_DWORD *)this + 102) = 0;
  }
}

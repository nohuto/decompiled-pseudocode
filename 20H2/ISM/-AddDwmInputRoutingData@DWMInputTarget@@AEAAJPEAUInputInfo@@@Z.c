/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800B61A8
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800B6520 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180018090 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x1800181A8 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18003CC86 (_CxxThrowException_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E194 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x1800F0D8C (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x1800F0E1C (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(
        DWMInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rbx
  unsigned int v7; // eax
  _OWORD *Transform; // rax
  void *WeakInputSinkHandle; // rax
  __int16 v11; // [rsp+20h] [rbp-19h]
  int v12; // [rsp+24h] [rbp-15h] BYREF
  void **pExceptionObject; // [rsp+28h] [rbp-11h] BYREF
  __int128 v14; // [rsp+30h] [rbp-9h]
  _BYTE v15[64]; // [rsp+40h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  v4 = *((_QWORD *)this + 15);
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      558LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    __debugbreak();
  }
  if ( !*(_BYTE *)(v4 + 392) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      560LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    __debugbreak();
  }
  v6 = v4 + 32;
  if ( !*(_BYTE *)(v6 + 360) )
  {
    pExceptionObject = &std::bad_optional_access::`vftable';
    v14 = 0LL;
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  v7 = ToCompositionInputType(*(_DWORD *)a2);
  *((_QWORD *)a2 + 8) = *((_QWORD *)LegacyInputSinkData::GetCompositionInputQueue((LegacyInputSinkData *)v6, v7) + 1);
  Transform = (_OWORD *)LegacyInputSinkData::GetTransform(v6, v15);
  *(_OWORD *)((char *)a2 + 132) = *Transform;
  *(_OWORD *)((char *)a2 + 148) = Transform[1];
  *(_OWORD *)((char *)a2 + 164) = Transform[2];
  *(_OWORD *)((char *)a2 + 180) = Transform[3];
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v12 = 0;
    WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)v6);
    NtQueryCompositionInputIsImplicit(WeakInputSinkHandle, &v12);
    HIBYTE(v11) = 1;
    LOBYTE(v11) = v12 != 0;
    *(_WORD *)(v6 + 24) = v11;
    if ( !*(_BYTE *)(v6 + 25) )
    {
      pExceptionObject = &std::bad_optional_access::`vftable';
      v14 = 0LL;
      throw (std::bad_optional_access *)&pExceptionObject;
    }
  }
  *((_DWORD *)a2 + 18) = *(unsigned __int8 *)(v6 + 24);
  return 0LL;
}

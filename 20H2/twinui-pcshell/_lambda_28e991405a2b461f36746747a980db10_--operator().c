/*
 * XREFs of _lambda_28e991405a2b461f36746747a980db10_::operator() @ 0x180040AB4
 * Callers:
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAK@Z @ 0x1800407AC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 * Callees:
 *     ??$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAE@Z1@Z @ 0x180023FF0 (--$GetValue@E@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F058 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Details@WRL@Microsoft@@YAJPEAPEAUIOcclusionBasedApplicationViewPosition@@AEAUtagWINDOWPLACEMENT@@@Z @ 0x1803E890C (--$MakeAndInitialize@VCCommonApplicationViewOcclusionPosition@@UIOcclusionBasedApplicationViewPo.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_28e991405a2b461f36746747a980db10_::operator()(void ***a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  HRESULT StringReference; // eax
  int v6; // edx
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // r8
  void **v9; // rbx
  int v10; // eax
  void **v11; // rdx
  void *v12; // rcx
  int v13; // [rsp+20h] [rbp-59h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+28h] [rbp-51h] BYREF
  void *v15; // [rsp+30h] [rbp-49h] BYREF
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-41h] BYREF
  __int128 v17; // [rsp+40h] [rbp-39h]
  __int128 v18; // [rsp+50h] [rbp-29h]
  __int64 v19; // [rsp+60h] [rbp-19h]
  int v20; // [rsp+68h] [rbp-11h]
  _BYTE hstringHeader[44]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v22; // [rsp+A0h] [rbp+27h] BYREF
  __int64 v23; // [rsp+B0h] [rbp+37h]
  __m128i v24; // [rsp+B8h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  LODWORD(v15) = 0;
  v2 = (*(__int64 (__fastcall **)(void *, __int128 *))(*(_QWORD *)**a1 + 72LL))(**a1, &v22);
  v3 = v2;
  if ( v2 >= 0 )
  {
    *(_DWORD *)hstringHeader = 44;
    *(_OWORD *)&hstringHeader[4] = v22;
    *(_QWORD *)&hstringHeader[20] = v23;
    *(__m128i *)&hstringHeader[28] = v24;
    v17 = *(_OWORD *)hstringHeader;
    v18 = *(_OWORD *)&hstringHeader[16];
    v19 = *(__int64 *)((char *)v24.m128i_i64 + 4);
    v20 = _mm_cvtsi128_si32(_mm_srli_si128(v24, 12));
    if ( DWORD1(v22) != 3 )
      return 0LL;
    v14 = 0LL;
    v4 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD))*a1[1])(
           *a1[1],
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v14);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xC35,
        (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v4,
        v13);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      return v3;
    }
    v16 = v14;
    if ( v14 )
      ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v14)[1])(v14);
    LOBYTE(v13) = 0;
    *(_QWORD *)&hstringHeader[24] = 0LL;
    StringReference = WindowsCreateStringReference(
                        L"InitialPositionIsForDrag",
                        0x18u,
                        (HSTRING_HEADER *)hstringHeader,
                        (HSTRING *)&hstringHeader[24]);
    if ( StringReference < 0 )
    {
      Microsoft::WRL::Details::RaiseException(
        (Microsoft::WRL::Details *)(unsigned int)StringReference,
        v6,
        (unsigned int)v7);
    }
    else
    {
      LOBYTE(v3) = 1;
      LODWORD(v15) = 1;
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned char>(
                  &v16,
                  *(__int64 *)&hstringHeader[24],
                  v7,
                  &v13) < 0 )
      {
LABEL_8:
        LOBYTE(v3) = 0;
LABEL_9:
        if ( !(_BYTE)v3 )
        {
LABEL_10:
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
          return 0LL;
        }
        DWORD2(v17) = 4;
        v9 = *a1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(*a1);
        v10 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewOcclusionPosition,IOcclusionBasedApplicationViewPosition,tagWINDOWPLACEMENT &>(v9);
        v3 = v10;
        if ( v10 >= 0 )
        {
          v11 = a1[2];
          v12 = **a1;
          **a1 = 0LL;
          v15 = *v11;
          *v11 = v12;
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
          goto LABEL_10;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC3D,
          (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v10,
          v13);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
        goto LABEL_17;
      }
    }
    if ( (_BYTE)v13 )
      goto LABEL_9;
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC2F,
    (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v2,
    v13);
  return v3;
}

/*
 * XREFs of ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x180113198
 * Callers:
 *     ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x180118080 (-SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 *     ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x180116208 (-InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(
        struct Windows::Foundation::IPropertyValue *a1,
        struct tagPROPVARIANT *a2)
{
  __int64 v3; // rax
  int v4; // edi
  int v6; // eax
  int v8; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  int inited; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  double v14; // xmm0_8
  int v15; // eax
  int v16; // eax
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  double v18; // [rsp+28h] [rbp-18h] BYREF
  LARGE_INTEGER v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v21; // [rsp+60h] [rbp+20h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  float v23; // [rsp+78h] [rbp+38h] BYREF

  *(_OWORD *)&a2->vt = 0LL;
  a2->bstrblobVal.pData = 0LL;
  v3 = *(_QWORD *)a1;
  v4 = 0;
  v22 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, int *))(v3 + 48))(a1, &v22);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      394LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  switch ( v22 )
  {
    case 7:
      v16 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, LARGE_INTEGER *))(*(_QWORD *)a1 + 112LL))(
              a1,
              v19);
      if ( v16 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          400LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v16);
        __debugbreak();
      }
      a2->vt = 21;
      a2->hVal = v19[0];
      return 0LL;
    case 8:
      v15 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, float *))(*(_QWORD *)a1 + 120LL))(
              a1,
              &v23);
      if ( v15 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          410LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v15);
        __debugbreak();
      }
      v14 = v23;
      goto LABEL_22;
    case 9:
      v13 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, double *))(*(_QWORD *)a1 + 128LL))(
              a1,
              &v18);
      if ( v13 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          415LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v13);
        __debugbreak();
      }
      v14 = v18;
LABEL_22:
      a2->dblVal = v14;
      a2->vt = 5;
      return 0LL;
    case 11:
      v11 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, char *))(*(_QWORD *)a1 + 144LL))(
              a1,
              &v21);
      if ( v11 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          405LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v11);
        __debugbreak();
      }
      v12 = v21 == 0;
      a2->vt = 11;
      LOBYTE(v4) = !v12;
      a2->iVal = -(v4 != 0);
      break;
    case 12:
      v8 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, HSTRING *))(*(_QWORD *)a1 + 152LL))(
             a1,
             &string);
      if ( v8 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          420LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v8);
        __debugbreak();
      }
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      inited = InitPropVariantFromString(StringRawBuffer, a2);
      if ( inited < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          421LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)inited);
        __debugbreak();
      }
      break;
    default:
      return 2147942487LL;
  }
  return 0LL;
}

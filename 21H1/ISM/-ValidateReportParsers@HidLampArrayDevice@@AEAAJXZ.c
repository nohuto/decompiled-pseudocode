/*
 * XREFs of ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800A8AB0
 * Callers:
 *     ?ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z @ 0x1800A7BF4 (-ParseReportDescriptors@HidLampArrayDevice@@AEAAJPEAUParsedHidReportDescriptor@@I@Z.c)
 * Callees:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800A5EE0 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ??0?$vector@EV?$allocator@E@std@@@std@@QEAA@_KAEBV?$allocator@E@1@@Z @ 0x1800A6218 (--0-$vector@EV-$allocator@E@std@@@std@@QEAA@_KAEBV-$allocator@E@1@@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1800A834C (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x1800A9058 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall HidLampArrayDevice::ValidateReportParsers(HidLampArrayDevice *this)
{
  __int64 v2; // rcx
  unsigned int v3; // edi
  __int64 v4; // rsi
  unsigned __int8 *v5; // rbp
  unsigned __int8 v6; // cl
  unsigned __int64 v7; // rax
  char v8; // dl
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // r9
  _DWORD *v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // r9
  const char *v20; // rax
  __int64 v21; // rdx
  char *v22; // [rsp+28h] [rbp-60h]
  char *v23; // [rsp+28h] [rbp-60h]
  int v24; // [rsp+30h] [rbp-58h]
  int v25; // [rsp+30h] [rbp-58h]
  BOOL v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+38h] [rbp-50h]
  BOOL v28; // [rsp+38h] [rbp-50h]
  int v29; // [rsp+40h] [rbp-48h]
  BOOL v30; // [rsp+40h] [rbp-48h]
  BOOL v31; // [rsp+48h] [rbp-40h]
  BOOL v32; // [rsp+50h] [rbp-38h]
  _BYTE *v33; // [rsp+60h] [rbp-28h] BYREF
  unsigned __int8 *v34; // [rsp+68h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v36; // [rsp+90h] [rbp+8h]

  v2 = *((_QWORD *)this + 72);
  v3 = 0;
  if ( !v2
    || !*((_QWORD *)this + 73)
    || !*((_QWORD *)this + 74)
    || !*((_QWORD *)this + 75)
    || !*((_QWORD *)this + 76)
    || !*((_QWORD *)this + 77) )
  {
    LOBYTE(v3) = v2 == 0;
    v32 = *((_QWORD *)this + 77) == 0LL;
    v31 = *((_QWORD *)this + 76) == 0LL;
    v30 = *((_QWORD *)this + 75) == 0LL;
    v28 = *((_QWORD *)this + 74) == 0LL;
    v26 = *((_QWORD *)this + 73) == 0LL;
    LODWORD(v22) = v3;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      751LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"One or more ReportParsers are null.  LampArrayAttributes:%d, LampArrayControl:%d, LampAttributesRequest:%d, L"
           "ampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      v22,
      v26,
      v28,
      v30,
      v31,
      v32);
    return 2147942487LL;
  }
  std::vector<unsigned char>::vector<unsigned char>(&v33, 6uLL);
  v4 = (__int64)v33;
  *v33 = *(_BYTE *)(*((_QWORD *)this + 72) + 16LL);
  *(_BYTE *)(v4 + 1) = *(_BYTE *)(*((_QWORD *)this + 73) + 16LL);
  *(_BYTE *)(v4 + 2) = *(_BYTE *)(*((_QWORD *)this + 74) + 16LL);
  *(_BYTE *)(v4 + 3) = *(_BYTE *)(*((_QWORD *)this + 75) + 16LL);
  *(_BYTE *)(v4 + 4) = *(_BYTE *)(*((_QWORD *)this + 76) + 16LL);
  *(_BYTE *)(v4 + 5) = *(_BYTE *)(*((_QWORD *)this + 77) + 16LL);
  v5 = &v34[-v4];
  std::_Sort_unchecked<unsigned char *,std::less<void>>(v4, v34, (__int64)&v34[-v4], v36);
  v6 = 0;
  v7 = 0LL;
  v8 = 1;
  if ( v5 )
  {
    while ( v6 != *(_BYTE *)(v4 + v7) )
    {
      v6 = *(_BYTE *)(v4 + v7++);
      if ( v7 >= (unsigned __int64)v5 )
        goto LABEL_10;
    }
    LODWORD(v22) = v6;
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      768LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"Reports have duplicate Id:%d",
      v22);
    goto LABEL_18;
  }
LABEL_10:
  v9 = *((_QWORD *)this + 72);
  v10 = *(int *)(v9 + 56);
  v11 = *(_QWORD *)(*((_QWORD *)this + 74) + 56LL);
  if ( v10 == v11
    && v10 == *(_QWORD *)(*((_QWORD *)this + 75) + 56LL)
    && (_DWORD)v10 == *(_DWORD *)(*((_QWORD *)this + 76) + 192LL)
    && v10 == *(_QWORD *)(*((_QWORD *)this + 77) + 128LL) )
  {
    v8 = 0;
  }
  if ( v8 )
  {
    v29 = *(_DWORD *)(*((_QWORD *)this + 76) + 192LL);
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      784LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"LampCount is not the same across reports. LampArrayAttributes:%d, LampAttributesRequest:%d, LampAttributesRes"
           "ponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      *(const char **)(v9 + 56),
      v11,
      *(_QWORD *)(*((_QWORD *)this + 75) + 56LL),
      v29,
      *(_QWORD *)(*((_QWORD *)this + 77) + 128LL));
LABEL_18:
    std::vector<unsigned char>::_Tidy(&v33);
    return 2147942487LL;
  }
  v12 = *((_QWORD *)this + 75);
  v13 = *(unsigned __int8 *)(v12 + 632);
  v14 = (_DWORD *)*((_QWORD *)this + 76);
  if ( (_DWORD)v13 != v14[56] || (v15 = (_QWORD *)*((_QWORD *)this + 77), v13 != v15[34]) )
  {
    v27 = *(_QWORD *)(*((_QWORD *)this + 77) + 272LL);
    v25 = v14[56];
    v23 = *(char **)(v12 + 632);
    v20 = "RedChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
    v21 = 793LL;
    goto LABEL_30;
  }
  v16 = *(unsigned __int8 *)(v12 + 704);
  if ( (_DWORD)v16 != v14[64] || v16 != v15[43] )
  {
    v27 = v15[43];
    v25 = v14[64];
    v23 = *(char **)(v12 + 704);
    v20 = "GreenChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
    v21 = 802LL;
    goto LABEL_30;
  }
  v17 = *(unsigned __int8 *)(v12 + 776);
  if ( (_DWORD)v17 != v14[72] || v17 != v15[52] )
  {
    v27 = v15[52];
    v25 = v14[72];
    v23 = *(char **)(v12 + 776);
    v20 = "BlueChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d";
    v21 = 811LL;
LABEL_30:
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      v21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)v20,
      v23,
      v25,
      v27);
    goto LABEL_18;
  }
  v18 = *(unsigned __int8 *)(v12 + 848);
  if ( (_DWORD)v18 != v14[80] || v18 != v15[61] )
  {
    v24 = v14[80];
    wil::details::in1diag3::Return_HrMsg(
      retaddr,
      820LL,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\hidlamparraydevice.cpp",
      (const char *)0x80070057LL,
      (int)"GainChannelMax is not the same across reports.  LampAttributesResponse:%d, LampMultiUpdate:%d, LampRangeUpdate:%d",
      *(const char **)(v12 + 848),
      v24,
      v15[61]);
    v3 = -2147024809;
  }
  std::vector<unsigned char>::_Tidy(&v33);
  return v3;
}

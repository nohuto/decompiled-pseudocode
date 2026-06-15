/*
 * XREFs of CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180116DD8
 * Callers:
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180117940 (CEndpointCharacteristics--GetDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___.c)
 * Callees:
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18004C670 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_c3615feb6884e65459670eec2aeca07c___ @ 0x180115D64 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_c3615feb6884e65459670eec2aeca07c__.c)
 *     CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3___ @ 0x180116340 (CEndpointCharacteristics--FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941.c)
 *     ?AllocateBytes@?$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18011A14C (-AllocateBytes@-$CHeapPtrBase@TKSDATAFORMAT@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c3615feb6884e65459670eec2aeca07c___(
        __int64 a1,
        int a2,
        __int128 *a3,
        struct tWAVEFORMATEX **a4)
{
  int FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3; // edi
  __int64 v8; // rcx
  __int64 v9; // rdi
  char *v10; // rbx
  void *v11; // rcx
  __int64 v12; // rcx
  LPVOID v14; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v22[80]; // [rsp+80h] [rbp-80h]
  PROPVARIANT pvar[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v24; // [rsp+E0h] [rbp-20h]
  PROPVARIANT v25[2]; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v26; // [rsp+F8h] [rbp-8h]
  _OWORD v27[6]; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v28[6]; // [rsp+160h] [rbp+60h] BYREF
  struct _tagpropertykey v29; // [rsp+178h] [rbp+78h] BYREF

  ppv = 0LL;
  v19 = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  v18 = 0LL;
  *a4 = 0LL;
  *(_OWORD *)pvar = 0LL;
  v24 = 0LL;
  *(_OWORD *)v25 = 0LL;
  v26 = 0LL;
  v28[0] = 590439624;
  v28[1] = 1283267372;
  v28[2] = 1907779772;
  v28[3] = 1730509416;
  v28[4] = 1;
  if ( a2 == 3 )
  {
    v29 = PKEY_Endpoint_KeywordDetector_ConnectorId;
  }
  else
  {
    *(_QWORD *)&v29.fmtid.Data1 = 0x41B43EBB9A82A7DBLL;
    *(_QWORD *)v29.fmtid.Data4 = 0xFC181731B718BA83uLL;
    v29.pid = 1;
  }
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
                                                                            *(_QWORD *)(a1 + 40),
                                                                            v28,
                                                                            pvar);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(_QWORD, struct _tagpropertykey *, PROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
                                                                            *(_QWORD *)(a1 + 40),
                                                                            &v29,
                                                                            v25);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = CoCreateInstance(
                                                                            &CLSID_MMDeviceEnumerator,
                                                                            0LL,
                                                                            0x17u,
                                                                            &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
                                                                            &ppv);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(LPVOID, PROPVARIANT, __int64 *))(*(_QWORD *)ppv + 40LL))(
                                                                            ppv,
                                                                            pvar[1],
                                                                            &v19);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, _QWORD, __int64 *))(*(_QWORD *)v19 + 24LL))(
                                                                            v19,
                                                                            &GUID_2a07407e_6497_4a18_9787_32f79bd0d98f,
                                                                            23LL,
                                                                            0LL,
                                                                            &v18);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_30;
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 56LL))(
                                                                            v18,
                                                                            LODWORD(v25[1]),
                                                                            &v16);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_30;
  v14 = 0LL;
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, LPVOID *))(*(_QWORD *)v16 + 104LL))(
                                                                            v16,
                                                                            1LL,
                                                                            &GUID_e792f5ac_33a8_4f03_9840_cbee917b8f81,
                                                                            &v14);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    goto LABEL_11;
  pv = 0LL;
  if ( (*(int (__fastcall **)(LPVOID, LPVOID *))(*(_QWORD *)v14 + 32LL))(v14, &pv) >= 0 )
  {
    v21 = *a3;
    *(_OWORD *)v22 = a3[1];
    *(_OWORD *)&v22[16] = a3[2];
    *(_OWORD *)&v22[32] = a3[3];
    *(_QWORD *)&v22[48] = *((_QWORD *)a3 + 8);
    FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_c3615feb6884e65459670eec2aeca07c___(
                                                                              v8,
                                                                              (__int64)&v21,
                                                                              (unsigned int *)pv,
                                                                              a4);
    if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
LABEL_11:
      if ( v14 )
        (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
      goto LABEL_30;
    }
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v14 + 16LL))(v14);
  FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v16 + 104LL))(
                                                                            v16,
                                                                            1LL,
                                                                            &GUID_3cb4a69d_bb6f_4d2b_95b7_452d2c155db5,
                                                                            &v17);
  if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 >= 0 && !*a4 )
  {
    v9 = v17;
    v14 = 0LL;
    ATL::CHeapPtrBase<KSDATAFORMAT,ATL::CComAllocator>::AllocateBytes(&v14);
    v10 = (char *)v14;
    if ( !v14 )
    {
      FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = -2147024882;
      v11 = 0LL;
LABEL_22:
      CoTaskMemFree(v11);
      goto LABEL_30;
    }
    *(_DWORD *)v14 = 104;
    *((GUID *)v10 + 1) = GUID_73647561_0000_0010_8000_00aa00389b71;
    *((GUID *)v10 + 3) = GUID_05589f81_c356_11ce_bf01_00aa0055595a;
    *((GUID *)v10 + 2) = GUID_00000001_0000_0010_8000_00aa00389b71;
    *((_WORD *)v10 + 32) = -2;
    *(GUID *)(v10 + 88) = GUID_00000000_0000_0010_8000_00aa00389b71;
    *((_DWORD *)v10 + 22) = 1;
    *(_QWORD *)&v21 = v9;
    *((_QWORD *)&v21 + 1) = v10;
    *(_QWORD *)v22 = a4;
    *(_OWORD *)&v22[8] = *a3;
    *(_OWORD *)&v22[24] = a3[1];
    *(_OWORD *)&v22[40] = a3[2];
    *(_OWORD *)&v22[56] = a3[3];
    *(_QWORD *)&v22[72] = *((_QWORD *)a3 + 8);
    v27[0] = v21;
    v27[1] = *(_OWORD *)v22;
    v27[2] = *(_OWORD *)&v22[16];
    v27[3] = *(_OWORD *)&v22[32];
    v27[4] = *(_OWORD *)&v22[48];
    v27[5] = *(_OWORD *)&v22[64];
    FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = CEndpointCharacteristics::FindFirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3___(
                                                                              a1,
                                                                              (struct tWAVEFORMATEX *)(v10 + 64),
                                                                              v27);
    v11 = v10;
    if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
      goto LABEL_22;
    CoTaskMemFree(v10);
    if ( *a4 )
      goto LABEL_30;
    v14 = 0LL;
    FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 32LL))(
                                                                              v17,
                                                                              &v14);
    if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
    {
      v11 = v14;
      goto LABEL_22;
    }
    v21 = *a3;
    *(_OWORD *)v22 = a3[1];
    *(_OWORD *)&v22[16] = a3[2];
    *(_OWORD *)&v22[32] = a3[3];
    *(_QWORD *)&v22[48] = *((_QWORD *)a3 + 8);
    FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_c3615feb6884e65459670eec2aeca07c___(
                                                                              v12,
                                                                              (__int64)&v21,
                                                                              (unsigned int *)v14,
                                                                              a4);
    v11 = v14;
    if ( FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 < 0 )
      goto LABEL_22;
    CoTaskMemFree(v14);
    if ( !*a4 )
      FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3 = -2004287480;
  }
LABEL_30:
  PropVariantClear(pvar);
  PropVariantClear(v25);
  LogEPCError(
    "CEndpointCharacteristics::GetComputedDefaultFormat",
    6387LL,
    FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)FirstMatchingPreferredFormat__lambda_525a25908af3e3b81deb4f1054941fc3;
}

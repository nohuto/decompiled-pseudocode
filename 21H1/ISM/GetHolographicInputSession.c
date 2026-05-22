/*
 * XREFs of GetHolographicInputSession @ 0x180093708
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180094CE0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ @ 0x180094E80 (-OnFinalRelease@SpatialRimDeviceCollection@@MEAAXXZ.c)
 *     ?StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ @ 0x180096230 (-StartTracingSession@SpatialRimDeviceCollection@@UEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18002B840 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x180070F28 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180079770 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEAY0CH@$$CBGHHH@?$vector@UTraceSessionProviderConfig@@V?$allocator@UTraceSessionProviderConfig@@@std@@@std@@QEAAAEAUTraceSessionProviderConfig@@AEAY0CH@$$CBG$$QEAH11@Z @ 0x180092334 (--$emplace_back@AEAY0CH@$$CBGHHH@-$vector@UTraceSessionProviderConfig@@V-$allocator@UTraceSessio.c)
 *     ??1TraceSessionConfig@@QEAA@XZ @ 0x180092C4C (--1TraceSessionConfig@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetHolographicInputSession(__int64 a1)
{
  const char *v2; // r9
  unsigned __int64 v3; // r8
  int v5; // [rsp+30h] [rbp-D0h] BYREF
  int v6[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v7[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+50h] [rbp-B0h] BYREF
  __m128i si128; // [rsp+60h] [rbp-A0h]
  __int128 v10; // [rsp+70h] [rbp-90h]
  __int128 Src; // [rsp+80h] [rbp-80h] BYREF
  __m128i v12; // [rsp+90h] [rbp-70h]
  __int128 v13; // [rsp+A0h] [rbp-60h]
  __int64 v14; // [rsp+B0h] [rbp-50h]
  __int64 v15; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v16; // [rsp+C0h] [rbp-40h]
  WCHAR Buffer[264]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F8h] [rbp+1F8h]

  *(_QWORD *)v7 = a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v8) = 0;
  v10 = 0LL;
  v12 = si128;
  LOWORD(Src) = 0;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  std::wstring::assign((char *)&v8, L"HolographicInput", 0x10uLL);
  v10 = xmmword_1801D5098;
  *(_QWORD *)&v13 = 64LL;
  *((_QWORD *)&v13 + 1) = 0x810000002LL;
  v14 = 0x10000000002LL;
  memset_0(Buffer, 0, 0x208uLL);
  if ( !GetTempPathW(0x104u, Buffer) )
    wil::details::in1diag3::_Log_GetLastError(
      retaddr,
      (void *)0xE1,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      v2);
  v3 = -1LL;
  do
    ++v3;
  while ( Buffer[v3] );
  std::wstring::assign((char *)&Src, Buffer, v3);
  std::wstring::append((void **)&Src, L"\\DiagOutputDir\\HolographicInput.etl", 0x23uLL);
  v5 = 0;
  v6[0] = 0;
  v7[0] = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{3317C7E7-7C40-4275-9F7B-D539C10E19BA}",
    v7,
    v6,
    &v5);
  v7[0] = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{F903DB44-149E-4B4E-AFE1-2A1096F53DFA}",
    &v5,
    v6,
    v7);
  v7[0] = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{6E831A67-EB0D-55CD-69C0-CFE57755346D}",
    &v5,
    v6,
    v7);
  v7[0] = 0;
  v6[0] = 0;
  v5 = 4;
  std::vector<TraceSessionProviderConfig>::emplace_back<unsigned short const (&)[39],int,int,int>(
    &v15,
    L"{D27719C1-8DCF-555B-E03F-EF4E275A4799}",
    &v5,
    v6,
    v7);
  *(_OWORD *)a1 = v8;
  *(__m128i *)(a1 + 16) = si128;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v8) = 0;
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 48) = Src;
  *(__m128i *)(a1 + 64) = v12;
  v12 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(Src) = 0;
  *(_OWORD *)(a1 + 80) = v13;
  *(_QWORD *)(a1 + 96) = v14;
  *(_QWORD *)(a1 + 104) = v15;
  *(_OWORD *)(a1 + 112) = v16;
  v15 = 0LL;
  v16 = 0LL;
  TraceSessionConfig::~TraceSessionConfig((TraceSessionConfig *)&v8);
  return a1;
}

/*
 * XREFs of sub_180058F74 @ 0x180058F74
 * Callers:
 *     sub_180058660 @ 0x180058660 (sub_180058660.c)
 *     sub_18011E51C @ 0x18011E51C (sub_18011E51C.c)
 * Callees:
 *     ?getZName@UnDecorator@@CA?AVDName@@_N0@Z_0 @ 0x180059000 (-getZName@UnDecorator@@CA-AVDName@@_N0@Z_0.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800743A0 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800DBF58 @ 0x1800DBF58 (sub_1800DBF58.c)
 *     sub_1800DD6A0 @ 0x1800DD6A0 (sub_1800DD6A0.c)
 *     sub_1801187E4 @ 0x1801187E4 (sub_1801187E4.c)
 *     sub_18011A35C @ 0x18011A35C (sub_18011A35C.c)
 *     sub_18011A4A8 @ 0x18011A4A8 (sub_18011A4A8.c)
 *     sub_18011AC34 @ 0x18011AC34 (sub_18011AC34.c)
 *     sub_18011C810 @ 0x18011C810 (sub_18011C810.c)
 *     sub_18011CA64 @ 0x18011CA64 (sub_18011CA64.c)
 *     sub_18011D2C0 @ 0x18011D2C0 (sub_18011D2C0.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180058F74(__int64 a1, bool *a2)
{
  int v4; // r15d
  int ZName; // eax
  void *v7; // rbx
  int v8; // r12d
  int v9; // r13d
  int v10; // eax
  void *v11; // rdi
  __int64 v12; // rdx
  void *v13; // rsi
  int v14; // eax
  unsigned __int64 v15; // r8
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // [rsp+50h] [rbp-B0h] BYREF
  DWORD pcbData; // [rsp+54h] [rbp-ACh] BYREF
  int pvData; // [rsp+58h] [rbp-A8h] BYREF
  int v22; // [rsp+5Ch] [rbp-A4h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 v25; // [rsp+70h] [rbp-90h] BYREF
  LPVOID v26; // [rsp+78h] [rbp-88h] BYREF
  LPVOID v27; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v28; // [rsp+88h] [rbp-78h] BYREF
  __int64 v29; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Frequency; // [rsp+A0h] [rbp-60h] BYREF
  _DWORD v32[57]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+194h] [rbp+94h]
  int v34; // [rsp+119Ch] [rbp+109Ch]
  __int128 v35; // [rsp+11A0h] [rbp+10A0h]
  _DWORD v36[57]; // [rsp+11B0h] [rbp+10B0h] BYREF
  __int64 v37; // [rsp+1294h] [rbp+1194h]
  int v38; // [rsp+229Ch] [rbp+219Ch]
  __int128 v39; // [rsp+22A0h] [rbp+21A0h]

  v4 = 0;
  ZName = UnDecorator::getZName();
  *a2 = ZName < 0;
  if ( ZName < 0 )
  {
    v26 = 0LL;
    v7 = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v8 = 0;
    v19 = 0;
    v9 = 0;
    v24 = 0LL;
    PerformanceCount.QuadPart = 0LL;
    v29 = 0LL;
    QueryPerformanceFrequency(&Frequency);
    sub_1800DD6A0(&v29);
    v10 = sub_18011D2C0(0LL, *(_QWORD *)(a1 + 16), &v26);
    v11 = v26;
    if ( v10 >= 0 )
    {
      v8 = *((_DWORD *)v26 + 1);
      v9 = (_DWORD)v26 + 8;
    }
    v4 = sub_18011CA64(*(_QWORD *)(a1 + 40), &v27);
    if ( v4 == -2147023728 )
      v4 = 0;
    pvData = 0;
    pcbData = 4;
    RegGetValueW(
      HKEY_LOCAL_MACHINE,
      L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
      L"ProbeForMinimumPeriod",
      0x18u,
      0LL,
      &pvData,
      &pcbData);
    v22 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"MaxCapturePeriodicityInMs",
            0x18u,
            0LL,
            &v22,
            &pcbData) )
      dword_18019DA08 = 10000 * v22;
    v12 = sub_18011C810(a1);
    v25 = v12;
    v13 = v27;
    if ( v4 >= 0 && *(_DWORD *)(a1 + 216) )
    {
      v32[0] = 3;
      v33 = 0LL;
      v34 = 0;
      v35 = xmmword_18015B730;
      v14 = sub_18011D2C0(3LL, *(_QWORD *)(a1 + 16), &v28);
      v7 = v28;
      if ( v14 >= 0 )
      {
        v19 = v28[1];
        v24 = v28 + 2;
      }
      v4 = sub_18011AC34(a1, 3, v19, (_DWORD)v24, (__int64)v13, pvData != 0, v25, a1 + 232, (__int64)v32);
      sub_18011A4A8(a1, v32);
      v12 = v25;
    }
    v36[0] = 0;
    v37 = 0LL;
    v38 = 0;
    v39 = xmmword_18015B730;
    if ( v4 >= 0 )
    {
      v4 = sub_18011AC34(a1, 0, v8, v9, (__int64)v13, pvData != 0, v12, a1 + 224, (__int64)v36);
      if ( v4 >= 0 && !*(_DWORD *)(a1 + 220) )
        sub_18011A35C(a1);
    }
    sub_18011A4A8(a1, v36);
    QueryPerformanceCounter(&PerformanceCount);
    pv = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, LPVOID *))(**(_QWORD **)(a1 + 16) + 40LL))(*(_QWORD *)(a1 + 16), &pv) >= 0
      && (unsigned int)dword_18019C448 > 4
      && __vcrt_trace_logging_provider::_TlgKeywordOn(
           (__vcrt_trace_logging_provider *)&dword_18019C448,
           (const struct _TlgProvider_t *)0x200000000000LL,
           v15) )
    {
      v25 = sub_1800DBF58(&v29);
      v19 = v4;
      v24 = pv;
      sub_1801187E4(v16, (unsigned int)&unk_180169E86, v17, v18, (__int64)&v24, (__int64)&v19, (__int64)&v25);
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    CoTaskMemFree(v13);
    CoTaskMemFree(v7);
    CoTaskMemFree(v11);
  }
  return (unsigned int)v4;
}

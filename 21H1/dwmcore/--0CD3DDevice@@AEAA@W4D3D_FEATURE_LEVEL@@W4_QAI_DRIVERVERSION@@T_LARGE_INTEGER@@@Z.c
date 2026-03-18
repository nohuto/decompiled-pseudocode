/*
 * XREFs of ??0CD3DDevice@@AEAA@W4D3D_FEATURE_LEVEL@@W4_QAI_DRIVERVERSION@@T_LARGE_INTEGER@@@Z @ 0x1800A440C
 * Callers:
 *     ?Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z @ 0x1800A42F8 (-Create@CD3DDevice@@KAJPEAUIDXGIAdapter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18003594C (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??0CD2DContext@@IEAA@XZ @ 0x1800A466C (--0CD2DContext@@IEAA@XZ.c)
 */

__int64 __fastcall CD3DDevice::CD3DDevice(__int64 a1)
{
  _QWORD *v2; // rcx
  int v3; // r10d
  int v4; // r8d
  __int64 v5; // r9

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 504) = 0LL;
  CD2DContext::CD2DContext((CD2DContext *)(a1 + 16));
  *(_DWORD *)(a1 + 528) = 1;
  *(_QWORD *)(a1 + 512) = a1 + 544;
  *(_QWORD *)(a1 + 520) = a1 + 544;
  *(_QWORD *)(a1 + 532) = 1LL;
  *(_DWORD *)(a1 + 552) = 0;
  *(_QWORD *)a1 = &CD3DDevice::`vftable'{for `CMILCOMBase'};
  *v2 = &CD3DDevice::`vftable'{for `CD2DContext'};
  *(_QWORD *)(a1 + 560) = 0LL;
  *(_QWORD *)(a1 + 568) = 0LL;
  *(_QWORD *)(a1 + 576) = 0LL;
  *(_QWORD *)(a1 + 584) = 0LL;
  *(_QWORD *)(a1 + 592) = 0LL;
  *(_QWORD *)(a1 + 600) = 0LL;
  *(_QWORD *)(a1 + 608) = 0LL;
  *(_QWORD *)(a1 + 616) = 0LL;
  *(_QWORD *)(a1 + 976) = -1LL;
  *(_DWORD *)(a1 + 624) = v3;
  *(_DWORD *)(a1 + 628) = v4;
  *(_QWORD *)(a1 + 632) = v5;
  *(_QWORD *)(a1 + 1136) = &CD3DResourceManager::`vftable';
  *(_DWORD *)(a1 + 960) = 0;
  *(_QWORD *)(a1 + 1024) = 0LL;
  *(_QWORD *)(a1 + 1032) = 0LL;
  *(_QWORD *)(a1 + 1040) = 0LL;
  *(_QWORD *)(a1 + 1048) = 0LL;
  *(_QWORD *)(a1 + 1072) = 0LL;
  *(_QWORD *)(a1 + 1120) = 0LL;
  *(_DWORD *)(a1 + 1208) = 0;
  InitializeSListHead((PSLIST_HEADER)(a1 + 1152));
  *(_QWORD *)(a1 + 1184) = 0LL;
  *(_QWORD *)(a1 + 1176) = a1 + 1168;
  *(_QWORD *)(a1 + 1168) = a1 + 1168;
  *(_QWORD *)(a1 + 1368) = 0LL;
  *(_QWORD *)(a1 + 1376) = 0LL;
  *(_QWORD *)(a1 + 1384) = 0LL;
  *(_QWORD *)(a1 + 1392) = 0LL;
  *(_QWORD *)(a1 + 1400) = 0LL;
  *(_QWORD *)(a1 + 1416) = 0LL;
  *(_QWORD *)(a1 + 1424) = 0LL;
  *(_BYTE *)(a1 + 1432) = 0;
  *(_QWORD *)(a1 + 1440) = 0LL;
  *(_QWORD *)(a1 + 1448) = 0LL;
  *(_DWORD *)(a1 + 1456) = 0;
  *(_QWORD *)(a1 + 1464) = 0LL;
  *(_QWORD *)(a1 + 1472) = 0LL;
  *(_DWORD *)(a1 + 1480) = 0;
  *(_QWORD *)(a1 + 1488) = 0LL;
  *(_QWORD *)(a1 + 1496) = 0LL;
  *(_DWORD *)(a1 + 1504) = 0;
  *(_QWORD *)(a1 + 1512) = 0LL;
  *(_QWORD *)(a1 + 1232) = a1 + 1256;
  *(_QWORD *)(a1 + 1240) = a1 + 1256;
  *(_QWORD *)(a1 + 1248) = a1 + 1368;
  `vector constructor iterator'(
    (char *)(a1 + 1520),
    8LL,
    12LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 1616),
    8LL,
    24LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 1808),
    8LL,
    48LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 2192),
    8LL,
    1LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  `vector constructor iterator'(
    (char *)(a1 + 2200),
    8LL,
    4LL,
    (void (__fastcall *)(char *))wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>);
  return a1;
}

/*
 * XREFs of ?_WritePath@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAAJPEAXIPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C01DEF80
 * Callers:
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C01DECF4 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C0013120 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _CcdWriteRegistryValues @ 0x1C01DF0AC (_CcdWriteRegistryValues.c)
 */

__int64 __fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::_WritePath(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        void *a2,
        unsigned int a3,
        const struct D3DKMT_PATHMODALITY_DESCRIPTOR *a4)
{
  __int64 v5; // rbp
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  __int64 v14; // rcx
  unsigned __int16 v15; // [rsp+30h] [rbp-28h] BYREF

  v5 = a3;
  v7 = RtlStringCbPrintfW(&v15, 6uLL, L"%02x", a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = 1LL;
    goto LABEL_12;
  }
  v9 = CcdWriteRegistryValues((_DWORD)a2, (unsigned int)&v15, (unsigned int)&unk_1C012F120, 13, (__int64)a4);
  v8 = v9;
  if ( v9 < 0
    || (*(_DWORD *)a4 & 0x1000000) != 0
    && (v10 = CcdWriteRegistryValues((_DWORD)a2, (unsigned int)&v15, (unsigned int)&unk_1C012F400, 4, (__int64)a4),
        v8 = v10,
        v10 < 0)
    || (*(_DWORD *)a4 & 0x100LL) != 0
    && (v11 = CcdWriteRegistryValues((_DWORD)a2, (unsigned int)&v15, (unsigned int)&unk_1C012F4E0, 6, (__int64)a4),
        v8 = v11,
        v11 < 0)
    || (*(_DWORD *)a4 & 0x800000) != 0
    && (v12 = CcdWriteRegistryValues((_DWORD)a2, (unsigned int)&v15, (unsigned int)&unk_1C012F000, 5, (__int64)a4),
        v8 = v12,
        v12 < 0) )
  {
    v14 = 3LL;
LABEL_12:
    WdLogSingleEntry4(v14, v8, a2, v5, a4);
  }
  return (unsigned int)v8;
}

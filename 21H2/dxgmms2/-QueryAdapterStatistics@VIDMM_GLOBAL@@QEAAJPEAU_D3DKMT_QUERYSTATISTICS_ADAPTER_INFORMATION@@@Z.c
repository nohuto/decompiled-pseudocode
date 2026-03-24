/*
 * XREFs of ?QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C0025240
 * Callers:
 *     ?VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C0022910 (-VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryAdapterStatistics(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a2)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this + 5027) + 24LL);
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 897);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 1796);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 1797);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 1798);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 1799);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 1800);
  *((_DWORD *)a2 + 17) = *((_DWORD *)this + 1802);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 1803);
  *((_DWORD *)a2 + 19) = *((_DWORD *)this + 1804);
  *((_DWORD *)a2 + 20) = *((_DWORD *)this + 1805);
  *((_DWORD *)a2 + 21) = *((_DWORD *)this + 1806);
  *((_DWORD *)a2 + 22) = *((_DWORD *)this + 1807);
  *((_DWORD *)a2 + 23) = *((_DWORD *)this + 1808);
  *((_DWORD *)a2 + 34) = *((_DWORD *)this + 1810);
  *((_DWORD *)a2 + 35) = *((_DWORD *)this + 1811);
  *((_DWORD *)a2 + 36) = *((_DWORD *)this + 1812);
  *((_DWORD *)a2 + 37) = *((_DWORD *)this + 1813);
  *((_QWORD *)a2 + 20) = *((_QWORD *)this + 908);
  *((_DWORD *)a2 + 38) = *((_DWORD *)this + 1814);
  *((_QWORD *)a2 + 22) = *((_QWORD *)this + 910);
  *((_DWORD *)a2 + 42) = *((_DWORD *)this + 1818);
  *((_QWORD *)a2 + 24) = *((_QWORD *)this + 912);
  *((_DWORD *)a2 + 46) = *((_DWORD *)this + 1822);
  *((_QWORD *)a2 + 26) = *((_QWORD *)this + 914);
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 1826);
  *((_QWORD *)a2 + 28) = *((_QWORD *)this + 916);
  *((_DWORD *)a2 + 54) = *((_DWORD *)this + 1830);
  *((_QWORD *)a2 + 30) = *((_QWORD *)this + 918);
  *((_DWORD *)a2 + 58) = *((_DWORD *)this + 1834);
  *((_QWORD *)a2 + 32) = *((_QWORD *)this + 920);
  *((_DWORD *)a2 + 62) = *((_DWORD *)this + 1838);
  *((_QWORD *)a2 + 34) = *((_QWORD *)this + 922);
  *((_DWORD *)a2 + 66) = *((_DWORD *)this + 1842);
  *((_QWORD *)a2 + 36) = *((_QWORD *)this + 926);
  *((_DWORD *)a2 + 70) = *((_DWORD *)this + 1850);
  *((_QWORD *)a2 + 38) = *((_QWORD *)this + 928);
  *((_DWORD *)a2 + 74) = *((_DWORD *)this + 1854);
  *((_QWORD *)a2 + 40) = *((_QWORD *)this + 930);
  *((_DWORD *)a2 + 78) = *((_DWORD *)this + 1858);
  *((_QWORD *)a2 + 41) = 0LL;
  *((_QWORD *)a2 + 43) = *((_QWORD *)this + 932);
  *((_DWORD *)a2 + 84) = *((_DWORD *)this + 1862);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 934);
  *((_DWORD *)a2 + 88) = *((_DWORD *)this + 1866);
  *((_QWORD *)a2 + 47) = *((_QWORD *)this + 936);
  *((_DWORD *)a2 + 92) = *((_DWORD *)this + 1870);
  *((_QWORD *)a2 + 49) = *((_QWORD *)this + 938);
  *((_DWORD *)a2 + 96) = *((_DWORD *)this + 1874);
  *((_QWORD *)a2 + 51) = *((_QWORD *)this + 940);
  *((_DWORD *)a2 + 100) = *((_DWORD *)this + 1878);
  *((_QWORD *)a2 + 53) = *((_QWORD *)this + 942);
  *((_DWORD *)a2 + 104) = *((_DWORD *)this + 1882);
  *((_QWORD *)a2 + 54) = *((_QWORD *)this + 943);
  *((_QWORD *)a2 + 55) = *((_QWORD *)this + 944);
  *((_QWORD *)a2 + 56) = *((_QWORD *)this + 945);
  *((_QWORD *)a2 + 57) = *((_QWORD *)this + 946);
  *((_QWORD *)a2 + 58) = *((_QWORD *)this + 947);
  *((_QWORD *)a2 + 59) = *((_QWORD *)this + 948);
  *((_QWORD *)a2 + 60) = *((_QWORD *)this + 949);
  *((_QWORD *)a2 + 61) = *((_QWORD *)this + 950);
  *((_DWORD *)a2 + 126) = *((_DWORD *)this + 1902);
  *((_DWORD *)a2 + 127) = *((_DWORD *)this + 1903);
  *((_DWORD *)a2 + 128) = *((_DWORD *)this + 1904);
  *((_DWORD *)a2 + 129) = *((_DWORD *)this + 1905);
  *((_DWORD *)a2 + 130) = *((_DWORD *)this + 1906);
  *((_DWORD *)a2 + 131) = *((_DWORD *)this + 1907);
  *((_DWORD *)a2 + 132) = *((_DWORD *)this + 1908);
  *((_QWORD *)a2 + 68) = *((_QWORD *)this + 956);
  *((_DWORD *)a2 + 134) = *((_DWORD *)this + 1910);
  *((_QWORD *)a2 + 70) = *((_QWORD *)this + 958);
  *((_DWORD *)a2 + 138) = *((_DWORD *)this + 1914);
  *((_QWORD *)a2 + 72) = *((_QWORD *)this + 960);
  *((_DWORD *)a2 + 142) = *((_DWORD *)this + 1918);
  *((_QWORD *)a2 + 74) = *((_QWORD *)this + 962);
  *((_DWORD *)a2 + 146) = *((_DWORD *)this + 1922);
  *((_QWORD *)a2 + 76) = *((_QWORD *)this + 964);
  *((_DWORD *)a2 + 150) = *((_DWORD *)this + 1926);
  *((_QWORD *)a2 + 78) = *((_QWORD *)this + 966);
  *((_DWORD *)a2 + 154) = *((_DWORD *)this + 1930);
  *((_QWORD *)a2 + 80) = *((_QWORD *)this + 968);
  *((_DWORD *)a2 + 158) = *((_DWORD *)this + 1934);
  *((_QWORD *)a2 + 82) = *((_QWORD *)this + 970);
  *((_DWORD *)a2 + 162) = *((_DWORD *)this + 1938);
  *((_QWORD *)a2 + 84) = *((_QWORD *)this + 972);
  *((_DWORD *)a2 + 166) = *((_DWORD *)this + 1942);
  *((_QWORD *)a2 + 86) = *((_QWORD *)this + 974);
  *((_DWORD *)a2 + 170) = *((_DWORD *)this + 1946);
  *((_QWORD *)a2 + 88) = *((_QWORD *)this + 976);
  *((_DWORD *)a2 + 174) = *((_DWORD *)this + 1950);
  v3 = *((_QWORD *)a2 + 89) & 0xFFFFFFFFFFFFFFFCuLL | (((*(_BYTE *)(*((_QWORD *)this + 5027) + 536LL) & 2) != 0) + 1LL);
  *((_QWORD *)a2 + 89) = v3;
  result = 0LL;
  *((_QWORD *)a2 + 89) = v3 & 0xFFFFFFFFFFFFFFFBuLL | ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)this + 5027)
                                                                                            + 437LL) >> 5) & 0x7FFFFFFFFFFFFFCLL;
  return result;
}

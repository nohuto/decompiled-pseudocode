/*
 * XREFs of ?QueryAdapterStatistics@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C002F314
 * Callers:
 *     ?VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION@@@Z @ 0x1C001E390 (-VidMmQueryAdapterStatistics@@YAJPEAVVIDMM_GLOBAL@@PEAU_D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_GLOBAL::QueryAdapterStatistics(
        VIDMM_GLOBAL *this,
        struct _D3DKMT_QUERYSTATISTICS_ADAPTER_INFORMATION *a2)
{
  unsigned __int64 v3; // rdx
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)(*((_QWORD *)this + 5028) + 24LL);
  *((_QWORD *)a2 + 3) = 0LL;
  *((_QWORD *)a2 + 4) = *((_QWORD *)this + 898);
  *((_DWORD *)a2 + 10) = *((_DWORD *)this + 1798);
  *((_DWORD *)a2 + 11) = *((_DWORD *)this + 1799);
  *((_DWORD *)a2 + 12) = *((_DWORD *)this + 1800);
  *((_DWORD *)a2 + 13) = *((_DWORD *)this + 1801);
  *((_DWORD *)a2 + 14) = *((_DWORD *)this + 1802);
  *((_DWORD *)a2 + 17) = *((_DWORD *)this + 1804);
  *((_DWORD *)a2 + 18) = *((_DWORD *)this + 1805);
  *((_DWORD *)a2 + 19) = *((_DWORD *)this + 1806);
  *((_DWORD *)a2 + 20) = *((_DWORD *)this + 1807);
  *((_DWORD *)a2 + 21) = *((_DWORD *)this + 1808);
  *((_DWORD *)a2 + 22) = *((_DWORD *)this + 1809);
  *((_DWORD *)a2 + 23) = *((_DWORD *)this + 1810);
  *((_DWORD *)a2 + 34) = *((_DWORD *)this + 1812);
  *((_DWORD *)a2 + 35) = *((_DWORD *)this + 1813);
  *((_DWORD *)a2 + 36) = *((_DWORD *)this + 1814);
  *((_DWORD *)a2 + 37) = *((_DWORD *)this + 1815);
  *((_QWORD *)a2 + 20) = *((_QWORD *)this + 909);
  *((_DWORD *)a2 + 38) = *((_DWORD *)this + 1816);
  *((_QWORD *)a2 + 22) = *((_QWORD *)this + 911);
  *((_DWORD *)a2 + 42) = *((_DWORD *)this + 1820);
  *((_QWORD *)a2 + 24) = *((_QWORD *)this + 913);
  *((_DWORD *)a2 + 46) = *((_DWORD *)this + 1824);
  *((_QWORD *)a2 + 26) = *((_QWORD *)this + 915);
  *((_DWORD *)a2 + 50) = *((_DWORD *)this + 1828);
  *((_QWORD *)a2 + 28) = *((_QWORD *)this + 917);
  *((_DWORD *)a2 + 54) = *((_DWORD *)this + 1832);
  *((_QWORD *)a2 + 30) = *((_QWORD *)this + 919);
  *((_DWORD *)a2 + 58) = *((_DWORD *)this + 1836);
  *((_QWORD *)a2 + 32) = *((_QWORD *)this + 921);
  *((_DWORD *)a2 + 62) = *((_DWORD *)this + 1840);
  *((_QWORD *)a2 + 34) = *((_QWORD *)this + 923);
  *((_DWORD *)a2 + 66) = *((_DWORD *)this + 1844);
  *((_QWORD *)a2 + 36) = *((_QWORD *)this + 927);
  *((_DWORD *)a2 + 70) = *((_DWORD *)this + 1852);
  *((_QWORD *)a2 + 38) = *((_QWORD *)this + 929);
  *((_DWORD *)a2 + 74) = *((_DWORD *)this + 1856);
  *((_QWORD *)a2 + 40) = *((_QWORD *)this + 931);
  *((_DWORD *)a2 + 78) = *((_DWORD *)this + 1860);
  *((_QWORD *)a2 + 41) = 0LL;
  *((_QWORD *)a2 + 43) = *((_QWORD *)this + 933);
  *((_DWORD *)a2 + 84) = *((_DWORD *)this + 1864);
  *((_QWORD *)a2 + 45) = *((_QWORD *)this + 935);
  *((_DWORD *)a2 + 88) = *((_DWORD *)this + 1868);
  *((_QWORD *)a2 + 47) = *((_QWORD *)this + 937);
  *((_DWORD *)a2 + 92) = *((_DWORD *)this + 1872);
  *((_QWORD *)a2 + 49) = *((_QWORD *)this + 939);
  *((_DWORD *)a2 + 96) = *((_DWORD *)this + 1876);
  *((_QWORD *)a2 + 51) = *((_QWORD *)this + 941);
  *((_DWORD *)a2 + 100) = *((_DWORD *)this + 1880);
  *((_QWORD *)a2 + 53) = *((_QWORD *)this + 943);
  *((_DWORD *)a2 + 104) = *((_DWORD *)this + 1884);
  *((_QWORD *)a2 + 54) = *((_QWORD *)this + 944);
  *((_QWORD *)a2 + 55) = *((_QWORD *)this + 945);
  *((_QWORD *)a2 + 56) = *((_QWORD *)this + 946);
  *((_QWORD *)a2 + 57) = *((_QWORD *)this + 947);
  *((_QWORD *)a2 + 58) = *((_QWORD *)this + 948);
  *((_QWORD *)a2 + 59) = *((_QWORD *)this + 949);
  *((_QWORD *)a2 + 60) = *((_QWORD *)this + 950);
  *((_QWORD *)a2 + 61) = *((_QWORD *)this + 951);
  *((_DWORD *)a2 + 126) = *((_DWORD *)this + 1904);
  *((_DWORD *)a2 + 127) = *((_DWORD *)this + 1905);
  *((_DWORD *)a2 + 128) = *((_DWORD *)this + 1906);
  *((_DWORD *)a2 + 129) = *((_DWORD *)this + 1907);
  *((_DWORD *)a2 + 130) = *((_DWORD *)this + 1908);
  *((_DWORD *)a2 + 131) = *((_DWORD *)this + 1909);
  *((_DWORD *)a2 + 132) = *((_DWORD *)this + 1910);
  *((_QWORD *)a2 + 68) = *((_QWORD *)this + 957);
  *((_DWORD *)a2 + 134) = *((_DWORD *)this + 1912);
  *((_QWORD *)a2 + 70) = *((_QWORD *)this + 959);
  *((_DWORD *)a2 + 138) = *((_DWORD *)this + 1916);
  *((_QWORD *)a2 + 72) = *((_QWORD *)this + 961);
  *((_DWORD *)a2 + 142) = *((_DWORD *)this + 1920);
  *((_QWORD *)a2 + 74) = *((_QWORD *)this + 963);
  *((_DWORD *)a2 + 146) = *((_DWORD *)this + 1924);
  *((_QWORD *)a2 + 76) = *((_QWORD *)this + 965);
  *((_DWORD *)a2 + 150) = *((_DWORD *)this + 1928);
  *((_QWORD *)a2 + 78) = *((_QWORD *)this + 967);
  *((_DWORD *)a2 + 154) = *((_DWORD *)this + 1932);
  *((_QWORD *)a2 + 80) = *((_QWORD *)this + 969);
  *((_DWORD *)a2 + 158) = *((_DWORD *)this + 1936);
  *((_QWORD *)a2 + 82) = *((_QWORD *)this + 971);
  *((_DWORD *)a2 + 162) = *((_DWORD *)this + 1940);
  *((_QWORD *)a2 + 84) = *((_QWORD *)this + 973);
  *((_DWORD *)a2 + 166) = *((_DWORD *)this + 1944);
  *((_QWORD *)a2 + 86) = *((_QWORD *)this + 975);
  *((_DWORD *)a2 + 170) = *((_DWORD *)this + 1948);
  *((_QWORD *)a2 + 88) = *((_QWORD *)this + 977);
  *((_DWORD *)a2 + 174) = *((_DWORD *)this + 1952);
  v3 = *((_QWORD *)a2 + 89) & 0xFFFFFFFFFFFFFFFCuLL | (((*(_BYTE *)(*((_QWORD *)this + 5028) + 536LL) & 2) != 0) + 1LL);
  *((_QWORD *)a2 + 89) = v3;
  result = 0LL;
  *((_QWORD *)a2 + 89) = v3 & 0xFFFFFFFFFFFFFFFBuLL | ((unsigned __int64)*(unsigned __int8 *)(*((_QWORD *)this + 5028)
                                                                                            + 437LL) >> 5) & 0x7FFFFFFFFFFFFFCLL;
  return result;
}

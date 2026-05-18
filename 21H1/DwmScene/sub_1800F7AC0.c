/*
 * XREFs of sub_1800F7AC0 @ 0x1800F7AC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E544 @ 0x18007E544 (sub_18007E544.c)
 *     sub_1800A9910 @ 0x1800A9910 (sub_1800A9910.c)
 *     __RTDynamicCast @ 0x18011E0AC (__RTDynamicCast.c)
 */

bool __fastcall sub_1800F7AC0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  bool result; // al

  result = 0;
  if ( sub_1800A9910(a1, a2) )
  {
    v4 = _RTDynamicCast(
           a2,
           0LL,
           &Spectre::Engine::Component `RTTI Type Descriptor',
           &Spectre::Engine::ViewerCamera `RTTI Type Descriptor',
           1);
    if ( !sub_18007E544((unsigned __int64 *)(v4 + 1800), (unsigned __int64 *)(a1 + 1800))
      && *(float *)(v4 + 1812) == *(float *)(a1 + 1812)
      && *(_DWORD *)(v4 + 1816) == *(_DWORD *)(a1 + 1816)
      && *(float *)(v4 + 1820) == *(float *)(a1 + 1820)
      && *(float *)(v4 + 1824) == *(float *)(a1 + 1824)
      && *(float *)(v4 + 1828) == *(float *)(a1 + 1828)
      && *(float *)(v4 + 1832) == *(float *)(a1 + 1832)
      && *(float *)(v4 + 1836) == *(float *)(a1 + 1836)
      && *(float *)(v4 + 1840) == *(float *)(a1 + 1840)
      && *(float *)(v4 + 1844) == *(float *)(a1 + 1844)
      && *(float *)(v4 + 1848) == *(float *)(a1 + 1848)
      && *(float *)(v4 + 1852) == *(float *)(a1 + 1852)
      && *(float *)(v4 + 1856) == *(float *)(a1 + 1856)
      && *(float *)(v4 + 1860) == *(float *)(a1 + 1860)
      && *(_BYTE *)(v4 + 1864) == *(_BYTE *)(a1 + 1864)
      && *(_DWORD *)(v4 + 1868) == *(_DWORD *)(a1 + 1868)
      && *(float *)(v4 + 1872) == *(float *)(a1 + 1872)
      && *(float *)(v4 + 1876) == *(float *)(a1 + 1876)
      && *(float *)(v4 + 1880) == *(float *)(a1 + 1880)
      && *(float *)(v4 + 1884) == *(float *)(a1 + 1884)
      && *(float *)(v4 + 1888) == *(float *)(a1 + 1888)
      && *(float *)(v4 + 1892) == *(float *)(a1 + 1892)
      && *(_BYTE *)(v4 + 1896) == *(_BYTE *)(a1 + 1896)
      && *(_BYTE *)(v4 + 1897) == *(_BYTE *)(a1 + 1897)
      && *(_BYTE *)(v4 + 1898) == *(_BYTE *)(a1 + 1898)
      && *(float *)(v4 + 1900) == *(float *)(a1 + 1900) )
    {
      return 1;
    }
  }
  return result;
}

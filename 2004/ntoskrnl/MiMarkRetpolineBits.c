/*
 * XREFs of MiMarkRetpolineBits @ 0x1408CD6B4
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x1408CD668 (MiMarkKernelImageRetpolineBits.c)
 *     MiReloadBootLoadedDrivers @ 0x140A47E20 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeRetpoline @ 0x140A5489C (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A8FA5C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     RtlSetBitsEx @ 0x14024A0A0 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x140250FD0 (RtlClearBitsEx.c)
 *     RtlAreBitsClearEx @ 0x1403321D0 (RtlAreBitsClearEx.c)
 *     MiSplitBitmapPages @ 0x14033E8EC (MiSplitBitmapPages.c)
 *     MiAddressToRetpolineBit @ 0x14053EB1C (MiAddressToRetpolineBit.c)
 */

__int64 __fastcall MiMarkRetpolineBits(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // rdi
  __int64 v3; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rbx
  int v7; // r8d

  v2 = MiAddressToRetpolineBit(a1);
  v4 = MiAddressToRetpolineBit((v3 + v1 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL);
  v5 = v4;
  v6 = v4 - v2;
  if ( v7 || RtlAreBitsClearEx((__int64)&qword_140C4CA58, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C4CA60 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C4CA58, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C4CA58, v2, v6);
  }
  return 0LL;
}

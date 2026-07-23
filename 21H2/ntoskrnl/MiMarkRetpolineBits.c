/*
 * XREFs of MiMarkRetpolineBits @ 0x1408D0E14
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x1408D0DC8 (MiMarkKernelImageRetpolineBits.c)
 *     MiReloadBootLoadedDrivers @ 0x140A509F0 (MiReloadBootLoadedDrivers.c)
 *     MiInitializeRetpoline @ 0x140A57538 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140A935BC (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     MiSplitBitmapPages @ 0x1402322A0 (MiSplitBitmapPages.c)
 *     RtlClearBitsEx @ 0x140309050 (RtlClearBitsEx.c)
 *     RtlSetBitsEx @ 0x140321750 (RtlSetBitsEx.c)
 *     RtlAreBitsClearEx @ 0x140353CE0 (RtlAreBitsClearEx.c)
 *     MiAddressToRetpolineBit @ 0x14054422C (MiAddressToRetpolineBit.c)
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
  if ( v7 || RtlAreBitsClearEx((__int64)&qword_140C4CC98, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C4CCA0 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C4CC98, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C4CC98, v2, v6);
  }
  return 0LL;
}

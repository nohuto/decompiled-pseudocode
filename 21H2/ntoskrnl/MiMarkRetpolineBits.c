/*
 * XREFs of MiMarkRetpolineBits @ 0x140970C6C
 * Callers:
 *     MiMarkKernelImageRetpolineBits @ 0x140970C20 (MiMarkKernelImageRetpolineBits.c)
 *     MiReloadBootLoadedDrivers @ 0x140B04F8C (MiReloadBootLoadedDrivers.c)
 *     MiInitializeRetpoline @ 0x140B0A4A8 (MiInitializeRetpoline.c)
 *     MmMarkHypercallPageRetpolineBit @ 0x140B5210C (MmMarkHypercallPageRetpolineBit.c)
 * Callees:
 *     RtlAreBitsClearEx @ 0x14022C900 (RtlAreBitsClearEx.c)
 *     MiSplitBitmapPages @ 0x140246420 (MiSplitBitmapPages.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     MiAddressToRetpolineBit @ 0x140419298 (MiAddressToRetpolineBit.c)
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
  if ( v7 || RtlAreBitsClearEx((__int64)&qword_140C4F410, v2, v4 - v2) )
  {
    if ( !(unsigned int)MiSplitBitmapPages(5, (unsigned __int64)qword_140C4F418 + (v2 >> 3), v5 + (v2 & 7) - v2) )
      return 3221225495LL;
    RtlSetBitsEx((__int64)&qword_140C4F410, v2, v6);
  }
  else
  {
    RtlClearBitsEx((__int64)&qword_140C4F410, v2, v6);
  }
  return 0LL;
}

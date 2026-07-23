/*
 * XREFs of MiFinalizeDriverCfgState @ 0x14075CA78
 * Callers:
 *     MmLoadSystemImageEx @ 0x14075BCBC (MmLoadSystemImageEx.c)
 * Callees:
 *     MiProcessKernelCfgImage @ 0x140371914 (MiProcessKernelCfgImage.c)
 *     VslCompleteSecureDriverLoad @ 0x14077D5C4 (VslCompleteSecureDriverLoad.c)
 */

__int64 __fastcall MiFinalizeDriverCfgState(__int64 a1, char a2, __int64 a3)
{
  __int64 result; // rax

  result = MiProcessKernelCfgImage(a1, a2, a3);
  if ( (int)result >= 0 )
  {
    if ( (MiFlags & 0x8000) == 0 || (MiFlags & 0x80000) != 0 || (*(_DWORD *)(a1 + 104) & 0x2000) != 0 )
      return 0LL;
    result = VslCompleteSecureDriverLoad(0LL, *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64));
    if ( (int)result >= 0 )
    {
      *(_DWORD *)(a1 + 104) |= 0x2000u;
      return 0LL;
    }
  }
  return result;
}

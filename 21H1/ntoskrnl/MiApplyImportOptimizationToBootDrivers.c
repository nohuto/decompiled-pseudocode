/*
 * XREFs of MiApplyImportOptimizationToBootDrivers @ 0x140A435EC
 * Callers:
 *     MiReloadBootLoadedDrivers @ 0x140A425C0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     MI_IS_PHYSICAL_ADDRESS @ 0x14027DD60 (MI_IS_PHYSICAL_ADDRESS.c)
 *     VslpEnterIumSecureMode @ 0x14032A7E0 (VslpEnterIumSecureMode.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1403AD048 (RtlUpdateImportRelocationsInImage.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall MiApplyImportOptimizationToBootDrivers(__int64 a1)
{
  unsigned int v1; // esi
  __int64 *v2; // r14
  __int64 *v3; // rbx
  unsigned int (*v4)(void); // rbp
  char *v5; // rdi
  __int64 v6; // rcx
  int updated; // eax
  _QWORD v9[14]; // [rsp+40h] [rbp-98h] BYREF

  v1 = ((unsigned int)dword_140C4CBF0 >> 12) + ((dword_140C4CBF0 & 0xFFF) != 0);
  if ( (KiSpeculationFeatures & 0x4000000) != 0 )
  {
    v2 = (__int64 *)(a1 + 16);
    v3 = *(__int64 **)(a1 + 16);
    v4 = (unsigned int (*)(void))((unsigned __int64)MiIsTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x2000000) != 0));
    while ( v3 != v2 )
    {
      v5 = (char *)v3[6];
      if ( v5 != PsNtosImageBase && v5 != PsHalImageBase && !(unsigned int)MI_IS_PHYSICAL_ADDRESS(v3[6]) )
      {
        if ( (KiSpeculationFeatures & 0x2000000) != 0 )
          v6 = v3[6] + *((_DWORD *)v3 + 16) + (v1 << 12);
        else
          v6 = 0LL;
        if ( (MiFlags & 0x10000) != 0 )
        {
          memset(v9, 0, 0x68uLL);
          v9[1] = v5;
          updated = VslpEnterIumSecureMode(2u, 222, 0, (__int64)v9);
        }
        else
        {
          updated = RtlUpdateImportRelocationsInImage(
                      v5,
                      (__int64)v5,
                      *((_DWORD *)v3 + 16),
                      v4,
                      v6,
                      (__int64)Base,
                      0,
                      (KiSpeculationFeatures & 0x2000000) == 0);
        }
        if ( updated >= 0 )
          *((_DWORD *)v3 + 26) |= 0x80u;
      }
      v3 = (__int64 *)*v3;
    }
  }
  return 0LL;
}

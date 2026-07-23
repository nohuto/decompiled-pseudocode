/*
 * XREFs of KiDetermineRetpolineEnablement @ 0x1403CD320
 * Callers:
 *     KiInitializeBootStructures @ 0x14099D160 (KiInitializeBootStructures.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1403ADE6C (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsPgiKernel @ 0x1403CD3C8 (KiIsPgiKernel.c)
 *     strstr @ 0x1403D19F0 (strstr.c)
 */

char __fastcall KiDetermineRetpolineEnablement(__int64 a1)
{
  const char *v2; // rcx
  char *v3; // rax
  const char *v4; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v2 = *(const char **)(a1 + 216);
  v7 = 0LL;
  v6 = 0LL;
  if ( !v2 || (v3 = strstr(v2, "SAFEBOOT:")) == 0LL )
  {
    v4 = *(const char **)(a1 + 216);
    if ( !v4 || (v3 = strstr(v4, "MININT")) == 0LL )
    {
      if ( (KiFeatureSettings & 0x20000) != 0 || (*(_DWORD *)(*(_QWORD *)(a1 + 240) + 132LL) & 0x1000) != 0 )
        _InterlockedAnd64((volatile signed __int64 *)&KiSpeculationFeatures, 0xFFFFFBFFFFFFFFFFuLL);
      else
        _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x40000000000uLL);
      LOBYTE(v3) = KiIsPgiKernel();
      if ( !(_BYTE)v3 )
      {
        KiDetectHardwareSpecControlFeatures((__int64)KeGetCurrentPrcb(), 0, (__int64)&v6, 0LL);
        LOBYTE(v3) = (v6 & 4) != 0;
        if ( (((KiFeatureSettings & 5) == 0) & (unsigned __int8)v3) != 0 )
        {
          v3 = *(char **)(a1 + 240);
          if ( *((_DWORD *)v3 + 867) )
          {
            if ( !*((_DWORD *)v3 + 866) && (v6 & 1) == 0 )
            {
              if ( (KiFeatureSettings & 0x200) != 0
                || (LOBYTE(v3) = (v6 & 0x200) == 0, (((KiFeatureSettings & 0x100) == 0) & (unsigned __int8)v3) != 0) )
              {
                LOBYTE(v3) = 0;
                _InterlockedOr64((volatile signed __int64 *)&KiSpeculationFeatures, 0x20000000000uLL);
              }
            }
          }
        }
      }
    }
  }
  return (char)v3;
}

/*
 * XREFs of DefaultQueryInformation @ 0x14085FE80
 * Callers:
 *     <none>
 * Callees:
 *     HalpQueryProfileSourceList @ 0x1404B9A40 (HalpQueryProfileSourceList.c)
 *     HalpTimerQueryProfileAvailability @ 0x1404BC2D4 (HalpTimerQueryProfileAvailability.c)
 */

__int64 __fastcall DefaultQueryInformation(int a1, unsigned int a2, __int64 a3, unsigned int *a4)
{
  int v4; // ecx
  int v5; // ecx
  bool ProfileAvailability; // al
  unsigned int v7; // edx
  _DWORD *v8; // r8

  v4 = a1 - 1;
  if ( !v4 )
  {
    if ( a2 < 0x18 )
      goto LABEL_8;
    v7 = 0;
    if ( !*(_DWORD *)a3 )
    {
      *(_BYTE *)(a3 + 4) = 1;
      *(_DWORD *)(a3 + 8) = dword_140C05478;
      *(_QWORD *)(a3 + 16) = off_140C05528;
      *a4 = 24;
      return v7;
    }
LABEL_10:
    *a4 = 0;
    return (unsigned int)-1073741637;
  }
  v5 = v4 - 19;
  if ( !v5 )
    return (unsigned int)HalpQueryProfileSourceList(
                           &DefaultProfileSourceDescriptorListHead,
                           (__int64)DefaultProfileIntervalLimits,
                           1,
                           a2,
                           a3,
                           a4);
  if ( v5 != 24 )
    goto LABEL_10;
  if ( a2 < 4 )
  {
LABEL_8:
    *a4 = 0;
    return (unsigned int)-1073741820;
  }
  *a4 = 4;
  ProfileAvailability = HalpTimerQueryProfileAvailability();
  v7 = 0;
  *v8 = ProfileAvailability;
  return v7;
}

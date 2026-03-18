/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1402E3E94
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14069004C (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1402E4000 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // ecx
  int v8; // eax
  int v10; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    PackageClaims = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*a5 & 1) == 0 )
    {
LABEL_5:
      v8 = 3014656;
LABEL_6:
      *a3 = v8;
      return (unsigned int)PackageClaims;
    }
    if ( (*a5 & 8) == 0 )
    {
      v10 = *a4;
      if ( (*a4 & 0x10000) != 0 )
        goto LABEL_5;
      if ( (v10 & 4) != 0 )
      {
        v8 = 3014658;
        goto LABEL_6;
      }
      if ( (v10 & 0x400) == 0 && (v10 & 0x800) == 0 )
      {
        if ( (v10 & 0x40) != 0 )
          goto LABEL_5;
        v8 = 3014656;
        if ( (*a4 & 0x1000) != 0 )
          goto LABEL_6;
      }
    }
    v8 = 3014657;
    goto LABEL_6;
  }
  return (unsigned int)PackageClaims;
}

/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1402503FC
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x14024F0F0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(int a1, __int64 a2, int *a3, _QWORD *a4, _QWORD *a5)
{
  int PackageClaims; // ecx
  int v8; // eax
  int v10; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *(_DWORD *)a4 = 0;
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
      v10 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 0x10000) != 0 )
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
        if ( (*(_DWORD *)a4 & 0x1000) != 0 )
          goto LABEL_6;
      }
    }
    v8 = 3014657;
    goto LABEL_6;
  }
  return (unsigned int)PackageClaims;
}

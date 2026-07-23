/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1402D72CC
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x14066ED48 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1402E65A0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        void *a1,
        __int64 a2,
        int *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // ecx
  int v8; // eax
  ULONG Flags; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    a4->Flags = 0;
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
      Flags = a4->Flags;
      if ( (a4->Flags & 0x10000) != 0 )
        goto LABEL_5;
      if ( (Flags & 4) != 0 )
      {
        v8 = 3014658;
        goto LABEL_6;
      }
      if ( (Flags & 0x400) == 0 && (Flags & 0x800) == 0 )
      {
        if ( (Flags & 0x40) != 0 )
          goto LABEL_5;
        v8 = 3014656;
        if ( (a4->Flags & 0x1000) != 0 )
          goto LABEL_6;
      }
    }
    v8 = 3014657;
    goto LABEL_6;
  }
  return (unsigned int)PackageClaims;
}

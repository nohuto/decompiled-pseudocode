/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x180069318
 * Callers:
 *     LdrpInitializePolicy @ 0x18007FA28 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1800694E0 (RtlQueryPackageClaims.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // r8d
  _DWORD *v9; // rdx

  PackageClaims = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    a4->Flags = 0;
    PackageClaims = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
        v9 = &unk_180125E64;
      }
      else if ( (a4->Flags & 0x10000) != 0 )
      {
        v9 = &unk_180125E60;
      }
      else if ( (a4->Flags & 4) != 0 )
      {
        v9 = &unk_180125E44;
      }
      else if ( (a4->Flags & 0x400) != 0 )
      {
        v9 = &unk_180125E54;
      }
      else if ( (a4->Flags & 0x800) != 0 )
      {
        v9 = &unk_180125E58;
      }
      else if ( (a4->Flags & 0x40) != 0 )
      {
        v9 = &unk_180125E50;
      }
      else if ( (a4->Flags & 0x1000) != 0 )
      {
        v9 = &unk_180125E5C;
      }
      else
      {
        v9 = &unk_180125E4C;
        if ( (a4->Flags & 8) == 0 )
          v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      }
    }
    else
    {
      v9 = &unk_180125E48;
    }
    *a3 = v9[10 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}

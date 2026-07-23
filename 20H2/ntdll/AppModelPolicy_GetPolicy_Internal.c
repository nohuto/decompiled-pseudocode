/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x180069428
 * Callers:
 *     LdrpInitializePolicy @ 0x18007FB28 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x1800695F0 (RtlQueryPackageClaims.c)
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
        v9 = &unk_1801277B4;
      }
      else if ( (a4->Flags & 0x10000) != 0 )
      {
        v9 = &unk_1801277B0;
      }
      else if ( (a4->Flags & 4) != 0 )
      {
        v9 = &unk_180127794;
      }
      else if ( (a4->Flags & 0x400) != 0 )
      {
        v9 = &unk_1801277A4;
      }
      else if ( (a4->Flags & 0x800) != 0 )
      {
        v9 = &unk_1801277A8;
      }
      else if ( (a4->Flags & 0x40) != 0 )
      {
        v9 = &unk_1801277A0;
      }
      else if ( (a4->Flags & 0x1000) != 0 )
      {
        v9 = &unk_1801277AC;
      }
      else
      {
        v9 = &unk_18012779C;
        if ( (a4->Flags & 8) == 0 )
          v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      }
    }
    else
    {
      v9 = &unk_180127798;
    }
    *a3 = v9[10 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}

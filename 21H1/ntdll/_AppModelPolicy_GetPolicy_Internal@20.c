/*
 * XREFs of _AppModelPolicy_GetPolicy_Internal@20 @ 0x4B33D42C
 * Callers:
 *     _LdrpInitializePolicy@0 @ 0x4B2EBB2B (_LdrpInitializePolicy@0.c)
 * Callees:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 */

NTSTATUS __fastcall AppModelPolicy_GetPolicy_Internal(
        int a1,
        int a2,
        _DWORD *a3,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  NTSTATUS PackageClaims; // edx
  int *v6; // ecx

  PackageClaims = RtlQueryPackageClaims((HANDLE)0xFFFFFFFC, 0, 0, 0, 0, 0, PkgClaim, AttributesPresent);
  if ( PackageClaims == -1073741275 )
  {
    *(_DWORD *)AttributesPresent = 0;
    PackageClaims = 0;
    *((_DWORD *)AttributesPresent + 1) = 0;
    PkgClaim->Flags = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*(_DWORD *)AttributesPresent & 1) != 0 )
    {
      if ( (*(_DWORD *)AttributesPresent & 8) != 0 )
      {
        v6 = dword_4B2950B8;
      }
      else if ( (PkgClaim->Flags & 0x10000) != 0 )
      {
        v6 = &dword_4B2950B4;
      }
      else if ( (PkgClaim->Flags & 4) != 0 )
      {
        v6 = &dword_4B295098;
      }
      else if ( (PkgClaim->Flags & 0x400) != 0 )
      {
        v6 = &dword_4B2950A8;
      }
      else if ( (PkgClaim->Flags & 0x800) != 0 )
      {
        v6 = &dword_4B2950AC;
      }
      else if ( (PkgClaim->Flags & 0x40) != 0 )
      {
        v6 = &dword_4B2950A4;
      }
      else if ( (PkgClaim->Flags & 0x1000) != 0 )
      {
        v6 = &dword_4B2950B0;
      }
      else
      {
        v6 = &dword_4B2950A0;
        if ( (PkgClaim->Flags & 8) == 0 )
          v6 = &dword_4B295094;
      }
    }
    else
    {
      v6 = &dword_4B29509C;
    }
    *a3 = v6[10 * a2 - 11];
  }
  return PackageClaims;
}

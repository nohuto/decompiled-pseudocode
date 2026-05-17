/*
 * XREFs of _AppModelPolicy_GetPolicy_Internal@20 @ 0x4B33D42C
 * Callers:
 *     _LdrpInitializePolicy@0 @ 0x4B2EBB2B (_LdrpInitializePolicy@0.c)
 * Callees:
 *     _RtlQueryPackageClaims@32 @ 0x4B2E4E70 (_RtlQueryPackageClaims@32.c)
 */

int __fastcall AppModelPolicy_GetPolicy_Internal(int a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int PackageClaims; // edx
  int *v6; // ecx

  PackageClaims = RtlQueryPackageClaims(-4, 0, 0, 0, 0, 0, (int)a4, (int)a5);
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0;
    PackageClaims = 0;
    a5[1] = 0;
    *a4 = 0;
  }
  *a3 = 0;
  if ( PackageClaims >= 0 )
  {
    if ( (*a5 & 1) != 0 )
    {
      if ( (*a5 & 8) != 0 )
      {
        v6 = dword_4B2950B8;
      }
      else if ( (*a4 & 0x10000) != 0 )
      {
        v6 = &dword_4B2950B4;
      }
      else if ( (*(_BYTE *)a4 & 4) != 0 )
      {
        v6 = &dword_4B295098;
      }
      else if ( (*a4 & 0x400) != 0 )
      {
        v6 = &dword_4B2950A8;
      }
      else if ( (*a4 & 0x800) != 0 )
      {
        v6 = &dword_4B2950AC;
      }
      else if ( (*(_BYTE *)a4 & 0x40) != 0 )
      {
        v6 = &dword_4B2950A4;
      }
      else if ( (*a4 & 0x1000) != 0 )
      {
        v6 = &dword_4B2950B0;
      }
      else
      {
        v6 = &dword_4B2950A0;
        if ( (*(_BYTE *)a4 & 8) == 0 )
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

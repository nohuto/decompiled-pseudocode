/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180026E70
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // r8d
  _DWORD *v9; // rdx

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
    if ( (*(_BYTE *)a5 & 1) != 0 )
    {
      if ( (*(_BYTE *)a5 & 8) != 0 )
      {
        v9 = &unk_180049024;
      }
      else if ( (*a4 & 0x10000) != 0 )
      {
        v9 = &unk_180049020;
      }
      else if ( (*(_BYTE *)a4 & 4) != 0 )
      {
        v9 = &unk_180049004;
      }
      else if ( (*a4 & 0x400) != 0 )
      {
        v9 = &unk_180049014;
      }
      else if ( (*a4 & 0x800) != 0 )
      {
        v9 = &unk_180049018;
      }
      else if ( (*(_BYTE *)a4 & 0x40) != 0 )
      {
        v9 = &unk_180049010;
      }
      else if ( (*a4 & 0x1000) != 0 )
      {
        v9 = &unk_18004901C;
      }
      else
      {
        v9 = &unk_18004900C;
        if ( (*(_BYTE *)a4 & 8) == 0 )
          v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      }
    }
    else
    {
      v9 = &unk_180049008;
    }
    *a3 = v9[10 * (a2 - 1)];
  }
  return (unsigned int)PackageClaims;
}

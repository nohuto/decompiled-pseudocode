/*
 * XREFs of ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x180004158
 * Callers:
 *     _lambda_5035b992506f4af81a770c5842624510_::_lambda_invoker_cdecl_ @ 0x180007F30 (_lambda_5035b992506f4af81a770c5842624510_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     wil_details_NtQueryWnfStateData @ 0x180002654 (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x1800026FC (wil_details_NtUpdateWnfStateData.c)
 *     ??$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA?AV?$pointer_range@PEAUwil_details_FeatureUsageSRUM@@@details@0@PEAUwil_details_FeatureUsageSRUM@@_K@Z @ 0x180007B9C (--$make_range@PEAUwil_details_FeatureUsageSRUM@@@wil@@YA-AV-$pointer_range@PEAUwil_details_Featu.c)
 *     __security_check_cookie @ 0x18000C690 (__security_check_cookie.c)
 *     _alloca_probe @ 0x18000DE40 (_alloca_probe.c)
 */

__int64 __fastcall wil_details_WriteSRUMWnfUsageBuffer(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int WnfStateData; // edi
  unsigned int updated; // ebx
  int v6; // esi
  unsigned int v7; // r10d
  unsigned __int64 v8; // r8
  unsigned int v9; // r10d
  unsigned int v10; // r11d
  __int64 i; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v17; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  _QWORD v22[3]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD v23[512]; // [rsp+70h] [rbp-90h] BYREF

  WnfStateData = 0;
  updated = 0;
  if ( a1[1] - *a1 >= 0xCuLL )
  {
    v6 = 0;
    do
    {
      v18 = 4096;
      WnfStateData = wil_details_NtQueryWnfStateData(
                       (__int64)&unk_180010438,
                       a2,
                       a3,
                       (__int64)&v19,
                       (__int64)v23,
                       (__int64)&v18);
      if ( !WnfStateData )
      {
        v7 = v18;
        if ( v18 != 12 * (v18 / 0xCuLL) )
          v7 = 0;
        v8 = (a1[1] - *a1) / 0xCuLL;
        v18 = v7;
        wil::make_range<wil_details_FeatureUsageSRUM *>(v22, *a1, v8);
        for ( i = v22[0]; i != v22[1]; i = v13 + 12 )
        {
          wil::make_range<wil_details_FeatureUsageSRUM *>(&v20, v23, v10);
          v14 = v20;
          if ( v20 == v21 )
          {
LABEL_11:
            if ( (unsigned __int64)v9 + 12 <= 0x1000 )
            {
              v15 = 3 * v12;
              *(_QWORD *)((char *)v23 + 4 * v15) = *(_QWORD *)v13;
              v9 += 12;
              ++v10;
              *((_DWORD *)&v23[1] + v15) = *(_DWORD *)(v13 + 8);
              v18 = v9;
            }
          }
          else
          {
            while ( *(_DWORD *)v14 != *(_DWORD *)v13 || *(_WORD *)(v14 + 4) != *(_WORD *)(v13 + 4) )
            {
              v14 += 12LL;
              if ( v14 == v21 )
                goto LABEL_11;
            }
            *(_DWORD *)(v14 + 8) += *(_DWORD *)(v13 + 8);
            v9 = v18;
          }
        }
        updated = wil_details_NtUpdateWnfStateData((__int64)&unk_180010438, (__int64)v23, v9, i, v17, v19, 1);
      }
      ++v6;
    }
    while ( updated == -1073741823 && v6 < 100 && !WnfStateData );
  }
  if ( WnfStateData )
    return WnfStateData;
  return updated;
}

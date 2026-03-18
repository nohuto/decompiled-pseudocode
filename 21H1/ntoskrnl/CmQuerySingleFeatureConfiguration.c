/*
 * XREFs of CmQuerySingleFeatureConfiguration @ 0x140866818
 * Callers:
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlQueryFeatureConfiguration @ 0x140764540 (RtlQueryFeatureConfiguration.c)
 */

__int64 __fastcall CmQuerySingleFeatureConfiguration(__int64 *a1, int a2, __int64 a3, int a4, _DWORD *a5)
{
  unsigned int v6; // ecx
  __int64 v7; // rax
  int v8; // eax
  __int64 v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]

  v13 = 0LL;
  v10 = 0LL;
  if ( a2 != 8 )
    return (unsigned int)-1073741820;
  v7 = *a1;
  v13 = *a1;
  if ( a4 != 24 )
  {
    v6 = -1073741820;
LABEL_5:
    *a5 = 24;
    return v6;
  }
  v11 = 0LL;
  v12 = 0;
  v8 = RtlQueryFeatureConfiguration(HIDWORD(v7), v7, &v10, (__int64)&v11);
  v6 = v8;
  if ( v8 >= 0 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)a3 = v10;
    *(_QWORD *)(a3 + 8) = v11;
    *(_DWORD *)(a3 + 16) = v12;
    *a5 = 24;
    return 0;
  }
  if ( v8 == -1073741275 || v8 == -2147483614 )
  {
    *(_OWORD *)a3 = 0LL;
    *(_QWORD *)(a3 + 16) = 0LL;
    *(_QWORD *)a3 = v10;
    goto LABEL_5;
  }
  return v6;
}

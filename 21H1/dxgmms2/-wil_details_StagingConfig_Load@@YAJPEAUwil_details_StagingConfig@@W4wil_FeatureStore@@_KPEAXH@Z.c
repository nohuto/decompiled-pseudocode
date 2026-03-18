/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C0016130
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C005E0CC (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0015C10 (__security_check_cookie.c)
 *     memset @ 0x1C0016E40 (memset.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, __int64 a2, __int64 a3, char *a4)
{
  int v6; // edi
  __int64 v7; // r13
  char *PoolWithTag; // r15
  char *v9; // rbx
  SIZE_T v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  int v17; // r9d
  __int64 result; // rax
  char *v19; // rdx
  unsigned int v20; // [rsp+30h] [rbp-30h] BYREF
  int v21; // [rsp+34h] [rbp-2Ch] BYREF
  char *v22; // [rsp+38h] [rbp-28h] BYREF
  __int64 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+48h] [rbp-18h] BYREF

  v22 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v6 = 0;
  *(_QWORD *)a1 = 0LL;
  v7 = 200LL;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v23 = 0x418A073AA3BC7C75LL;
  v10 = -(__int64)(a4 != 0LL) & 0xC8;
  v20 = a4 != 0LL ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&v23, 0LL, 0LL, a1 + 8, a4, &v20);
  v12 = v11;
  if ( v11 )
    goto LABEL_13;
  v9 = v22;
  if ( v22 )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    v13 = v10;
    v10 = v20;
    if ( v13 >= v20 )
      v10 = v13;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v10, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v20 = v10;
    v11 = ZwQueryWnfStateData(&v23, 0LL, 0LL, a1 + 8, PoolWithTag, &v20);
    v9 = PoolWithTag;
    v12 = v11;
LABEL_13:
    ;
  }
  while ( v11 == -1073741789 );
  if ( v12 || !v9 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    return v12;
  }
  else
  {
    v14 = v20;
    if ( v20 > 4 )
      *(_BYTE *)(a1 + 12) = *v9;
    if ( (unsigned int)v14 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && (v15 = *((unsigned __int16 *)v9 + 1), (unsigned __int16)v15 >= 0x10u)
      && (v16 = *((unsigned __int16 *)v9 + 2),
          v14 >= v15 + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v16) )
    {
      v21 = 0;
      v17 = 0;
      if ( (_WORD)v16 )
      {
        v24 = 0x418A073AA3BC8075LL;
        LODWORD(v22) = 0;
        ZwQueryWnfStateData(&v24, 0LL, 0LL, &v21, 0LL, &v22);
        LODWORD(v14) = v20;
        v17 = v21;
      }
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9 + 16;
      *(_QWORD *)(a1 + 40) = &v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v17 != 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        LODWORD(v14) = *((unsigned __int16 *)v9 + 1)
                     + 16 * *((unsigned __int16 *)v9 + 3)
                     + 12 * *((unsigned __int16 *)v9 + 2);
        *(_DWORD *)(a1 + 16) = 1;
      }
    }
    else
    {
      v20 = 16;
      *(_OWORD *)v9 = 0LL;
      *(_DWORD *)v9 = 1049090;
      LODWORD(v14) = v20;
      *(_QWORD *)(a1 + 24) = v9;
      v19 = &v9[*((unsigned __int16 *)v9 + 1)];
      *(_QWORD *)(a1 + 32) = v19;
      *(_QWORD *)(a1 + 40) = &v19[12 * *((unsigned __int16 *)v9 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v14;
    if ( PoolWithTag )
      v7 = v10;
    *(_QWORD *)(a1 + 56) = v9;
    *(_QWORD *)(a1 + 72) = v7;
    LOBYTE(v6) = v9 == PoolWithTag;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v6;
  }
  return result;
}

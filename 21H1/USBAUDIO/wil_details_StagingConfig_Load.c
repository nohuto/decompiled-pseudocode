/*
 * XREFs of wil_details_StagingConfig_Load @ 0x1C0002400
 * Callers:
 *     wil_details_GetCurrentFeatureEnabledState @ 0x1C00020C4 (wil_details_GetCurrentFeatureEnabledState.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0012700 (__security_check_cookie.c)
 *     memset @ 0x1C00142C0 (memset.c)
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
  unsigned __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r10
  int v16; // r9d
  __int64 result; // rax
  char *v18; // rdx
  unsigned int v19; // [rsp+30h] [rbp-30h] BYREF
  int v20; // [rsp+34h] [rbp-2Ch] BYREF
  char *v21; // [rsp+38h] [rbp-28h] BYREF
  __int64 v22; // [rsp+40h] [rbp-20h] BYREF
  __int64 v23; // [rsp+48h] [rbp-18h] BYREF

  v21 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v6 = 0;
  v7 = 200LL;
  *(_QWORD *)a1 = 0LL;
  PoolWithTag = 0LL;
  v9 = 0LL;
  v22 = _WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v10 = -(__int64)(a4 != 0LL) & 0xC8;
  v19 = a4 != 0LL ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&v22, 0LL, 0LL, a1 + 8, a4, &v19);
  v12 = v11;
  if ( v11 )
    goto LABEL_13;
  v9 = v21;
  if ( v21 )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    if ( v10 < v19 )
      v10 = v19;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, v10, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    v19 = v10;
    v11 = ZwQueryWnfStateData(&v22, 0LL, 0LL, a1 + 8, PoolWithTag, &v19);
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
    v13 = v19;
    if ( v19 > 4 )
      *(_BYTE *)(a1 + 12) = *v9;
    if ( (unsigned int)v13 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && (v14 = *((unsigned __int16 *)v9 + 1), (unsigned __int16)v14 >= 0x10u)
      && (v15 = *((unsigned __int16 *)v9 + 2),
          v13 >= v14 + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v15) )
    {
      v20 = 0;
      v16 = 0;
      if ( (_WORD)v15 )
      {
        v23 = _WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        LODWORD(v21) = 0;
        ZwQueryWnfStateData(&v23, 0LL, 0LL, &v20, 0LL, &v21);
        LODWORD(v13) = v19;
        v16 = v20;
      }
      *(_QWORD *)(a1 + 24) = v9;
      *(_QWORD *)(a1 + 32) = v9 + 16;
      *(_QWORD *)(a1 + 40) = &v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v16 != 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        LODWORD(v13) = *((unsigned __int16 *)v9 + 1)
                     + 16 * *((unsigned __int16 *)v9 + 3)
                     + 12 * *((unsigned __int16 *)v9 + 2);
        *(_DWORD *)(a1 + 16) = 1;
      }
    }
    else
    {
      v19 = 16;
      *(_OWORD *)v9 = 0LL;
      *(_DWORD *)v9 = 1049090;
      LODWORD(v13) = v19;
      *(_QWORD *)(a1 + 24) = v9;
      v18 = &v9[*((unsigned __int16 *)v9 + 1)];
      *(_QWORD *)(a1 + 32) = v18;
      *(_QWORD *)(a1 + 40) = &v18[12 * *((unsigned __int16 *)v9 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v13;
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

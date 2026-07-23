/*
 * XREFs of wil_details_StagingConfig_Load @ 0x140388D28
 * Callers:
 *     wil_StagingConfig_QueryFeatureState @ 0x1406ED608 (wil_StagingConfig_QueryFeatureState.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x1403F4F90 (ZwQueryWnfStateData.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(__int64 a1, unsigned int a2, __int64 a3, void *a4)
{
  int v7; // edi
  __int64 v8; // r13
  char *PoolWithTag; // r15
  WNF_STATE_NAME v10; // rax
  char *v11; // rbx
  SIZE_T v12; // r14
  NTSTATUS v13; // eax
  unsigned int v14; // r12d
  unsigned __int64 v15; // r8
  char *v16; // rdx
  __int64 result; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r10
  ULONG v21; // r9d
  WNF_STATE_NAME v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // eax
  ULONG BufferSize; // [rsp+30h] [rbp-30h] BYREF
  ULONG ChangeStamp; // [rsp+34h] [rbp-2Ch] BYREF
  ULONG v28[2]; // [rsp+38h] [rbp-28h] BYREF
  WNF_STATE_NAME v29; // [rsp+40h] [rbp-20h] BYREF
  WNF_STATE_NAME StateName; // [rsp+48h] [rbp-18h] BYREF

  v29.Data[0] = a2;
  *(_QWORD *)v28 = a4;
  memset((void *)(a1 + 8), 0, 0x50uLL);
  v7 = 0;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = 0;
  v8 = 200LL;
  PoolWithTag = 0LL;
  v10 = (WNF_STATE_NAME)_WIL_WNF_WIL_USER_FEATURE_STORE;
  v11 = 0LL;
  v12 = -(__int64)(a4 != 0LL) & 0xC8;
  if ( !v29.Data[0] )
    v10 = (WNF_STATE_NAME)_WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  StateName = v10;
  BufferSize = a4 != 0LL ? 0xC8 : 0;
  v13 = ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)(a1 + 8), a4, &BufferSize);
  v14 = v13;
  if ( !v13 )
  {
    v11 = *(char **)v28;
    if ( !*(_QWORD *)v28 )
      goto LABEL_15;
  }
  while ( v13 == -1073741789 )
  {
LABEL_15:
    if ( v12 < 0xC8 )
      v12 = 200LL;
    v18 = v12;
    v12 = BufferSize;
    if ( v18 >= BufferSize )
      v12 = v18;
    if ( v12 < 0x10 )
      v12 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    BufferSize = v12;
    v13 = ZwQueryWnfStateData(&StateName, 0LL, 0LL, (PWNF_CHANGE_STAMP)(a1 + 8), PoolWithTag, &BufferSize);
    v14 = v13;
    v11 = PoolWithTag;
  }
  if ( v14 || !v11 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    return v14;
  }
  else
  {
    v15 = BufferSize;
    if ( BufferSize > 4 )
      *(_BYTE *)(a1 + 12) = *v11;
    if ( (unsigned int)v15 >= 0x10
      && *(_BYTE *)(a1 + 12) == 2
      && (v19 = *((unsigned __int16 *)v11 + 1), (unsigned __int16)v19 >= 0x10u)
      && (v20 = *((unsigned __int16 *)v11 + 2),
          v15 >= v19 + 16 * (unsigned __int64)*((unsigned __int16 *)v11 + 3) + 12 * v20) )
    {
      ChangeStamp = 0;
      v21 = 0;
      if ( (_WORD)v20 )
      {
        v22 = (WNF_STATE_NAME)_WIL_WNF_WIL_USER_FEATURE_STORE_MODIFIED;
        if ( !v29.Data[0] )
          v22 = (WNF_STATE_NAME)_WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        v29 = v22;
        v28[0] = 0;
        ZwQueryWnfStateData(&v29, 0LL, 0LL, &ChangeStamp, 0LL, v28);
        LODWORD(v15) = BufferSize;
        v21 = ChangeStamp;
      }
      *(_QWORD *)(a1 + 24) = v11;
      *(_QWORD *)(a1 + 32) = v11 + 16;
      *(_QWORD *)(a1 + 40) = &v11[12 * *((unsigned __int16 *)v11 + 2) + 16];
      *(_DWORD *)(a1 + 48) = v21 != 0;
      if ( *v11 == 2 && (unsigned __int8)v11[1] < 2u )
      {
        v23 = 16 * *((unsigned __int16 *)v11 + 3);
        v24 = 3 * *((unsigned __int16 *)v11 + 2);
        v25 = *((unsigned __int16 *)v11 + 1);
        *(_DWORD *)(a1 + 16) = 1;
        LODWORD(v15) = v25 + v23 + 4 * v24;
      }
    }
    else
    {
      BufferSize = 16;
      *(_OWORD *)v11 = 0LL;
      *(_DWORD *)v11 = 1049090;
      LODWORD(v15) = BufferSize;
      *(_QWORD *)(a1 + 24) = v11;
      v16 = &v11[*((unsigned __int16 *)v11 + 1)];
      *(_QWORD *)(a1 + 32) = v16;
      *(_QWORD *)(a1 + 40) = &v16[12 * *((unsigned __int16 *)v11 + 2)];
    }
    *(_QWORD *)(a1 + 64) = (unsigned int)v15;
    if ( PoolWithTag )
      v8 = v12;
    *(_QWORD *)(a1 + 56) = v11;
    *(_QWORD *)(a1 + 72) = v8;
    LOBYTE(v7) = v11 == PoolWithTag;
    result = 0LL;
    *(_DWORD *)(a1 + 80) = v7;
  }
  return result;
}

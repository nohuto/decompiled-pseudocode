/*
 * XREFs of ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x1C001CCFC
 * Callers:
 *     ?wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z @ 0x1C00BC438 (-wil_StagingConfig_QueryFeatureState@@YAHW4wil_FeatureStore@@PEAUwil_FeatureState@@IHPEAH@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001A350 (__security_check_cookie.c)
 *     memset @ 0x1C001D340 (memset.c)
 */

__int64 __fastcall wil_details_StagingConfig_Load(
        wil_details_StagingConfig *config,
        wil_FeatureStore buffer,
        unsigned __int64 a3,
        char *store)
{
  int v6; // edi
  unsigned __int64 v7; // r13
  char *PoolWithTag; // r15
  char *v9; // rbx
  SIZE_T v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  unsigned int v17; // r9d
  __int64 result; // rax
  wil_details_StagingConfigFeature *v19; // rdx
  unsigned int size; // [rsp+30h] [rbp-30h] BYREF
  unsigned int updateChangeStamp; // [rsp+34h] [rbp-2Ch] BYREF
  char *updateSize; // [rsp+38h] [rbp-28h] BYREF
  __WIL__WNF_STATE_NAME state; // [rsp+40h] [rbp-20h] BYREF
  __WIL__WNF_STATE_NAME stateUpdatedThisSession; // [rsp+48h] [rbp-18h] BYREF

  updateSize = store;
  memset(&config->readChangeStamp, 0, 0x50uLL);
  v6 = 0;
  *(_QWORD *)&config->store = 0LL;
  v7 = 200LL;
  PoolWithTag = 0LL;
  v9 = 0LL;
  state = _WIL_WNF_WIL_MACHINE_FEATURE_STORE;
  v10 = -(__int64)(store != 0LL) & 0xC8;
  size = store != 0LL ? 0xC8 : 0;
  v11 = ZwQueryWnfStateData(&state, 0LL, 0LL, &config->readChangeStamp, store, &size);
  v12 = v11;
  if ( v11 )
    goto LABEL_13;
  v9 = updateSize;
  if ( updateSize )
    goto LABEL_13;
  do
  {
    if ( v10 < 0xC8 )
      v10 = 200LL;
    v13 = v10;
    v10 = size;
    if ( v13 >= size )
      v10 = v13;
    if ( v10 < 0x10 )
      v10 = 16LL;
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4C4957u);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x4C4957u);
    if ( !PoolWithTag )
      return 3221225626LL;
    size = v10;
    v11 = ZwQueryWnfStateData(&state, 0LL, 0LL, &config->readChangeStamp, PoolWithTag, &size);
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
    v14 = size;
    if ( size > 4 )
      config->readVersion = *v9;
    if ( (unsigned int)v14 >= 0x10
      && config->readVersion == 2
      && (v15 = *((unsigned __int16 *)v9 + 1), (unsigned __int16)v15 >= 0x10u)
      && (v16 = *((unsigned __int16 *)v9 + 2),
          v14 >= v15 + 16 * (unsigned __int64)*((unsigned __int16 *)v9 + 3) + 12 * v16) )
    {
      updateChangeStamp = 0;
      v17 = 0;
      if ( (_WORD)v16 )
      {
        stateUpdatedThisSession = _WIL_WNF_WIL_MACHINE_FEATURE_STORE_MODIFIED;
        LODWORD(updateSize) = 0;
        ZwQueryWnfStateData(&stateUpdatedThisSession, 0LL, 0LL, &updateChangeStamp, 0LL, &updateSize);
        LODWORD(v14) = size;
        v17 = updateChangeStamp;
      }
      config->header = (wil_details_StagingConfigHeader *)v9;
      config->features = (wil_details_StagingConfigFeature *)(v9 + 16);
      config->triggers = (wil_details_StagingConfigUsageTrigger *)&v9[12 * *((unsigned __int16 *)v9 + 2) + 16];
      config->changedInSession = v17 != 0;
      if ( *v9 == 2 && (unsigned __int8)v9[1] < 2u )
      {
        LODWORD(v14) = *((unsigned __int16 *)v9 + 1)
                     + 16 * *((unsigned __int16 *)v9 + 3)
                     + 12 * *((unsigned __int16 *)v9 + 2);
        config->modified = 1;
      }
    }
    else
    {
      size = 16;
      *(_OWORD *)v9 = 0LL;
      *(_DWORD *)v9 = 1049090;
      LODWORD(v14) = size;
      config->header = (wil_details_StagingConfigHeader *)v9;
      v19 = (wil_details_StagingConfigFeature *)&v9[*((unsigned __int16 *)v9 + 1)];
      config->features = v19;
      config->triggers = (wil_details_StagingConfigUsageTrigger *)&v19[*((unsigned __int16 *)v9 + 2)];
    }
    config->bufferSize = (unsigned int)v14;
    if ( PoolWithTag )
      v7 = v10;
    config->buffer = v9;
    config->bufferAlloc = v7;
    LOBYTE(v6) = v9 == PoolWithTag;
    result = 0LL;
    config->bufferOwned = v6;
  }
  return result;
}

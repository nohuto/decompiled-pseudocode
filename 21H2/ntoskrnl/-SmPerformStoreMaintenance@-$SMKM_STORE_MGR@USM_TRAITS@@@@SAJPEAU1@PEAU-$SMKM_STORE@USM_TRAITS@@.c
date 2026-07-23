/*
 * XREFs of ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1402A06C8
 * Callers:
 *     ?SmSwapStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x1402A1084 (-SmSwapStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_SM_STORE_.c)
 * Callees:
 *     ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1402A07C4 (-SmStoreRequest@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_I.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmPerformStoreMaintenance(int a1, __int64 a2, unsigned __int8 a3)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rbx
  int v8; // r8d
  int v9; // eax
  int v10; // edx
  ULONG LowPart; // edi
  LARGE_INTEGER v13[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v15; // [rsp+42h] [rbp-1Eh]
  int v16; // [rsp+44h] [rbp-1Ch]
  _QWORD v17[3]; // [rsp+48h] [rbp-18h] BYREF

  *(_OWORD *)&v13[0].LowPart = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return (ULONG)-1073741670;
  v8 = (int)PoolWithTag;
  *(_OWORD *)PoolWithTag = 0LL;
  *((_OWORD *)PoolWithTag + 1) = 0LL;
  *((_QWORD *)PoolWithTag + 4) = 0LL;
  v9 = PoolWithTag[2];
  *v7 = 5;
  v7[2] ^= (a3 ^ (unsigned __int8)v9) & 7;
  v10 = *(_DWORD *)(a2 + 6016);
  Object = 0;
  v16 = 0;
  v17[1] = v17;
  v17[0] = v17;
  v15 = 6;
  LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(a1, v10, v8, (unsigned int)&Object, (__int64)v13);
  if ( (LowPart & 0x80000000) == 0 )
  {
    v7 = 0LL;
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    LowPart = v13[0].LowPart;
    if ( (v13[0].LowPart & 0x80000000) != 0 )
      return LowPart;
    LowPart = 0;
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return LowPart;
}

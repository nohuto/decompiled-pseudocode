/*
 * XREFs of ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059DD34
 * Callers:
 *     SmEtwEnableCallback @ 0x1407B7F50 (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeWaitForSingleObject @ 0x14021B560 (KeWaitForSingleObject.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140256E28 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x14033B614 (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown(__int64 a1, __int64 a2)
{
  _OWORD *PoolWithTag; // rax
  __int64 v5; // rcx
  void *v6; // rbx
  int LowPart; // edi
  struct _EX_RUNDOWN_REF *v8; // rax
  LARGE_INTEGER v10[2]; // [rsp+30h] [rbp-30h] BYREF
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v12; // [rsp+42h] [rbp-1Eh]
  int v13; // [rsp+44h] [rbp-1Ch]
  _QWORD v14[3]; // [rsp+48h] [rbp-18h] BYREF

  Object = 0;
  v13 = 0;
  v14[1] = v14;
  v12 = 6;
  v14[0] = v14;
  *(_OWORD *)&v10[0].LowPart = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x64576D73u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0LL;
    PoolWithTag[1] = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_DWORD *)PoolWithTag + 2) = -1;
    *(_DWORD *)PoolWithTag = 3;
    LowPart = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v5, a2, (unsigned __int64)PoolWithTag, (__int64)&Object, v10);
    if ( LowPart >= 0 )
    {
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      LowPart = v10[0].LowPart;
      a2 = 0LL;
      v6 = 0LL;
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0);
  }
  else
  {
    LowPart = -1073741670;
  }
  if ( a2 )
  {
    v8 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
    ExReleaseRundownProtection_0(v8 + 1);
  }
  return (unsigned int)LowPart;
}

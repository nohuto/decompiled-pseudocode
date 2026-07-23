/*
 * XREFs of ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140599580
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     SmKmStoreReferenceEx @ 0x14028A8EC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x1403FAC40 (ZwQuerySystemInformation.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140599834 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogWorker(__int64 a1)
{
  __int64 v1; // r14
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned int v5; // esi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  struct _EX_RUNDOWN_REF *v9; // rax
  unsigned __int64 v10; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v11[3]; // [rsp+28h] [rbp-60h] BYREF
  __int64 v12; // [rsp+58h] [rbp-30h]

  v1 = a1 - 1800;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( ZwQuerySystemInformation(SystemMemoryUsageInformation, v11, 0x38u, 0LL) >= 0 )
  {
    v4 = 128000LL;
    v5 = 0;
    if ( *(_QWORD *)&v11[0] <= 0x51400000uLL )
      v4 = 15360LL;
    v6 = 3 * (*(_QWORD *)&v11[0] / 0x14000uLL);
    if ( v6 >= v4 )
      v6 = v4;
    v10 = v6;
    do
    {
      v7 = SmKmStoreReferenceEx(v1, v5, v3);
      v8 = v7;
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 6023) != 1 )
          SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(v7, &v10);
        v9 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v1, *(_DWORD *)(v8 + 6016) & 0x3FF);
        ExReleaseRundownProtection(v9 + 1);
      }
      ++v5;
    }
    while ( v5 < 0x400 );
  }
  _InterlockedExchange64((volatile __int64 *)(a1 + 24), 0LL);
}

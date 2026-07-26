/*
 * XREFs of ndisNdkPcwRemoveCounter @ 0x1C0120C78
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0120A30 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00FECFC (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C0120A80 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 */

__int64 __fastcall ndisNdkPcwRemoveCounter(__int64 a1)
{
  char v2; // r8
  struct _NDIS_NDK_BLOCK *v3; // rbx
  struct _NDIS_NDK_BLOCK **v4; // rsi
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  const struct _UNICODE_STRING *pModifiedInstanceName; // rdx
  unsigned __int8 v7; // al
  struct _NDIS_NDK_BLOCK *v8; // rax
  KLockHolder v10; // [rsp+20h] [rbp-28h] BYREF

  v10.m_State = Unlocked;
  v10.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v10.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v10);
  v3 = NdkPcwNdkBlockList;
  v4 = &NdkPcwNdkBlockList;
  while ( v3 )
  {
    v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v3 + 1);
    pModifiedInstanceName = v5->pModifiedInstanceName;
    if ( !pModifiedInstanceName )
      pModifiedInstanceName = v5->pAdapterInstanceName;
    if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), pModifiedInstanceName, v2)
      && (v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1)) != 0
      && (*((_DWORD *)v3 + 4) -= v7, *((int *)v3 + 4) <= 0) )
    {
      v8 = *(struct _NDIS_NDK_BLOCK **)v3;
      *((_DWORD *)v3 + 4) = 0;
      *v4 = v8;
      *(_QWORD *)v3 = 0LL;
      *((_QWORD *)v3 + 1) = 0LL;
      v3 = *v4;
      ndisDereferenceMiniport(v5, 0x5Du);
    }
    else
    {
      v4 = (struct _NDIS_NDK_BLOCK **)v3;
      v3 = *(struct _NDIS_NDK_BLOCK **)v3;
    }
  }
  KLockHolder::~KLockHolder(&v10);
  return 0LL;
}

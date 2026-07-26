/*
 * XREFs of ndisNdkPcwAddCounter @ 0x1C0098EFC
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0120A40 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012D38 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00FECFC (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C011EE6C (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C0120A90 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 */

__int64 __fastcall ndisNdkPcwAddCounter(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL i; // di
  const struct _UNICODE_STRING *MiniportName; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  int v8; // esi
  _DWORD *NDKBlock; // rdi
  int v10; // ecx
  KLockHolder v12; // [rsp+20h] [rbp-28h] BYREF

  v12.m_State = Unlocked;
  v12.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v12.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v12);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  for ( i = v2; v3; v3 = v3->NextGlobalMiniport )
  {
    if ( v3->NDKBlock && ndisReferenceMiniport(v3, 0x5Cu) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, i);
      MiniportName = ndisPcwGetMiniportName(v3);
      if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), MiniportName, v6) )
      {
        v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1);
        v8 = v7;
        if ( v7 )
        {
          NDKBlock = v3->NDKBlock;
          v10 = NDKBlock[4];
          if ( v10 )
          {
            if ( v10 < 0x7FFFFFFF - v7 )
              NDKBlock[4] = v7 + v10;
          }
          else if ( ndisReferenceMiniport(v3, 0x5Du) )
          {
            *((_QWORD *)NDKBlock + 1) = v3;
            NDKBlock[4] = v8;
            NDKBlock[5] = v3->IfBlock->ifIndex;
            *(_QWORD *)NDKBlock = NdkPcwNdkBlockList;
            NdkPcwNdkBlockList = (struct _NDIS_NDK_BLOCK *)NDKBlock;
          }
        }
      }
      i = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport(v3, 0x5Cu);
    }
  }
  KeReleaseSpinLock(&ndisMiniportListLock, i);
  KLockHolder::~KLockHolder(&v12);
  return 0LL;
}

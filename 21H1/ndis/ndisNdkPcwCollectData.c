/*
 * XREFs of ndisNdkPcwCollectData @ 0x1C0120AA0
 * Callers:
 *     ?ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z @ 0x1C0120A30 (-ndisNdkPcwProviderCallback@@YAJW4_PCW_CALLBACK_TYPE@@PEAT_PCW_CALLBACK_INFORMATION@@PEAX@Z.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ndisNdkPcwCollectMiniportStats @ 0x1C0120B3C (ndisNdkPcwCollectMiniportStats.c)
 */

__int64 __fastcall ndisNdkPcwCollectData(__int64 a1)
{
  int v2; // edi
  struct _NDIS_NDK_BLOCK *i; // rbx
  int v4; // eax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v6.m_Region.m_Entered = 0;
  v2 = -1073741823;
  KLockHolder::AcquireExclusive(&v6);
  for ( i = NdkPcwNdkBlockList; i; i = *(struct _NDIS_NDK_BLOCK **)i )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( v4 == -1 )
    {
      v2 = ndisNdkPcwCollectMiniportStats(i, *(_QWORD *)(a1 + 24));
      if ( v2 < 0 )
        break;
    }
    else if ( v4 == *((_DWORD *)i + 5) )
    {
      v2 = ndisNdkPcwCollectMiniportStats(i, *(_QWORD *)(a1 + 24));
      break;
    }
  }
  KLockHolder::~KLockHolder(&v6);
  return (unsigned int)v2;
}

/*
 * XREFs of ?ndisNdkPcwMiniportCleanup@@YAXPEAX@Z @ 0x1C0120990
 * Callers:
 *     ?ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0137C08 (-ndisMCommonHaltMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006C9C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C0109B2C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 */

void __fastcall ndisNdkPcwMiniportCleanup(struct _NDIS_NDK_BLOCK *a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rax
  struct _NDIS_NDK_BLOCK **v3; // rdx
  struct _NDIS_NDK_BLOCK *v4; // rcx
  struct _NDIS_MINIPORT_BLOCK *v5; // rbx
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)&ndisPcwMutex;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  if ( *((_DWORD *)a1 + 4) )
  {
    v2 = NdkPcwNdkBlockList;
    v3 = &NdkPcwNdkBlockList;
    if ( NdkPcwNdkBlockList )
    {
      while ( 1 )
      {
        v4 = *(struct _NDIS_NDK_BLOCK **)v2;
        if ( v2 == a1 )
          break;
        v3 = (struct _NDIS_NDK_BLOCK **)v2;
        v2 = *(struct _NDIS_NDK_BLOCK **)v2;
        if ( !v4 )
          goto LABEL_7;
      }
      *v3 = v4;
      *(_QWORD *)v2 = 0LL;
    }
LABEL_7:
    if ( v2 == a1 )
    {
      v5 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 1) = 0LL;
      *((_DWORD *)a1 + 4) = 0;
      KLockHolder::ReleaseExclusive(&v6);
      ndisDereferenceMiniport(v5, 0x5Du);
    }
  }
  KLockHolder::~KLockHolder(&v6);
}

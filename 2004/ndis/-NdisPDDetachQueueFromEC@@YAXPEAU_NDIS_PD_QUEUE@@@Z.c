/*
 * XREFs of ?NdisPDDetachQueueFromEC@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C011A3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z @ 0x1C011D160 (-ndisPDDetachQueueFromECInternal@@YAXPEAUNDIS_PD_QUEUE_TRACKER@@@Z.c)
 */

void __fastcall NdisPDDetachQueueFromEC(struct _NDIS_PD_QUEUE *a1)
{
  struct NDIS_PD_QUEUE_TRACKER *v1; // rbx
  KLockHolder v2; // [rsp+20h] [rbp-28h] BYREF

  v1 = (struct NDIS_PD_QUEUE_TRACKER *)a1->PDPlatformReserved[1];
  if ( *((_QWORD *)v1 + 33) )
  {
    v2.m_State = Unlocked;
    v2.m_Region.m_Entered = 0;
    v2.m_Lock = (KPushLockBase *)qword_1C00E4538;
    KLockHolder::AcquireExclusive(&v2);
    ndisPDDetachQueueFromECInternal(v1);
    KLockHolder::~KLockHolder(&v2);
  }
}

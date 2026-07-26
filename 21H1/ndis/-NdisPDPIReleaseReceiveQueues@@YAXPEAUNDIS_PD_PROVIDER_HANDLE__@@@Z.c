/*
 * XREFs of ?NdisPDPIReleaseReceiveQueues@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C011B800
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z @ 0x1C011C3AC (-ndisCleanupPDRSSObjects@@YAXPEAUNDIS_PD_ASSOCIATION@@PEAU_LIST_ENTRY@@1@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C011C554 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 */

void __fastcall NdisPDPIReleaseReceiveQueues(struct NDIS_PD_PROVIDER_HANDLE__ *a1)
{
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rbx
  struct _LIST_ENTRY v2; // [rsp+30h] [rbp-40h] BYREF
  struct _LIST_ENTRY v3; // [rsp+40h] [rbp-30h] BYREF
  KLockHolder v4; // [rsp+50h] [rbp-20h] BYREF

  for ( i = a1; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x28u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      i);
  v3.Blink = &v3;
  v3.Flink = &v3;
  v2.Blink = &v2;
  v2.Flink = &v2;
  ndisCleanupPDRSSObjects((struct NDIS_PD_ASSOCIATION *)i, &v3, &v2);
  (*(void (__fastcall **)(_QWORD))(*((_QWORD *)i + 10) + 32LL))(*((_QWORD *)i + 9));
  ndisFreePDRSSObjects(&v3, &v2);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00E43F8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  *((_BYTE *)i + 89) = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x29u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      i);
  KLockHolder::~KLockHolder(&v4);
}

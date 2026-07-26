/*
 * XREFs of ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C011A570
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C0119294 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeMemory(struct PD_MEMORY_HANDLE__ *a1)
{
  __int64 v2; // rcx
  struct PD_MEMORY_HANDLE__ **v3; // rax
  KLockHolder v4; // [rsp+30h] [rbp-28h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x58u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00E43F8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = *(_QWORD *)a1;
  if ( *(struct PD_MEMORY_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v3 = (struct PD_MEMORY_HANDLE__ **)*((_QWORD *)a1 + 1), *v3 != a1) )
  {
    __fastfail(3u);
  }
  *v3 = (struct PD_MEMORY_HANDLE__ *)v2;
  *(_QWORD *)(v2 + 8) = v3;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v4);
  NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(a1);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x59u,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
}

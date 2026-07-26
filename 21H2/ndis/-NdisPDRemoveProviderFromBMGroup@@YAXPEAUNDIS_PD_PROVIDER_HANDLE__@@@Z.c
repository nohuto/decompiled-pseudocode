/*
 * XREFs of ?NdisPDRemoveProviderFromBMGroup@@YAXPEAUNDIS_PD_PROVIDER_HANDLE__@@@Z @ 0x1C011BD90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDF40 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE410 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDRemoveProviderFromBMGroup(struct NDIS_PD_PROVIDER_HANDLE__ *a1)
{
  struct NDIS_PD_PROVIDER_HANDLE__ *i; // rbx
  _QWORD *v3; // rdx
  __int64 v4; // rcx
  _QWORD *v5; // rax
  KLockHolder v6; // [rsp+30h] [rbp-28h] BYREF

  for ( i = a1; *((_BYTE *)i + 88); i = (struct NDIS_PD_PROVIDER_HANDLE__ *)*((_QWORD *)i + 9) )
    ;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x4Bu,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
  v6.m_State = Unlocked;
  v6.m_Lock = (KPushLockBase *)qword_1C00E44F8;
  v6.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v6);
  v3 = i + 4;
  v4 = *((_QWORD *)i + 2);
  if ( !v4 )
    ndisBugCheckEx(0x23uLL, 6uLL, 0LL, (ULONG_PTR)a1);
  if ( v4 == *((_QWORD *)i + 3) && *(_QWORD *)(v4 - 24 + 40) != v4 - 24 + 40 )
    ndisBugCheckEx(0x23uLL, 6uLL, v4 - 24, *(_QWORD *)(*(_QWORD *)(v4 - 24 + 16) + 80LL));
  if ( *(_QWORD **)(v4 + 8) != v3 || (v5 = (_QWORD *)*((_QWORD *)i + 3), (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  *v3 = 0LL;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x4Cu,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      a1);
  KLockHolder::~KLockHolder(&v6);
}

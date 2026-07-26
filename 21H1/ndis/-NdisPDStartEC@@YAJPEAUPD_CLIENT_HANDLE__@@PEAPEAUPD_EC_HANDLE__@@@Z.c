/*
 * XREFs of ?NdisPDStartEC@@YAJPEAUPD_CLIENT_HANDLE__@@PEAPEAUPD_EC_HANDLE__@@@Z @ 0x1C011BF10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqd @ 0x1C0017030 (WPP_RECORDER_SF_qqqd.c)
 *     memset @ 0x1C003F6C0 (memset.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GNDIS_PD_EC@@QEAAPEAXI@Z @ 0x1C011920C (--_GNDIS_PD_EC@@QEAAPEAXI@Z.c)
 *     ?ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z @ 0x1C011D38C (-ndisPcwGetECInstanceName@@YAJPEAXKPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall NdisPDStartEC(struct PD_CLIENT_HANDLE__ *a1, struct PD_EC_HANDLE__ **a2)
{
  char *PoolWithTag; // rax
  int v5; // edx
  char *v6; // rbx
  int ECInstanceName; // edi
  unsigned int CurrentThreadId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct PD_CLIENT_HANDLE__ **v10; // rcx
  KLockHolder v12; // [rsp+50h] [rbp-38h] BYREF

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Au,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      KeGetCurrentThread());
  *a2 = 0LL;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0xA0uLL, 0x6541444Eu);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_DWORD *)PoolWithTag + 34) = 0;
    *((_QWORD *)PoolWithTag + 18) = 0LL;
    *((_QWORD *)PoolWithTag + 19) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *(_QWORD *)PoolWithTag = 0LL;
    *(_OWORD *)(PoolWithTag + 40) = 0LL;
    *((_WORD *)PoolWithTag + 21) = 0;
    *((_QWORD *)PoolWithTag + 6) = 0LL;
    memset(PoolWithTag + 56, 0, 0x40uLL);
    *((_QWORD *)v6 + 16) = v6 + 120;
    *((_QWORD *)v6 + 15) = v6 + 120;
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    *((_QWORD *)v6 + 2) = a1;
    CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
    *((_DWORD *)v6 + 8) = CurrentThreadId;
    ECInstanceName = ndisPcwGetECInstanceName(*((void **)a1 + 10), CurrentThreadId, (struct _UNICODE_STRING *)(v6 + 40));
    if ( ECInstanceName < 0 )
    {
      NDIS_PD_EC::`scalar deleting destructor'(v6);
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *((_QWORD *)v6 + 3) = CurrentThread;
      ObfReferenceObject(CurrentThread);
      v12.m_Lock = (KPushLockBase *)qword_1C00E43F8;
      v12.m_State = Unlocked;
      v12.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v12);
      v10 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 7);
      if ( *v10 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 48) )
        __fastfail(3u);
      *((_QWORD *)v6 + 1) = v10;
      *(_QWORD *)v6 = (char *)a1 + 48;
      *v10 = (struct PD_CLIENT_HANDLE__ *)v6;
      *((_QWORD *)a1 + 7) = v6;
      KLockHolder::~KLockHolder(&v12);
      *a2 = (struct PD_EC_HANDLE__ *)v6;
      ECInstanceName = 0;
    }
  }
  else
  {
    ECInstanceName = -1073741670;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      0x1Du,
      0x5Bu,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      (char)KeGetCurrentThread(),
      (char)*a2,
      ECInstanceName);
  return (unsigned int)ECInstanceName;
}

/*
 * XREFs of ?NdisPDCreateQueue@@YAJPEAUPD_CLIENT_HANDLE__@@KEPEAU_KEVENT@@1PEAPEAUPD_QUEUE_HANDLE__@@@Z @ 0x1C011A0E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqd @ 0x1C0015380 (WPP_RECORDER_SF_qqd.c)
 *     memset @ 0x1C003FE40 (memset.c)
 *     WPP_RECORDER_SF_qddqq @ 0x1C007EE80 (WPP_RECORDER_SF_qddqq_ea_1C007EE80.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDCreateQueue(
        struct PD_CLIENT_HANDLE__ *a1,
        __int64 a2,
        __int64 a3,
        struct _KEVENT *a4,
        struct _KEVENT *a5,
        struct PD_QUEUE_HANDLE__ **Size)
{
  char v7; // r12
  unsigned int v8; // esi
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int v14; // ecx
  _DWORD *PoolWithTag; // rax
  _DWORD *v16; // rdi
  struct PD_CLIENT_HANDLE__ **v17; // rcx
  int v19; // [rsp+20h] [rbp-78h]
  KLockHolder v20; // [rsp+50h] [rbp-48h] BYREF
  size_t Sizea; // [rsp+C8h] [rbp+30h]

  v7 = a3;
  v8 = a2;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qddqq(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, (__int64)a4, v19);
  v11 = 0;
  *Size = 0LL;
  if ( v8 > 0x7FFFFFFF || (v12 = v8 + 1, ((unsigned int)v12 & v8) != 0) )
  {
    v11 = -1073741811;
  }
  else
  {
    v13 = 8 * v12;
    if ( v13 > 0xFFFFFFFF || (v14 = v13 + 192, (int)v13 + 192 < (unsigned int)v13) )
    {
      v11 = -1073741675;
    }
    else
    {
      Sizea = v14;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x7141444Eu);
      v16 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, Sizea);
        v20.m_Lock = (KPushLockBase *)qword_1C00E4538;
        v16[13] = v8;
        *((_BYTE *)v16 + 24) = v7;
        *((_QWORD *)v16 + 4) = a5;
        *((_QWORD *)v16 + 5) = a4;
        *((_QWORD *)v16 + 2) = a1;
        v20.m_State = Unlocked;
        v20.m_Region.m_Entered = 0;
        KLockHolder::AcquireExclusive(&v20);
        v17 = (struct PD_CLIENT_HANDLE__ **)*((_QWORD *)a1 + 9);
        if ( *v17 != (struct PD_CLIENT_HANDLE__ *)((char *)a1 + 64) )
          __fastfail(3u);
        *((_QWORD *)v16 + 1) = v17;
        *(_QWORD *)v16 = (char *)a1 + 64;
        *v17 = (struct PD_CLIENT_HANDLE__ *)v16;
        *((_QWORD *)a1 + 9) = v16;
        KLockHolder::~KLockHolder(&v20);
        *Size = (struct PD_QUEUE_HANDLE__ *)v16;
      }
      else
      {
        v11 = -1073741670;
      }
    }
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Du,
      0x5Fu,
      (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
      (char)a1,
      (char)*Size,
      v11);
  return v11;
}

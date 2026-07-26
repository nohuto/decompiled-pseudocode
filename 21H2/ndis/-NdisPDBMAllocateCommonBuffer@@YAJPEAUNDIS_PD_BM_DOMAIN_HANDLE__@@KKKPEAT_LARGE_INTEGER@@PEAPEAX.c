/*
 * XREFs of ?NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C011D990
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     WPP_RECORDER_SF_dqd @ 0x1C007FBF8 (WPP_RECORDER_SF_dqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDF40 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE410 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAllocateCommonBuffer(
        KPushLockBase *a1,
        int a2,
        int a3,
        unsigned int a4,
        union _LARGE_INTEGER *a5,
        void **a6)
{
  size_t v9; // rsi
  int v10; // ebx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *Value; // rbx
  void *ContiguousNodeMemory; // rax
  void *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v20; // [rsp+20h] [rbp-68h]
  KLockHolder v21; // [rsp+50h] [rbp-38h] BYREF

  v21.m_State = Unlocked;
  v21.m_Lock = a1;
  a5->QuadPart = 0LL;
  *a6 = 0LL;
  v9 = a4;
  v21.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v21);
  if ( a2 )
  {
    v10 = -1073741811;
  }
  else
  {
    Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1[1].m_Lock.Value;
    if ( Value == (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1] )
    {
      v10 = -1073741436;
    }
    else if ( *((_BYTE *)&a1[3].m_Lock.0 + 1) )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v9, 0LL, -1LL, 0x200000LL, 4, a3);
      v13 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        memset(ContiguousNodeMemory, 0, v9);
        *a6 = v13;
        ++HIDWORD(a1[3].m_Lock.Ptr);
        v10 = 0;
      }
      else
      {
        v10 = -1073741670;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            0xEu,
            (struct _GUID *)&WPP_3bbfe1de014a323815521749d409ee95_Traceguids,
            v9,
            a1);
      }
    }
    else
    {
      v14 = *((_QWORD *)Value + 3);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 264LL))(v14);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _QWORD, int, union _LARGE_INTEGER *, void **))(*(_QWORD *)(v14 + 8) + 232LL))(
              v14,
              v15,
              0LL,
              (unsigned int)v9,
              1,
              0LL,
              a3,
              a5,
              a6);
      if ( v10 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_dqd(*((_QWORD *)WPP_GLOBAL_Control + 8), v16, v17, v18, v20);
      }
      else
      {
        memset(*a6, 0, v9);
        ++HIDWORD(a1[3].m_Lock.Ptr);
      }
    }
  }
  KLockHolder::~KLockHolder(&v21);
  return (unsigned int)v10;
}

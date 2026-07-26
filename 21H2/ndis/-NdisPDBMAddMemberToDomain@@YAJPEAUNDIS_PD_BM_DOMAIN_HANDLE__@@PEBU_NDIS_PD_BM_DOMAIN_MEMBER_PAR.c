/*
 * XREFs of ?NdisPDBMAddMemberToDomain@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@PEBU_NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS@@PEAPEAUNDIS_PD_BM_DOMAIN_MEMBER_HANDLE__@@@Z @ 0x1C00FF490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     __security_check_cookie @ 0x1C003DA60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00403C0 (memset.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDF40 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE410 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAddMemberToDomain(
        KPushLockBase *a1,
        const struct _NDIS_PD_BM_DOMAIN_MEMBER_PARAMETERS *a2,
        struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **a3)
{
  void *MiniportAdapterContext; // r13
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **v5; // rbx
  struct _DMA_ADAPTER *v6; // r14
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v7; // r12
  __int64 v9; // rdi
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **PoolWithTag; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *v11; // rsi
  char v12; // al
  int v13; // eax
  _DEVICE_OBJECT *v14; // rcx
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct NDIS_PD_BM_DOMAIN_HANDLE__ **Value; // rax
  int v17; // edi
  _DMA_OPERATIONS *DmaOperations; // r12
  unsigned __int16 v20; // r9
  __int64 v21; // rax
  ULONG NumberOfMapRegisters; // [rsp+40h] [rbp-59h] BYREF
  struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ **v23; // [rsp+48h] [rbp-51h]
  KLockHolder v24; // [rsp+50h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+70h] [rbp-29h] BYREF

  MiniportAdapterContext = a2->MiniportAdapterContext;
  v24.m_Lock = a1;
  *a3 = 0LL;
  v5 = 0LL;
  v24.m_State = Unlocked;
  v6 = 0LL;
  v24.m_Region.m_Entered = 0;
  v7 = a3;
  v23 = a3;
  KLockHolder::AcquireExclusive(&v24);
  if ( a2->Header.Type != 0x80 || a2->Header.Revision != 1 || a2->Header.Size < 0x10u || a2->Flags )
  {
    v17 = -1073741811;
    goto LABEL_40;
  }
  v9 = *((_QWORD *)MiniportAdapterContext + 684);
  PoolWithTag = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x6D41444Eu);
  v5 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[2] = 0LL;
    PoolWithTag[3] = 0LL;
    PoolWithTag[1] = 0LL;
    *PoolWithTag = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  if ( !v5 )
  {
    v17 = -1073741670;
    goto LABEL_16;
  }
  v11 = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1];
  if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v11 == v11 )
  {
    v12 = *(_BYTE *)(v9 + 14);
    *((_BYTE *)&a1[3].m_Lock.0 + 1) = v12;
    goto LABEL_10;
  }
  if ( a1[3].m_Lock.0 )
  {
    v17 = -1073741808;
  }
  else
  {
    v12 = *((_BYTE *)&a1[3].m_Lock.0 + 1);
    if ( v12 == *(_BYTE *)(v9 + 14) )
    {
LABEL_10:
      if ( v12 )
      {
LABEL_14:
        Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ **)a1[2].m_Lock.Value;
        if ( *Value != v11 )
          __fastfail(3u);
        *v5 = v11;
        v17 = 0;
        v5[1] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)Value;
        *Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v5;
        a1[2].m_Lock.Value = (unsigned __int64)v5;
        v5[2] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1;
        *v7 = (struct NDIS_PD_BM_DOMAIN_MEMBER_HANDLE__ *)v5;
        goto LABEL_16;
      }
      memset(DeviceDescription, 0, sizeof(DeviceDescription));
      v13 = *(_DWORD *)(v9 + 20);
      v14 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterContext + 479);
      NumberOfMapRegisters = 0;
      *(_DWORD *)&DeviceDescription[20] = -1;
      *(_DWORD *)&DeviceDescription[40] = v13;
      *(_DWORD *)DeviceDescription = 3;
      *(_WORD *)&DeviceDescription[4] = 257;
      *(_DWORD *)&DeviceDescription[32] = 0x20000;
      DmaAdapter = IoGetDmaAdapter(v14, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
      v6 = DmaAdapter;
      if ( !DmaAdapter )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            0xAu,
            (struct _GUID *)&WPP_3bbfe1de014a323815521749d409ee95_Traceguids,
            MiniportAdapterContext);
        v17 = -1073741823;
        goto LABEL_42;
      }
      if ( a1[3].m_Lock.0 )
      {
LABEL_13:
        v5[3] = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)v6;
        goto LABEL_14;
      }
      DmaOperations = DmaAdapter->DmaOperations;
      v17 = DmaOperations->LeaveDmaDomain(DmaAdapter);
      if ( v17 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED )
          goto LABEL_40;
        v20 = 11;
        goto LABEL_29;
      }
      if ( *(struct NDIS_PD_BM_DOMAIN_HANDLE__ **)v11 == v11 )
      {
        v17 = DmaOperations->JoinDmaDomain(v6, (void *)-1LL);
        if ( v17 < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v20 = 12;
LABEL_29:
            WPP_RECORDER_SF_qd(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              0x1Du,
              v20,
              (struct _GUID *)&WPP_3bbfe1de014a323815521749d409ee95_Traceguids,
              (char)MiniportAdapterContext,
              v17);
            goto LABEL_40;
          }
          goto LABEL_40;
        }
      }
      else
      {
        v21 = (*(__int64 (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 24LL) + 8LL) + 264LL))();
        v17 = DmaOperations->JoinDmaDomain(v6, (void *)v21);
        if ( v17 < 0 )
        {
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            v20 = 13;
            goto LABEL_29;
          }
LABEL_40:
          if ( v6 )
            v6->DmaOperations->PutDmaAdapter(v6);
          goto LABEL_42;
        }
      }
      v7 = v23;
      goto LABEL_13;
    }
    v17 = -1073740007;
  }
LABEL_42:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x6D41444Eu);
LABEL_16:
  KLockHolder::~KLockHolder(&v24);
  return (unsigned int)v17;
}

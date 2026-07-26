/*
 * XREFs of ?ndisPDInitializeMiniportBufferManagement@@YAJPEAU_NDIS_PD_BLOCK@@@Z @ 0x1C00FF1DC
 * Callers:
 *     ?ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z @ 0x1C00FF0B0 (-ndisMSetPacketDirectAttributes@@YAHPEAXPEBT_NDIS_MINIPORT_ADAPTER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C000E000 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B820 (WPP_RECORDER_SF_qqLd.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDF40 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE410 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C0109B8C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ @ 0x1C0119324 (-Deref@NDIS_PD_BM_DOMAIN@@QEAAXXZ.c)
 *     ?ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z @ 0x1C011D1A0 (-ndisPDFindAndReferenceBMDomainUnderLock@@YAPEAUNDIS_PD_BM_DOMAIN@@K@Z.c)
 *     ?ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z @ 0x1C011D588 (-ndisPdAreBMsCompatible@@YAEPEBU_NDIS_PD_BLOCK@@PEBUNDIS_PD_BM_DOMAIN@@@Z.c)
 */

__int64 __fastcall ndisPDInitializeMiniportBufferManagement(struct _NDIS_PD_BLOCK *a1)
{
  __int64 v2; // rax
  char *PoolWithTag; // rax
  const struct NDIS_PD_BM_DOMAIN *v4; // rbx
  _QWORD *v5; // rax
  void (*v6)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *); // rax
  int v7; // edi
  unsigned int v8; // ecx
  __int64 *v9; // rcx
  __int64 v10; // rax
  __int64 **v11; // rdx
  int v12; // ecx
  const struct NDIS_PD_BM_DOMAIN **v13; // rdx
  const struct NDIS_PD_BM_DOMAIN *v14; // rax
  const struct NDIS_PD_BM_DOMAIN *v16; // rax
  _QWORD *v17; // rcx
  const struct NDIS_PD_BM_DOMAIN *v18; // rdi
  __int128 v19; // [rsp+50h] [rbp-30h] BYREF
  KLockHolder v20; // [rsp+60h] [rbp-20h] BYREF
  int v21; // [rsp+A0h] [rbp+20h] BYREF
  int v22; // [rsp+A4h] [rbp+24h]

  *(_QWORD *)((char *)&v19 + 1) = 0LL;
  *(_DWORD *)((char *)&v19 + 9) = 0;
  *(_WORD *)((char *)&v19 + 13) = 0;
  HIBYTE(v19) = 0;
  v2 = *(_QWORD *)a1;
  LODWORD(v19) = 1048960;
  if ( *((_BYTE *)a1 + 13) )
    v2 = *(_QWORD *)(v2 + 24);
  *((_QWORD *)&v19 + 1) = v2;
  if ( *((_DWORD *)a1 + 4) )
  {
    v20.m_Lock = (KPushLockBase *)qword_1C00E44F8;
    v20.m_State = Unlocked;
    v20.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v20);
    v16 = ndisPDFindAndReferenceBMDomainUnderLock(*((_DWORD *)a1 + 4));
    v4 = v16;
    if ( v16 && !ndisPdAreBMsCompatible(a1, v16) )
      goto LABEL_27;
    KLockHolder::~KLockHolder(&v20);
    if ( v4 )
    {
LABEL_16:
      v12 = (*((__int64 (__fastcall **)(_QWORD, __int128 *, char *))v4 + 8))(*((_QWORD *)v4 + 4), &v19, (char *)a1 + 80);
      if ( v12 < 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqLd(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0x1Du,
            0xEu,
            (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
            *(_QWORD *)a1,
            (char)v4,
            *((_DWORD *)v4 + 6),
            v12);
        v7 = -1073740007;
        goto LABEL_21;
      }
      v20.m_Lock = (KPushLockBase *)qword_1C00E44F8;
      v20.m_State = Unlocked;
      v20.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v20);
      *((_QWORD *)a1 + 9) = v4;
      v13 = (const struct NDIS_PD_BM_DOMAIN **)*((_QWORD *)v4 + 6);
      v14 = (struct _NDIS_PD_BLOCK *)((char *)a1 + 56);
      if ( *v13 == (const struct NDIS_PD_BM_DOMAIN *)((char *)v4 + 40) )
      {
        *(_QWORD *)v14 = (char *)v4 + 40;
        *((_QWORD *)a1 + 8) = v13;
        *v13 = v14;
        *((_QWORD *)v4 + 6) = v14;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0x1Du,
            0xFu,
            (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
            *(_QWORD *)a1,
            (char)v4,
            *((_DWORD *)v4 + 6));
        KLockHolder::~KLockHolder(&v20);
        v7 = 0;
        goto LABEL_21;
      }
LABEL_42:
      __fastfail(3u);
    }
  }
  v22 = 0;
  v21 = 524672;
  if ( !*((_DWORD *)a1 + 4) )
    v22 |= 1u;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x68uLL, 0x6D41444Eu);
  v4 = (const struct NDIS_PD_BM_DOMAIN *)PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 1;
    *((_DWORD *)PoolWithTag + 6) = 0;
    *((_QWORD *)PoolWithTag + 4) = 0LL;
    *((_QWORD *)PoolWithTag + 7) = 0LL;
    *((_QWORD *)PoolWithTag + 8) = 0LL;
    *((_QWORD *)PoolWithTag + 9) = 0LL;
    *((_QWORD *)PoolWithTag + 10) = 0LL;
    *((_QWORD *)PoolWithTag + 11) = 0LL;
    *((_QWORD *)PoolWithTag + 12) = 0LL;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    v5 = PoolWithTag + 40;
    v5[1] = v5;
    *v5 = v5;
  }
  else
  {
    v4 = 0LL;
  }
  if ( !v4 )
    return (unsigned int)-1073741670;
  if ( *((_BYTE *)a1 + 13) )
  {
    v17 = *(_QWORD **)(*(_QWORD *)a1 + 3760LL);
    *((_QWORD *)v4 + 7) = v17[143];
    *((_QWORD *)v4 + 8) = v17[144];
    *((_QWORD *)v4 + 9) = v17[145];
    *((_QWORD *)v4 + 10) = v17[146];
    *((_QWORD *)v4 + 11) = v17[147];
    v6 = (void (*)(struct NDIS_PD_BM_DOMAIN_HANDLE__ *, unsigned int, union _LARGE_INTEGER, void *))v17[148];
  }
  else
  {
    *((_QWORD *)v4 + 7) = NdisPDBMCreateDomain;
    *((_QWORD *)v4 + 8) = NdisPDBMAddMemberToDomain;
    *((_QWORD *)v4 + 9) = NdisPDBMRemoveMemberFromDomain;
    *((_QWORD *)v4 + 10) = NdisPDBMDeleteDomain;
    *((_QWORD *)v4 + 11) = NdisPDBMAllocateCommonBuffer;
    v6 = NdisPDBMFreeCommonBuffer;
  }
  *((_QWORD *)v4 + 12) = v6;
  v7 = (*((__int64 (__fastcall **)(int *, __int64))v4 + 7))(&v21, (__int64)v4 + 32);
  if ( v7 < 0 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0x1Du,
        0xDu,
        (struct _GUID *)&WPP_d7f1c5bdf7553eacbb4cc3ace18bcede_Traceguids,
        *(_QWORD *)a1,
        v7);
    goto LABEL_21;
  }
  v20.m_Lock = (KPushLockBase *)qword_1C00E44F8;
  v20.m_State = Unlocked;
  v20.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v20);
  v8 = *((_DWORD *)a1 + 4);
  if ( !v8 )
    goto LABEL_13;
  v18 = ndisPDFindAndReferenceBMDomainUnderLock(v8);
  if ( !v18 )
  {
    *((_DWORD *)v4 + 6) = *((_DWORD *)a1 + 4);
LABEL_13:
    v9 = (__int64 *)((char *)v4 + 8);
    v10 = qword_1C00E44F8 + 8240;
    v11 = *(__int64 ***)(qword_1C00E44F8 + 8248);
    if ( *v11 != (__int64 *)(qword_1C00E44F8 + 8240) )
      goto LABEL_42;
    *v9 = v10;
    *((_QWORD *)v4 + 2) = v11;
    *v11 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    goto LABEL_15;
  }
  KLockHolder::ReleaseExclusive(&v20);
  NDIS_PD_BM_DOMAIN::Deref(v4);
  v4 = v18;
  if ( ndisPdAreBMsCompatible(a1, v18) )
  {
LABEL_15:
    KLockHolder::~KLockHolder(&v20);
    goto LABEL_16;
  }
LABEL_27:
  v7 = -1073740007;
  KLockHolder::~KLockHolder(&v20);
LABEL_21:
  if ( v4 && v7 < 0 )
    NDIS_PD_BM_DOMAIN::Deref(v4);
  return (unsigned int)v7;
}

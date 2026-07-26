/*
 * XREFs of ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C0102AA8
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002F0E0 (NdisFRegisterFilterDriver.c)
 *     ?BuildFilterLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@PEBU_GUID@@K@Z @ 0x1C01029C0 (-BuildFilterLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@U.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z @ 0x1C010A25C (-ndisBindReadFilterDriverConfiguration@@YA_NPEAUNDIS_BIND_FILTER_DRIVER@@@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C010A510 (-grow@-$KArray@V-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ @ 0x1C010A9D4 (--$allocate@$$V@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAA_NXZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116614 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetFilterDriver(_QWORD *a1, _QWORD *a2, char a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // rsi
  __int64 v11; // rcx
  volatile signed __int32 *v13; // rbx
  struct NDIS_BIND_FILTER_DRIVER *v14; // rcx
  __int64 v15; // rsi
  PVOID v16; // rax
  PVOID v17; // rcx
  volatile signed __int32 *v18; // rax
  bool v19; // zf
  __int64 v20; // [rsp+20h] [rbp-20h]
  KLockHolder v21; // [rsp+28h] [rbp-18h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF

  v21.m_State = Unlocked;
  v21.m_Lock = (KPushLockBase *)qword_1C00E4418;
  v21.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v21);
  v6 = qword_1C00E4418;
  v7 = 0LL;
  v8 = *(unsigned int *)(qword_1C00E4418 + 28);
  v20 = v8;
  while ( v7 != v8 )
  {
    if ( v7 >= *(unsigned int *)(v6 + 28) )
      __fastfail(5u);
    v9 = *(_QWORD *)(*(_QWORD *)(v6 + 32) + 8 * v7);
    v10 = (volatile signed __int32 *)(v9 + 64);
    if ( v9 )
      _InterlockedIncrement(v10);
    v11 = *(_QWORD *)(v9 + 24) - *a2;
    if ( !v11 )
      v11 = *(_QWORD *)(v9 + 32) - a2[1];
    if ( !v11 )
    {
      if ( !a3 || ndisBindReadFilterDriverConfiguration((struct NDIS_BIND_FILTER_DRIVER *)v9) )
      {
        *a1 = v9;
        goto LABEL_15;
      }
      *a1 = 0LL;
      if ( v9 && _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
      {
        v17 = (PVOID)v9;
LABEL_33:
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v17);
        goto LABEL_15;
      }
      goto LABEL_15;
    }
    if ( v9 )
    {
      if ( _InterlockedExchangeAdd(v10, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v9);
    }
    v8 = v20;
    ++v7;
  }
  P = 0LL;
  if ( (unsigned __int8)KRef<NDIS_BIND_FILTER_DRIVER>::allocate<>(&P) )
  {
    v13 = (volatile signed __int32 *)P;
    v14 = (struct NDIS_BIND_FILTER_DRIVER *)P;
    *(_OWORD *)((char *)P + 24) = *(_OWORD *)a2;
    if ( ndisBindReadFilterDriverConfiguration(v14) )
    {
      v15 = qword_1C00E4418;
      if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_FILTER_DRIVER>,1>::grow(
                              qword_1C00E4418 + 24,
                              (unsigned int)(*(_DWORD *)(qword_1C00E4418 + 28) + 1)) )
      {
        *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8LL * *(unsigned int *)(v15 + 28)) = v13;
        _InterlockedIncrement(v13 + 16);
        v16 = P;
        ++*(_DWORD *)(v15 + 28);
        *a1 = v16;
        goto LABEL_15;
      }
      *a1 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v19 = _InterlockedExchangeAdd(v13 + 16, 0xFFFFFFFF) == 1;
  }
  else
  {
    v18 = (volatile signed __int32 *)P;
    *a1 = 0LL;
    if ( !v18 )
      goto LABEL_15;
    v19 = _InterlockedExchangeAdd(v18 + 16, 0xFFFFFFFF) == 1;
  }
  if ( v19 )
  {
    v17 = P;
    goto LABEL_33;
  }
LABEL_15:
  KLockHolder::~KLockHolder(&v21);
  return a1;
}

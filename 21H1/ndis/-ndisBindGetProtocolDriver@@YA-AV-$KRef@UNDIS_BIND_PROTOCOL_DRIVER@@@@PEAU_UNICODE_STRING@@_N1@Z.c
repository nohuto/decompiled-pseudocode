/*
 * XREFs of ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C010308C
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002DE90 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00983F0 (NdisRegisterProtocol.c)
 *     ?BuildProtocolLink@BindStack@Ndis@@AEAA?AV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@PEAU_UNICODE_STRING@@@Z @ 0x1C0102D64 (-BuildProtocolLink@BindStack@Ndis@@AEAA-AV-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_dele.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FDD90 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FE260 (--1KLockHolder@@QEAA@XZ.c)
 *     ??$allocate@$$V@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ @ 0x1C010072C (--$allocate@$$V@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAA_NXZ.c)
 *     ?ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z @ 0x1C0100B98 (-ndisBindReadProtocolDriverConfiguration@@YA_NPEAUNDIS_BIND_PROTOCOL_DRIVER@@_N@Z.c)
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z @ 0x1C0101178 (-Initialize@KString@Rtl@@SAPEAU12@PEBU_UNICODE_STRING@@@Z.c)
 *     ?grow@?$KArray@V?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z @ 0x1C0109D70 (-grow@-$KArray@V-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@$00@Rtl@@AEAA_N_K@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116C10 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

_QWORD *__fastcall ndisBindGetProtocolDriver(_QWORD *a1, const struct _UNICODE_STRING *a2, char a3, char a4)
{
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rsi
  const wchar_t **v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  PVOID v15; // rbx
  struct Rtl::KString *v16; // rax
  void *v17; // rcx
  __int64 v18; // rsi
  PVOID v19; // rax
  volatile signed __int32 *v20; // rax
  bool v21; // zf
  PVOID P; // [rsp+20h] [rbp-20h] BYREF
  KLockHolder v23; // [rsp+28h] [rbp-18h] BYREF

  v23.m_State = Unlocked;
  v23.m_Lock = (KPushLockBase *)qword_1C00E4418;
  v23.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v23);
  v7 = qword_1C00E4418;
  v8 = 0LL;
  v9 = *(unsigned int *)(qword_1C00E4418 + 44);
  while ( v8 != v9 )
  {
    if ( v8 >= *(unsigned int *)(v7 + 44) )
      __fastfail(5u);
    v10 = *(_QWORD *)(v7 + 48);
    v11 = *(const wchar_t ***)(*(_QWORD *)(v10 + 8 * v8) + 24LL);
    v12 = *(unsigned __int16 *)v11;
    if ( (_WORD)v12 == a2->Length && !_wcsnicmp(v11[1], a2->Buffer, v12 >> 1) )
    {
      if ( !a3 || ndisBindReadProtocolDriverConfiguration(*(struct NDIS_BIND_PROTOCOL_DRIVER **)(v10 + 8 * v8), 1) )
      {
        v13 = *(_QWORD *)(v10 + 8 * v8);
        *a1 = v13;
        if ( v13 )
          _InterlockedIncrement((volatile signed __int32 *)(v13 + 48));
      }
      else
      {
        *a1 = 0LL;
      }
      goto LABEL_10;
    }
    ++v8;
  }
  P = 0LL;
  if ( KRef<NDIS_BIND_PROTOCOL_DRIVER>::allocate<>((volatile signed __int32 **)&P) )
  {
    v15 = P;
    v16 = Rtl::KString::Initialize(a2);
    v17 = (void *)*((_QWORD *)v15 + 3);
    *((_QWORD *)v15 + 3) = v16;
    if ( v17 )
    {
      ExFreePoolWithTag(v17, 0x7274534Bu);
      v16 = (struct Rtl::KString *)*((_QWORD *)v15 + 3);
    }
    if ( v16 && ndisBindReadProtocolDriverConfiguration((struct NDIS_BIND_PROTOCOL_DRIVER *)v15, a4) )
    {
      v18 = qword_1C00E4418;
      if ( (unsigned __int8)Rtl::KArray<KRef<NDIS_BIND_PROTOCOL_DRIVER>,1>::grow(
                              qword_1C00E4418 + 40,
                              (unsigned int)(*(_DWORD *)(qword_1C00E4418 + 44) + 1)) )
      {
        *(_QWORD *)(*(_QWORD *)(v18 + 48) + 8LL * *(unsigned int *)(v18 + 44)) = v15;
        _InterlockedIncrement((volatile signed __int32 *)v15 + 12);
        v19 = P;
        ++*(_DWORD *)(v18 + 44);
        *a1 = v19;
        goto LABEL_10;
      }
      *a1 = 0LL;
    }
    else
    {
      *a1 = 0LL;
    }
    v21 = _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 12, 0xFFFFFFFF) == 1;
  }
  else
  {
    v20 = (volatile signed __int32 *)P;
    *a1 = 0LL;
    if ( !v20 )
      goto LABEL_10;
    v21 = _InterlockedExchangeAdd(v20 + 12, 0xFFFFFFFF) == 1;
  }
  if ( v21 )
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(P);
LABEL_10:
  KLockHolder::~KLockHolder(&v23);
  return a1;
}

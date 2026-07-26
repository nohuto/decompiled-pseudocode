/*
 * XREFs of NdisCmMakeCallComplete @ 0x1C00B7090
 * Callers:
 *     NdisClMakeCall @ 0x1C00B6BB0 (NdisClMakeCall.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0008A74 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C001918C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B571C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1C00B7300 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B79D0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B7C7C (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

void __stdcall NdisCmMakeCallComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  bool v9; // di
  __int64 v10; // rbp
  KIRQL v11; // al
  unsigned int v12; // ecx
  KIRQL v13; // al
  _QWORD *v14; // rcx
  KIRQL v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx

  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, *((_QWORD *)NdisVcHandle + 9), 10);
  v10 = *((_QWORD *)NdisVcHandle + 8);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v12 = *((_DWORD *)NdisVcHandle + 1) & 0xFFFFFFEF;
  *((_DWORD *)NdisVcHandle + 1) = v12;
  if ( Status )
    v9 = (v12 & 0x40) != 0;
  else
    *((_DWORD *)NdisVcHandle + 1) = v12 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v11);
  if ( Status )
  {
    if ( !v9 )
    {
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
      ndisDereferenceAf((KSPIN_LOCK *)v10);
      if ( NdisPartyHandle )
      {
        ExFreePoolWithTag(NdisPartyHandle, 0);
        NdisPartyHandle = 0LL;
      }
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0x13u,
        0xBu,
        (struct _GUID *)&WPP_fb70755bf2473c59433ef3375f66b20a_Traceguids,
        Status);
  }
  else
  {
    if ( NdisPartyHandle )
    {
      *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
      ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
    }
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v10 + 368) + 232LL));
    v14 = (char *)NdisVcHandle + 32;
    v15 = v13;
    v16 = *((_QWORD *)NdisVcHandle + 4);
    if ( *(NDIS_HANDLE *)(v16 + 8) != (char *)NdisVcHandle + 32
      || (v17 = (_QWORD *)*((_QWORD *)NdisVcHandle + 5), (_QWORD *)*v17 != v14)
      || (*v17 = v16,
          *(_QWORD *)(v16 + 8) = v17,
          v18 = *(_QWORD *)(v10 + 368) + 1032LL,
          v19 = *(_QWORD *)v18,
          *(_QWORD *)(*(_QWORD *)v18 + 8LL) != v18) )
    {
      __fastfail(3u);
    }
    *v14 = v19;
    *((_QWORD *)NdisVcHandle + 5) = v18;
    *(_QWORD *)(v19 + 8) = v14;
    *(_QWORD *)v18 = v14;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v10 + 368) + 232LL), v15);
  }
  v20 = *((_QWORD *)NdisVcHandle + 3);
  if ( *(_DWORD *)(v10 + 396) >= 6u )
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v10 + 280))(
      (unsigned int)Status,
      v20,
      NdisPartyHandle,
      CallParameters);
  else
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v10 + 128))(
      (unsigned int)Status,
      v20,
      NdisPartyHandle,
      CallParameters);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xCu,
      (struct _GUID *)&WPP_fb70755bf2473c59433ef3375f66b20a_Traceguids);
}

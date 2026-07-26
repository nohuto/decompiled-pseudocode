/*
 * XREFs of NdisCmCloseCallComplete @ 0x1C00B6D70
 * Callers:
 *     NdisClCloseCall @ 0x1C00B6920 (NdisClCloseCall.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00B571C (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1C00B7300 (WPP_RECORDER_SF_LqDLqD.c)
 *     ?ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B79D0 (-ndisDereferenceVcPtr@@YAXPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  KIRQL v6; // al
  int v7; // r14d
  __int64 v8; // r13
  KIRQL v9; // dl
  __int64 v10; // r15
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, __int64, __int64); // r12
  KSPIN_LOCK *v13; // rcx

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, (_DWORD)NdisPartyHandle, 15);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v7 = *((_DWORD *)NdisVcHandle + 1);
  v8 = *((_QWORD *)NdisVcHandle + 3);
  v9 = v6;
  *((_DWORD *)NdisVcHandle + 1) = v7 & 0xFFFFFF9F;
  if ( NdisPartyHandle )
    v10 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v10 = 0LL;
  v11 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v11 + 396) >= 6u )
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 296);
  else
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 144);
  v13 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v13, v9);
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) = v7 & 0xFFFFFF97;
    KeReleaseSpinLock(v13, v9);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(struct _NDIS_CO_VC_PTR_BLOCK **)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisVcHandle + 8));
    if ( (v7 & 8) != 0 )
      ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  }
  ndisDereferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle);
  v12((unsigned int)Status, v8, v10);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0x10u,
      (struct _GUID *)&WPP_fb70755bf2473c59433ef3375f66b20a_Traceguids,
      NdisVcHandle);
}

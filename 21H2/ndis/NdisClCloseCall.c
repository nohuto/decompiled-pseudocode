/*
 * XREFs of NdisClCloseCall @ 0x1C00B6F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001935C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     NdisCmCloseCallComplete @ 0x1C00B73A0 (NdisCmCloseCallComplete.c)
 *     WPP_RECORDER_SF_qLLqD @ 0x1C00B7A74 (WPP_RECORDER_SF_qLLqD.c)
 *     ?ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z @ 0x1C00B82AC (-ndisReferenceVcPtr@@YAEPEAU_NDIS_CO_VC_PTR_BLOCK@@@Z.c)
 */

NDIS_STATUS __stdcall NdisClCloseCall(NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle, PVOID Buffer, UINT Size)
{
  __int64 v8; // rdi
  KIRQL v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(_QWORD, __int64, PVOID, _QWORD); // rax
  NDIS_STATUS v15; // eax
  NDIS_STATUS v16; // edi
  __int64 v17; // [rsp+28h] [rbp-40h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    HIDWORD(v17) = HIDWORD(NdisVcHandle);
    WPP_RECORDER_SF_qLLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisPartyHandle, (_DWORD)Buffer, Size);
  }
  v8 = 0LL;
  if ( !ndisReferenceVcPtr((struct _NDIS_CO_VC_PTR_BLOCK *)NdisVcHandle) )
    return -1073741823;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x20u;
  v11 = *((_DWORD *)NdisVcHandle + 1);
  if ( (v11 & 0x10) != 0 )
    *((_DWORD *)NdisVcHandle + 1) = v11 | 0x40;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v10);
  v12 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v12 + 392) >= 6u )
    v13 = *(_QWORD *)(v12 + 32);
  else
    v13 = *(_QWORD *)(v12 + 24);
  v14 = *(__int64 (__fastcall **)(_QWORD, __int64, PVOID, _QWORD))(v13 + 64);
  if ( NdisPartyHandle )
    v8 = *((_QWORD *)NdisPartyHandle + 1);
  v15 = v14(*((_QWORD *)NdisVcHandle + 18), v8, Buffer, Size);
  v16 = v15;
  if ( v15 != 259 )
  {
    NdisCmCloseCallComplete(v15, NdisVcHandle, NdisPartyHandle);
    v16 = 259;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v17) = v16;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xEu,
      (struct _GUID *)&WPP_fb70755bf2473c59433ef3375f66b20a_Traceguids,
      v17);
  }
  return v16;
}

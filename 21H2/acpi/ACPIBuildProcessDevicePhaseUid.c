/*
 * XREFs of ACPIBuildProcessDevicePhaseUid @ 0x1C0029EB0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseUid(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 *v3; // rax
  unsigned int v4; // eax
  __int64 v5; // rdx
  void *v6; // rcx
  unsigned int v7; // edi
  void *v8; // rax

  v1 = *(_QWORD *)(a1 + 40);
  _InterlockedOr64((volatile signed __int64 *)(v1 + 8), 0x400000000000uLL);
  v3 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1145653343);
  if ( !v3 )
    KeBugCheckEx(0xA5u, 0xDuLL, v1, 0x4449485FuLL, 0LL);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v3);
  *(_DWORD *)(a1 + 32) = 7;
  v4 = ACPIGet(v1, 1145653343, 671612966, 0LL, 0, (__int64)ACPIBuildCompleteMustSucceed, a1, v1 + 608, 0LL);
  v5 = *(_QWORD *)(v1 + 8);
  v6 = &unk_1C006FB8B;
  v7 = v4;
  v8 = &unk_1C006FB8B;
  if ( (v5 & 0x200000000000LL) != 0 )
  {
    v6 = *(void **)(v1 + 608);
    if ( (v5 & 0x400000000000LL) != 0 )
      v8 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x31u,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v7,
      v1,
      (__int64)v6,
      (__int64)v8);
  if ( v7 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL, v7, 0LL, a1);
  return v7;
}

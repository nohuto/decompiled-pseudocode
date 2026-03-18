/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C0009970
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x1C000A4C0 (ACPIBuildCompleteMustSucceed.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v4; // rcx
  void *v5; // rax
  void *v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)(a1 + 80) = 0LL;
  v2 = 0;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v1 + 1000) & 0x20) == 0 )
  {
    v8 = *(_QWORD *)(a1 + 56);
    if ( v8 )
    {
      AMLIDereferenceHandleEx(v8);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v9 = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 1346716767LL);
    *(_QWORD *)(a1 + 56) = v9;
    if ( v9 )
      v2 = AMLIAsyncEvalObject(v9, (int)a1 + 80, 0, 0, (__int64)ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v1 + 1000), 0x20uLL);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = &unk_1C006FB8B;
  v6 = &unk_1C006FB8B;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(void **)(v1 + 608);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = (__int64)v6;
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v6,
      6,
      31,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v2,
      v1,
      (__int64)v5,
      v10);
  }
  if ( v2 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v2;
}

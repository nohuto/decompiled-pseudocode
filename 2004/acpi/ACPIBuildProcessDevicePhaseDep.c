/*
 * XREFs of ACPIBuildProcessDevicePhaseDep @ 0x1C0015200
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001441C (AMLIAsyncEvalObject.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C0015B20 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseDep(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  __int64 v7; // rcx
  void *v8; // rax
  void *v9; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = *(_QWORD *)(a1 + 40);
  *(_OWORD *)(a1 + 80) = 0LL;
  v5 = 0;
  *(_OWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_DWORD *)(a1 + 32) = 5;
  if ( (*(_BYTE *)(v4 + 960) & 0x20) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 56);
    if ( v11 )
    {
      AMLIDereferenceHandleEx(v11);
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    v12 = (__int64 *)AMLIGetNamedChild(*(_QWORD *)(v4 + 720), 1346716767LL, a3, a4);
    *(_QWORD *)(a1 + 56) = v12;
    if ( v12 )
      v5 = AMLIAsyncEvalObject(v12, a1 + 80, 0, 0LL, ACPIBuildCompleteMustSucceed, a1);
    else
      _InterlockedOr64((volatile signed __int64 *)(v4 + 960), 0x20uLL);
  }
  v7 = *(_QWORD *)(v4 + 8);
  v8 = &unk_1C00701BA;
  v9 = &unk_1C00701BA;
  if ( (v7 & 0x200000000000LL) != 0 )
  {
    v8 = *(void **)(v4 + 568);
    if ( (v7 & 0x400000000000LL) != 0 )
      v9 = *(void **)(v4 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (__int64)v9;
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v9,
      6,
      31,
      (__int64)&WPP_b4b4781ea129315cb23d4156eeab8ce7_Traceguids,
      v5,
      v4,
      (__int64)v8,
      v13);
  }
  if ( v5 == 259 )
    return 0;
  else
    ACPIBuildCompleteMustSucceed(0LL);
  return v5;
}

/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C00266A0
 * Callers:
 *     <none>
 * Callees:
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qdqss @ 0x1C000D718 (WPP_RECORDER_SF_qdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C000EB80 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIAsyncEvalObject @ 0x1C0019E08 (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C0026814 (WPP_RECORDER_SF_qLdqss.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase1(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // ecx
  unsigned int v4; // ebp
  __int64 *v5; // rsi
  int v6; // eax
  int v7; // r8d
  void *v8; // rdx
  __int64 v9; // r9
  __int64 v11; // r8
  const char *v12; // rax
  const char *v13; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 104);
  v4 = 0;
  v5 = 0LL;
  v6 = *(_DWORD *)(a1 + 56);
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  *(_WORD *)(a1 + 218) = 1;
  if ( v3 == 1 || (v6 & 0x10) != 0 )
  {
    *(_DWORD *)(a1 + 212) = 6;
    goto LABEL_3;
  }
  if ( _bittest64((const signed __int64 *)(v1 + 8), 0x33u) )
  {
    *(_DWORD *)(a1 + 212) = 5;
LABEL_3:
    v7 = 0;
    v8 = &unk_1C006FB8B;
    if ( v1 )
    {
      v9 = *(_QWORD *)(v1 + 8);
      v7 = v1;
      if ( (v9 & 0x200000000000LL) != 0 && (v9 & 0x400000000000LL) != 0 )
        v8 = *(void **)(v1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qLdqss(WPP_GLOBAL_Control->DeviceExtension, (_DWORD)v8, v7, 56);
    ACPIDeviceCompleteGenericPhase((__int64)v5, v4, 0LL, a1);
    if ( v5 )
      AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
    return 0LL;
  }
  *(_DWORD *)(a1 + 212) = 4;
  if ( v3 != 4 )
    goto LABEL_3;
  v5 = AMLIGetNamedChild(*(__int64 **)(v1 + 760), 1397310559);
  if ( !v5 )
  {
    _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1000LL), 0x100uLL);
    goto LABEL_3;
  }
  if ( (*(_DWORD *)(v1 + 1000) & 0x100LL) != 0 )
    goto LABEL_3;
  _InterlockedOr64((volatile signed __int64 *)(*(_QWORD *)(a1 + 40) + 1000LL), 0x100uLL);
  *(_DWORD *)(a1 + 56) |= 0x1000000u;
  v4 = AMLIAsyncEvalObject(v5, 0LL, 0, 0LL, ACPIDeviceCompleteGenericPhase, a1);
  AMLIDereferenceHandleEx((volatile signed __int32 *)v5);
  v5 = 0LL;
  if ( v4 != 259 )
    goto LABEL_3;
  v11 = *(_QWORD *)(v1 + 8);
  v12 = (const char *)&unk_1C006FB8B;
  v13 = (const char *)&unk_1C006FB8B;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = *(const char **)(v1 + 608);
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = *(const char **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)v13,
      0xAu,
      0x37u,
      (__int64)&WPP_a8f7cd0141bb322231380cc24ac7ac02_Traceguids,
      a1,
      *(_DWORD *)(a1 + 212),
      v1,
      v12,
      v13);
  return 259LL;
}

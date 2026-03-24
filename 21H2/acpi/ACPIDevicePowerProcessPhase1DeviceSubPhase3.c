/*
 * XREFs of ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0011F20
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIAsyncEvalObject @ 0x1C001467C (AMLIAsyncEvalObject.c)
 *     WPP_RECORDER_SF_qLdqss @ 0x1C001D964 (WPP_RECORDER_SF_qLdqss.c)
 *     ACPIDeviceCompleteGenericPhase @ 0x1C001FEE0 (ACPIDeviceCompleteGenericPhase.c)
 *     AMLIGetNamedChild @ 0x1C0020D50 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIDevicePowerProcessPhase1DeviceSubPhase3(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbp
  __int64 v7; // rcx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rdx
  void *v12; // rax
  void *v13; // rcx
  int v15; // [rsp+20h] [rbp-48h]

  v4 = *(_QWORD **)(a1 + 40);
  v5 = a1 + 216;
  *(_DWORD *)(a1 + 212) = 6;
  *(_OWORD *)(a1 + 216) = 0LL;
  *(_OWORD *)(a1 + 232) = 0LL;
  *(_QWORD *)(a1 + 248) = 0LL;
  if ( (v4[1] & 0x200000000000000LL) != 0 )
    v7 = *(_QWORD *)(v4[23] + 720LL);
  else
    v7 = v4[90];
  v8 = AMLIGetNamedChild(v7, 1096045407LL, a3, a4);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    if ( *(_WORD *)(*(_QWORD *)v8 + 66LL) == 8 )
      *(_DWORD *)(a1 + 56) |= 0x1000000u;
    v9 = AMLIAsyncEvalObject(v8, v5, 0, 0, (__int64)ACPIDeviceCompleteGenericPhase, a1);
    AMLIDereferenceHandleEx(v10);
  }
  else
  {
    *(_WORD *)(v5 + 2) = 1;
    *(_QWORD *)(v5 + 16) = 1LL;
  }
  v11 = v4[1];
  v12 = &unk_1C00701BA;
  v13 = &unk_1C00701BA;
  if ( (v11 & 0x200000000000LL) != 0 )
  {
    v12 = (void *)v4[71];
    if ( (v11 & 0x400000000000LL) != 0 )
      v13 = (void *)v4[72];
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_RECORDER_INITIALIZED,
      0,
      59,
      v15,
      a1,
      v9,
      *(_DWORD *)(a1 + 212),
      (char)v4,
      (__int64)v12,
      (__int64)v13);
  if ( v9 != 259 )
    ACPIDeviceCompleteGenericPhase(0LL, v9, 0LL, a1);
  return v9;
}

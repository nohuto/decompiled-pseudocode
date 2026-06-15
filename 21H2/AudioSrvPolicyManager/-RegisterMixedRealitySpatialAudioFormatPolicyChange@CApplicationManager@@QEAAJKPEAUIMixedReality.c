/*
 * XREFs of ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CApplicationManager@@QEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180020F20
 * Callers:
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x1800069C0 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CWindowsPolicyManager@@UEAAJKPEAUIMixedReali.c)
 * Callees:
 *     ?RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudioFormatPolicyChange@@@Z @ 0x180017360 (-RegisterMixedRealitySpatialAudioFormatPolicyChange@CProcess@@QEAAJPEAUIMixedRealitySpatialAudio.c)
 *     ?TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z @ 0x18001D9B4 (-TryFindProcessFromProcessId@CApplicationManager@@QEAAJKPEAPEAVCProcess@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationManager::RegisterMixedRealitySpatialAudioFormatPolicyChange(
        CApplicationManager *this,
        int a2,
        struct IMixedRealitySpatialAudioFormatPolicyChange *a3)
{
  int ProcessFromProcessId; // edi
  CProcess *v5; // rbx
  CProcess *v6; // rbx
  CProcess *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  ProcessFromProcessId = CApplicationManager::TryFindProcessFromProcessId((RTL_SRWLOCK *)g_ApplicationManager, a2, &v8);
  v5 = v8;
  if ( ProcessFromProcessId >= 0 )
  {
    if ( v8 )
      ProcessFromProcessId = CProcess::RegisterMixedRealitySpatialAudioFormatPolicyChange(v8, a3);
    else
      ProcessFromProcessId = -2147023728;
  }
  if ( v5 && _InterlockedExchangeAdd((volatile signed __int32 *)v5 + 2, 0xFFFFFFFF) == 1 )
  {
    v6 = v8;
    (*(void (__fastcall **)(CProcess *))(*(_QWORD *)v8 + 32LL))(v8);
    (*(void (__fastcall **)(CProcess *, __int64))(*(_QWORD *)v6 + 24LL))(v6, 1LL);
  }
  return (unsigned int)ProcessFromProcessId;
}

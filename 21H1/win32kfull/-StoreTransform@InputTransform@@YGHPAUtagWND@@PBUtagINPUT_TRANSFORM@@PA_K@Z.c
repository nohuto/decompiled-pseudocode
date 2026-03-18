/*
 * XREFs of ?StoreTransform@InputTransform@@YGHPAUtagWND@@PBUtagINPUT_TRANSFORM@@PA_K@Z @ 0x15E750
 * Callers:
 *     _EditionUpdateInputTransformFromHitTest@24 @ 0x11A3E (_EditionUpdateInputTransformFromHitTest@24.c)
 *     ?OnInput@InputTransform@@YGHPAUtagWND@@_K@Z @ 0xAEB5C (-OnInput@InputTransform@@YGHPAUtagWND@@_K@Z.c)
 * Callees:
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ?IsIndependentInputWindow@@YGHPBUtagWND@@@Z @ 0x70058 (-IsIndependentInputWindow@@YGHPBUtagWND@@@Z.c)
 *     ?Save@CSmartFloatingSave@@QAEJXZ @ 0x99D5C (-Save@CSmartFloatingSave@@QAEJXZ.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z @ 0x14163B (-GetCompositionInputWindowUIOwner@@YGPAUtagWND@@PBU1@@Z.c)
 *     ?InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z @ 0x15E64D (-InitInputTransformList@@YGPAUtagINPUTTRANSFORMLIST@@PAUtagWND@@@Z.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __userpurge InputTransform::StoreTransform@<eax>(
        const void *a1@<edx>,
        struct tagWND *a2@<ecx>,
        InputTransform *this,
        struct tagWND *a4,
        const struct tagINPUT_TRANSFORM *a5,
        unsigned __int64 *a6)
{
  int v7; // eax
  struct tagWND *v8; // eax
  int TopLevelWindow; // esi
  float *v10; // eax
  char v11; // al
  int result; // eax
  _DWORD *v13; // ebx
  _DWORD *v14; // ecx
  float v15; // [esp+Ch] [ebp-78h]
  float v16; // [esp+10h] [ebp-74h]
  float v17; // [esp+10h] [ebp-74h]
  struct _KFLOATING_SAVE FloatSave; // [esp+14h] [ebp-70h] BYREF
  char v19; // [esp+34h] [ebp-50h]
  float Source1[17]; // [esp+38h] [ebp-4Ch] BYREF

  v7 = *((_DWORD *)a2 + 5);
  qmemcpy(Source1, a1, 0x40u);
  if ( (*(_DWORD *)(v7 + 184) & 0xF) != 2 )
  {
    v8 = IsIndependentInputWindow(a2) ? GetCompositionInputWindowUIOwner(a2) : a2;
    TopLevelWindow = _GetTopLevelWindow((int)v8);
    v19 = 0;
    if ( TopLevelWindow )
    {
      if ( *(_DWORD *)(TopLevelWindow + 120) )
      {
        if ( CSmartFloatingSave::Save(&FloatSave) < 0 )
        {
          v11 = v19;
        }
        else
        {
          if ( *(float *)(*(_DWORD *)(TopLevelWindow + 120) + 20) != **(float **)(TopLevelWindow + 120) )
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          if ( 0.0 != Source1[2]
            || Source1[3] != 0.0
            || Source1[6] != 0.0
            || Source1[7] != 0.0
            || Source1[8] != 0.0
            || Source1[9] != 0.0
            || 1.0 != Source1[10]
            || Source1[11] != 0.0
            || Source1[14] != 0.0
            || Source1[15] != 1.0 )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
          }
          Source1[0] = Source1[0] / **(float **)(TopLevelWindow + 120);
          Source1[1] = Source1[1] / **(float **)(TopLevelWindow + 120);
          Source1[4] = Source1[4] / **(float **)(TopLevelWindow + 120);
          Source1[5] = Source1[5] / **(float **)(TopLevelWindow + 120);
          v10 = *(float **)(TopLevelWindow + 120);
          v16 = v10[13];
          v15 = Source1[12] - v10[12];
          Source1[12] = v15 / *v10;
          v17 = Source1[13] - v16;
          Source1[13] = v17 / **(float **)(TopLevelWindow + 120);
          KeRestoreFloatingPointState(&FloatSave);
          v11 = 0;
          v19 = 0;
        }
        if ( v11 )
          KeRestoreFloatingPointState(&FloatSave);
      }
    }
  }
  result = (int)InitInputTransformList(a2);
  v13 = (_DWORD *)result;
  if ( result )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0);
    v14 = (_DWORD *)v13[1];
    if ( v14 == v13 + 1
      || (!this || v14[2] != *(_DWORD *)this || v14[3] != *((_DWORD *)this + 1))
      && ((v13[19] & 1) != 0 || RtlCompareMemory(Source1, v14 + 4, 0x40u) != 64) )
    {
      qmemcpy(v13 + 3, Source1, 0x40u);
      v13[19] |= 1u;
    }
    ExReleasePushLockExclusiveEx(v13, 0);
    KeLeaveCriticalRegion();
    return 1;
  }
  return result;
}

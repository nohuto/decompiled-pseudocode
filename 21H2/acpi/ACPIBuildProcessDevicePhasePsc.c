/*
 * XREFs of ACPIBuildProcessDevicePhasePsc @ 0x1C0008DF0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDeviceInternalDelayedDeviceRequest @ 0x1C0008A3C (ACPIDeviceInternalDelayedDeviceRequest.c)
 *     ACPIBuildCompleteCommon @ 0x1C00095D8 (ACPIBuildCompleteCommon.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_DDqss @ 0x1C002D5D0 (WPP_RECORDER_SF_DDqss.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePsc(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r14d
  int *v3; // r15
  void *v4; // r12
  __int64 v5; // r13
  int v6; // edi
  __int64 **v7; // rcx
  __int64 i; // rdx
  __int64 *v9; // rax
  __int64 v10; // rax
  unsigned int v11; // edi
  ULONG_PTR v12; // r9
  int v13; // edx
  int v14; // edi
  __int64 v15; // rcx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v19; // rax
  void *v20; // r8
  void *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+48h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 32;
  *(_QWORD *)(v1 + 488) = AMLIGetNamedChild(*(_QWORD *)(v1 + 760), 861098079LL);
  KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
  v2 = 2;
  v3 = (int *)(v1 + 516);
  v4 = &unk_1C006FB8B;
  v5 = 4LL;
  do
  {
    v6 = 1;
    v7 = (__int64 **)(v1 + 416);
    for ( i = 1LL; i <= 3; ++i )
    {
      v9 = *v7;
      if ( *v7 )
      {
        while ( *((_DWORD *)v9 + 4) >= v2 )
        {
          v9 = (__int64 *)*v9;
          if ( !v9 )
          {
            v19 = *(_QWORD *)(v1 + 8);
            v20 = &unk_1C006FB8B;
            v21 = &unk_1C006FB8B;
            if ( (v19 & 0x200000000000LL) != 0 )
            {
              v20 = *(void **)(v1 + 608);
              if ( (v19 & 0x400000000000LL) != 0 )
                v21 = *(void **)(v1 + 616);
            }
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v23 = (__int64)v21;
              LOBYTE(v21) = 4;
              WPP_RECORDER_SF_DDqss(
                WPP_GLOBAL_Control->DeviceExtension,
                (_DWORD)v21,
                6,
                45,
                (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
                v6 - 1,
                v2 - 1,
                v1,
                (__int64)v20,
                v23);
            }
            *v3 = v6;
            goto LABEL_5;
          }
        }
      }
      ++v6;
      ++v7;
    }
LABEL_5:
    ++v2;
    ++v3;
    --v5;
  }
  while ( v5 );
  *(_DWORD *)(v1 + 540) = *(_DWORD *)(v1 + 4LL * *(int *)(v1 + 536) + 508);
  KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  v10 = *(_QWORD *)(v1 + 8);
  v11 = 1;
  if ( (v10 & 0x80000000) != 0 )
  {
    v11 = 4;
  }
  else
  {
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 && *(int *)(a1 + 48) >= 0 )
    {
      if ( (v10 & 0x80000) != 0 )
      {
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        FreeDataBuffs(a1 + 80, 1LL);
        *(_DWORD *)(v1 + 384) = 1;
      }
      else
      {
        if ( *(_WORD *)(a1 + 82) != 1 )
          KeBugCheckEx(0xA5u, 8uLL, v1, v12, *(unsigned __int16 *)(a1 + 82));
        v22 = *(_QWORD *)(a1 + 96);
        if ( v22 < 4 )
          v11 = DevicePowerStateTranslation[v22];
        else
          v11 = 0;
        dword_1C0081AC8 = 0;
        byte_1C0081ACC = 0;
        FreeDataBuffs(a1 + 80, 1LL);
      }
    }
  }
  v14 = ACPIDeviceInternalDelayedDeviceRequest((_QWORD *)v1, v11);
  v15 = *(_QWORD *)(v1 + 8);
  v16 = &unk_1C006FB8B;
  if ( (v15 & 0x200000000000LL) != 0 )
  {
    v4 = *(void **)(v1 + 608);
    if ( (v15 & 0x400000000000LL) != 0 )
      v16 = *(void **)(v1 + 616);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      6,
      46,
      (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
      v14,
      v1,
      (__int64)v4,
      (__int64)v16);
  }
  v17 = *(unsigned int *)(a1 + 32);
  if ( v14 < 0 )
    *(_DWORD *)(a1 + 48) = v14;
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v17);
  return (unsigned int)v14;
}

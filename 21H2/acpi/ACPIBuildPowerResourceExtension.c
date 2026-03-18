/*
 * XREFs of ACPIBuildPowerResourceExtension @ 0x1C002A3B8
 * Callers:
 *     OSNotifyCreatePowerResource @ 0x1C002A294 (OSNotifyCreatePowerResource.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C0C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ACPIBuildPowerResourceExtension(volatile signed __int32 *a1, __int64 *a2)
{
  __int64 Pool2; // rax
  int v5; // ecx
  __int64 v6; // r8
  unsigned __int8 *v7; // rdx
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rax

  Pool2 = ExAllocatePool2(64LL, 144LL, 1148216129LL);
  v5 = 0;
  v6 = Pool2;
  if ( Pool2 )
  {
    v7 = *(unsigned __int8 **)(*(_QWORD *)a1 + 96LL);
    v8 = gdwfAMLI;
    *(_QWORD *)(v6 + 16) = 4LL;
    *(_QWORD *)(v6 + 32) = a1;
    dword_1C0081AC8 = 0;
    byte_1C0081ACC = 0;
    if ( (v8 & 4) != 0 )
      _InterlockedIncrement(a1 + 2);
    *(_BYTE *)(v6 + 40) = v7[1];
    *(_DWORD *)(v6 + 64) = 3;
    v9 = *v7;
    if ( (unsigned __int8)v9 < 6u )
      v5 = SystemPowerStateTranslation[v9];
    *(_DWORD *)(v6 + 44) = v5;
    *(_QWORD *)(v6 + 56) = v6 + 48;
    *(_QWORD *)(v6 + 48) = v6 + 48;
    *(_QWORD *)(v6 + 128) = v6 + 120;
    *(_QWORD *)(v6 + 120) = v6 + 120;
    *(_QWORD *)(v6 + 112) = v6 + 104;
    *(_QWORD *)(v6 + 104) = v6 + 104;
    v10 = *(_QWORD *)a1;
    *a2 = v6;
    *(_QWORD *)(v10 + 104) = v6;
    return 259LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x19u,
        (__int64)&WPP_bdd8eb048f7f3443c553fdc981a7d4a4_Traceguids,
        144);
    return 3221225626LL;
  }
}

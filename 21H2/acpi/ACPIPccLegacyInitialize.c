/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1C008F4C8
 * Callers:
 *     ACPIRootInitialize @ 0x1C008F8C0 (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     ACPIAmliEvaluatePcch @ 0x1C008F5E4 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C008F740 (ACPIAmliEvaluateOsc.c)
 *     AcpiPccInitializeSubspace @ 0x1C00B0024 (AcpiPccInitializeSubspace.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r8d
  __int64 v3; // rcx
  _BYTE *Pool2; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // rcx
  int v9[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v10[44]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v11; // [rsp+6Ch] [rbp-4h]
  int v12; // [rsp+80h] [rbp+10h] BYREF
  int v13; // [rsp+84h] [rbp+14h]
  int v14; // [rsp+88h] [rbp+18h] BYREF
  int v15; // [rsp+8Ch] [rbp+1Ch]

  v13 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  v12 = 1;
  memset(v10, 0, sizeof(v10));
  v11 = 0;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v12);
  if ( v12 == 2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v14 = 0;
    v15 = 1;
    v3 = *(_QWORD *)(v1 + 760);
    *(_OWORD *)v9 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v3, (int)v9, v2, 2, &v14);
    Pool2 = (_BYTE *)ExAllocatePool2(64LL, 656LL, 1299211073LL);
    v5 = (__int64)Pool2;
    if ( Pool2 )
    {
      *Pool2 = -1;
      v6 = ACPIAmliEvaluatePcch(
             *(_QWORD *)(v1 + 760),
             (unsigned int)v10,
             (int)Pool2 + 88,
             (int)Pool2 + 72,
             (__int64)(Pool2 + 64));
      if ( v6 >= 0 )
      {
        if ( !v10[3] && (v10[4] & 4) != 0 && (v10[4] & 8) != 0 && (v10[5] & 1) != 0 )
        {
          *(_DWORD *)(v5 + 112) = *(_DWORD *)&v10[38];
          *(_QWORD *)(v5 + 104) = *(_QWORD *)&v10[14];
          v6 = AcpiPccInitializeSubspace((PVOID)v5);
          if ( v6 >= 0 )
          {
            v8 = *(_QWORD *)(v5 + 40);
            *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 112);
            *(_QWORD *)(v5 + 24) = v8;
            AcpiPccLegacySubspace = v5;
            *(_QWORD *)(v5 + 48) = v8 + 12;
            *(_QWORD *)(v5 + 56) = v8 + 14;
            *(_DWORD *)(v5 + 4) = *(_DWORD *)(v5 + 4) & 0xFFFFFFE1 | 4;
            return (unsigned int)v6;
          }
        }
        else
        {
          v6 = -1073741823;
        }
      }
      ExFreePoolWithTag((PVOID)v5, 0x4D706341u);
    }
    else
    {
      v6 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0x15u,
          0xAu,
          (__int64)&WPP_cb83180b771632eba63c2d8b4b5a28e5_Traceguids);
    }
  }
  return (unsigned int)v6;
}

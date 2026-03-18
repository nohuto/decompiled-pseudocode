/*
 * XREFs of ACPIPccLegacyInitialize @ 0x1C0097FC0
 * Callers:
 *     ACPIRootInitialize @ 0x1C0097C9C (ACPIRootInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C001D52C (WPP_RECORDER_SF_.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     ACPIAmliEvaluatePcch @ 0x1C00980F0 (ACPIAmliEvaluatePcch.c)
 *     ACPIAmliEvaluateOsc @ 0x1C009A080 (ACPIAmliEvaluateOsc.c)
 *     AcpiPccInitializeSubspace @ 0x1C00B0844 (AcpiPccInitializeSubspace.c)
 */

__int64 __fastcall ACPIPccLegacyInitialize(__int64 a1)
{
  ULONG_PTR v1; // rbx
  int v2; // r8d
  __int64 v3; // rcx
  char *PoolWithTag; // rax
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // r8
  unsigned int v9; // ecx
  int v10; // ecx
  int v11[4]; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v12[44]; // [rsp+40h] [rbp-30h] BYREF
  __int16 v13; // [rsp+6Ch] [rbp-4h]
  int v14; // [rsp+80h] [rbp+10h] BYREF
  int v15; // [rsp+84h] [rbp+14h]
  int v16; // [rsp+88h] [rbp+18h] BYREF
  int v17; // [rsp+8Ch] [rbp+1Ch]

  v15 = HIDWORD(a1);
  v1 = RootDeviceExtension;
  v14 = 1;
  memset(v12, 0, sizeof(v12));
  v13 = 0;
  EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_PCC, &v14);
  if ( v14 == 2 )
  {
    return (unsigned int)-1073741823;
  }
  else
  {
    v16 = 0;
    v17 = 1;
    v3 = *(_QWORD *)(v1 + 720);
    *(_OWORD *)v11 = SB_OSC_PCC_UUID;
    ACPIAmliEvaluateOsc(v3, (int)v11, v2, 2, &v16);
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x288uLL, 0x4D706341u);
    v5 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 1, 0, 0x287uLL);
      *(_BYTE *)v5 = -1;
      v6 = ACPIAmliEvaluatePcch(*(_QWORD *)(v1 + 720), (unsigned int)v12, (int)v5 + 88, (int)v5 + 72, v5 + 64);
      if ( v6 >= 0 )
      {
        if ( !v12[3] && (v12[4] & 4) != 0 && (v12[4] & 8) != 0 && (v12[5] & 1) != 0 )
        {
          *(_DWORD *)(v5 + 112) = *(_DWORD *)&v12[38];
          *(_QWORD *)(v5 + 104) = *(_QWORD *)&v12[14];
          v6 = AcpiPccInitializeSubspace((PVOID)v5);
          if ( v6 >= 0 )
          {
            v8 = *(_QWORD *)(v5 + 40);
            *(_DWORD *)(v5 + 32) = *(_DWORD *)(v5 + 112);
            *(_QWORD *)(v5 + 24) = v8;
            *(_QWORD *)(v5 + 48) = v8 + 12;
            *(_QWORD *)(v5 + 56) = v8 + 14;
            *(_DWORD *)(v5 + 8) = *(_DWORD *)(v8 + 16);
            v9 = *(_DWORD *)(v8 + 20);
            if ( v9 )
              *(_DWORD *)(v5 + 12) = 0x1E8480 / v9;
            v10 = *(_DWORD *)(v5 + 4);
            if ( (*(_BYTE *)(v8 + 8) & 1) != 0 )
              v10 |= 1u;
            AcpiPccLegacySubspace = v5;
            *(_DWORD *)(v5 + 4) = v10 & 0xFFFFFFE1 | 4;
            v5 = 0LL;
          }
        }
        else
        {
          v6 = -1073741823;
        }
      }
      if ( v5 )
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
          (__int64)&WPP_79609623c0e33e2afa48dee71fa9caab_Traceguids);
    }
  }
  return (unsigned int)v6;
}

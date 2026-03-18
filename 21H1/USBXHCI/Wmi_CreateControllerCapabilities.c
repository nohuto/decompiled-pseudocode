/*
 * XREFs of Wmi_CreateControllerCapabilities @ 0x1C001066C
 * Callers:
 *     Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled @ 0x1C0013000 (Controller_WdfEvtDeviceD0EntryPostInterruptsEnabled.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0009878 (WPP_RECORDER_SF_.c)
 *     XilRegister_ReadUlong @ 0x1C0012CD0 (XilRegister_ReadUlong.c)
 *     Register_GetAllExtendedCapability @ 0x1C0017D08 (Register_GetAllExtendedCapability.c)
 *     Register_GetExtendedCapabilityTotalSize @ 0x1C00187D0 (Register_GetExtendedCapabilityTotalSize.c)
 *     memset @ 0x1C00194C0 (memset.c)
 *     WPP_RECORDER_SF_sds @ 0x1C003567C (WPP_RECORDER_SF_sds.c)
 */

void __fastcall Wmi_CreateControllerCapabilities(__int64 *a1, int a2, int a3, int a4)
{
  __int64 v5; // rsi
  int ExtendedCapabilityTotalSize; // ebp
  PVOID PoolWithTag; // rax
  int v8; // edx
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  unsigned int Ulong; // eax
  unsigned __int8 v18; // bl
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // r8
  unsigned int v25; // edx
  _BOOL8 v26; // r8

  if ( !a1[2] )
  {
    v5 = *(_QWORD *)(*a1 + 88);
    if ( *(_BYTE *)(*a1 + 537) && KeGetCurrentIrql() )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sds(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
      if ( !KdRefreshDebuggerNotPresent() )
        __debugbreak();
    }
    ExtendedCapabilityTotalSize = Register_GetExtendedCapabilityTotalSize(v5);
    *((_DWORD *)a1 + 2) = ExtendedCapabilityTotalSize + 184;
    PoolWithTag = ExAllocatePoolWithTag(
                    (POOL_TYPE)WPP_MAIN_CB.DeviceLock.Header.SignalState,
                    (unsigned int)(ExtendedCapabilityTotalSize + 184),
                    0x49434858u);
    a1[2] = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, *((unsigned int *)a1 + 2));
      *(_DWORD *)a1[2] = *(_DWORD *)(*a1 + 244);
      *(_DWORD *)(a1[2] + 4) = *(unsigned __int16 *)(*a1 + 248);
      *(_DWORD *)(a1[2] + 8) = *(unsigned __int16 *)(*a1 + 252);
      *(_DWORD *)(a1[2] + 12) = *(unsigned __int8 *)(*a1 + 256);
      v10 = *a1;
      v11 = a1[2];
      *(_DWORD *)(v11 + 16) = *(_DWORD *)(*a1 + 304);
      *(_BYTE *)(v11 + 20) = *(_BYTE *)(v10 + 308);
      v12 = *a1;
      v13 = a1[2];
      *(_DWORD *)(v13 + 21) = *(_DWORD *)(*a1 + 309);
      *(_BYTE *)(v13 + 25) = *(_BYTE *)(v12 + 313);
      v14 = *a1;
      v15 = a1[2];
      *(_DWORD *)(v15 + 26) = *(_DWORD *)(*a1 + 314);
      *(_BYTE *)(v15 + 30) = *(_BYTE *)(v14 + 318);
      *(_QWORD *)(a1[2] + 40) = *(_QWORD *)(*a1 + 328);
      v16 = *(_QWORD *)(v5 + 24);
      if ( v16 )
      {
        Ulong = XilRegister_ReadUlong(v5, *(_QWORD *)(v5 + 24));
        v18 = Ulong;
        *(_DWORD *)(a1[2] + 48) = HIBYTE(Ulong);
        *(_DWORD *)(a1[2] + 52) = BYTE2(Ulong);
        v19 = XilRegister_ReadUlong(v5, v16 + 4);
        *(_DWORD *)(a1[2] + 56) = (unsigned __int8)v19;
        *(_DWORD *)(a1[2] + 60) = (v19 >> 8) & 0x7FF;
        *(_DWORD *)(a1[2] + 64) = HIBYTE(v19);
        v20 = XilRegister_ReadUlong(v5, v16 + 8);
        *(_DWORD *)(a1[2] + 68) = v20 & 0xF;
        *(_DWORD *)(a1[2] + 72) = (unsigned __int8)v20 >> 4;
        *(_DWORD *)(a1[2] + 76) = (v20 >> 26) & 1;
        *(_DWORD *)(a1[2] + 80) = ((v20 >> 11) | v20 & 0x3E00000) >> 16;
        v21 = XilRegister_ReadUlong(v5, v16 + 12);
        *(_DWORD *)(a1[2] + 84) = (unsigned __int8)v21;
        *(_DWORD *)(a1[2] + 88) = HIWORD(v21);
        v22 = XilRegister_ReadUlong(v5, v16 + 16);
        *(_DWORD *)(a1[2] + 92) = v22 & 1;
        *(_DWORD *)(a1[2] + 96) = (v22 >> 1) & 1;
        *(_DWORD *)(a1[2] + 100) = (v22 >> 2) & 1;
        *(_DWORD *)(a1[2] + 104) = (v22 >> 3) & 1;
        *(_DWORD *)(a1[2] + 108) = (v22 >> 4) & 1;
        *(_DWORD *)(a1[2] + 112) = (v22 >> 5) & 1;
        *(_DWORD *)(a1[2] + 116) = (v22 >> 6) & 1;
        *(_DWORD *)(a1[2] + 120) = (v22 >> 7) & 1;
        *(_DWORD *)(a1[2] + 124) = (v22 >> 8) & 1;
        *(_DWORD *)(a1[2] + 128) = (v22 >> 9) & 1;
        *(_DWORD *)(a1[2] + 132) = (v22 >> 10) & 1;
        *(_DWORD *)(a1[2] + 136) = (v22 >> 11) & 1;
        *(_DWORD *)(a1[2] + 140) = (unsigned __int16)v22 >> 12;
        if ( v18 >= 0x20u )
        {
          v23 = XilRegister_ReadUlong(v5, v16 + 28);
          LODWORD(v9) = 1;
          v24 = 148LL;
          *(_DWORD *)(a1[2] + 144) = v23 & 1;
          do
          {
            v25 = v23 >> v9;
            v9 = (unsigned int)(v9 + 1);
            *(_DWORD *)(v24 + a1[2]) = v25 & 1;
            v24 += 4LL;
          }
          while ( v24 < 172 );
        }
      }
      v26 = *(_DWORD *)(*(_QWORD *)(*a1 + 128) + 16LL) != 0;
      *(_DWORD *)(a1[2] + 172) = v26;
      if ( ExtendedCapabilityTotalSize )
        Register_GetAllExtendedCapability(v5, a1[2] + 176, v26, v9);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v8) = 2;
        WPP_RECORDER_SF_(*(_QWORD *)(*a1 + 72), v8, 15, 11, (__int64)&WPP_ad99758670fa36758206abbbc9141c99_Traceguids);
      }
      *((_DWORD *)a1 + 2) = 0;
    }
  }
}

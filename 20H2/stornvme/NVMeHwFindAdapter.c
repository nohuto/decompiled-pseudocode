/*
 * XREFs of NVMeHwFindAdapter @ 0x1C00091E0
 * Callers:
 *     <none>
 * Callees:
 *     NVMeZeroMemory @ 0x1C00044E0 (NVMeZeroMemory.c)
 *     GetControllerMaxTransferSize @ 0x1C000474C (GetControllerMaxTransferSize.c)
 *     __security_check_cookie @ 0x1C00050E0 (__security_check_cookie.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     ControllerAllocateUncachedExtension @ 0x1C0008DD0 (ControllerAllocateUncachedExtension.c)
 *     IsIntelChatham @ 0x1C00090DC (IsIntelChatham.c)
 *     NVMeControllerStartFailureEventLog @ 0x1C0009154 (NVMeControllerStartFailureEventLog.c)
 *     ControllerReset @ 0x1C0009E1C (ControllerReset.c)
 *     NVMeControllerInitPart1 @ 0x1C000C5DC (NVMeControllerInitPart1.c)
 *     GetNVMeRegisterAddress @ 0x1C001BC7C (GetNVMeRegisterAddress.c)
 *     GetRegistrySettings @ 0x1C001BCE8 (GetRegistrySettings.c)
 */

__int64 __fastcall NVMeHwFindAdapter(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r15
  char v7; // r13
  char v8; // cl
  char v9; // al
  __int16 v10; // r14
  int v11; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 *NVMeRegisterAddress; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int8 v19; // al
  int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // edx
  int v23; // eax
  bool v24; // zf
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // r8
  void **v28; // r14
  char v29; // r9
  int v30; // edx
  __int64 v31; // r8
  int v32; // eax
  int v33; // eax
  _QWORD *v34; // [rsp+20h] [rbp-E0h]
  __int64 v35; // [rsp+28h] [rbp-D8h]
  __int64 v36; // [rsp+30h] [rbp-D0h]
  int v37; // [rsp+38h] [rbp-C8h]
  int v38; // [rsp+40h] [rbp-C0h]
  __int64 v39; // [rsp+48h] [rbp-B8h]
  __int64 v40; // [rsp+50h] [rbp-B0h]
  __int64 v41; // [rsp+58h] [rbp-A8h]
  __int64 v42; // [rsp+60h] [rbp-A0h]
  __int64 v43; // [rsp+68h] [rbp-98h]
  GUID v44; // [rsp+70h] [rbp-90h] BYREF
  GUID v45; // [rsp+80h] [rbp-80h]
  GUID v46; // [rsp+90h] [rbp-70h]
  GUID v47; // [rsp+A0h] [rbp-60h]
  GUID v48; // [rsp+B0h] [rbp-50h]
  _QWORD v49[8]; // [rsp+C0h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a5 + 64);
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v8 = g_ControllerExtensionIndex;
    v7 = 0;
    g_ControllerExtension[(unsigned __int8)g_ControllerExtensionIndex] = a1;
    g_ControllerExtensionIndex = (v8 + 1) & 0xF;
  }
  v9 = *(_BYTE *)(a5 + 197);
  v10 = 64;
  *(_BYTE *)(a1 + 16) = v9;
  if ( v9 )
  {
    if ( !v6 )
    {
      *(_DWORD *)(a1 + 28) = 2;
      return 2LL;
    }
    StorPortExtendedFunction(
      45LL,
      a1,
      v6,
      136LL,
      0,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      *(_QWORD *)&v44.Data1,
      *(_QWORD *)v44.Data4,
      *(_QWORD *)&v45.Data1,
      *(_QWORD *)v45.Data4);
    *(_WORD *)(a1 + 4) = *(_WORD *)v6;
    *(_WORD *)(a1 + 6) = *(_WORD *)(v6 + 2);
    *(_BYTE *)(a1 + 8) = *(_BYTE *)(v6 + 4);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(v6 + 8);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)(v6 + 16);
    *(_OWORD *)(a1 + 48) = *(_OWORD *)(v6 + 32);
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(v6 + 48);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v6 + 64);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v6 + 80);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v6 + 96);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v6 + 112);
    v11 = *(_DWORD *)(v6 + 128);
    *(_DWORD *)(a1 + 56) |= 4u;
    *(_DWORD *)(a1 + 192) = v11;
  }
  else
  {
    memset(v49, 0, sizeof(v49));
    LODWORD(v35) = 64;
    v34 = v49;
    if ( (unsigned int)StorPortGetBusData(a1, 4LL, *(unsigned int *)(a5 + 4), *(unsigned int *)(a5 + 100)) != 64 )
    {
      *(_DWORD *)(a1 + 28) = 3;
      NVMeControllerStartFailureEventLog(a1);
      StorPortNotification(4109LL, a1, 0LL);
      return 3LL;
    }
    *(_DWORD *)(a1 + 4) = v49[0];
    *(_BYTE *)(a1 + 8) = v49[1];
    if ( IsIntelChatham(a1) )
    {
      v13 = v49[3];
      v14 = 4294963200LL;
      v15 = HIDWORD(v49[3]);
    }
    else
    {
      v13 = v49[2];
      v14 = 4294950912LL;
      v15 = HIDWORD(v49[2]);
    }
    *(_QWORD *)(a1 + 144) = v14 & v13 | (v15 << 32);
  }
  NVMeRegisterAddress = (__int64 *)GetNVMeRegisterAddress(a1, a5);
  *(_QWORD *)(a1 + 152) = NVMeRegisterAddress;
  if ( !NVMeRegisterAddress )
  {
    *(_DWORD *)(a1 + 28) = 4;
    NVMeControllerStartFailureEventLog(a1);
    StorPortNotification(4109LL, a1, 0LL);
    return 3LL;
  }
  v17 = *NVMeRegisterAddress;
  v18 = *(_QWORD *)(a1 + 152);
  *(_QWORD *)(a1 + 168) = v17;
  LOBYTE(v17) = HIDWORD(*(_QWORD *)(a1 + 168)) & 0xF;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(v18 + 8);
  *(_DWORD *)(a1 + 176) = 4 << v17;
  if ( IsIntelChatham(a1) )
  {
    *(_BYTE *)(a1 + 171) = 1;
    v19 = 1;
  }
  else
  {
    v19 = *(_BYTE *)(a1 + 171);
  }
  *(_DWORD *)(a1 + 180) = 500 * v19;
  if ( !*(_BYTE *)(a1 + 16) && !v7 )
    GetRegistrySettings(a1);
  v20 = 3;
  if ( *(_DWORD *)(a5 + 20) != 1 )
    v20 = 1;
  *(_DWORD *)(a1 + 12) = v20;
  v21 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 272) = 1048640;
  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_WORD *)(a1 + 276) = 64;
    if ( !v21 || v21 > 0x40 )
      goto LABEL_34;
  }
  else
  {
    *(_WORD *)(a1 + 276) = 256;
    v22 = 1024;
    if ( v21 )
      v22 = v21;
    if ( v22 >= (unsigned __int64)(unsigned __int16)*(_DWORD *)(a1 + 168) + 1 )
      v22 = (unsigned __int16)*(_DWORD *)(a1 + 168) + 1;
    LOWORD(v21) = -1;
    if ( v22 < 0xFFFF )
      LOWORD(v21) = v22;
  }
  v10 = v21;
LABEL_34:
  *(_WORD *)(a1 + 278) = v10;
  *(_DWORD *)(a5 + 48) = 3;
  *(_BYTE *)(a5 + 81) = 1;
  *(_BYTE *)(a5 + 145) = 0;
  *(_DWORD *)(a5 + 148) = 1;
  if ( *(_DWORD *)(a5 + 20) == 1 )
  {
    *(_QWORD *)(a5 + 152) = NVMeHwMSIInterrupt;
    v23 = 2;
  }
  else
  {
    v23 = 1;
  }
  *(_DWORD *)(a5 + 160) = v23;
  v24 = *(_BYTE *)(a5 + 144) == 0x80;
  *(_DWORD *)(a5 + 216) = 0;
  if ( v24 )
    *(_BYTE *)(a5 + 144) = 2;
  v25 = *(_DWORD *)(a5 + 220) | 0x2A;
  *(_BYTE *)(a5 + 147) = 0;
  v26 = v25 | 1;
  *(_DWORD *)(a5 + 220) = v26;
  if ( (*(_DWORD *)(a1 + 56) & 2) == 0 )
    *(_DWORD *)(a5 + 220) = v26 | 4;
  if ( !v7 )
  {
    if ( !ControllerAllocateUncachedExtension(a1, a5) )
    {
LABEL_58:
      NVMeControllerStartFailureEventLog(a1);
      return 2LL;
    }
    if ( !*(_BYTE *)(a1 + 16) )
    {
      v27 = *(unsigned int *)(a1 + 112);
      if ( (_DWORD)v27 )
      {
        v28 = (void **)(a1 + 3856);
        if ( !(unsigned int)StorPortExtendedFunction(
                              0LL,
                              a1,
                              v27,
                              1701672526LL,
                              (int)a1 + 3856,
                              v35,
                              v36,
                              v37,
                              v38,
                              v39,
                              v40,
                              v41,
                              v42,
                              v43,
                              *(_QWORD *)&v44.Data1,
                              *(_QWORD *)v44.Data4,
                              *(_QWORD *)&v45.Data1,
                              *(_QWORD *)v45.Data4) )
        {
          if ( *v28 )
            NVMeZeroMemory(*v28, *(_DWORD *)(a1 + 112));
        }
      }
    }
  }
  if ( !(unsigned __int8)ControllerReset(a1) || !(unsigned __int8)NVMeControllerInitPart1(a1) )
    goto LABEL_58;
  v29 = *(_BYTE *)(*(_QWORD *)(a1 + 1608) + 77LL);
  if ( v29 )
    v30 = (1 << v29) * (1 << ((*(_BYTE *)(a1 + 174) & 0xF) + 12));
  else
    v30 = -1;
  *(_DWORD *)(a1 + 184) = v30;
  *(_DWORD *)(a5 + 24) = GetControllerMaxTransferSize((_DWORD *)a1);
  *(_DWORD *)(a5 + 28) = 513;
  *(_BYTE *)(a5 + 72) = 1;
  *(_BYTE *)(a5 + 97) = 1;
  *(_BYTE *)(a5 + 146) = -1;
  *(_DWORD *)(a5 + 212) = 32;
  *(_DWORD *)(a5 + 204) = 32;
  *(_DWORD *)(a5 + 208) = 32;
  if ( !*(_BYTE *)(a1 + 16) )
  {
    v32 = *(_DWORD *)(v31 + 96);
    v44 = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE1;
    v45 = GUID_NVME_POWER_IDLE_TIMEOUT1;
    v46 = GUID_NVME_POWER_STATE_TRANSITION_LATENCY_TOLERANCE2;
    v47 = GUID_NVME_POWER_IDLE_TIMEOUT2;
    v33 = v32 & 2;
    if ( v33 )
      v48 = GUID_NVME_POWER_NOPPME;
    StorPortExtendedFunction(
      26LL,
      a1,
      (unsigned int)(v33 != 0) + 4,
      &v44,
      (_DWORD)v34,
      v35,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41,
      v42,
      v43,
      *(_QWORD *)&v44.Data1,
      *(_QWORD *)v44.Data4,
      *(_QWORD *)&v45.Data1,
      *(_QWORD *)v45.Data4);
  }
  *(_DWORD *)(a1 + 24) &= ~2u;
  return 1LL;
}

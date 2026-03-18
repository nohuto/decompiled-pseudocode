/*
 * XREFs of ACPISystemPowerQueryDeviceCapabilities @ 0x1C0094A68
 * Callers:
 *     ACPIInternalDeviceQueryCapabilities @ 0x1C0094110 (ACPIInternalDeviceQueryCapabilities.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 *     ACPIDockIrpQueryCapabilities @ 0x1C00AA5F0 (ACPIDockIrpQueryCapabilities.c)
 * Callees:
 *     ACPIInternalClearFlags @ 0x1C0001748 (ACPIInternalClearFlags.c)
 *     ACPIInternalSetFlags @ 0x1C0001778 (ACPIInternalSetFlags.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1C001EC04 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     _ACPIInternalError @ 0x1C004E414 (_ACPIInternalError.c)
 *     ACPIInternalGetDeviceCapabilities @ 0x1C009305C (ACPIInternalGetDeviceCapabilities.c)
 */

__int64 __fastcall ACPISystemPowerQueryDeviceCapabilities(_QWORD *BugCheckParameter2, __int64 a2)
{
  __int64 *v4; // rdi
  __int64 v5; // rax
  int v6; // edx
  void *v7; // rcx
  int v8; // edx
  int v9; // edx
  int v10; // edx
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int DeviceCapabilities; // ebp
  __m128i *v16; // rdx
  void *v17; // rcx
  void *v18; // r8
  __int64 v19; // rdx
  void *v20; // rcx
  void *v21; // r8
  _DWORD v22[16]; // [rsp+50h] [rbp-68h] BYREF

  memset(v22, 0, sizeof(v22));
  v4 = BugCheckParameter2 + 1;
  v5 = BugCheckParameter2[1];
  if ( (v5 & 0x400000000000000LL) != 0 )
    goto LABEL_2;
  if ( (v5 & 0x60) == 0x40 )
  {
    v16 = (__m128i *)a2;
  }
  else
  {
    DeviceCapabilities = ACPIInternalGetDeviceCapabilities(*(PDEVICE_OBJECT *)(BugCheckParameter2[99] + 768LL), v22);
    if ( DeviceCapabilities < 0 )
    {
      v17 = &unk_1C006FB8B;
      v18 = &unk_1C006FB8B;
      if ( (*v4 & 0x200000000000LL) != 0 )
      {
        v17 = (void *)BugCheckParameter2[76];
        if ( (*v4 & 0x400000000000LL) != 0 )
          v18 = (void *)BugCheckParameter2[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          0xFu,
          0x12u,
          (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
          DeviceCapabilities,
          (char)BugCheckParameter2,
          (__int64)v17,
          (__int64)v18);
      return (unsigned int)DeviceCapabilities;
    }
    v16 = (__m128i *)v22;
  }
  DeviceCapabilities = ACPISystemPowerUpdateDeviceCapabilities((ULONG_PTR)BugCheckParameter2, v16, a2);
  if ( DeviceCapabilities < 0 )
  {
    v19 = *v4;
    v20 = &unk_1C006FB8B;
    v21 = &unk_1C006FB8B;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v20 = (void *)BugCheckParameter2[76];
      if ( (v19 & 0x400000000000LL) != 0 )
        v21 = (void *)BugCheckParameter2[77];
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0xFu,
        0x13u,
        (__int64)&WPP_63048e4611d63d39c0d94317710a082a_Traceguids,
        DeviceCapabilities,
        (char)BugCheckParameter2,
        (__int64)v20,
        (__int64)v21);
      v19 = *v4;
    }
    if ( (v19 & 0x20) != 0 )
      ACPIInternalError(0xB043DuLL);
    return (unsigned int)DeviceCapabilities;
  }
  ACPIInternalSetFlags(BugCheckParameter2 + 1, 0x400000000000000uLL);
LABEL_2:
  v6 = *(_DWORD *)(a2 + 4);
  v7 = BugCheckParameter2 + 125;
  *(_OWORD *)(a2 + 16) = *(_OWORD *)((char *)BugCheckParameter2 + 508);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)((char *)BugCheckParameter2 + 524);
  *(_DWORD *)(a2 + 40) = *((_DWORD *)BugCheckParameter2 + 133);
  *(_DWORD *)(a2 + 44) = *((_DWORD *)BugCheckParameter2 + 134);
  *(_DWORD *)(a2 + 48) = *((_DWORD *)BugCheckParameter2 + 135);
  v8 = *(_DWORD *)(a2 + 4) ^ (*((_DWORD *)BugCheckParameter2 + 150) ^ v6) & 1;
  *(_DWORD *)(a2 + 4) = v8;
  v9 = ((unsigned __int8)v8 ^ (unsigned __int8)*((_DWORD *)BugCheckParameter2 + 150)) & 2 ^ v8;
  *(_DWORD *)(a2 + 4) = v9;
  v10 = ((unsigned __int16)v9 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x400 ^ v9;
  *(_DWORD *)(a2 + 4) = v10;
  v11 = ((unsigned __int16)v10 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x800 ^ v10;
  *(_DWORD *)(a2 + 4) = v11;
  v12 = ((unsigned __int16)v11 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x1000 ^ v11;
  *(_DWORD *)(a2 + 4) = v12;
  v13 = ((unsigned __int16)v12 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)BugCheckParameter2 + 150) << 8)) & 0x2000 ^ v12;
  *(_DWORD *)(a2 + 4) = v13;
  if ( _bittest64(BugCheckParameter2 + 125, 0x20u) )
  {
    if ( (v13 & 0x80000) != 0 )
      ACPIInternalClearFlags(v7, 0x100000LL);
    else
      ACPIInternalSetFlags(v7, 0x100000uLL);
  }
  return 0LL;
}

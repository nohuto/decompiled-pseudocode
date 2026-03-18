/*
 * XREFs of AcpiConvertObjDataToMethodArguments @ 0x1C005BB40
 * Callers:
 *     AcpiSetupNativeMethodContext @ 0x1C005C860 (AcpiSetupNativeMethodContext.c)
 * Callees:
 *     ACPIIoctlCalculateOutputBufferV1 @ 0x1C001BF00 (ACPIIoctlCalculateOutputBufferV1.c)
 *     ACPIIoctlCalculateOutputBufferSizeV1 @ 0x1C001C0A0 (ACPIIoctlCalculateOutputBufferSizeV1.c)
 *     WPP_RECORDER_SF_DDDD @ 0x1C005CA90 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_PD @ 0x1C005CDF4 (WPP_RECORDER_SF_PD.c)
 */

__int64 __fastcall AcpiConvertObjDataToMethodArguments(unsigned int a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v4; // r14d
  int v8; // ebx
  unsigned int i; // r10d
  int v10; // edx
  int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 Pool2; // rax
  int v15; // edx
  int v16; // r8d
  int v17; // r9d
  void *v18; // rbp
  __int64 v19; // r15
  int v20; // edx
  __int64 v21; // rax
  _QWORD *v22; // rax
  int v24; // [rsp+20h] [rbp-78h]
  _QWORD v25[9]; // [rsp+50h] [rbp-48h] BYREF
  int v26; // [rsp+A0h] [rbp+8h] BYREF
  _QWORD *v27; // [rsp+B0h] [rbp+18h]

  v27 = a3;
  v4 = 0;
  if ( a1 )
  {
    v25[0] = 0LL;
    v26 = 0;
    for ( i = 0; i < a1; i = v11 + 1 )
    {
      v8 = ACPIIoctlCalculateOutputBufferSizeV1(a2 + 40LL * i, v25, &v26, 1u, 0);
      if ( v8 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            21,
            21,
            v24,
            v11,
            a1,
            *(_WORD *)(a2 + 40 * v12 + 2),
            v8);
        return (unsigned int)v8;
      }
    }
    v13 = v25[0];
    Pool2 = ExAllocatePool2(64LL, v25[0], 1315988289LL);
    v18 = (void *)Pool2;
    if ( Pool2 )
    {
      v19 = Pool2;
      if ( a1 )
      {
        while ( 1 )
        {
          v8 = ACPIIoctlCalculateOutputBufferV1(a2 + 40LL * v4, v19, 1);
          if ( v8 < 0 )
            break;
          v21 = *(unsigned __int16 *)(v19 + 2);
          if ( (unsigned __int16)v21 < 4u )
            v21 = 4LL;
          ++v4;
          v19 += v21 + 4;
          if ( v4 >= a1 )
            goto LABEL_16;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_DDDD(
            WPP_GLOBAL_Control->DeviceExtension,
            v20,
            19,
            23,
            v24,
            v4,
            a1,
            *(_WORD *)(a2 + 40LL * v4 + 2),
            v8);
        ExFreePoolWithTag(v18, 0x4E706341u);
      }
      else
      {
LABEL_16:
        v22 = v27;
        v8 = 0;
        *a4 = v13;
        *v22 = v18;
      }
    }
    else
    {
      v8 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_PD(WPP_GLOBAL_Control->DeviceExtension, v15, v16, v17, v24, v13);
    }
  }
  else
  {
    *a3 = 0LL;
    v8 = 0;
    *a4 = 0LL;
  }
  return (unsigned int)v8;
}

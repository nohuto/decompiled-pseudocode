/*
 * XREFs of AcpiSetupNativeMethodContext @ 0x1C005B9C0
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C005B360 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qD @ 0x1C00199A8 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C001B348 (AMLIGetParent.c)
 *     memset @ 0x1C0032480 (memset.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005AC44 (AcpiConvertObjDataToMethodArguments.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005C244 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C005C39C (WPP_RECORDER_SF_sqqD.c)
 *     AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C0060A14 (AcpiGetNativeMethodHandleFromAcpiObject.c)
 */

__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  PVOID PoolWithTag; // rsi
  int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // rbp
  int NativeMethodHandleFromAcpiObject; // eax
  __int64 v10; // r15
  int v11; // edx
  int v12; // edx
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  SIZE_T v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v15 = 0LL;
  PoolWithTag = 0LL;
  P = 0LL;
  v6 = -1073741823;
  v7 = AMLIGetParent(v3);
  v8 = v7;
  if ( v7 )
  {
    NativeMethodHandleFromAcpiObject = AcpiGetNativeMethodHandleFromAcpiObject(v7, &v15);
    v6 = NativeMethodHandleFromAcpiObject;
    if ( NativeMethodHandleFromAcpiObject >= 0 )
    {
      memset(a2, 0, 0x48uLL);
      v10 = v15;
      *a2 = *(_QWORD *)(a1 + 32);
      a2[1] = v10;
      v6 = AcpiConvertObjDataToMethodArguments(*(_DWORD *)(a1 + 44), *(_QWORD *)(a1 + 48), &P, &v16);
      if ( v6 >= 0 )
      {
        if ( *(_DWORD *)(a1 + 40) )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x4E706341u);
          if ( !PoolWithTag )
          {
            v6 = -1073741670;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v12, 21, 20);
            goto LABEL_16;
          }
        }
        a2[4] = P;
        a2[3] = v16;
        *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
        if ( PoolWithTag )
        {
          a2[7] = PoolWithTag;
          *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
          a2[6] = 64LL;
        }
        v6 = 0;
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_sqqD(WPP_GLOBAL_Control->DeviceExtension, v11, 19, 19);
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      WPP_RECORDER_SF_qD(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x13u,
        0x12u,
        (__int64)&WPP_4ea83bc4352b3df9b35783bbf858603c_Traceguids,
        v8,
        NativeMethodHandleFromAcpiObject);
    }
    if ( v6 >= 0 )
    {
LABEL_20:
      AMLIDereferenceHandleEx(v8);
      return (unsigned int)v6;
    }
LABEL_16:
    if ( P )
      ExFreePoolWithTag(P, 0x4E706341u);
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x4E706341u);
    goto LABEL_20;
  }
  return (unsigned int)v6;
}

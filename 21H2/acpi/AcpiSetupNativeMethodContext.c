/*
 * XREFs of AcpiSetupNativeMethodContext @ 0x1C005C860
 * Callers:
 *     AcpiNativeMethodEvalRequestHandler @ 0x1C005C220 (AcpiNativeMethodEvalRequestHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0007340 (WPP_RECORDER_SF_qD.c)
 *     AMLIGetParent @ 0x1C000A040 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     AcpiConvertObjDataToMethodArguments @ 0x1C005BB40 (AcpiConvertObjDataToMethodArguments.c)
 *     WPP_RECORDER_SF_qqD @ 0x1C005D0E0 (WPP_RECORDER_SF_qqD.c)
 *     WPP_RECORDER_SF_sqqD @ 0x1C005D238 (WPP_RECORDER_SF_sqqD.c)
 *     AcpiGetNativeMethodHandleFromAcpiObject @ 0x1C00617D4 (AcpiGetNativeMethodHandleFromAcpiObject.c)
 */

__int64 __fastcall AcpiSetupNativeMethodContext(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  __int64 Pool2; // rsi
  int v6; // ebx
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbp
  int NativeMethodHandleFromAcpiObject; // eax
  __int64 v10; // r15
  int v11; // edx
  int v12; // edx
  PVOID P; // [rsp+80h] [rbp+8h] BYREF
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v16 = 0LL;
  v3 = *(_QWORD *)(a1 + 24);
  v15 = 0LL;
  Pool2 = 0LL;
  P = 0LL;
  v6 = -1073741823;
  v7 = AMLIGetParent(v3);
  v8 = (volatile signed __int32 *)v7;
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
        if ( !*(_DWORD *)(a1 + 40) || (Pool2 = ExAllocatePool2(64LL, 64LL, 1315988289LL)) != 0 )
        {
          a2[4] = P;
          a2[3] = v16;
          *((_DWORD *)a2 + 4) = *(_DWORD *)(a1 + 44);
          if ( Pool2 )
          {
            a2[7] = Pool2;
            *((_DWORD *)a2 + 10) = *(_DWORD *)(a1 + 40);
            a2[6] = 64LL;
          }
          v6 = 0;
          goto LABEL_18;
        }
        v6 = -1073741670;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v12, 21, 20);
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
        (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
        v8,
        NativeMethodHandleFromAcpiObject);
    }
    if ( P )
      ExFreePoolWithTag(P, 0x4E706341u);
LABEL_18:
    AMLIDereferenceHandleEx(v8);
  }
  return (unsigned int)v6;
}

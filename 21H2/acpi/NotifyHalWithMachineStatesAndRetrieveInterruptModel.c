/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BE654
 * Callers:
 *     ACPIInitialize @ 0x1C00BE48C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0001B20 (WPP_RECORDER_SF_s.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x1C0018260 (AMLIGetNameSpaceObject.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_ @ 0x1C00234AC (WPP_RECORDER_SF_.c)
 *     AMLIEvalPackageElement @ 0x1C0024258 (AMLIEvalPackageElement.c)
 *     __security_check_cookie @ 0x1C002F140 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _BYTE *Pool2; // r15
  int v2; // esi
  unsigned __int64 v3; // r13
  __int64 v4; // rdi
  int v5; // ebx
  __int64 v6; // r14
  char *v7; // rdi
  __int64 *v8; // rdi
  int v9; // r12d
  char *v10; // rbx
  int *v11; // rsi
  int v12; // ecx
  volatile signed __int32 *v13; // rdi
  int v14; // eax
  unsigned int v15; // ebx
  int v17; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v19; // [rsp+48h] [rbp-49h] BYREF
  __int64 v20; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h] BYREF
  __int128 v22; // [rsp+60h] [rbp-31h] BYREF
  __int128 v23; // [rsp+70h] [rbp-21h]
  __int64 v24; // [rsp+80h] [rbp-11h]
  int *v25; // [rsp+88h] [rbp-9h]
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v27[8]; // [rsp+B8h] [rbp+27h] BYREF

  v25 = a1;
  v24 = 0LL;
  strcpy(v27, "\\_PIC");
  BugCheckParameter4 = 0LL;
  Src[0] = "\\_S1";
  v20 = 0LL;
  Src[1] = "\\_S2";
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v22 = 0LL;
  InputBuffer = 0LL;
  v23 = 0LL;
  v19 = 0LL;
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 15LL, 1299211073LL);
  if ( !Pool2 )
    return (unsigned int)-1073741670;
  AcpiSupportedSystemStates = 98;
  v2 = 2;
  v3 = 0LL;
  do
  {
    v4 = (unsigned __int8)byte_1C0071E60[v3];
    v5 = dword_1C0071E40[v3 / 4];
    if ( v2 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v2 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v2 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xDu,
          (__int64)&WPP_3dd25c6642953b52ee099d888ce7445f_Traceguids,
          (const char *)Src[v4]);
      Pool2[2 * v4 + v4] = 0;
      if ( v5 )
      {
        HIDWORD(v19) |= v5;
        LODWORD(v19) = 2;
      }
      goto LABEL_12;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && (unsigned int)v2 < 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xEu,
          (__int64)&WPP_3dd25c6642953b52ee099d888ce7445f_Traceguids,
          (const char *)Src[v4]);
      Pool2[2 * v4 + v4] = 0;
      if ( v5 )
      {
        HIDWORD(v20) |= v5;
        LODWORD(v20) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && (unsigned int)v2 >= 5 )
    {
      v9 = 1 << v2;
      v6 = (unsigned __int8)byte_1C0071E60[v3];
LABEL_10:
      if ( (v9 & AcpiSupportedSystemStates) != 0 )
        Pool2[2 * v6 + v6] = 1;
      goto LABEL_12;
    }
    v6 = (unsigned __int8)byte_1C0071E60[v3];
    v7 = (char *)Src[v4];
    if ( (int)AMLIGetNameSpaceObject(v7, 0LL, &BugCheckParameter4, 0) >= 0 )
    {
      v8 = (__int64 *)BugCheckParameter4;
      v9 = 1 << v2;
      AcpiSupportedSystemStates |= 1 << v2;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, (__int64)&v22);
      v10 = &Pool2[2 * v6];
      v10[v6 + 1] = v23;
      dword_1C0081AC8 = 0;
      byte_1C0081ACC[0] = 0;
      FreeDataBuffs((__int64)&v22, 1u);
      AMLIEvalPackageElement(v8, 1u, (__int64)&v22);
      v10[v6 + 2] = v23;
      dword_1C0081AC8 = 0;
      byte_1C0081ACC[0] = 0;
      FreeDataBuffs((__int64)&v22, 1u);
      AMLIDereferenceHandleEx((volatile signed __int32 *)v8);
      BugCheckParameter4 = 0LL;
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_3dd25c6642953b52ee099d888ce7445f_Traceguids,
        v7);
    Pool2[2 * v6 + v6] = 0;
    if ( v5 )
    {
      HIDWORD(InputBuffer) |= v5;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v2;
    v3 += 4LL;
  }
  while ( v2 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x10u,
        (__int64)&WPP_3dd25c6642953b52ee099d888ce7445f_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v19 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v19, 8u, 0LL, 0);
  if ( (_DWORD)v20 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v20, 8u, 0LL, 0);
  v17 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(Pool2, &v17);
  ExFreePoolWithTag(Pool2, 0);
  v11 = v25;
  v12 = 4096;
  if ( (unsigned int)(v17 - 1) <= 3 )
    v12 = v17;
  *v25 = v12;
  if ( (int)AMLIGetNameSpaceObject(v27, 0LL, &BugCheckParameter4, 0) < 0 )
  {
    return 0;
  }
  else
  {
    v13 = (volatile signed __int32 *)BugCheckParameter4;
    v22 = 0LL;
    v24 = 0LL;
    WORD1(v22) = 1;
    v23 = (unsigned __int64)v17;
    v14 = AMLIEvalNameSpaceObject((__int64 *)BugCheckParameter4, 0LL, 1u, &v22);
    v15 = v14;
    if ( v14 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v11, v14, (ULONG_PTR)v13);
    AMLIDereferenceHandleEx(v13);
  }
  return v15;
}

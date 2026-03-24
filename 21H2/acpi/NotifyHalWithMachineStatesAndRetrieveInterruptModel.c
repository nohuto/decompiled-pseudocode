/*
 * XREFs of NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00BDF8C
 * Callers:
 *     ACPIInitialize @ 0x1C00BED6C (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C0002C50 (WPP_RECORDER_SF_s.c)
 *     FreeDataBuffs @ 0x1C0003350 (FreeDataBuffs.c)
 *     AMLIGetNameSpaceObject @ 0x1C000B01C (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000BC6C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000BCA0 (AMLIEvalNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x1C0012380 (AMLIEvalPackageElement.c)
 *     WPP_RECORDER_SF_ @ 0x1C001D78C (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0031C80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0032180 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NotifyHalWithMachineStatesAndRetrieveInterruptModel(int *a1)
{
  _QWORD *PoolWithTag; // rax
  _BYTE *v2; // rsi
  int v3; // r14d
  unsigned __int64 v4; // r13
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v7; // r15
  char *v8; // rdi
  __int64 *v9; // rdi
  int v10; // r12d
  char *v11; // rbx
  int *v12; // rsi
  int v13; // ecx
  ULONG_PTR v14; // rdi
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // [rsp+38h] [rbp-59h] BYREF
  __int64 InputBuffer; // [rsp+40h] [rbp-51h] BYREF
  __int64 v20; // [rsp+48h] [rbp-49h] BYREF
  __int64 v21; // [rsp+50h] [rbp-41h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp-39h] BYREF
  __int128 v23; // [rsp+60h] [rbp-31h] BYREF
  __int128 v24; // [rsp+70h] [rbp-21h]
  __int64 v25; // [rsp+80h] [rbp-11h]
  int *v26; // [rsp+88h] [rbp-9h]
  void *Src[5]; // [rsp+90h] [rbp-1h]
  char v28[8]; // [rsp+B8h] [rbp+27h] BYREF

  v26 = a1;
  v25 = 0LL;
  strcpy(v28, "\\_PIC");
  BugCheckParameter4 = 0LL;
  Src[0] = "\\_S1";
  Src[1] = "\\_S2";
  Src[2] = "\\_S3";
  Src[3] = "\\_S4";
  Src[4] = "\\_S5";
  v23 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  InputBuffer = 0LL;
  v20 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xFuLL, 0x4D706341u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  v3 = 2;
  *PoolWithTag = 0LL;
  v4 = 0LL;
  *((_DWORD *)PoolWithTag + 2) = 0;
  *((_WORD *)PoolWithTag + 6) = 0;
  *((_BYTE *)PoolWithTag + 14) = 0;
  AcpiSupportedSystemStates = 98;
  do
  {
    v5 = (unsigned __int8)byte_1C0072040[v4];
    v6 = dword_1C0072020[v4 / 4];
    if ( v3 == 2 && (AcpiOverrideAttributes & 0x10) != 0
      || v3 == 3 && (AcpiOverrideAttributes & 0x20) != 0
      || v3 == 4 && (AcpiOverrideAttributes & 0x40) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xDu,
          (__int64)&WPP_cae08db89bbe32cf0838cd0f6fe71f40_Traceguids,
          (const char *)Src[v5]);
      v2[2 * v5 + v5] = 0;
      if ( v6 )
      {
        HIDWORD(v20) |= v6;
        LODWORD(v20) = 2;
      }
      goto LABEL_12;
    }
    if ( (AcpiOverrideAttributes & 4) != 0 && v3 < 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_s(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          6u,
          0xEu,
          (__int64)&WPP_cae08db89bbe32cf0838cd0f6fe71f40_Traceguids,
          (const char *)Src[v5]);
      v2[2 * v5 + v5] = 0;
      if ( v6 )
      {
        HIDWORD(v21) |= v6;
        LODWORD(v21) = 9;
      }
      goto LABEL_12;
    }
    if ( *((_BYTE *)AcpiInformation + 133) && v3 >= 5 )
    {
      v10 = 1 << v3;
      v7 = (unsigned __int8)byte_1C0072040[v4];
LABEL_10:
      if ( (v10 & AcpiSupportedSystemStates) != 0 )
        v2[2 * v7 + v7] = 1;
      goto LABEL_12;
    }
    v7 = (unsigned __int8)byte_1C0072040[v4];
    v8 = (char *)Src[v5];
    if ( (int)AMLIGetNameSpaceObject(v8, 0LL, &BugCheckParameter4, 0) >= 0 )
    {
      v9 = (__int64 *)BugCheckParameter4;
      v10 = 1 << v3;
      AcpiSupportedSystemStates |= 1 << v3;
      AMLIEvalPackageElement((__int64 *)BugCheckParameter4, 0, (__int64)&v23);
      v11 = &v2[2 * v7];
      v11[v7 + 1] = v24;
      dword_1C0082908 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v23, 1u);
      AMLIEvalPackageElement(v9, 1u, (__int64)&v23);
      v11[v7 + 2] = v24;
      dword_1C0082908 = 0;
      pszDest[0] = 0;
      FreeDataBuffs((__int64)&v23, 1u);
      AMLIDereferenceHandleEx((__int64)v9);
      BugCheckParameter4 = 0LL;
      goto LABEL_10;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_s(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        6u,
        0xFu,
        (__int64)&WPP_cae08db89bbe32cf0838cd0f6fe71f40_Traceguids,
        v8);
    v2[2 * v7 + v7] = 0;
    if ( v6 )
    {
      HIDWORD(InputBuffer) |= v6;
      LODWORD(InputBuffer) = 1;
    }
LABEL_12:
    ++v3;
    v4 += 4LL;
  }
  while ( v3 <= 6 );
  if ( *((_BYTE *)AcpiInformation + 133) && (AcpiSupportedSystemStates & 0xFFFFFF9D) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x16u,
        0x10u,
        (__int64)&WPP_cae08db89bbe32cf0838cd0f6fe71f40_Traceguids);
    KeBugCheckEx(0xA5u, 0x11uLL, 0xDuLL, 0LL, 0LL);
  }
  if ( (_DWORD)InputBuffer )
    ZwPowerInformation(SystemPowerLoggingEntry, &InputBuffer, 8u, 0LL, 0);
  if ( (_DWORD)v20 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v20, 8u, 0LL, 0);
  if ( (_DWORD)v21 )
    ZwPowerInformation(SystemPowerLoggingEntry, &v21, 8u, 0LL, 0);
  v18 = 0;
  (*(void (__fastcall **)(_BYTE *, int *))(PmHalDispatchTable + 16))(v2, &v18);
  ExFreePoolWithTag(v2, 0);
  v12 = v26;
  v13 = 4096;
  if ( (unsigned int)(v18 - 1) <= 3 )
    v13 = v18;
  *v26 = v13;
  if ( (int)AMLIGetNameSpaceObject(v28, 0LL, &BugCheckParameter4, 0) < 0 )
  {
    return 0;
  }
  else
  {
    v14 = BugCheckParameter4;
    v23 = 0LL;
    v25 = 0LL;
    WORD1(v23) = 1;
    v24 = (unsigned __int64)v18;
    v15 = AMLIEvalNameSpaceObject((unsigned __int64 *)BugCheckParameter4, 0LL, 1, &v23);
    v16 = v15;
    if ( v15 < 0 )
      KeBugCheckEx(0xA5u, 0x2001uLL, *v12, v15, v14);
    AMLIDereferenceHandleEx(v14);
  }
  return v16;
}

/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C01E0A20
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C001DDD4 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C004FE50 (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C01985C4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01E0C3C (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C01E1050 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C02DB43C (DxgkCaptureQueryInterface.c)
 *     ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1C030CCDC (-SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z.c)
 *     ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x1C03445D4 (-DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rdi
  struct _DXGWSL_INTERFACE *v10; // r15
  int v11; // eax
  int Win32k; // ebx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 (__fastcall *v16)(); // rax
  struct DXGKW32KIMPORTS **Global; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  struct DXGGLOBAL *v20; // rax
  int TestInterface; // eax
  unsigned int v22; // eax
  __int64 v23; // rax
  const wchar_t *v24; // r9
  DXGGLOBAL *v25; // rax
  int v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h]
  char v28; // [rsp+60h] [rbp-10h]
  unsigned int v29; // [rsp+A8h] [rbp+38h] BYREF

  v26 = -1;
  v27 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 2);
  v4 = 0;
  v5 = *(_QWORD *)(a2 + 184);
  v29 = 0;
  v6 = *(unsigned int *)(v5 + 24);
  v7 = *(unsigned int *)(v5 + 8);
  v8 = *(unsigned int *)(v5 + 16);
  if ( *(_BYTE *)(a2 + 64) )
  {
    WdLogSingleEntry1(1LL, 1088LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pIrp->RequestorMode == KernelMode",
      1088LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (v6 & 3) != 3 )
  {
    WdLogSingleEntry1(1LL, 1094LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"METHOD_FROM_CTL_CODE(Ioctl) == METHOD_NEITHER",
      1094LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *(_QWORD *)(a2 + 112);
  v10 = *(struct _DXGWSL_INTERFACE **)(v5 + 32);
  if ( (unsigned int)v6 <= 0x23E057 )
  {
    if ( (_DWORD)v6 == 2351191 )
    {
      if ( (unsigned int)v8 < 0x318 || (unsigned int)v7 < 0x318 )
      {
        WdLogSingleEntry4(1LL, v8, v7, 792LL, -1073741306LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"Invalid lengths specified for IOCTL_INTERNAL_VIDEO_QUERY_WIN32K_INTERFACE (Input = 0n%I64d, Output = "
                    "0n%I64d, sizeof(DXGKWIN32K_INTERFACE) = 0n%I64d), returing 0x%I64x",
          v8,
          v7,
          792LL,
          -1073741306LL,
          0LL);
LABEL_80:
        Win32k = -1073741306;
        goto LABEL_15;
      }
      Global = (struct DXGKW32KIMPORTS **)DXGGLOBAL_GetGlobal();
      Win32k = DXGGLOBAL::DelayLoadWin32k(Global, *(void **)(v9 + 8));
      if ( Win32k >= 0 )
      {
        Win32k = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v9, &v29);
        if ( Win32k >= 0 )
        {
LABEL_14:
          v4 = v29;
          goto LABEL_15;
        }
        v4 = v29;
      }
    }
    else
    {
      if ( (_DWORD)v6 != 2293767 )
      {
        switch ( (_DWORD)v6 )
        {
          case 0x23003F:
            if ( (unsigned int)v7 >= 8 && v9 )
            {
              v16 = (__int64 (__fastcall *)())DpiInitialize;
              goto LABEL_27;
            }
            break;
          case 0x230043:
            if ( (unsigned int)v7 >= 8 && v9 )
            {
              v16 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
              goto LABEL_27;
            }
            break;
          case 0x230047:
            if ( (unsigned int)v7 >= 8 && v9 )
            {
              v16 = (__int64 (__fastcall *)())DpiInitializeWin8;
              goto LABEL_27;
            }
            break;
          case 0x23004B:
            if ( (unsigned int)v7 >= 8 && v9 )
            {
              v16 = DpiUnInitialize;
              goto LABEL_27;
            }
            break;
          case 0x232063:
            if ( (unsigned int)v7 >= 8 && v9 )
            {
              v16 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
LABEL_27:
              Win32k = 0;
              *(_QWORD *)v9 = v16;
              v4 = 8;
              goto LABEL_15;
            }
            break;
          default:
            goto LABEL_60;
        }
        v19 = v7;
        Win32k = -1073741789;
        WdLogSingleEntry3(3LL, v19, *(_QWORD *)(a2 + 112), -1073741789LL);
        goto LABEL_15;
      }
      v20 = DXGGLOBAL_GetGlobal();
      v29 = -1073741275;
      Win32k = DXGGLOBAL::IterateAdaptersWithCallback(
                 (__int64)v20,
                 (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                 (__int64)&v29,
                 0LL);
      if ( Win32k >= 0 )
      {
        Win32k = v29;
        if ( (v29 & 0x80000000) == 0 )
          goto LABEL_15;
      }
    }
    v18 = Win32k;
LABEL_52:
    WdLogSingleEntry1(3LL, v18);
    goto LABEL_15;
  }
  switch ( (_DWORD)v6 )
  {
    case 0x23E05B:
      if ( (unsigned int)v8 >= 0x210 && (unsigned int)v7 >= 0x210 )
      {
        v11 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v29);
        goto LABEL_12;
      }
      goto LABEL_79;
    case 0x23E05F:
      if ( (unsigned int)v8 >= 0x30 && (unsigned int)v7 >= 0x30 )
      {
        v11 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v29);
LABEL_12:
        Win32k = v11;
        if ( v11 < 0 )
          WdLogSingleEntry1(3LL, v11);
        goto LABEL_14;
      }
LABEL_79:
      WdLogSingleEntry3(3LL, v8, v7, -1073741306LL);
      goto LABEL_80;
    case 0x23E067:
      if ( (unsigned int)v8 >= 0x268 && (unsigned int)v7 >= 0x268 )
      {
        v11 = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v29);
        goto LABEL_12;
      }
      goto LABEL_79;
  }
  if ( (_DWORD)v6 != 2351211 )
  {
    if ( (_DWORD)v6 == 2351215 )
    {
      if ( (unsigned int)v8 < 8 )
      {
        WdLogSingleEntry2(3LL, v8, 8LL);
        Win32k = -1073741306;
        goto LABEL_15;
      }
      TestInterface = DxgkpQueryTestInterface(
                        *(_QWORD *)(a2 + 112),
                        (unsigned int)v7,
                        *(unsigned int *)v10,
                        *((unsigned int *)v10 + 1));
      Win32k = TestInterface;
      if ( TestInterface >= 0 )
        goto LABEL_15;
      v18 = TestInterface;
      goto LABEL_52;
    }
LABEL_60:
    Win32k = -1073741808;
    WdLogSingleEntry2(3LL, v6, -1073741808LL);
    goto LABEL_15;
  }
  if ( (unsigned int)v8 < 0xC )
  {
    WdLogSingleEntry2(3LL, v8, -1073741306LL);
    goto LABEL_80;
  }
  if ( *((_DWORD *)v10 + 2) == 1 )
  {
    v22 = *((_DWORD *)v10 + 1);
    if ( v22 == 1 )
    {
      if ( *(_DWORD *)v10 == 80 )
      {
        v25 = DXGGLOBAL_GetGlobal();
        Win32k = DXGGLOBAL::SetWslInterface(v25, v10);
        goto LABEL_15;
      }
      WdLogSingleEntry1(2LL, *(unsigned int *)v10);
      v23 = *(unsigned int *)v10;
      v24 = L"Invalid size of DXGWSL_INTERFACE: %I64x";
    }
    else
    {
      WdLogSingleEntry1(2LL, v22);
      v23 = *((unsigned int *)v10 + 1);
      v24 = L"Invalid version of DXGINTERFACE_WSL: %I64x";
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, *((int *)v10 + 2));
    v23 = *((int *)v10 + 2);
    v24 = L"Invalid interface type in IOCTL_INTERNAL_VIDEO_SET_INTERFACE: %I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v24, v23, 0LL, 0LL, 0LL, 0LL);
  Win32k = -1073741811;
LABEL_15:
  *(_QWORD *)(a2 + 56) = v4;
  *(_DWORD *)(a2 + 48) = Win32k;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v26);
  return (unsigned int)Win32k;
}

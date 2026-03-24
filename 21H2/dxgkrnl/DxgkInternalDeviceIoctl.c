/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C0164E00
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CE8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006318 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C0019C00 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024B10 (McTemplateK0q_EtwWriteTransfer.c)
 *     Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage @ 0x1C0026138 (Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C0043ECC (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C0133D8C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01651E0 (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C01655FC (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C022C198 (DxgkCaptureQueryInterface.c)
 */

__int64 __fastcall DxgkInternalDeviceIoctl(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(); // rax
  _QWORD *v16; // rax
  struct DXGGLOBAL *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rax
  DXGGLOBAL *Global; // rax
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  unsigned int v35; // [rsp+78h] [rbp+38h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 2;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 2LL);
  v7 = *(unsigned int **)(a2 + 184);
  v8 = 0;
  v35 = 0;
  v9 = v7[6];
  v10 = v7[2];
  v11 = v7[4];
  if ( *(_BYTE *)(a2 + 64) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v12 + 24) = 1076LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( (v9 & 3) != 3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v13 + 24) = 1082LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *(_QWORD *)(a2 + 112);
  if ( (unsigned int)v9 > 0x232063 )
  {
    switch ( (_DWORD)v9 )
    {
      case 0x23E057:
        if ( (unsigned int)v11 < 0x328 || (unsigned int)v10 < 0x328 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, v4);
          v27[4] = v10;
          LODWORD(v10) = -1073741306;
          v27[6] = -1073741306LL;
          v27[3] = v11;
          v27[5] = 808LL;
          WdLogEvent5_WdAssertion(v27);
          goto LABEL_65;
        }
        Global = DXGGLOBAL::GetGlobal(v5, v4);
        LODWORD(v10) = DXGGLOBAL::DelayLoadWin32k(Global, *(void **)(v14 + 8));
        if ( (int)v10 < 0 )
          goto LABEL_63;
        LODWORD(v10) = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v14, &v35);
        if ( (int)v10 < 0 )
        {
          v8 = v35;
          goto LABEL_63;
        }
LABEL_54:
        v8 = v35;
        goto LABEL_65;
      case 0x23E05B:
        if ( (unsigned int)v11 < 0x218 || (unsigned int)v10 < 0x218 )
          goto LABEL_55;
        v21 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v35);
        break;
      case 0x23E05F:
        if ( (unsigned int)v11 < 0x30 || (unsigned int)v10 < 0x30 )
          goto LABEL_55;
        v21 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v35);
        break;
      case 0x23E067:
        if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabledDeviceUsage() )
        {
          LODWORD(v10) = -1073741637;
          v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
          v16[3] = -1073741637LL;
          goto LABEL_57;
        }
        if ( (unsigned int)v11 >= 0x250 && (unsigned int)v10 >= 0x250 )
        {
          v21 = ComputeQueryInterface((struct _DXGKCOMPUTE_INTERFACE *)v14, &v35);
          break;
        }
LABEL_55:
        v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
        v16[3] = v11;
        v16[4] = v10;
        v10 = -1073741306LL;
        goto LABEL_56;
      default:
LABEL_40:
        v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
        LODWORD(v10) = -1073741808;
        v16[3] = v9;
        v16[4] = -1073741808LL;
LABEL_57:
        WdLogEvent5_WdWarning(v16);
        goto LABEL_65;
    }
    v10 = v21;
    if ( v21 < 0 )
    {
      v25 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      *(_QWORD *)(v25 + 24) = v10;
      WdLogEvent5_WdWarning(v25);
    }
    goto LABEL_54;
  }
  if ( (_DWORD)v9 == 2302051 )
  {
    if ( (unsigned int)v10 >= 8 && v14 )
    {
      v15 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
      goto LABEL_22;
    }
    goto LABEL_23;
  }
  if ( (_DWORD)v9 != 2293767 )
  {
    switch ( (_DWORD)v9 )
    {
      case 0x23003F:
        if ( (unsigned int)v10 >= 8 && v14 )
        {
          v15 = (__int64 (__fastcall *)())DpiInitialize;
          goto LABEL_22;
        }
        break;
      case 0x230043:
        if ( (unsigned int)v10 >= 8 && v14 )
        {
          v15 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
          goto LABEL_22;
        }
        break;
      case 0x230047:
        if ( (unsigned int)v10 >= 8 && v14 )
        {
          v15 = (__int64 (__fastcall *)())DpiInitializeWin8;
          goto LABEL_22;
        }
        break;
      case 0x23004B:
        if ( (unsigned int)v10 >= 8 && v14 )
        {
          v15 = DpiUnInitialize;
LABEL_22:
          LODWORD(v10) = 0;
          *(_QWORD *)v14 = v15;
          v8 = 8;
          goto LABEL_65;
        }
        break;
      default:
        goto LABEL_40;
    }
LABEL_23:
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
    v16[3] = v10;
    v10 = -1073741789LL;
    v16[4] = v14;
LABEL_56:
    v16[5] = v10;
    goto LABEL_57;
  }
  v17 = DXGGLOBAL::GetGlobal(v5, v4);
  v35 = -1073741275;
  LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(
                   (__int64)v17,
                   (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                   (__int64)&v35,
                   0);
  if ( (int)v10 < 0 || (LODWORD(v10) = v35, (v35 & 0x80000000) != 0) )
  {
LABEL_63:
    v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v19, v18, v20);
    v16[3] = (int)v10;
    goto LABEL_57;
  }
LABEL_65:
  *(_QWORD *)(a2 + 56) = v8;
  *(_DWORD *)(a2 + 48) = v10;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v28);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v32);
  return (unsigned int)v10;
}

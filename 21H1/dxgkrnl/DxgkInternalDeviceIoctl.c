/*
 * XREFs of DxgkInternalDeviceIoctl @ 0x1C01501E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z @ 0x1C00191B4 (-DelayLoadWin32k@DXGGLOBAL@@QEAAJPEAX@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z @ 0x1C004200C (-ComputeQueryInterface@@YAJPEAU_DXGKCOMPUTE_INTERFACE@@PEAK@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C011739C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z @ 0x1C01503FC (-DxgkCddQueryInterface@@YAJPEAU_DXGKCDD_INTERFACE@@PEAK@Z.c)
 *     ?DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z @ 0x1C0150818 (-DxgkWin32kQueryInterface@@YAJPEAU_DXGKWIN32K_INTERFACE@@PEAK@Z.c)
 *     DxgkCaptureQueryInterface @ 0x1C02281F8 (DxgkCaptureQueryInterface.c)
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
  __int64 v12; // rdi
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 (__fastcall *v21)(); // rax
  DXGGLOBAL *Global; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  struct DXGGLOBAL *v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  unsigned int v35; // [rsp+78h] [rbp+38h] BYREF

  v32 = -1;
  v33 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
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
    v27 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v27 + 24) = 1081LL;
    WdLogEvent5_WdAssertion(v27);
  }
  if ( (v9 & 3) != 3 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v28 + 24) = 1087LL;
    WdLogEvent5_WdAssertion(v28);
  }
  v12 = *(_QWORD *)(a2 + 112);
  if ( (unsigned int)v9 > 0x232063 )
  {
    if ( (_DWORD)v9 != 2351191 )
    {
      switch ( (_DWORD)v9 )
      {
        case 0x23E05B:
          if ( (unsigned int)v11 >= 0x218 && (unsigned int)v10 >= 0x218 )
          {
            v13 = DxgkCddQueryInterface(*(struct _DXGKCDD_INTERFACE **)(a2 + 112), &v35);
            goto LABEL_13;
          }
          goto LABEL_60;
        case 0x23E05F:
          if ( (unsigned int)v11 >= 0x30 && (unsigned int)v10 >= 0x30 )
          {
            v13 = DxgkCaptureQueryInterface(*(_QWORD *)(a2 + 112), &v35);
LABEL_13:
            v10 = v13;
            if ( v13 < 0 )
            {
              v30 = WdLogNewEntry5_WdWarning(v15, v14, v16);
              *(_QWORD *)(v30 + 24) = v10;
              WdLogEvent5_WdWarning(v30);
            }
            goto LABEL_15;
          }
LABEL_60:
          v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
          v26[3] = v11;
          v26[4] = v10;
          v10 = -1073741306LL;
          goto LABEL_61;
        case 0x23E067:
          if ( (unsigned int)v11 >= 0x250 && (unsigned int)v10 >= 0x250 )
          {
            v13 = ComputeQueryInterface(*(struct _DXGKCOMPUTE_INTERFACE **)(a2 + 112), &v35);
            goto LABEL_13;
          }
          goto LABEL_60;
      }
LABEL_56:
      v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
      LODWORD(v10) = -1073741808;
      v26[3] = v9;
      v26[4] = -1073741808LL;
LABEL_63:
      WdLogEvent5_WdWarning(v26);
      goto LABEL_16;
    }
    if ( (unsigned int)v11 < 0x328 || (unsigned int)v10 < 0x328 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdAssertion(v5, v4);
      v31[4] = v10;
      LODWORD(v10) = -1073741306;
      v31[6] = -1073741306LL;
      v31[3] = v11;
      v31[5] = 808LL;
      WdLogEvent5_WdAssertion(v31);
      goto LABEL_16;
    }
    Global = DXGGLOBAL::GetGlobal(v5, v4);
    LODWORD(v10) = DXGGLOBAL::DelayLoadWin32k(Global, *(void **)(v12 + 8));
    if ( (int)v10 >= 0 )
    {
      LODWORD(v10) = DxgkWin32kQueryInterface((struct _DXGKWIN32K_INTERFACE *)v12, &v35);
      if ( (int)v10 >= 0 )
      {
LABEL_15:
        v8 = v35;
        goto LABEL_16;
      }
      v8 = v35;
    }
LABEL_62:
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v24, v23, v25);
    v26[3] = (int)v10;
    goto LABEL_63;
  }
  if ( (_DWORD)v9 == 2302051 )
  {
    if ( (unsigned int)v10 >= 8 && v12 )
    {
      v21 = (__int64 (__fastcall *)())DpiReportSoftwareDevice;
      goto LABEL_33;
    }
LABEL_41:
    v26 = (_QWORD *)WdLogNewEntry5_WdWarning(v5, v4, v6);
    v26[3] = v10;
    v10 = -1073741789LL;
    v26[4] = v12;
LABEL_61:
    v26[5] = v10;
    goto LABEL_63;
  }
  if ( (_DWORD)v9 != 2293767 )
  {
    switch ( (_DWORD)v9 )
    {
      case 0x23003F:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v21 = (__int64 (__fastcall *)())DpiInitialize;
          goto LABEL_33;
        }
        break;
      case 0x230043:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v21 = (__int64 (__fastcall *)())DpiKmdDodInitialize;
LABEL_33:
          LODWORD(v10) = 0;
          *(_QWORD *)v12 = v21;
          v8 = 8;
          goto LABEL_16;
        }
        break;
      case 0x230047:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v21 = (__int64 (__fastcall *)())DpiInitializeWin8;
          goto LABEL_33;
        }
        break;
      case 0x23004B:
        if ( (unsigned int)v10 >= 8 && v12 )
        {
          v21 = DpiUnInitialize;
          goto LABEL_33;
        }
        break;
      default:
        goto LABEL_56;
    }
    goto LABEL_41;
  }
  v29 = DXGGLOBAL::GetGlobal(v5, v4);
  v35 = -1073741275;
  LODWORD(v10) = DXGGLOBAL::IterateAdaptersWithCallback(
                   (__int64)v29,
                   (__int64 (__fastcall *)(_QWORD *, __int64))RfxVgpuResetCallback,
                   (__int64)&v35,
                   0);
  if ( (int)v10 < 0 )
    goto LABEL_62;
  LODWORD(v10) = v35;
  if ( (v35 & 0x80000000) != 0 )
    goto LABEL_62;
LABEL_16:
  *(_QWORD *)(a2 + 56) = v8;
  *(_DWORD *)(a2 + 48) = v10;
  IofCompleteRequest((PIRP)a2, 0);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v17);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v32);
  return (unsigned int)v10;
}

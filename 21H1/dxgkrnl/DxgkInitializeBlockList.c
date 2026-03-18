/*
 * XREFs of DxgkInitializeBlockList @ 0x1C0178AA4
 * Callers:
 *     DpiInitializeBlockList @ 0x1C0172A74 (DpiInitializeBlockList.c)
 *     ?InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ @ 0x1C017866C (-InitializeDriverWorkarounds@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000D778 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D7CC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DxgkConvertWddmVersionToD3DKMTDriverVersion @ 0x1C00223C4 (DxgkConvertWddmVersionToD3DKMTDriverVersion.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024408 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0178BC4 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01792CC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 */

__int64 __fastcall DxgkInitializeBlockList(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned int v6; // ebp
  const unsigned __int16 *v7; // r14
  enum _QAI_DRIVERVERSION v8; // r15d
  __int64 v9; // rdx
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // r8
  int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  char v16; // [rsp+40h] [rbp-28h]

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || *(_DWORD *)(v3 + 16) != 1953656900 || *(_DWORD *)(v3 + 20) != 2 )
    return 3221225485LL;
  if ( a3 )
    *a3 = v3 + 5896;
  if ( *(_BYTE *)(v3 + 5888) )
    return 0LL;
  v14 = -1;
  v15 = 0LL;
  if ( (qword_1C00AE9B0 & 2) != 0 )
  {
    v16 = 1;
    v14 = 8015;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, (__int64)a3, 8015);
  }
  else
  {
    v16 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v14, 8015LL);
  v5 = *(_DWORD *)(v3 + 1124);
  v6 = *(_DWORD *)(v3 + 1128);
  v7 = *(const unsigned __int16 **)(v3 + 4896);
  v8 = (unsigned int)DxgkConvertWddmVersionToD3DKMTDriverVersion(a2);
  v10 = CheckKernelBlockList((struct _FDO_CONTEXT *)v3, v5, v6, v7, v8);
  if ( v10 >= 0 )
  {
    v10 = CheckRuntimeBlockList((struct _FDO_CONTEXT *)v3, v5, v6, v7, v8);
    if ( v10 >= 0 )
      *(_BYTE *)(v3 + 5888) = 1;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v14, v9);
  if ( v16 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v14);
  }
  return (unsigned int)v10;
}

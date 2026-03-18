/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C0133708
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C013528C (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C0131130 (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
 *     DxgkGetPathsModality @ 0x1C0131D50 (DxgkGetPathsModality.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C0131FF4 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C0133828 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C0135E00 (DxgkGetDisplayConfigBufferSizes.c)
 */

__int64 __fastcall GetRequestedPathsModality(
        __int64 a1,
        __int64 a2,
        struct _QDC_CONTEXT *a3,
        enum DISPLAYCONFIG_TOPOLOGY_ID *a4)
{
  int v4; // eax
  __int64 v6; // rbx
  int v8; // r12d
  int v9; // ebp
  unsigned __int16 v10; // di
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int16 v14; // ax
  int PathsModality; // ebx
  __int64 v17; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[64]; // [rsp+20h] [rbp-88h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v26; // [rsp+60h] [rbp-48h]
  int v27; // [rsp+C0h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v6 = (unsigned int)a1;
  v8 = a2;
  if ( !v4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1230LL;
    return 3221225507LL;
  }
  v27 = 0;
  v9 = a1 & 0x200000;
  if ( (a1 & 0x200000) != 0 )
  {
    v10 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v17 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v17 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v23 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v23 + 24) = v6;
        WdLogEvent5_WdAssertion(v23);
        return 3221225485LL;
      }
      v17 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v17, &v27);
    v21 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v22 + 24) = v21;
      *(_QWORD *)(v22 + 32) = 2LL;
      WdLogEvent5_WdError(v22);
    }
    else
    {
      v10 = v27;
    }
  }
  else
  {
    v10 = v4;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v25, v10, 0);
  if ( v26 )
    v14 = *((_WORD *)v26 + 11);
  else
    v14 = 0;
  if ( (unsigned int)v14 < *((_DWORD *)a3 + 1) )
  {
    v24 = WdLogNewEntry5_WdLowResource(v11, v26, v12, v13);
    *(_QWORD *)(v24 + 24) = *((unsigned int *)a3 + 1);
    WdLogEvent5_WdLowResource(v24);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v6, v26, 0LL);
    if ( PathsModality >= 0 )
    {
      PathsModality = ConvertPathModalityToDisplayConfig(v26, v8 != 0, v9 != 0, a3);
      if ( PathsModality >= 0 )
        *(_DWORD *)a4 = *((_DWORD *)v26 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v25);
  return (unsigned int)PathsModality;
}

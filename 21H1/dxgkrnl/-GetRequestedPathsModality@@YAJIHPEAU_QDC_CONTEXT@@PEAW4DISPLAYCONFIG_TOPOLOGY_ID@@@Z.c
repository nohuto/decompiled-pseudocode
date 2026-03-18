/*
 * XREFs of ?GetRequestedPathsModality@@YAJIHPEAU_QDC_CONTEXT@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E5D00
 * Callers:
 *     ?QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFIG_TOPOLOGY_ID@@@Z @ 0x1C00E3424 (-QueryDisplayConfigInternal@@YAJ_NIIIPEAIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAW4DISPLAYCONFI.c)
 * Callees:
 *     DxgkGetDisplayConfigBufferSizes @ 0x1C00E3F90 (DxgkGetDisplayConfigBufferSizes.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00E459C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkGetPathsModality @ 0x1C00E81C0 (DxgkGetPathsModality.c)
 *     ??1CCD_TOPOLOGY@@QEAA@XZ @ 0x1C00E8464 (--1CCD_TOPOLOGY@@QEAA@XZ.c)
 *     ??0CCD_TOPOLOGY@@QEAA@GG@Z @ 0x1C00E8F0C (--0CCD_TOPOLOGY@@QEAA@GG@Z.c)
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
  __int64 v15; // rdx
  int PathsModality; // ebx
  __int64 v17; // r8
  __int64 v19; // rcx
  int DisplayConfigBufferSizes; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[64]; // [rsp+20h] [rbp-88h] BYREF
  struct D3DKMT_GETPATHSMODALITY *v28; // [rsp+60h] [rbp-48h]
  unsigned int v29; // [rsp+C0h] [rbp+18h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v6 = (unsigned int)a1;
  v8 = a2;
  if ( !v4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2, a3, a4) + 24) = 1229LL;
    return 3221225507LL;
  }
  v29 = 0;
  v9 = a1 & 0x200000;
  if ( (a1 & 0x200000) != 0 )
  {
    v10 = 2;
    if ( (a1 & 0x10) != 0 )
    {
      v19 = 1LL;
    }
    else if ( (a1 & 0x40) != 0 )
    {
      v19 = 2LL;
    }
    else
    {
      if ( (a1 & 0xF) == 0 )
      {
        v25 = WdLogNewEntry5_WdAssertion(a1, a2);
        *(_QWORD *)(v25 + 24) = v6;
        WdLogEvent5_WdAssertion(v25);
        return 3221225485LL;
      }
      v19 = 4LL;
    }
    DisplayConfigBufferSizes = DxgkGetDisplayConfigBufferSizes(v19, &v29, (__int64)a3);
    v23 = DisplayConfigBufferSizes;
    if ( DisplayConfigBufferSizes < 0 )
    {
      v24 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v24 + 24) = v23;
      *(_QWORD *)(v24 + 32) = 2LL;
      WdLogEvent5_WdError(v24);
    }
    else
    {
      v10 = v29;
    }
  }
  else
  {
    v10 = v4;
  }
  CCD_TOPOLOGY::CCD_TOPOLOGY((CCD_TOPOLOGY *)v27, v10, 0);
  if ( v28 )
    v14 = *((_WORD *)v28 + 11);
  else
    v14 = 0;
  if ( (unsigned int)v14 < *((_DWORD *)a3 + 1) )
  {
    v26 = WdLogNewEntry5_WdLowResource(v11, v28, v12, v13);
    *(_QWORD *)(v26 + 24) = *((unsigned int *)a3 + 1);
    WdLogEvent5_WdLowResource(v26);
    PathsModality = -1073741801;
  }
  else
  {
    PathsModality = DxgkGetPathsModality((unsigned int)v6, v28, 0LL);
    if ( PathsModality >= 0 )
    {
      LOBYTE(v17) = v9 != 0;
      LOBYTE(v15) = v8 != 0;
      PathsModality = ConvertPathModalityToDisplayConfig(v28, v15, v17, a3);
      if ( PathsModality >= 0 )
        *(_DWORD *)a4 = *((_DWORD *)v28 + 8);
    }
  }
  CCD_TOPOLOGY::~CCD_TOPOLOGY((CCD_TOPOLOGY *)v27);
  return (unsigned int)PathsModality;
}

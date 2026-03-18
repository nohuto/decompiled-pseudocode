/*
 * XREFs of ?DxgkWaitForSynchronizationObjectInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@H@Z @ 0x1C00E86E0
 * Callers:
 *     DxgkWaitForSynchronizationObject @ 0x1C00DE0E0 (DxgkWaitForSynchronizationObject.c)
 *     ?DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z @ 0x1C0171490 (-DxgkCddWaitForSynchronizationObject@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2@@@Z.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024458 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z @ 0x1C00EBBA0 (-WaitForSynchronizationObjectFromGpu@@YAJIPEBIPEB_K_KIPEAVDXGPROCESS@@_N444@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWaitForSynchronizationObjectInternal(
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *a1,
        int a2,
        __int64 a3)
{
  const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *v4; // rbx
  struct DXGPROCESS *Current; // rdx
  __int64 v6; // rcx
  D3DKMT_HANDLE *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  D3DKMT_HANDLE *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // r8
  int v29; // [rsp+50h] [rbp-108h] BYREF
  __int64 v30; // [rsp+58h] [rbp-100h]
  char v31; // [rsp+60h] [rbp-F8h]
  struct DXGPROCESS *v32; // [rsp+68h] [rbp-F0h]
  __int128 v33; // [rsp+70h] [rbp-E8h] BYREF
  __int128 v34; // [rsp+80h] [rbp-D8h]
  __int128 v35; // [rsp+90h] [rbp-C8h]
  __int128 v36; // [rsp+A0h] [rbp-B8h]
  __int128 v37; // [rsp+B0h] [rbp-A8h]
  __int128 v38; // [rsp+C0h] [rbp-98h]
  __int128 v39; // [rsp+D0h] [rbp-88h]
  __int128 v40; // [rsp+E0h] [rbp-78h]
  __int128 v41; // [rsp+F0h] [rbp-68h] BYREF
  __int128 v42; // [rsp+100h] [rbp-58h]
  __int128 v43; // [rsp+110h] [rbp-48h]
  __int128 v44; // [rsp+120h] [rbp-38h]
  __int64 v45; // [rsp+130h] [rbp-28h]

  v4 = a1;
  v29 = -1;
  v30 = 0LL;
  if ( (qword_1C00B09B0 & 2) != 0 )
  {
    v31 = 1;
    v29 = 2043;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2043);
  }
  else
  {
    v31 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v29, 2043LL);
  Current = DXGPROCESS::GetCurrent();
  v32 = Current;
  if ( Current )
  {
    if ( !a2 )
    {
      v33 = *(_OWORD *)&v4->hContext;
      v34 = *(_OWORD *)&v4->ObjectHandleArray[2];
      v35 = *(_OWORD *)&v4->ObjectHandleArray[6];
      v36 = *(_OWORD *)&v4->ObjectHandleArray[10];
      v37 = *(_OWORD *)&v4->ObjectHandleArray[14];
      v38 = *(_OWORD *)&v4->ObjectHandleArray[18];
      v39 = *(_OWORD *)&v4->ObjectHandleArray[22];
      v40 = *(_OWORD *)&v4->ObjectHandleArray[26];
      v22 = &v4->ObjectHandleArray[30];
      v41 = *(_OWORD *)v22;
      v42 = *((_OWORD *)v22 + 1);
      v43 = *((_OWORD *)v22 + 2);
      v44 = *((_OWORD *)v22 + 3);
      v45 = *((_QWORD *)v22 + 8);
      v8 = v33;
      goto LABEL_18;
    }
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2 *)MmUserProbeAddress;
    v33 = *(_OWORD *)&v4->hContext;
    v34 = *(_OWORD *)&v4->ObjectHandleArray[2];
    v35 = *(_OWORD *)&v4->ObjectHandleArray[6];
    v36 = *(_OWORD *)&v4->ObjectHandleArray[10];
    v37 = *(_OWORD *)&v4->ObjectHandleArray[14];
    v38 = *(_OWORD *)&v4->ObjectHandleArray[18];
    v39 = *(_OWORD *)&v4->ObjectHandleArray[22];
    v40 = *(_OWORD *)&v4->ObjectHandleArray[26];
    v7 = &v4->ObjectHandleArray[30];
    v41 = *(_OWORD *)v7;
    v42 = *((_OWORD *)v7 + 1);
    v43 = *((_OWORD *)v7 + 2);
    v44 = *((_OWORD *)v7 + 3);
    v45 = *((_QWORD *)v7 + 8);
    v8 = v33;
    if ( DWORD1(v33) )
    {
      if ( DWORD1(v33) <= 0x20 )
      {
LABEL_18:
        v19 = WaitForSynchronizationObjectFromGpu(
                HIDWORD(v8),
                (const unsigned int *)&v33 + 2,
                0LL,
                *((unsigned __int64 *)&v41 + 1),
                v8,
                Current,
                a2 != 0,
                0,
                0,
                0);
        if ( v19 < 0 )
        {
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
          if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
            McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v29);
          return (unsigned int)v19;
        }
        else
        {
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v18);
          if ( v31 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
              McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v29);
          }
          return 0LL;
        }
      }
      v14 = (_QWORD *)WdLogNewEntry5_WdError(&v41, Current);
      v14[3] = (unsigned int)v33;
      v14[4] = DWORD1(v33);
      v14[5] = -1073741811LL;
      WdLogEvent5_WdError(v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v15);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v29);
      return 3221225485LL;
    }
    else
    {
      v9 = WdLogNewEntry5_WdError(&v41, Current);
      *(_QWORD *)(v9 + 24) = (unsigned int)v33;
      *(_QWORD *)(v9 + 32) = -1073741811LL;
      WdLogEvent5_WdError(v9);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v10);
      if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, &EventProfilerExit, v12, v29);
      return 3221225485LL;
    }
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v6, 0LL);
    *(_QWORD *)(v23 + 24) = PsGetCurrentProcess();
    *(_QWORD *)(v23 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v23);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v29, v24);
    if ( v31 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v29);
    return 3221225485LL;
  }
}

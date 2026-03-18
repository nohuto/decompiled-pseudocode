/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C0288390
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0002CA8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0006148 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00244B8 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0111EB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C02870F0 (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0287380 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _OWORD *v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  DXGPROTECTEDSESSION **v25; // rdi
  DXGPROTECTEDSESSION *v26; // rcx
  __int64 v27; // rax
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r14
  unsigned int v33; // esi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // rax
  _DWORD *v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  HANDLE Handle[2]; // [rsp+30h] [rbp-48h] BYREF
  int v46; // [rsp+40h] [rbp-38h] BYREF
  __int64 v47; // [rsp+48h] [rbp-30h]
  char v48; // [rsp+50h] [rbp-28h]
  PVOID Object; // [rsp+88h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+90h] [rbp+18h] BYREF

  v46 = -1;
  v47 = 0LL;
  if ( (qword_1C00AF9B0 & 2) != 0 )
  {
    v48 = 1;
    v46 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2152);
  }
  else
  {
    v48 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v46, 2152LL);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v6 + 24) = 722LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGPROCESS::GetCurrent(v5, v4) )
  {
    v9 = WdLogNewEntry5_WdError(v8, v7);
    LODWORD(v10) = -1073741811;
    *(_QWORD *)(v9 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v9);
LABEL_9:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v11);
    if ( v48 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v46);
    }
    return (unsigned int)v10;
  }
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v15;
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v10 = v16;
  if ( v16 == -1073741788 )
  {
    v20 = WdLogNewEntry5_WdWarning(v18, v17, v19);
    *(HANDLE *)(v20 + 24) = Handle[0];
    *(_QWORD *)(v20 + 32) = -1073741788LL;
    WdLogEvent5_WdWarning(v20);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v21);
    if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v46);
    return 3221225508LL;
  }
  else
  {
    if ( v16 < 0 )
    {
      v24 = WdLogNewEntry5_WdWarning(v18, v17, v19);
      *(HANDLE *)(v24 + 24) = Handle[0];
      *(_QWORD *)(v24 + 32) = v10;
      WdLogEvent5_WdWarning(v24);
      goto LABEL_9;
    }
    v25 = (DXGPROTECTEDSESSION **)Object;
    v26 = *(DXGPROTECTEDSESSION **)Object;
    if ( !*(_QWORD *)Object )
    {
      v27 = WdLogNewEntry5_WdAssertion(0LL, v17);
      *(_QWORD *)(v27 + 24) = 784LL;
      WdLogEvent5_WdAssertion(v27);
      v26 = *v25;
    }
    v28 = DXGPROTECTEDSESSION::Open(v26, (unsigned int *)&Handle[1]);
    v32 = v28;
    if ( v28 >= 0 )
    {
      v36 = (int)Handle[1];
      if ( !LODWORD(Handle[1]) )
      {
        v37 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v37 + 24) = 799LL;
        WdLogEvent5_WdAssertion(v37);
      }
      v38 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v38 = (_DWORD *)MmUserProbeAddress;
      *v38 = v36;
      ObfDereferenceObject(v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v39);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v46);
      return 0LL;
    }
    else
    {
      v33 = (unsigned int)Handle[1];
      if ( LODWORD(Handle[1]) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v30, v29);
        *(_QWORD *)(v34 + 24) = 792LL;
        WdLogEvent5_WdAssertion(v34);
      }
      v35 = WdLogNewEntry5_WdWarning(v30, v29, v31);
      *(HANDLE *)(v35 + 24) = Handle[0];
      *(_QWORD *)(v35 + 32) = v32;
      WdLogEvent5_WdWarning(v35);
      if ( v33 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(*v25, v33);
      ObfDereferenceObject(v25);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v46, v42);
      if ( v48 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v46);
      return (unsigned int)v32;
    }
  }
}

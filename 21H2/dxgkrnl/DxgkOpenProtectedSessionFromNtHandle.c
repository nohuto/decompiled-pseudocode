/*
 * XREFs of DxgkOpenProtectedSessionFromNtHandle @ 0x1C033B2D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B780 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000D9B8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002B284 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0339ABC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 *     ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0339DD8 (-Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z.c)
 */

__int64 __fastcall DxgkOpenProtectedSessionFromNtHandle(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // sf
  _OWORD *v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  DXGPROTECTEDSESSION **v19; // rdi
  DXGPROTECTEDSESSION *v20; // rcx
  int v21; // eax
  __int64 v22; // r15
  unsigned int v23; // r14d
  int v24; // r15d
  _DWORD *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // r8
  HANDLE Handle[2]; // [rsp+50h] [rbp-48h] BYREF
  int v31; // [rsp+60h] [rbp-38h] BYREF
  __int64 v32; // [rsp+68h] [rbp-30h]
  char v33; // [rsp+70h] [rbp-28h]
  PVOID Object; // [rsp+A8h] [rbp+10h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+B0h] [rbp+18h] BYREF

  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C012F870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2152;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2152);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2152);
  HandleInformation = 0LL;
  if ( (unsigned __int8)PsGetCurrentThreadPreviousMode() != 1 )
  {
    WdLogSingleEntry1(1LL, 722LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"PsGetCurrentThreadPreviousMode() == UserMode",
      722LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGPROCESS::GetCurrent(v5, v4, v6, v7) )
  {
    v8 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      LOBYTE(v9) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_10;
    }
    return v8;
  }
  v13 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)Handle = *v13;
  LODWORD(Handle[1]) = 0;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(
          Handle[0],
          0x20000u,
          g_pDxgkSharedProtectedSessionObjectType,
          1,
          &Object,
          &HandleInformation);
  v8 = v14;
  if ( v14 == -1073741788 )
  {
    WdLogSingleEntry2(3LL, Handle[0], -1073741788LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v31);
    }
    return 3221225508LL;
  }
  else
  {
    if ( v14 < 0 )
    {
      WdLogSingleEntry2(3LL, Handle[0], v14);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 )
      {
        v11 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_10:
        if ( v11 )
          McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v31);
      }
      return v8;
    }
    v19 = (DXGPROTECTEDSESSION **)Object;
    v20 = *(DXGPROTECTEDSESSION **)Object;
    if ( !*(_QWORD *)Object )
    {
      WdLogSingleEntry1(1LL, 784LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pSharedProtectedSessionObject->pProtectedSession",
        784LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v20 = *v19;
    }
    v21 = DXGPROTECTEDSESSION::Open(v20, (unsigned int *)&Handle[1], v15, v16);
    v22 = v21;
    if ( v21 >= 0 )
    {
      v24 = (int)Handle[1];
      if ( !LODWORD(Handle[1]) )
      {
        WdLogSingleEntry1(1LL, 799LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"KMOpenProtectedSessionFromNtHandle.hHandle",
          799LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v25 = (_DWORD *)(a1 + 8);
      if ( a1 + 8 >= MmUserProbeAddress )
        v25 = (_DWORD *)MmUserProbeAddress;
      *v25 = v24;
      ObfDereferenceObject(v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v31);
      return 0LL;
    }
    else
    {
      v23 = (unsigned int)Handle[1];
      if ( LODWORD(Handle[1]) )
      {
        WdLogSingleEntry1(1LL, 792LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"NULL == KMOpenProtectedSessionFromNtHandle.hHandle",
          792LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      WdLogSingleEntry2(3LL, Handle[0], v22);
      if ( v23 )
        DXGPROTECTEDSESSION::DestroyProtectedSession(*v19, v23);
      ObfDereferenceObject(v19);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v28, &EventProfilerExit, v29, v31);
      return (unsigned int)v22;
    }
  }
}

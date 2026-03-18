/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C018B330
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1C0189DE4 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C000C5D4 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C018A070 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1C03354A0 (DxgkIsGraphicsPartitionApplication.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, void *a2, __int64 a3, __int64 a4)
{
  int v6; // edx
  __int64 v7; // rdx
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  void *v10; // rcx
  __int64 v11; // r9
  int v12; // ecx
  NTSTATUS InformationProcess; // eax
  __int128 v14; // xmm0
  HANDLE v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 ProcessImageFileName; // rax
  __int64 v21; // r9
  const void *v22; // rsi
  size_t v23; // rbx
  void *v24; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 v26; // r9
  struct DXGGLOBAL *v27; // r14
  unsigned int v28; // esi
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rax
  struct DXGGLOBAL *v33; // rax
  int v34; // eax
  _QWORD *v35; // r14
  unsigned int v36; // esi
  __int64 result; // rax
  const wchar_t *v38; // r9
  bool v39; // zf
  int ProcessInformation; // [rsp+58h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp-51h] BYREF
  __int128 v42; // [rsp+68h] [rbp-49h]
  _QWORD v43[12]; // [rsp+78h] [rbp-39h] BYREF

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  v6 = 0;
  if ( *((PEPROCESS *)this + 7) == PsInitialSystemProcess )
    v6 = 2;
  v7 = *((_DWORD *)this + 106) & 0xFFFFFFFD | v6;
  *((_DWORD *)this + 106) = v7;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, v7, a3, a4);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  ProcessHandle = 0LL;
  v10 = (void *)*((_QWORD *)this + 7);
  *((_DWORD *)this + 106) = (ProcessWow64Process != 0 ? 8 : 0) | *((_DWORD *)this + 106) & 0xFFFFFFF7;
  if ( ObOpenObjectByPointer(v10, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v43, 0, sizeof(v43));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
    {
      v12 = 0;
      if ( ProcessInformation == 1 )
        v12 = 16;
      *((_DWORD *)this + 106) = v12 | *((_DWORD *)this + 106) & 0xFFFFFFEF;
    }
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v43, 0x60u, 0LL);
    v14 = 0LL;
    v42 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v42) = HIDWORD(v43[0]);
      WORD2(v42) = v43[7];
      WORD3(v42) = WORD2(v43[7]);
      *((_QWORD *)&v42 + 1) = v43[2];
      v14 = v42;
    }
    v15 = ProcessHandle;
    *(_OWORD *)((char *)this + 360) = v14;
    ObCloseHandle(v15, 0);
  }
  if ( (*((_DWORD *)this + 106) & 2) == 0 && *((_BYTE *)DXGGLOBAL_GetGlobal() + 304512) )
    *((_BYTE *)this + 590) = DxgkIsGraphicsPartitionApplication(*((PEPROCESS *)this + 7));
  v16 = (_QWORD *)operator new[](0x88uLL, 0x4B677844u, 64LL, v11);
  v17 = v16;
  if ( v16 )
  {
    v18 = v16 + 12;
    v16[4] = 0LL;
    v16[10] = 0LL;
    v16[11] = 0LL;
    KeInitializeSpinLock(v16 + 14);
    v18[1] = v18;
    *v18 = v18;
    v17[15] = 0LL;
    *((_WORD *)v17 + 64) = 0;
    *((_BYTE *)v17 + 130) = 0;
    *(_OWORD *)v17 = 0LL;
    *((_OWORD *)v17 + 1) = 0LL;
    *((_OWORD *)v17 + 3) = 0LL;
    *((_OWORD *)v17 + 4) = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  *((_QWORD *)this + 8) = v17;
  if ( !v17 )
  {
    WdLogSingleEntry1(6LL, this);
    v38 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData";
LABEL_45:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v38, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v17[4] = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 7);
  v19 = (_QWORD *)*((_QWORD *)this + 8);
  v19[8] = DxgkpProcessStatusChangeWork;
  v19[9] = this;
  v19[6] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v22 = (const void *)ProcessImageFileName;
  v23 = -1LL;
  do
    ++v23;
  while ( *(_BYTE *)(ProcessImageFileName + v23) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 88LL) = operator new[](v23 + 1, 0x4B677844u, 64LL, v21);
  v24 = *(void **)(*((_QWORD *)this + 8) + 88LL);
  if ( !v24 )
  {
    WdLogSingleEntry1(6LL, this);
    v38 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData->m_ProcessName";
    goto LABEL_45;
  }
  memmove(v24, v22, v23);
  *(_BYTE *)(v23 + *(_QWORD *)(*((_QWORD *)this + 8) + 88LL)) = 0;
  *(_BYTE *)(*((_QWORD *)this + 8) + 128LL) = (*((_DWORD *)this + 106) & 0x10) != 0;
  Global = DXGGLOBAL_GetGlobal();
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1716), this);
  v27 = DXGGLOBAL_GetGlobal();
  v28 = *((_DWORD *)v27 + 348);
  if ( !v28 )
  {
    WdLogSingleEntry1(1LL, 2690LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2690LL, 0LL, 0LL, 0LL, 0LL);
    v28 = *((_DWORD *)v27 + 348);
    if ( !v28 )
    {
      WdLogSingleEntry1(1LL, 1651LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MaximumGlobalAdapterCount > 0", 1651LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v29 = 8LL * v28;
  if ( !is_mul_ok(v28, 8uLL) )
    v29 = -1LL;
  v30 = operator new[](v29, 0x4B677844u, 256LL, v26);
  *((_QWORD *)this + 6) = v30;
  if ( !v30 )
  {
    WdLogSingleEntry1(6LL, this);
    v38 = L"DXGPROCESS (0x%I64x) failed to allocate m_ppAdapterInfo";
    goto LABEL_45;
  }
  v32 = operator new[](0x30uLL, 0x4B677844u, 256LL, v31);
  *((_QWORD *)this + 9) = v32;
  if ( !v32 )
  {
    WdLogSingleEntry1(6LL, this);
    v38 = L"DXGPROCESS (0x%I64x) failed to allocate m_pCsStartRunningTime";
    goto LABEL_45;
  }
  v33 = DXGGLOBAL_GetGlobal();
  if ( !*((_DWORD *)v33 + 538) || (v39 = *((_BYTE *)v33 + 304408) == 0, v34 = 1, v39) )
    v34 = 0;
  *((_DWORD *)this + 20) = v34;
  v35 = &DXGGLOBAL::m_pDxgmmsExport;
  v36 = 0;
  while ( 1 )
  {
    DXGGLOBAL_GetGlobal();
    if ( *v35 )
    {
      result = DXGPROCESS::DeferredInitialize(this, v36);
      if ( (int)result < 0 )
        break;
    }
    ++v36;
    ++v35;
    if ( v36 >= 2 )
    {
      _InterlockedAdd64((volatile signed __int64 *)this + 4, 1uLL);
      if ( *((__int64 *)this + 4) <= 0 )
      {
        WdLogSingleEntry1(1LL, 980LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_ReferenceCount > 0", 980LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*((_DWORD *)this + 106) & 0x100) != 0 )
        *(_QWORD *)(*((_QWORD *)this + 8) + 120LL) = *(_QWORD *)(*((_QWORD *)this + 76) + 608LL) + 160LL;
      *((_DWORD *)this + 10) = 1;
      return 0LL;
    }
  }
  return result;
}

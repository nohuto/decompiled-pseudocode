/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010F304
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C011A908 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C000AE64 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C00184C4 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0018E28 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C01496E8 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1C0280134 (DxgkIsGraphicsPartitionApplication.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, void *a2)
{
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  void *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  NTSTATUS InformationProcess; // eax
  __int128 v10; // xmm0
  HANDLE v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdx
  void *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  DXGPROCESS_NONPAGED *v18; // rax
  DXGPROCESS_NONPAGED *v19; // rax
  _QWORD *v20; // rax
  __int64 ProcessImageFileName; // rax
  const void *v22; // rsi
  size_t v23; // rdi
  __int64 v24; // rcx
  __int64 v25; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  struct DXGGLOBAL *v31; // rsi
  unsigned __int64 v32; // rdi
  SIZE_T v33; // rax
  PVOID v34; // rax
  PVOID v35; // rax
  struct DXGGLOBAL *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // eax
  _QWORD *v40; // rsi
  unsigned int v41; // edi
  __int64 result; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rax
  bool v50; // zf
  __int64 v51; // rax
  int ProcessInformation; // [rsp+48h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-51h] BYREF
  __int128 v54; // [rsp+58h] [rbp-49h]
  _QWORD v55[12]; // [rsp+68h] [rbp-39h] BYREF

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  if ( *((_QWORD *)this + 13) )
  {
    v43 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v43 + 24) = 1519LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( *((_QWORD *)this + 42) )
  {
    v44 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v44 + 24) = 1520LL;
    WdLogEvent5_WdAssertion(v44);
  }
  *((_BYTE *)this + 345) = *((_QWORD *)this + 7) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, a2);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  ProcessHandle = 0LL;
  v6 = (void *)*((_QWORD *)this + 7);
  *((_BYTE *)this + 347) = (ProcessWow64Process != 0) | *((_BYTE *)this + 347) & 0xFE;
  if ( ObOpenObjectByPointer(v6, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v55, 0, sizeof(v55));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
      *((_BYTE *)this + 347) = (ProcessInformation != 1 ? 0 : 2) | *((_BYTE *)this + 347) & 0xFD;
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v55, 0x60u, 0LL);
    v10 = 0LL;
    v54 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v54) = HIDWORD(v55[0]);
      WORD2(v54) = v55[7];
      WORD3(v54) = WORD2(v55[7]);
      *((_QWORD *)&v54 + 1) = v55[2];
      v10 = v54;
    }
    v11 = ProcessHandle;
    *((_OWORD *)this + 20) = v10;
    ObCloseHandle(v11, 0);
  }
  if ( !*((_BYTE *)this + 345) && *((_BYTE *)DXGGLOBAL::GetGlobal(v8, v7) + 304200) )
    *((_BYTE *)this + 478) = DxgkIsGraphicsPartitionApplication(*((PEPROCESS *)this + 7));
  v12 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v12 )
  {
    *v12 = 0LL;
    v12[1] = 0LL;
    v12[2] = 0LL;
    *((_DWORD *)v12 + 6) = 0;
    *((_DWORD *)v12 + 7) = 4;
    *((_DWORD *)v12 + 8) = 48;
  }
  else
  {
    v12 = 0LL;
  }
  *((_QWORD *)this + 13) = v12;
  if ( !v12 )
    goto LABEL_48;
  v17 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v17 )
  {
    *v17 = 0LL;
    v17[1] = 0LL;
    v17[2] = 0LL;
    *((_DWORD *)v17 + 6) = 0;
    *((_DWORD *)v17 + 7) = 6;
    *((_DWORD *)v17 + 8) = 35;
  }
  else
  {
    v17 = 0LL;
  }
  *((_QWORD *)this + 42) = v17;
  if ( !v17 )
    goto LABEL_48;
  v18 = (DXGPROCESS_NONPAGED *)operator new(0x78uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  v19 = v18 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v18) : 0LL;
  *((_QWORD *)this + 8) = v19;
  if ( !v19 )
    goto LABEL_48;
  *((_QWORD *)v19 + 4) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 72LL) = a2;
  v20 = (_QWORD *)*((_QWORD *)this + 8);
  v20[7] = DxgkpProcessStatusChangeWork;
  v20[8] = this;
  v20[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v22 = (const void *)ProcessImageFileName;
  v23 = -1LL;
  do
    ++v23;
  while ( *(_BYTE *)(ProcessImageFileName + v23) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = operator new[](v23 + 1, 0x4B677844u, (POOL_TYPE)512);
  v14 = *(void **)(*((_QWORD *)this + 8) + 80LL);
  if ( !v14 )
    goto LABEL_48;
  memmove(v14, v22, v23);
  v24 = *(_QWORD *)(*((_QWORD *)this + 8) + 80LL);
  *(_BYTE *)(v23 + v24) = 0;
  Global = DXGGLOBAL::GetGlobal(v24, v25);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1436), this);
  v31 = DXGGLOBAL::GetGlobal(v28, v27);
  v32 = *((unsigned int *)v31 + 284);
  if ( !(_DWORD)v32 )
  {
    v46 = WdLogNewEntry5_WdAssertion(v30, v29);
    *(_QWORD *)(v46 + 24) = 2534LL;
    WdLogEvent5_WdAssertion(v46);
    v32 = *((unsigned int *)v31 + 284);
    if ( !(_DWORD)v32 )
    {
      v49 = WdLogNewEntry5_WdAssertion(v48, v47);
      *(_QWORD *)(v49 + 24) = 1638LL;
      WdLogEvent5_WdAssertion(v49);
    }
  }
  v33 = 8 * v32;
  if ( !is_mul_ok(v32, 8uLL) )
    v33 = -1LL;
  v34 = operator new[](v33, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v34;
  if ( v34
    && (memset(v34, 0, 8 * v32),
        v35 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool),
        (*((_QWORD *)this + 9) = v35) != 0LL) )
  {
    v36 = DXGGLOBAL::GetGlobal((__int64)v14, v13);
    if ( !*((_DWORD *)v36 + 464) || (v50 = *((_BYTE *)v36 + 304096) == 0, v39 = 1, v50) )
      v39 = 0;
    *((_DWORD *)this + 20) = v39;
    v40 = &DXGGLOBAL::m_pDxgmmsExport;
    v41 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v38, v37);
      if ( *v40 )
      {
        result = DXGPROCESS::DeferredInitialize(this, v41);
        if ( (int)result < 0 )
          break;
      }
      ++v41;
      ++v40;
      if ( v41 >= 2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)this + 4, 1uLL);
        if ( *((__int64 *)this + 4) <= 0 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v38, v37);
          *(_QWORD *)(v51 + 24) = 919LL;
          WdLogEvent5_WdAssertion(v51);
        }
        if ( (*((_BYTE *)this + 347) & 0x20) != 0 )
          *(_QWORD *)(*((_QWORD *)this + 8) + 112LL) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 62) + 496LL) + 128LL);
        *((_DWORD *)this + 10) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_48:
    v45 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v45 + 24) = this;
    WdLogEvent5_WdLowResource(v45);
    return 3221225495LL;
  }
  return result;
}

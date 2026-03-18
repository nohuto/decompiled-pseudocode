/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1C010BC28
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0114E94 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0004548 (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x1C0017F34 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C0018A18 (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ @ 0x1C0024918 (-Feature_WSL_Device_GPU__private_IsEnabled@@YAHXZ.c)
 *     memmove @ 0x1C0027200 (memmove.c)
 *     memset @ 0x1C00274C0 (memset.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1C0157238 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1C02845C4 (DxgkIsGraphicsPartitionApplication.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(unsigned __int64 this, void *a2)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 CurrentProcess; // rax
  __int64 ProcessWow64Process; // rax
  void *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS InformationProcess; // eax
  __int128 v13; // xmm0
  HANDLE v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rdx
  void *v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  _QWORD *v21; // rax
  DXGPROCESS_NONPAGED *v22; // rax
  DXGPROCESS_NONPAGED *v23; // rax
  _QWORD *v24; // rax
  __int64 ProcessImageFileName; // rax
  const void *v26; // rsi
  size_t v27; // rdi
  __int64 v28; // rcx
  __int64 v29; // rdx
  struct DXGGLOBAL *Global; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct DXGGLOBAL *v35; // rsi
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  SIZE_T v41; // rax
  PVOID v42; // rax
  PVOID v43; // rax
  struct DXGGLOBAL *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  bool v47; // zf
  int v48; // eax
  _QWORD *v49; // rsi
  unsigned int v50; // edi
  __int64 v51; // rax
  char v52; // al
  unsigned __int64 v53; // rcx
  int ProcessInformation; // [rsp+48h] [rbp-59h] BYREF
  HANDLE ProcessHandle; // [rsp+50h] [rbp-51h] BYREF
  __int128 v56; // [rsp+58h] [rbp-49h]
  _QWORD v57[12]; // [rsp+68h] [rbp-39h] BYREF

  if ( *(_DWORD *)(this + 40) )
    return 3221225485LL;
  if ( *(_QWORD *)(this + 104) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v5 + 24) = 1530LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *(_QWORD *)(this + 336) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v6 + 24) = 1531LL;
    WdLogEvent5_WdAssertion(v6);
  }
  *(_BYTE *)(this + 345) = *(_QWORD *)(this + 56) == (_QWORD)PsInitialSystemProcess;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess, a2);
  ProcessWow64Process = PsGetProcessWow64Process(CurrentProcess);
  ProcessHandle = 0LL;
  v9 = *(void **)(this + 56);
  *(_BYTE *)(this + 347) = (ProcessWow64Process != 0) | *(_BYTE *)(this + 347) & 0xFE;
  if ( ObOpenObjectByPointer(v9, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v57, 0, sizeof(v57));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
      *(_BYTE *)(this + 347) = (ProcessInformation != 1 ? 0 : 2) | *(_BYTE *)(this + 347) & 0xFD;
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v57, 0x60u, 0LL);
    v13 = 0LL;
    v56 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v56) = HIDWORD(v57[0]);
      WORD2(v56) = v57[7];
      WORD3(v56) = WORD2(v57[7]);
      *((_QWORD *)&v56 + 1) = v57[2];
      v13 = v56;
    }
    v14 = ProcessHandle;
    *(_OWORD *)(this + 320) = v13;
    ObCloseHandle(v14, 0);
  }
  if ( !*(_BYTE *)(this + 345) && *((_BYTE *)DXGGLOBAL::GetGlobal(v11, v10) + 304320) )
    *(_BYTE *)(this + 478) = DxgkIsGraphicsPartitionApplication(*(PEPROCESS *)(this + 56));
  v15 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v15 )
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v15[2] = 0LL;
    *((_DWORD *)v15 + 6) = 0;
    *((_DWORD *)v15 + 7) = 4;
    *((_DWORD *)v15 + 8) = 48;
  }
  else
  {
    v15 = 0LL;
  }
  *(_QWORD *)(this + 104) = v15;
  if ( !v15 )
    goto LABEL_21;
  v21 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v21 )
  {
    *v21 = 0LL;
    v21[1] = 0LL;
    v21[2] = 0LL;
    *((_DWORD *)v21 + 6) = 0;
    *((_DWORD *)v21 + 7) = 6;
    *((_DWORD *)v21 + 8) = 35;
  }
  else
  {
    v21 = 0LL;
  }
  *(_QWORD *)(this + 336) = v21;
  if ( !v21 )
    goto LABEL_21;
  v22 = (DXGPROCESS_NONPAGED *)operator new(0x80uLL, 0x4B677844u, 1, (POOL_TYPE)512);
  v23 = v22 ? DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v22) : 0LL;
  *(_QWORD *)(this + 64) = v23;
  if ( !v23 )
    goto LABEL_21;
  *((_QWORD *)v23 + 4) = this;
  *(_QWORD *)(*(_QWORD *)(this + 64) + 72LL) = a2;
  v24 = *(_QWORD **)(this + 64);
  v24[7] = DxgkpProcessStatusChangeWork;
  v24[8] = this;
  v24[5] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*(_QWORD *)(this + 56));
  v26 = (const void *)ProcessImageFileName;
  v27 = -1LL;
  do
    ++v27;
  while ( *(_BYTE *)(ProcessImageFileName + v27) );
  *(_QWORD *)(*(_QWORD *)(this + 64) + 80LL) = operator new[](v27 + 1, 0x4B677844u, (POOL_TYPE)512);
  v17 = *(void **)(*(_QWORD *)(this + 64) + 80LL);
  if ( !v17 )
    goto LABEL_21;
  memmove(v17, v26, v27);
  v28 = *(_QWORD *)(*(_QWORD *)(this + 64) + 80LL);
  *(_BYTE *)(v27 + v28) = 0;
  Global = DXGGLOBAL::GetGlobal(v28, v29);
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1548), (struct DXGPROCESS *)this);
  v35 = DXGGLOBAL::GetGlobal(v32, v31);
  v36 = *((unsigned int *)v35 + 312);
  if ( !(_DWORD)v36 )
  {
    v37 = WdLogNewEntry5_WdAssertion(v34, v33);
    *(_QWORD *)(v37 + 24) = 2553LL;
    WdLogEvent5_WdAssertion(v37);
    v36 = *((unsigned int *)v35 + 312);
    if ( !(_DWORD)v36 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v39, v38);
      *(_QWORD *)(v40 + 24) = 1649LL;
      WdLogEvent5_WdAssertion(v40);
    }
  }
  v41 = 8 * v36;
  if ( !is_mul_ok(v36, 8uLL) )
    v41 = -1LL;
  v42 = operator new[](v41, 0x4B677844u, PagedPool);
  *(_QWORD *)(this + 48) = v42;
  if ( v42
    && (memset(v42, 0, 8 * v36),
        v43 = operator new(0x30uLL, 0x4B677844u, 1, PagedPool),
        (*(_QWORD *)(this + 72) = v43) != 0LL) )
  {
    v44 = DXGGLOBAL::GetGlobal((__int64)v17, v16);
    if ( !*((_DWORD *)v44 + 494) || (v47 = *((_BYTE *)v44 + 304216) == 0, v48 = 1, v47) )
      v48 = 0;
    *(_DWORD *)(this + 80) = v48;
    v49 = &DXGGLOBAL::m_pDxgmmsExport;
    v50 = 0;
    while ( 1 )
    {
      DXGGLOBAL::GetGlobal(v46, v45);
      if ( *v49 )
      {
        result = DXGPROCESS::DeferredInitialize((DXGPROCESS *)this, v50);
        if ( (int)result < 0 )
          break;
      }
      ++v50;
      ++v49;
      if ( v50 >= 2 )
      {
        _InterlockedAdd64((volatile signed __int64 *)(this + 32), 1uLL);
        if ( *(__int64 *)(this + 32) <= 0 )
        {
          v51 = WdLogNewEntry5_WdAssertion(v46, v45);
          *(_QWORD *)(v51 + 24) = 951LL;
          WdLogEvent5_WdAssertion(v51);
        }
        if ( (*(_BYTE *)(this + 347) & 0x20) != 0 )
        {
          *(_QWORD *)(*(_QWORD *)(this + 64) + 112LL) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this + 496) + 496LL) + 128LL);
          if ( (unsigned int)Feature_WSL_Device_GPU__private_IsEnabled() )
          {
            v52 = *(_BYTE *)(this + 347);
            if ( (v52 & 0x20) != 0 )
              v53 = *(_QWORD *)(this + 496);
            else
              v53 = this & -(__int64)((v52 & 0x10) != 0);
            *(_QWORD *)(*(_QWORD *)(this + 64) + 120LL) = *(_QWORD *)(v53 + 496) + 128LL;
          }
        }
        *(_DWORD *)(this + 40) = 1;
        return 0LL;
      }
    }
  }
  else
  {
LABEL_21:
    v20 = WdLogNewEntry5_WdLowResource(v17, v16, v18, v19);
    *(_QWORD *)(v20 + 24) = this;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  return result;
}

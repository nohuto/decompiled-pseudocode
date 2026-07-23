/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18002FDC0
 * Callers:
 *     CsrClientConnectToServer @ 0x180008E20 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x18006C020 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B340 (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x180081BD0 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x180083114 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D1F00 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6AE0 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800D9B98 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800DA9C8 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB860 (AVrfpVerifierStopInitialize.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlIsCriticalSectionLockedByThread @ 0x180014890 (RtlIsCriticalSectionLockedByThread.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpResolveProcedureAddress @ 0x1800303F4 (LdrpResolveProcedureAddress.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x1800334E8 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpReportError @ 0x18003F2F4 (LdrpReportError.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004758C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x180047AD8 (RtlValidateUserCallTarget.c)
 *     LdrpDropLastInProgressCount @ 0x18005D97C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005EA04 (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByAddress @ 0x18006A3A0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpInitializeGraphRecurse @ 0x18006C048 (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800CD4B0 (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800D99F0 (AVrfCallAPILookupCallback.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  NTSTATUS v6; // edi
  bool v7; // zf
  int v10; // r15d
  size_t Length; // rsi
  unsigned int v12; // edi
  char *Heap; // r14
  __int64 *v15; // r12
  __int64 *v16; // rax
  __int64 *v17; // rbx
  volatile signed __int32 *v18; // rsi
  int v19; // r13d
  unsigned __int64 Root; // rax
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  int LoadedDllByAddress; // eax
  void *v26; // rbx
  ULONG v27; // r13d
  __int64 v28; // rcx
  PVOID *v29; // rbx
  char *v30; // rbx
  char *v31; // rax
  int v32; // [rsp+20h] [rbp-E0h]
  PVOID *v33; // [rsp+20h] [rbp-E0h]
  char v34; // [rsp+30h] [rbp-D0h]
  char v35[7]; // [rsp+31h] [rbp-CFh] BYREF
  char *v36; // [rsp+38h] [rbp-C8h] BYREF
  int v37; // [rsp+40h] [rbp-C0h]
  int v38; // [rsp+44h] [rbp-BCh]
  int v39; // [rsp+48h] [rbp-B8h]
  ULONG v40; // [rsp+4Ch] [rbp-B4h]
  char v41[8]; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v42; // [rsp+58h] [rbp-A8h]
  void *v43; // [rsp+60h] [rbp-A0h] BYREF
  char *v44; // [rsp+68h] [rbp-98h] BYREF
  char v45[8]; // [rsp+70h] [rbp-90h] BYREF
  PVOID *v46; // [rsp+78h] [rbp-88h]
  char v47; // [rsp+80h] [rbp-80h] BYREF
  ULONG Flagsa; // [rsp+180h] [rbp+80h]

  v6 = 0;
  v7 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v46 = ProcedureAddress;
  v40 = ProcedureNumber;
  v10 = 9;
  v42 = Callback;
  v36 = 0LL;
  v34 = 0;
  if ( v7 || (v39 = 6, !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock)) )
    v39 = 9;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    v12 = Length + 1;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1) || (Heap = ProcedureName->Buffer, Heap[Length]) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = &v47;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return -1073741670;
        v34 = 1;
      }
      memmove(Heap, ProcedureName->Buffer, Length);
      v6 = 0;
      Heap[(unsigned int)Length] = 0;
    }
    else
    {
      v6 = 0;
    }
  }
  else
  {
    Heap = 0LL;
  }
  v38 = 1;
  v15 = 0LL;
  v16 = LdrpObtainLockedEnclave((unsigned __int64)DllHandle, 1);
  v17 = v16;
  if ( !v16 )
    goto LABEL_20;
  if ( *((_DWORD *)v16 + 14) != 16 || *((_DWORD *)v16 + 16) != 2 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 2));
    LdrpDereferenceEnclave(v17);
LABEL_20:
    v10 = v37;
    while ( 1 )
    {
      v18 = 0LL;
      if ( !DllHandle )
        break;
      if ( DllHandle == (PVOID)LdrpSystemDllBase )
      {
        v18 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
        v10 = *(_DWORD *)(*((_QWORD *)LdrpNtDllDataTableEntry + 19) + 56LL);
        v37 = v10;
      }
      else
      {
        RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
        Root = (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
        if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
        {
          if ( LdrpModuleBaseAddressIndex.Root )
            Root = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ (unsigned __int64)LdrpModuleBaseAddressIndex.Root;
          else
            Root = 0LL;
        }
        while ( Root )
        {
          if ( (unsigned __int64)DllHandle < *(_QWORD *)(Root - 152) )
          {
            v21 = *(_QWORD *)Root;
          }
          else
          {
            if ( (unsigned __int64)DllHandle <= *(_QWORD *)(Root - 152) )
            {
              v18 = (volatile signed __int32 *)(Root - 200);
              v22 = *(_QWORD *)(Root - 200 + 152);
              if ( *(_DWORD *)(v22 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v22 - 56LL) & 0x20) == 0 )
              {
                _InterlockedIncrement(v18 + 69);
                v22 = *((_QWORD *)v18 + 19);
              }
              v10 = *(_DWORD *)(v22 + 56);
              v37 = v10;
              break;
            }
            v21 = *(_QWORD *)(Root + 8);
          }
          if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v21 )
            Root ^= v21;
          else
            Root = v21;
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      }
      if ( !v18 )
        break;
      v10 = v37;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v37 >= v39 )
        goto LABEL_49;
      v6 = 0;
      LdrpDereferenceModule((PVOID)v18);
      if ( v37 < 0 )
      {
        v18 = 0LL;
        v6 = -1073741811;
        goto LABEL_49;
      }
      LdrpDrainWorkQueue(0LL);
      LdrpDropLastInProgressCount(v24, v23);
    }
    v6 = -1073741515;
LABEL_49:
    v19 = v38;
    goto LABEL_50;
  }
  RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 2));
  v18 = (volatile signed __int32 *)v17[14];
  v15 = v17;
  v19 = 3;
LABEL_50:
  if ( v18 )
  {
    v43 = 0LL;
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(v42, &v43, 0LL);
    v26 = v43;
    if ( LoadedDllByAddress < 0 )
      v26 = 0LL;
    v32 = v19;
    v27 = v40;
    v6 = LdrpResolveProcedureAddress((_DWORD)v26, (_DWORD)v18, (_DWORD)Heap, v40, v32, (__int64)&v36);
    if ( v26 )
      LdrpDereferenceModule(v26);
    if ( v6 >= 0 )
    {
      if ( v10 == 7
        && !Flagsa
        && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
        && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
      {
        v28 = *((_QWORD *)v18 + 19);
        v35[0] = 0;
        v6 = LdrpInitializeGraphRecurse(v28, 0LL, v35);
      }
      if ( v6 >= 0 )
      {
        if ( !v15 )
        {
          v29 = v42;
          if ( AvrfpAPILookupCallbacksEnabled )
            AVrfCallAPILookupCallback((_DWORD)v42, *((_QWORD *)v18 + 6), (_DWORD)v36, 0, (__int64)&v36);
          if ( g_ShimsEnabled )
          {
            v44 = 0LL;
            v33 = v29;
            v30 = v36;
            ((void (__fastcall *)(char **, volatile signed __int32 *, char *, _QWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
              &v44,
              v18,
              v36,
              0LL,
              v33);
            if ( v44 )
              v30 = v44;
            v36 = v30;
          }
        }
      }
      else
      {
        v36 = 0LL;
      }
    }
    if ( v6 == -1073741515 || v6 == -1073741502 )
      v6 = -1073741702;
    if ( v15 )
      LdrpDereferenceEnclave(v15);
    else
      LdrpDereferenceModule((PVOID)v18);
  }
  else
  {
    v27 = v40;
  }
  if ( v15 && v6 >= 0 )
    v36 += *((_QWORD *)v18 + 23) - *((_QWORD *)v18 + 6);
  if ( v6 == -1073741702 )
  {
    v31 = (char *)v27;
    v6 = (Heap != 0LL) - 1073741512;
    if ( Heap )
      v31 = Heap;
    Heap = v31;
    LdrpReportError(0LL, v31, (unsigned int)v6);
  }
  if ( v34 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( !UseWOW64
    && v6 >= 0
    && (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    && (unsigned int)RtlValidateUserCallTarget(v36, v41) != 1
    && (v41[0] & 0x10) != 0 )
  {
    v6 = RtlGuardGrantSuppressedCallAccess(v36, 4LL, v45);
    if ( v6 < 0 )
      __fastfail(0x2Eu);
  }
  *v46 = v36;
  return v6;
}

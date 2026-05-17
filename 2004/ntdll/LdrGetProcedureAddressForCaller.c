/*
 * XREFs of LdrGetProcedureAddressForCaller @ 0x18002FDC0
 * Callers:
 *     CsrClientConnectToServer @ 0x180008E20 (CsrClientConnectToServer.c)
 *     LdrGetProcedureAddressEx @ 0x18006BF10 (LdrGetProcedureAddressEx.c)
 *     LdrpCodeAuthzInitialize @ 0x18007B240 (LdrpCodeAuthzInitialize.c)
 *     LdrGetProcedureAddress @ 0x180081AD0 (LdrGetProcedureAddress.c)
 *     LdrpLoadWow64 @ 0x180083014 (LdrpLoadWow64.c)
 *     LdrpInitializeProcess @ 0x1800D1D20 (LdrpInitializeProcess.c)
 *     RtlWow64LogMessageInEventLogger @ 0x1800D6740 (RtlWow64LogMessageInEventLogger.c)
 *     AVrfInitializeVerifier @ 0x1800D97F8 (AVrfInitializeVerifier.c)
 *     AVrfpDetectVerifiedExports @ 0x1800DA628 (AVrfpDetectVerifiedExports.c)
 *     AVrfpVerifierStopInitialize @ 0x1800DB4C0 (AVrfpVerifierStopInitialize.c)
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
 *     LdrpReportError @ 0x18003F2A4 (LdrpReportError.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18004753C (RtlGuardGrantSuppressedCallAccess.c)
 *     RtlValidateUserCallTarget @ 0x180047A88 (RtlValidateUserCallTarget.c)
 *     LdrpDropLastInProgressCount @ 0x18005D92C (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x18005E8F4 (LdrpDrainWorkQueue.c)
 *     LdrpFindLoadedDllByAddress @ 0x18006A290 (LdrpFindLoadedDllByAddress.c)
 *     LdrpInitializeGraphRecurse @ 0x18006BF38 (LdrpInitializeGraphRecurse.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 *     LdrpDereferenceEnclave @ 0x1800CD2D0 (LdrpDereferenceEnclave.c)
 *     AVrfCallAPILookupCallback @ 0x1800D9650 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrGetProcedureAddressForCaller(
        unsigned __int64 a1,
        const void **a2,
        unsigned int a3,
        _QWORD *a4,
        char a5,
        __int64 a6)
{
  int v6; // edi
  bool v7; // zf
  int v10; // r15d
  size_t v11; // rsi
  unsigned int v12; // edi
  char *Heap; // r14
  __int64 *v15; // r12
  __int64 *v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  __int64 *v20; // rbx
  __int64 v21; // rsi
  int v22; // r13d
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int LoadedDllByAddress; // eax
  __int64 v29; // rbx
  unsigned int v30; // r13d
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // rbx
  unsigned __int64 v34; // rax
  int v35; // [rsp+20h] [rbp-E0h]
  __int64 v36; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+30h] [rbp-D0h]
  char v38[7]; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v39; // [rsp+38h] [rbp-C8h] BYREF
  int v40; // [rsp+40h] [rbp-C0h]
  int v41; // [rsp+44h] [rbp-BCh]
  int v42; // [rsp+48h] [rbp-B8h]
  unsigned int v43; // [rsp+4Ch] [rbp-B4h]
  char v44[8]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  char v48[8]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD *v49; // [rsp+78h] [rbp-88h]
  char v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+180h] [rbp+80h]

  v6 = 0;
  v7 = (a5 & 1) == 0;
  v51 = a5 & 1;
  v49 = a4;
  v43 = a3;
  v10 = 9;
  v45 = a6;
  v39 = 0LL;
  v37 = 0;
  if ( v7 || (v42 = 6, !RtlIsCriticalSectionLockedByThread((__int64)&LdrpDllNotificationLock)) )
    v42 = 9;
  if ( a2 )
  {
    v11 = *(unsigned __int16 *)a2;
    v12 = v11 + 1;
    if ( *((unsigned __int16 *)a2 + 1) < (unsigned int)(v11 + 1) || (Heap = (char *)a2[1], Heap[v11]) )
    {
      if ( v12 <= 0x80 )
      {
        Heap = &v50;
      }
      else
      {
        Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v12);
        if ( !Heap )
          return 3221225626LL;
        v37 = 1;
      }
      memmove(Heap, a2[1], v11);
      v6 = 0;
      Heap[(unsigned int)v11] = 0;
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
  v41 = 1;
  v15 = 0LL;
  v16 = LdrpObtainLockedEnclave(a1, 1);
  v20 = v16;
  if ( !v16 )
    goto LABEL_20;
  if ( *((_DWORD *)v16 + 14) != 16 || *((_DWORD *)v16 + 16) != 2 )
  {
    RtlLeaveCriticalSection((__int64)(v16 + 2), v17, v18);
    LdrpDereferenceEnclave(v20);
LABEL_20:
    v10 = v40;
    while ( 1 )
    {
      v21 = 0LL;
      if ( !a1 )
        break;
      if ( a1 == LdrpSystemDllBase )
      {
        v21 = LdrpNtDllDataTableEntry;
        v10 = *(_DWORD *)(*(_QWORD *)(LdrpNtDllDataTableEntry + 152) + 56LL);
        v40 = v10;
      }
      else
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v17, v18, v19);
        v23 = LdrpModuleBaseAddressIndex;
        if ( (qword_18016B470 & 1) != 0 )
        {
          if ( LdrpModuleBaseAddressIndex )
            v23 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
          else
            v23 = 0LL;
        }
        while ( v23 )
        {
          if ( a1 < *(_QWORD *)(v23 - 152) )
          {
            v24 = *(_QWORD *)v23;
          }
          else
          {
            if ( a1 <= *(_QWORD *)(v23 - 152) )
            {
              v21 = v23 - 200;
              v25 = *(_QWORD *)(v23 - 200 + 152);
              if ( *(_DWORD *)(v25 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v25 - 56LL) & 0x20) == 0 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v21 + 276));
                v25 = *(_QWORD *)(v21 + 152);
              }
              v10 = *(_DWORD *)(v25 + 56);
              v40 = v10;
              break;
            }
            v24 = *(_QWORD *)(v23 + 8);
          }
          if ( (qword_18016B470 & 1) != 0 && v24 )
            v23 ^= v24;
          else
            v23 = v24;
        }
        RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      }
      if ( !v21 )
        break;
      v10 = v40;
      if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 || v40 >= v42 )
        goto LABEL_49;
      v6 = 0;
      LdrpDereferenceModule(v21);
      if ( v40 < 0 )
      {
        v21 = 0LL;
        v6 = -1073741811;
        goto LABEL_49;
      }
      LdrpDrainWorkQueue(0LL);
      LdrpDropLastInProgressCount(v27, v26);
    }
    v6 = -1073741515;
LABEL_49:
    v22 = v41;
    goto LABEL_50;
  }
  RtlLeaveCriticalSection((__int64)(v16 + 2), v17, v18);
  v21 = v20[14];
  v15 = v20;
  v22 = 3;
LABEL_50:
  if ( v21 )
  {
    v46 = 0LL;
    LoadedDllByAddress = LdrpFindLoadedDllByAddress(v45, &v46, 0LL);
    v29 = v46;
    if ( LoadedDllByAddress < 0 )
      v29 = 0LL;
    v35 = v22;
    v30 = v43;
    v6 = LdrpResolveProcedureAddress(v29, v21, (_DWORD)Heap, v43, v35, (__int64)&v39);
    if ( v29 )
      LdrpDereferenceModule(v29);
    if ( v6 >= 0 )
    {
      if ( v10 == 7
        && !v51
        && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
        && !RtlIsCriticalSectionLockedByThread((__int64)&LdrpDllNotificationLock) )
      {
        v31 = *(_QWORD *)(v21 + 152);
        v38[0] = 0;
        v6 = LdrpInitializeGraphRecurse(v31, 0LL, v38);
      }
      if ( v6 >= 0 )
      {
        if ( !v15 )
        {
          v32 = v45;
          if ( AvrfpAPILookupCallbacksEnabled )
            AVrfCallAPILookupCallback(v45, *(_QWORD *)(v21 + 48), v39, 0, (__int64)&v39);
          if ( g_ShimsEnabled )
          {
            v47 = 0LL;
            v36 = v32;
            v33 = v39;
            ((void (__fastcall *)(__int64 *, __int64, __int64, _QWORD, __int64))(MEMORY[0x7FFE0330] ^ __ROR8__(g_pfnSE_GetProcAddressForCaller, 64 - (MEMORY[0x7FFE0330] & 0x3Fu))))(
              &v47,
              v21,
              v39,
              0LL,
              v36);
            if ( v47 )
              v33 = v47;
            v39 = v33;
          }
        }
      }
      else
      {
        v39 = 0LL;
      }
    }
    if ( v6 == -1073741515 || v6 == -1073741502 )
      v6 = -1073741702;
    if ( v15 )
      LdrpDereferenceEnclave(v15);
    else
      LdrpDereferenceModule(v21);
  }
  else
  {
    v30 = v43;
  }
  if ( v15 && v6 >= 0 )
    v39 += *(_QWORD *)(v21 + 184) - *(_QWORD *)(v21 + 48);
  if ( v6 == -1073741702 )
  {
    v34 = v30;
    v6 = (Heap != 0LL) - 1073741512;
    if ( Heap )
      v34 = (unsigned __int64)Heap;
    Heap = (char *)v34;
    LdrpReportError(0LL, v34, (unsigned int)v6);
  }
  if ( v37 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  if ( !UseWOW64
    && v6 >= 0
    && (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression()
    && (unsigned int)RtlValidateUserCallTarget(v39, v44) != 1
    && (v44[0] & 0x10) != 0 )
  {
    v6 = RtlGuardGrantSuppressedCallAccess(v39, 4LL, v48);
    if ( v6 < 0 )
      __fastfail(0x2Eu);
  }
  *v49 = v39;
  return (unsigned int)v6;
}

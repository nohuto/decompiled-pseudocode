/*
 * XREFs of _LdrGetProcedureAddressForCaller@24 @ 0x4B2CCED0
 * Callers:
 *     _LdrGetProcedureAddressEx@20 @ 0x4B2A6AE0 (_LdrGetProcedureAddressEx@20.c)
 *     _LdrGetProcedureAddress@16 @ 0x4B2AB7F0 (_LdrGetProcedureAddress@16.c)
 *     _LdrpCodeAuthzInitialize@0 @ 0x4B2E82F2 (_LdrpCodeAuthzInitialize@0.c)
 *     _LdrpInitializeProcess@8 @ 0x4B32A2D0 (_LdrpInitializeProcess@8.c)
 *     _RtlWow64LogMessageInEventLogger@12 @ 0x4B335A80 (_RtlWow64LogMessageInEventLogger@12.c)
 *     _AVrfInitializeVerifier@24 @ 0x4B338523 (_AVrfInitializeVerifier@24.c)
 *     _AVrfpDetectVerifiedExports@8 @ 0x4B338B79 (_AVrfpDetectVerifiedExports@8.c)
 *     _AVrfpVerifierStopInitialize@0 @ 0x4B339708 (_AVrfpVerifierStopInitialize@0.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpInitializeGraphRecurse@12 @ 0x4B2D1904 (_LdrpInitializeGraphRecurse@12.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _RtlIsCriticalSectionLockedByThread@4 @ 0x4B2D2150 (_RtlIsCriticalSectionLockedByThread@4.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _LdrpReportError@12 @ 0x4B2E9F63 (_LdrpReportError@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpResolveProcedureAddress@24 @ 0x4B306029 (_LdrpResolveProcedureAddress@24.c)
 *     _LdrpFindLoadedDllByAddress@12 @ 0x4B330FCF (_LdrpFindLoadedDllByAddress@12.c)
 *     _AVrfCallAPILookupCallback@20 @ 0x4B338404 (_AVrfCallAPILookupCallback@20.c)
 *     _RtlGuardGrantSuppressedCallAccess@12 @ 0x4B363AA3 (_RtlGuardGrantSuppressedCallAccess@12.c)
 *     _RtlValidateUserCallTarget@8 @ 0x4B363B20 (_RtlValidateUserCallTarget@8.c)
 */

NTSTATUS __cdecl LdrGetProcedureAddressForCaller(
        PVOID DllHandle,
        PANSI_STRING ProcedureName,
        ULONG ProcedureNumber,
        PVOID *ProcedureAddress,
        ULONG Flags,
        PVOID *Callback)
{
  bool v6; // zf
  int Length; // ebx
  void *Buffer; // eax
  _BYTE *Heap; // eax
  _RTL_BALANCED_NODE *v11; // ebx
  int ParentValue; // esi
  volatile signed __int32 *v13; // edx
  _RTL_BALANCED_NODE *Root; // eax
  _RTL_BALANCED_NODE *v15; // ecx
  signed __int32 v16; // ecx
  int v17; // edi
  _RTL_BALANCED_NODE *v18; // ecx
  signed __int32 v19; // eax
  NTSTATUS v20; // ebx
  PVOID v21; // edi
  void (__thiscall *v22)(_DWORD, void **, PVOID, void *, _DWORD, PVOID *); // ecx
  PVOID v23; // esi
  SIZE_T v24; // [esp-4h] [ebp-ECh]
  char v25[4]; // [esp+Ch] [ebp-DCh] BYREF
  PVOID *v26; // [esp+10h] [ebp-D8h]
  char v27[4]; // [esp+14h] [ebp-D4h] BYREF
  void *v28; // [esp+18h] [ebp-D0h]
  ULONG v29; // [esp+1Ch] [ebp-CCh]
  void *v30; // [esp+20h] [ebp-C8h] BYREF
  int v31; // [esp+24h] [ebp-C4h]
  PVOID *v32; // [esp+28h] [ebp-C0h]
  PVOID v33; // [esp+2Ch] [ebp-BCh]
  int v34; // [esp+30h] [ebp-B8h]
  char v35; // [esp+37h] [ebp-B1h] BYREF
  void *v36; // [esp+38h] [ebp-B0h] BYREF
  PVOID p_Right; // [esp+3Ch] [ebp-ACh]
  PVOID BaseAddress; // [esp+40h] [ebp-A8h]
  char v39; // [esp+47h] [ebp-A1h]
  _BYTE v40[132]; // [esp+60h] [ebp-88h] BYREF
  ULONG Flagsa; // [esp+100h] [ebp+18h]

  v6 = (Flags & 1) == 0;
  Flagsa = Flags & 1;
  v29 = ProcedureNumber;
  v26 = ProcedureAddress;
  v32 = Callback;
  v36 = 0;
  v39 = 0;
  if ( v6 || (v31 = 6, !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock)) )
    v31 = 9;
  if ( ProcedureName )
  {
    Length = ProcedureName->Length;
    if ( ProcedureName->MaximumLength < (unsigned int)(Length + 1)
      || (Buffer = ProcedureName->Buffer, BaseAddress = Buffer, *((_BYTE *)Buffer + Length)) )
    {
      if ( (unsigned int)(Length + 1) <= 0x80 )
      {
        Heap = v40;
        BaseAddress = v40;
      }
      else
      {
        LODWORD(v24) = Length + 1;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v24);
        BaseAddress = Heap;
        if ( !Heap )
          return -1073741670;
        v39 = 1;
      }
      LODWORD(v24) = Length;
      memcpy(Heap, ProcedureName->Buffer, v24);
      Buffer = BaseAddress;
      *((_BYTE *)BaseAddress + Length) = 0;
    }
  }
  else
  {
    Buffer = 0;
    BaseAddress = 0;
  }
  v11 = (_RTL_BALANCED_NODE *)DllHandle;
  ParentValue = v34;
  v28 = Buffer;
  while ( 2 )
  {
    p_Right = 0;
    if ( !v11 )
    {
LABEL_73:
      v20 = -1073741515;
      goto LABEL_74;
    }
    if ( v11 == (_RTL_BALANCED_NODE *)LdrpSystemDllBase )
    {
      v13 = (volatile signed __int32 *)LdrpNtDllDataTableEntry;
      p_Right = LdrpNtDllDataTableEntry;
      ParentValue = *(_DWORD *)(*((_DWORD *)LdrpNtDllDataTableEntry + 20) + 32);
      v34 = ParentValue;
      goto LABEL_47;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    Root = LdrpModuleBaseAddressIndex.Root;
    if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 )
    {
      if ( LdrpModuleBaseAddressIndex.Root )
        Root = (_RTL_BALANCED_NODE *)((unsigned int)&LdrpModuleBaseAddressIndex ^ (unsigned int)LdrpModuleBaseAddressIndex.Root);
      else
        Root = 0;
    }
    if ( !Root )
    {
LABEL_32:
      v13 = 0;
      goto LABEL_33;
    }
    while ( v11 < Root[-7].Children[1] )
    {
      v15 = Root->Children[0];
LABEL_27:
      if ( (*(_BYTE *)&LdrpModuleBaseAddressIndex.0 & 1) != 0 && v15 )
        Root = (_RTL_BALANCED_NODE *)((unsigned int)v15 ^ (unsigned int)Root);
      else
        Root = v15;
      if ( !Root )
        goto LABEL_32;
    }
    if ( v11 > Root[-7].Children[1] )
    {
      v15 = Root->Children[1];
      goto LABEL_27;
    }
    v18 = Root[-2].Children[0];
    v13 = (volatile signed __int32 *)&Root[-9].Children[1];
    p_Right = &Root[-9].Right;
    if ( v18[1].Children[0] != (_RTL_BALANCED_NODE *)-1 && ((int)v18->Children[0][-3].Right & 0x20) == 0 )
    {
      _InterlockedIncrement(v13 + 39);
      v18 = (_RTL_BALANCED_NODE *)*((_DWORD *)v13 + 20);
    }
    ParentValue = v18[2].ParentValue;
    v34 = ParentValue;
LABEL_33:
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)&LdrpModuleDatatableLock, 0, 1);
    if ( v16 != 1 )
    {
      while ( 1 )
      {
        v17 = (v16 & 4) != 0 || (v16 & 2) == 0 ? -1 : 3;
        v19 = _InterlockedCompareExchange((volatile signed __int32 *)&LdrpModuleDatatableLock, v17 + v16, v16);
        if ( v19 == v16 )
          break;
        v16 = v19;
      }
      v11 = (_RTL_BALANCED_NODE *)DllHandle;
      if ( v17 == 3 )
        RtlpWakeSRWLock(v16 + 3);
      ParentValue = v34;
      v13 = (volatile signed __int32 *)p_Right;
    }
LABEL_47:
    if ( !v13 )
      goto LABEL_73;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && ParentValue < v31 )
    {
      LdrpDereferenceModule((PVOID)v13);
      if ( ParentValue >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpDropLastInProgressCount();
        continue;
      }
      v20 = -1073741811;
LABEL_74:
      v23 = BaseAddress;
      goto LABEL_75;
    }
    break;
  }
  v21 = p_Right;
  LdrpFindLoadedDllByAddress(0);
  v33 = 0;
  v20 = LdrpResolveProcedureAddress(BaseAddress, v29, 1, &v36);
  if ( v20 >= 0 )
  {
    if ( ParentValue == 7
      && !Flagsa
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    {
      v35 = 0;
      v20 = LdrpInitializeGraphRecurse(&v35);
    }
    if ( v20 >= 0 )
    {
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback(v36, 0, &v36);
      if ( g_ShimsEnabled )
      {
        v30 = 0;
        v22 = (void (__thiscall *)(_DWORD, void **, PVOID, void *, _DWORD, PVOID *))(MEMORY[0x7FFE0330] ^ __ROR4__(g_pfnSE_GetProcAddressForCaller, 32 - (MEMORY[0x7FFE0330] & 0x1F)));
        v22(v22, &v30, v21, v36, 0, v32);
        if ( v30 )
          v36 = v30;
      }
    }
    else
    {
      v36 = 0;
    }
  }
  if ( v20 == -1073741515 || v20 == -1073741502 )
    v20 = -1073741702;
  LdrpDereferenceModule(v21);
  if ( v20 != -1073741702 )
    goto LABEL_74;
  v23 = BaseAddress;
  if ( !BaseAddress )
    v23 = (PVOID)v29;
  v20 = (v28 != 0) - 1073741512;
  LdrpReportError(v20);
LABEL_75:
  if ( v39 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v23);
  if ( v20 >= 0
    && qword_4B3A9300
    && (byte_4B3A92E4 & 1) == 0
    && (BYTE1(dword_4B3A92EC) & 3) == 3
    && RtlValidateUserCallTarget(v36, v27) != 1
    && (v27[0] & 0x10) != 0 )
  {
    v20 = RtlGuardGrantSuppressedCallAccess(v25);
    if ( v20 < 0 )
      __fastfail(0x2Eu);
  }
  *v26 = v36;
  return v20;
}

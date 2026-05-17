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

int __stdcall LdrGetProcedureAddressForCaller(unsigned int a1, const void **a2, int a3, _DWORD *a4, char a5, int a6)
{
  bool v6; // zf
  size_t v7; // ebx
  _BYTE *v8; // eax
  _BYTE *Heap; // eax
  unsigned int v11; // ebx
  int v12; // esi
  int v13; // edx
  unsigned int v14; // eax
  unsigned int v15; // ecx
  signed __int32 v16; // ecx
  int v17; // edi
  _DWORD *v18; // ecx
  signed __int32 v19; // eax
  int v20; // ebx
  int v21; // edi
  void (__thiscall *v22)(_DWORD, int *, int, int, _DWORD, int); // ecx
  int v23; // esi
  char v24[4]; // [esp+Ch] [ebp-DCh] BYREF
  _DWORD *v25; // [esp+10h] [ebp-D8h]
  char v26[4]; // [esp+14h] [ebp-D4h] BYREF
  _BYTE *v27; // [esp+18h] [ebp-D0h]
  int v28; // [esp+1Ch] [ebp-CCh]
  int v29; // [esp+20h] [ebp-C8h] BYREF
  int v30; // [esp+24h] [ebp-C4h]
  int v31; // [esp+28h] [ebp-C0h]
  int v32; // [esp+2Ch] [ebp-BCh]
  int v33; // [esp+30h] [ebp-B8h]
  char v34; // [esp+37h] [ebp-B1h] BYREF
  int v35; // [esp+38h] [ebp-B0h] BYREF
  int v36; // [esp+3Ch] [ebp-ACh]
  _BYTE *v37; // [esp+40h] [ebp-A8h]
  char v38; // [esp+47h] [ebp-A1h]
  _BYTE v39[132]; // [esp+60h] [ebp-88h] BYREF
  int v40; // [esp+100h] [ebp+18h]

  v6 = (a5 & 1) == 0;
  v40 = a5 & 1;
  v28 = a3;
  v25 = a4;
  v31 = a6;
  v35 = 0;
  v38 = 0;
  if ( v6 || (v30 = 6, !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock)) )
    v30 = 9;
  if ( a2 )
  {
    v7 = *(unsigned __int16 *)a2;
    if ( *((unsigned __int16 *)a2 + 1) < v7 + 1 || (v8 = a2[1], v37 = v8, v8[v7]) )
    {
      if ( v7 + 1 <= 0x80 )
      {
        Heap = v39;
        v37 = v39;
      }
      else
      {
        Heap = (_BYTE *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v7 + 1);
        v37 = Heap;
        if ( !Heap )
          return -1073741670;
        v38 = 1;
      }
      memcpy(Heap, a2[1], v7);
      v8 = v37;
      v37[v7] = 0;
    }
  }
  else
  {
    v8 = 0;
    v37 = 0;
  }
  v11 = a1;
  v12 = v33;
  v27 = v8;
  while ( 2 )
  {
    v36 = 0;
    if ( !v11 )
    {
LABEL_73:
      v20 = -1073741515;
      goto LABEL_74;
    }
    if ( v11 == LdrpSystemDllBase )
    {
      v13 = LdrpNtDllDataTableEntry;
      v36 = LdrpNtDllDataTableEntry;
      v12 = *(_DWORD *)(*(_DWORD *)(LdrpNtDllDataTableEntry + 80) + 32);
      v33 = v12;
      goto LABEL_47;
    }
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v14 = LdrpModuleBaseAddressIndex;
    if ( (dword_4B3A67A8 & 1) != 0 )
    {
      if ( LdrpModuleBaseAddressIndex )
        v14 = (unsigned int)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
      else
        v14 = 0;
    }
    if ( !v14 )
    {
LABEL_32:
      v13 = 0;
      goto LABEL_33;
    }
    while ( v11 < *(_DWORD *)(v14 - 80) )
    {
      v15 = *(_DWORD *)v14;
LABEL_27:
      if ( (dword_4B3A67A8 & 1) != 0 && v15 )
        v14 ^= v15;
      else
        v14 = v15;
      if ( !v14 )
        goto LABEL_32;
    }
    if ( v11 > *(_DWORD *)(v14 - 80) )
    {
      v15 = *(_DWORD *)(v14 + 4);
      goto LABEL_27;
    }
    v18 = *(_DWORD **)(v14 - 24);
    v13 = v14 - 104;
    v36 = v14 - 104;
    if ( v18[3] != -1 && (*(_BYTE *)(*v18 - 32) & 0x20) == 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13 + 156));
      v18 = *(_DWORD **)(v13 + 80);
    }
    v12 = v18[8];
    v33 = v12;
LABEL_33:
    v16 = _InterlockedCompareExchange(&LdrpModuleDatatableLock, 0, 1);
    if ( v16 != 1 )
    {
      while ( 1 )
      {
        v17 = (v16 & 4) != 0 || (v16 & 2) == 0 ? -1 : 3;
        v19 = _InterlockedCompareExchange(&LdrpModuleDatatableLock, v17 + v16, v16);
        if ( v19 == v16 )
          break;
        v16 = v19;
      }
      v11 = a1;
      if ( v17 == 3 )
        RtlpWakeSRWLock(v16 + 3);
      v12 = v33;
      v13 = v36;
    }
LABEL_47:
    if ( !v13 )
      goto LABEL_73;
    if ( (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 && v12 < v30 )
    {
      LdrpDereferenceModule(v13);
      if ( v12 >= 0 )
      {
        LdrpDrainWorkQueue(0);
        LdrpDropLastInProgressCount();
        continue;
      }
      v20 = -1073741811;
LABEL_74:
      v23 = (int)v37;
      goto LABEL_75;
    }
    break;
  }
  v21 = v36;
  LdrpFindLoadedDllByAddress(0);
  v32 = 0;
  v20 = LdrpResolveProcedureAddress(v37, v28, 1, &v35);
  if ( v20 >= 0 )
  {
    if ( v12 == 7
      && !v40
      && (NtCurrentTeb()->SameTebFlags & 0x1000) != 0
      && !RtlIsCriticalSectionLockedByThread(&LdrpDllNotificationLock) )
    {
      v34 = 0;
      v20 = LdrpInitializeGraphRecurse(&v34);
    }
    if ( v20 >= 0 )
    {
      if ( AvrfpAPILookupCallbacksEnabled )
        AVrfCallAPILookupCallback(v35, 0, &v35);
      if ( g_ShimsEnabled )
      {
        v29 = 0;
        v22 = (void (__thiscall *)(_DWORD, int *, int, int, _DWORD, int))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                                                 g_pfnSE_GetProcAddressForCaller,
                                                                                                 32
                                                                                               - (MEMORY[0x7FFE0330] & 0x1F)));
        v22(v22, &v29, v21, v35, 0, v31);
        if ( v29 )
          v35 = v29;
      }
    }
    else
    {
      v35 = 0;
    }
  }
  if ( v20 == -1073741515 || v20 == -1073741502 )
    v20 = -1073741702;
  LdrpDereferenceModule(v21);
  if ( v20 != -1073741702 )
    goto LABEL_74;
  v23 = (int)v37;
  if ( !v37 )
    v23 = v28;
  v20 = (v27 != 0) - 1073741512;
  LdrpReportError(v20);
LABEL_75:
  if ( v38 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v23);
  if ( v20 >= 0
    && qword_4B3A9300
    && (byte_4B3A92E4 & 1) == 0
    && (BYTE1(dword_4B3A92EC) & 3) == 3
    && RtlValidateUserCallTarget(v35, v26) != 1
    && (v26[0] & 0x10) != 0 )
  {
    v20 = RtlGuardGrantSuppressedCallAccess(v24);
    if ( v20 < 0 )
      __fastfail(0x2Eu);
  }
  *v25 = v35;
  return v20;
}

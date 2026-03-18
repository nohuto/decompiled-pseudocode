/*
 * XREFs of MmFreeVirtualMemory @ 0x14062E1C0
 * Callers:
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     NtFreeVirtualMemory @ 0x14062E0F0 (NtFreeVirtualMemory.c)
 *     PspDeleteUserStack @ 0x1406E8978 (PspDeleteUserStack.c)
 *     PspFreeUserFiberShadowStackInternal @ 0x140905C28 (PspFreeUserFiberShadowStackInternal.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140905CA0 (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x140905E80 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x140905F5C (PspSetupUserShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1409069A8 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x14021A7A0 (MiUnlockAndDereferenceVad.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVadEx @ 0x140267570 (MiObtainReferencedVadEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     MiLocateVadEvent @ 0x1402AA0B4 (MiLocateVadEvent.c)
 *     MiFreeVadRange @ 0x1402AB094 (MiFreeVadRange.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403EDF80 (MiDeleteEmptyPageTables.c)
 *     MiGetVadPageSize @ 0x1405562C0 (MiGetVadPageSize.c)
 *     MiCheckSecuredVad @ 0x1406163C8 (MiCheckSecuredVad.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     MiDecommitRegion @ 0x14062F1B0 (MiDecommitRegion.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C3E54 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x1408CE534 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x1408CE5D0 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x1409333F4 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5,
        unsigned int a6)
{
  int v6; // r15d
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  _KPROCESS *Process; // rsi
  __int64 v10; // r8
  unsigned __int64 v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r14
  ULONG_PTR v15; // r13
  int v16; // edi
  volatile signed __int32 *v17; // rsi
  int v18; // r11d
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // r10
  __int64 v22; // rdi
  int v23; // r8d
  int v24; // r9d
  bool v25; // zf
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned int v28; // ecx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // r8
  _DWORD *v33; // r9
  unsigned __int64 v34; // r15
  __int64 v35; // r12
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // r8
  _DWORD *v41; // r9
  _QWORD *Tag; // [rsp+20h] [rbp-E0h]
  char v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-BCh]
  int v45; // [rsp+48h] [rbp-B8h]
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter1a; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v48; // [rsp+58h] [rbp-A8h]
  int v49; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v50; // [rsp+68h] [rbp-98h]
  unsigned __int64 v51; // [rsp+70h] [rbp-90h]
  unsigned __int64 v52; // [rsp+78h] [rbp-88h]
  unsigned __int64 v53; // [rsp+80h] [rbp-80h]
  unsigned __int64 v54; // [rsp+88h] [rbp-78h]
  __int64 v55; // [rsp+90h] [rbp-70h]
  __int64 *v56; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v57; // [rsp+A0h] [rbp-60h]
  __int64 v58[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v60; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v61; // [rsp+C8h] [rbp-38h]
  __int64 v62; // [rsp+D8h] [rbp-28h]
  __int64 v63; // [rsp+E0h] [rbp-20h]
  __int64 v64; // [rsp+E8h] [rbp-18h]

  v50 = BugCheckParameter1;
  v45 = a4;
  v56 = a3;
  v57 = a2;
  v55 = 0LL;
  v6 = a4;
  v60 = 0LL;
  v62 = 0LL;
  v64 = 0LL;
  BugCheckParameter1a = 0LL;
  v46 = 0;
  v58[1] = 0LL;
  v58[0] = 0LL;
  v61 = 0LL;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 0xC000 )
    return 3221225714LL;
  v7 = *a2;
  v8 = *a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v54 = v7;
  v53 = v8;
  if ( v7 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v7 < v8 )
    return 3221225713LL;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 1) != 0 )
      return 3221225485LL;
    v10 = a6;
    LODWORD(v10) = a6 | 0x4000000;
    v6 &= ~2u;
    v45 = v6;
  }
  else
  {
    v10 = a6;
  }
  v44 = v10;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
      return 3221225485LL;
    v10 = (unsigned int)v10 | 0xC000000;
    v6 &= ~1u;
    v44 = v10;
    v45 = v6;
  }
  v49 = v10 & 0x4000000;
  if ( (v10 & 0x4000000) == 0 )
    goto LABEL_18;
  if ( v6 != 0x8000 )
    return 3221225714LL;
  if ( !v8 || v8 != (v8 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225713LL;
  if ( v7 != (v7 & 0xFFFFFFFFFFFFF000uLL) )
    return 3221225712LL;
LABEL_18:
  v12 = v7 & 0x7FFFFFFFF000LL;
  v13 = 0;
  v51 = (v7 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v48 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v7 + v8 - 1) | 0xFFF;
  v63 = 0LL;
  v52 = v14 >> 12;
  if ( BugCheckParameter1 == -1LL )
  {
    v15 = (ULONG_PTR)Process;
  }
  else
  {
    LODWORD(Tag) = 1834380621;
    v46 = ObpReferenceObjectByHandleWithTag(
            BugCheckParameter1,
            8LL,
            PsProcessType,
            a5,
            Tag,
            &BugCheckParameter1a,
            0LL,
            0LL);
    v16 = v46;
    if ( v46 < 0 )
      return (unsigned int)v16;
    v15 = BugCheckParameter1a;
    if ( Process != (_KPROCESS *)BugCheckParameter1a )
    {
      v13 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0LL, (__int64)&v60, (_DWORD *)v7);
    }
    v10 = v44;
    v12 = v48;
  }
  v43 = 0;
  if ( (v6 & 0xFFFF3FFF) != 0 && (!*(_QWORD *)(v15 + 2240) || (v6 & 0x10000) == 0 || (v6 & 0x4000) != 0) )
  {
    v16 = -1073741582;
    goto LABEL_123;
  }
  if ( (v10 & 0xC000000) == 0xC000000 )
  {
    v16 = MiCoalescePlaceholderAllocations(v15, v12, v14, a5);
    goto LABEL_123;
  }
  LODWORD(BugCheckParameter1a) = v6 & 0x8000;
  v17 = MiObtainReferencedVadEx(v12, (_DWORD)BugCheckParameter1a != 0, &v46);
  if ( !v17 )
  {
    v16 = v46;
    goto LABEL_123;
  }
  while ( 1 )
  {
    v18 = BugCheckParameter1a;
    v19 = *((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32);
    v20 = *((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32);
    if ( v53 )
    {
      v21 = v52;
    }
    else
    {
      v52 = *((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32);
      v21 = v20;
      v14 = (v20 << 12) | 0xFFF;
      if ( (_DWORD)BugCheckParameter1a )
      {
        if ( v51 != v19 )
          goto LABEL_105;
        v48 = v19 << 12;
      }
    }
    v22 = v51;
    if ( v51 < v19 || v51 > v20 || v21 < v19 || v21 > v20 )
    {
      v16 = -1073741798;
      goto LABEL_120;
    }
    v23 = *((_DWORD *)v17 + 12);
    v24 = v23 & 0x100000;
    if ( (v45 & 0x10000) == 0 )
    {
      if ( !v24 )
        goto LABEL_118;
      v25 = (v23 & 0x70) == 16;
LABEL_48:
      if ( v25 )
        goto LABEL_118;
      goto LABEL_49;
    }
    if ( v24 || (v23 & 0x70) != 0 )
    {
LABEL_118:
      v16 = -1073741797;
      goto LABEL_120;
    }
    if ( v51 == v19 )
    {
      v25 = v21 == v20;
      goto LABEL_48;
    }
LABEL_49:
    if ( v49 )
    {
      if ( !MiLocateVadEvent((__int64)v17, 128LL) )
      {
        v26 = *((unsigned int *)v17 + 13);
        LODWORD(v26) = v26 & 0x7FFFFFFF;
        if ( (v26 | ((unsigned __int64)*((unsigned __int8 *)v17 + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
      }
      v27 = *((unsigned int *)v17 + 13);
      LODWORD(v27) = v27 & 0x7FFFFFFF;
      if ( (v27 | ((unsigned __int64)*((unsigned __int8 *)v17 + 34) << 31)) == 0x7FFFFFFFDLL && v22 == v19 && v21 == v20 )
        break;
    }
    v28 = v44;
    if ( (v44 & 0x40000000) != 0 && (!v24 || (v23 & 0x1000000) != 0 || (v23 & 0x4000000) == 0) )
      break;
    if ( (v23 & 8) == 0 || (v44 & 0x40000000) != 0 )
      goto LABEL_69;
    if ( !v18 )
    {
      v30 = v54;
      v29 = v21 - v22;
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(v15 + 1124) & 0x20) == 0 )
    {
      v29 = v20 - v19;
      v30 = v19 << 12;
LABEL_66:
      v16 = MiCheckSecuredVad((ULONG_PTR)v17, v30, (v29 + 1) << 12, 0x55u, a5);
      goto LABEL_67;
    }
    v16 = 0;
LABEL_67:
    if ( v16 < 0 )
      goto LABEL_120;
    v22 = v51;
    v21 = v52;
    v28 = v44;
LABEL_69:
    if ( !(_DWORD)BugCheckParameter1a )
    {
      v35 = v53;
      v34 = v48;
      if ( v53 )
        v35 = v14 - v48 + 1;
      v36 = *((_DWORD *)v17 + 12);
      if ( (v36 & 0x100000) == 0
        || (v36 & 0x1000000) != 0
        || (v36 & 0x2000000) == 0
        || (v37 = MiDecommitEnclavePages(v15, (_DWORD)v17, v48, v35, v28), v16 = v37, v37 == -1073741802) )
      {
        v38 = *((_DWORD *)v17 + 12);
        if ( (v17[12] & 0x70) == 0x30
          || (v38 & 0x100000) != 0
          && ((v38 & 0x400000) != 0 || (v38 & 0xC0000u) >= 0x80000)
          && ((v38 & 0x500000) != 0x500000
           || v35 && (((MiGetVadPageSize((__int64)v17) << 12) - 1) & (v34 | (v14 + 1))) != 0)
          || (v39 = *((unsigned int *)v17 + 13),
              LODWORD(v39) = v39 & 0x7FFFFFFF,
              (v39 | ((unsigned __int64)*((unsigned __int8 *)v17 + 34) << 31)) == 0x7FFFFFFFDLL) )
        {
          v16 = -1073741664;
          goto LABEL_120;
        }
        if ( !v35 )
        {
          if ( v54 >> 12 != (*((unsigned int *)v17 + 6) | ((unsigned __int64)*((unsigned __int8 *)v17 + 32) << 32)) )
          {
LABEL_105:
            v16 = -1073741665;
            goto LABEL_120;
          }
          v14 = ((*((unsigned int *)v17 + 7) | ((unsigned __int64)*((unsigned __int8 *)v17 + 33) << 32)) << 12) | 0xFFF;
        }
        LODWORD(v55) = MiDecommitRegion(v17, v34, v14);
      }
      else if ( v37 < 0 )
      {
        goto LABEL_120;
      }
      MiUnlockAndDereferenceVad((char *)v17);
      if ( (_DWORD)v55 )
        MiDeleteEmptyPageTables(v34, v14, 0);
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(v34, v35, v15);
      if ( v13 )
        KiUnstackDetachProcess((__int64)&v60, 0LL, v40, v41);
      if ( v50 != -1LL )
        ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
      *v56 = v35;
LABEL_85:
      *v57 = v34;
      return 0LL;
    }
    if ( (*(_DWORD *)(v15 + 2172) & 0x100) != 0 && (v22 != v19 || v21 != v20) )
    {
      v16 = -1073741558;
      goto LABEL_120;
    }
    v31 = MiFreeVadRange(v17, (int)&v43, v22, v21, v15, v49 != 0);
    v16 = v31;
    if ( v31 >= 0 )
    {
      if ( v13 )
        KiUnstackDetachProcess((__int64)&v60, 0LL, v32, v33);
      if ( v58[0] )
        MiFreeEnclaveModules(v58);
      if ( v50 != -1LL )
        ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
      v34 = v48;
      *v56 = v14 - v48 + 1;
      goto LABEL_85;
    }
    if ( v31 != -1073741267 )
      goto LABEL_120;
  }
  v16 = -1073741800;
LABEL_120:
  MiUnlockAndDereferenceVad((char *)v17);
  if ( v43 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
LABEL_123:
  if ( v13 )
    KiUnstackDetachProcess((__int64)&v60, 0LL, v10, (_DWORD *)v7);
  if ( v50 != -1LL )
    ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
  return (unsigned int)v16;
}

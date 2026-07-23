/*
 * XREFs of MmFreeVirtualMemory @ 0x1407049E0
 * Callers:
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     PspDeleteUserStack @ 0x14061DDC8 (PspDeleteUserStack.c)
 *     NtFreeVirtualMemory @ 0x140704910 (NtFreeVirtualMemory.c)
 *     PspFreeUserFiberShadowStack @ 0x14090A2D4 (PspFreeUserFiberShadowStack.c)
 *     PspReserveAndCommitUserShadowStack @ 0x14090A478 (PspReserveAndCommitUserShadowStack.c)
 *     PspSetupUserFiberShadowStack @ 0x14090A660 (PspSetupUserFiberShadowStack.c)
 *     PspSetupUserShadowStack @ 0x14090A73C (PspSetupUserShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14090B188 (PspFreeCurrentThreadUserShadowStack.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14027D850 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1402AB900 (KiUnstackDetachProcess.c)
 *     MiUnlockAndDereferenceVad @ 0x1402BF880 (MiUnlockAndDereferenceVad.c)
 *     MiObtainReferencedVadEx @ 0x1402BFBA0 (MiObtainReferencedVadEx.c)
 *     MiLocateVadEvent @ 0x140309104 (MiLocateVadEvent.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14031F5B0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiFreeVadRange @ 0x140323314 (MiFreeVadRange.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiGetVadPageSize @ 0x14055BFF0 (MiGetVadPageSize.c)
 *     MiCheckSecuredVad @ 0x140657218 (MiCheckSecuredVad.c)
 *     MiDecommitRegion @ 0x1407059D0 (MiDecommitRegion.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     MiCoalescePlaceholderAllocations @ 0x1408C8904 (MiCoalescePlaceholderAllocations.c)
 *     MiDecommitEnclavePages @ 0x1408D2FE4 (MiDecommitEnclavePages.c)
 *     MiFreeEnclaveModules @ 0x1408D3080 (MiFreeEnclaveModules.c)
 *     PerfInfoLogVirtualFree @ 0x140937E64 (PerfInfoLogVirtualFree.c)
 */

__int64 __fastcall MmFreeVirtualMemory(
        ULONG_PTR BugCheckParameter1,
        unsigned __int64 *a2,
        __int64 *a3,
        int a4,
        unsigned __int8 a5,
        int a6)
{
  int v6; // r15d
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rdx
  _KPROCESS *Process; // rsi
  int v10; // r8d
  unsigned __int64 v12; // rdi
  int v13; // ebx
  unsigned __int64 v14; // r14
  ULONG_PTR v15; // r13
  int v16; // edi
  __int64 v17; // rsi
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
  int v28; // ecx
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  int v31; // eax
  unsigned __int64 v32; // r15
  __int64 v33; // r12
  int v34; // eax
  int v35; // eax
  int v36; // ecx
  __int64 v37; // rax
  char v38; // [rsp+40h] [rbp-C0h] BYREF
  int v39; // [rsp+44h] [rbp-BCh]
  int v40; // [rsp+48h] [rbp-B8h]
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  ULONG_PTR BugCheckParameter1a; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-A8h]
  int v44; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v45; // [rsp+68h] [rbp-98h]
  unsigned __int64 v46; // [rsp+70h] [rbp-90h]
  unsigned __int64 v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+80h] [rbp-80h]
  unsigned __int64 v49; // [rsp+88h] [rbp-78h]
  __int64 v50; // [rsp+90h] [rbp-70h]
  __int64 *v51; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v52; // [rsp+A0h] [rbp-60h]
  __int64 v53[2]; // [rsp+A8h] [rbp-58h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+B8h] [rbp-48h]
  __int64 v55; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v56; // [rsp+C8h] [rbp-38h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  __int64 v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]

  v45 = BugCheckParameter1;
  v40 = a4;
  v51 = a3;
  v52 = a2;
  v50 = 0LL;
  v6 = a4;
  v55 = 0LL;
  v57 = 0LL;
  v59 = 0LL;
  BugCheckParameter1a = 0LL;
  v41 = 0;
  v53[1] = 0LL;
  v53[0] = 0LL;
  v56 = 0LL;
  if ( (a4 & 0xC000) == 0 || (a4 & 0xC000) == 0xC000 )
    return 3221225714LL;
  v7 = *a2;
  v8 = *a3;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  v49 = v7;
  v48 = v8;
  if ( v7 > 0x7FFFFFFEFFFFLL )
    return 3221225712LL;
  if ( 0x7FFFFFFF0000LL - v7 < v8 )
    return 3221225713LL;
  if ( (v6 & 2) != 0 )
  {
    if ( (v6 & 1) != 0 )
      return 3221225485LL;
    v10 = a6 | 0x4000000;
    v6 &= ~2u;
    v40 = v6;
  }
  else
  {
    v10 = a6;
  }
  v39 = v10;
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 2) != 0 )
      return 3221225485LL;
    v10 |= 0xC000000u;
    v6 &= ~1u;
    v39 = v10;
    v40 = v6;
  }
  v44 = v10 & 0x4000000;
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
  v46 = (v7 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v43 = v7 & 0xFFFFFFFFFFFFF000uLL;
  v14 = (v7 + v8 - 1) | 0xFFF;
  v58 = 0LL;
  v47 = v14 >> 12;
  if ( BugCheckParameter1 == -1LL )
  {
    v15 = (ULONG_PTR)Process;
  }
  else
  {
    v41 = ObpReferenceObjectByHandleWithTag(BugCheckParameter1, 0x6D566D4Du, (__int64)&BugCheckParameter1a, 0LL, 0LL);
    v16 = v41;
    if ( v41 < 0 )
      return (unsigned int)v16;
    v15 = BugCheckParameter1a;
    if ( Process != (_KPROCESS *)BugCheckParameter1a )
    {
      v13 = 1;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1a, 0, (__int64)&v55);
    }
    v10 = v39;
    v12 = v43;
  }
  v38 = 0;
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
  v17 = MiObtainReferencedVadEx(v12, (_DWORD)BugCheckParameter1a != 0, &v41);
  if ( !v17 )
  {
    v16 = v41;
    goto LABEL_123;
  }
  while ( 1 )
  {
    v18 = BugCheckParameter1a;
    v19 = *(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32);
    v20 = *(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32);
    if ( v48 )
    {
      v21 = v47;
    }
    else
    {
      v47 = *(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32);
      v21 = v20;
      v14 = (v20 << 12) | 0xFFF;
      if ( (_DWORD)BugCheckParameter1a )
      {
        if ( v46 != v19 )
          goto LABEL_105;
        v43 = v19 << 12;
      }
    }
    v22 = v46;
    if ( v46 < v19 || v46 > v20 || v21 < v19 || v21 > v20 )
    {
      v16 = -1073741798;
      goto LABEL_120;
    }
    v23 = *(_DWORD *)(v17 + 48);
    v24 = v23 & 0x100000;
    if ( (v40 & 0x10000) == 0 )
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
    if ( v46 == v19 )
    {
      v25 = v21 == v20;
      goto LABEL_48;
    }
LABEL_49:
    if ( v44 )
    {
      if ( !MiLocateVadEvent(v17) )
      {
        v26 = *(unsigned int *)(v17 + 52);
        LODWORD(v26) = v26 & 0x7FFFFFFF;
        if ( (v26 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) != 0x7FFFFFFFDLL )
          break;
      }
      v27 = *(unsigned int *)(v17 + 52);
      LODWORD(v27) = v27 & 0x7FFFFFFF;
      if ( (v27 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) == 0x7FFFFFFFDLL && v22 == v19 && v21 == v20 )
        break;
    }
    v28 = v39;
    if ( (v39 & 0x40000000) != 0 && (!v24 || (v23 & 0x1000000) != 0 || (v23 & 0x4000000) == 0) )
      break;
    if ( (v23 & 8) == 0 || (v39 & 0x40000000) != 0 )
      goto LABEL_69;
    if ( !v18 )
    {
      v30 = v49;
      v29 = v21 - v22;
      goto LABEL_66;
    }
    if ( (*(_DWORD *)(v15 + 1124) & 0x20) == 0 )
    {
      v29 = v20 - v19;
      v30 = v19 << 12;
LABEL_66:
      v16 = MiCheckSecuredVad(v17, v30, (v29 + 1) << 12, 0x55u, a5);
      goto LABEL_67;
    }
    v16 = 0;
LABEL_67:
    if ( v16 < 0 )
      goto LABEL_120;
    v22 = v46;
    v21 = v47;
    v28 = v39;
LABEL_69:
    if ( !(_DWORD)BugCheckParameter1a )
    {
      v33 = v48;
      v32 = v43;
      if ( v48 )
        v33 = v14 - v43 + 1;
      v34 = *(_DWORD *)(v17 + 48);
      if ( (v34 & 0x100000) == 0
        || (v34 & 0x1000000) != 0
        || (v34 & 0x2000000) == 0
        || (v35 = MiDecommitEnclavePages(v15, v17, v43, v33, v28), v16 = v35, v35 == -1073741802) )
      {
        v36 = *(_DWORD *)(v17 + 48);
        if ( (*(_BYTE *)(v17 + 48) & 0x70) == 0x30
          || (v36 & 0x100000) != 0
          && ((v36 & 0x400000) != 0 || (v36 & 0xC0000u) >= 0x80000)
          && ((v36 & 0x500000) != 0x500000 || v33 && (((MiGetVadPageSize(v17) << 12) - 1) & (v32 | (v14 + 1))) != 0)
          || (v37 = *(unsigned int *)(v17 + 52),
              LODWORD(v37) = v37 & 0x7FFFFFFF,
              (v37 | ((unsigned __int64)*(unsigned __int8 *)(v17 + 34) << 31)) == 0x7FFFFFFFDLL) )
        {
          v16 = -1073741664;
          goto LABEL_120;
        }
        if ( !v33 )
        {
          if ( v49 >> 12 != (*(unsigned int *)(v17 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 32) << 32)) )
          {
LABEL_105:
            v16 = -1073741665;
            goto LABEL_120;
          }
          v14 = ((*(unsigned int *)(v17 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v17 + 33) << 32)) << 12) | 0xFFF;
        }
        LODWORD(v50) = MiDecommitRegion(v17, v32, v14);
      }
      else if ( v35 < 0 )
      {
        goto LABEL_120;
      }
      MiUnlockAndDereferenceVad((char *)v17);
      if ( (_DWORD)v50 )
        MiDeleteEmptyPageTables(v32, v14, 0);
      if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
        PerfInfoLogVirtualFree(v32, v33, v15);
      if ( v13 )
        KiUnstackDetachProcess((__int64)&v55, 0LL);
      if ( v45 != -1LL )
        ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
      *v51 = v33;
LABEL_85:
      *v52 = v32;
      return 0LL;
    }
    if ( (*(_DWORD *)(v15 + 2172) & 0x100) != 0 && (v22 != v19 || v21 != v20) )
    {
      v16 = -1073741558;
      goto LABEL_120;
    }
    v31 = MiFreeVadRange(v17, (int)&v38, v22, v21, v15, v44 != 0);
    v16 = v31;
    if ( v31 >= 0 )
    {
      if ( v13 )
        KiUnstackDetachProcess((__int64)&v55, 0LL);
      if ( v53[0] )
        MiFreeEnclaveModules(v53);
      if ( v45 != -1LL )
        ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
      v32 = v43;
      *v51 = v14 - v43 + 1;
      goto LABEL_85;
    }
    if ( v31 != -1073741267 )
      goto LABEL_120;
  }
  v16 = -1073741800;
LABEL_120:
  MiUnlockAndDereferenceVad((char *)v17);
  if ( v38 == 1 )
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, v15);
LABEL_123:
  if ( v13 )
    KiUnstackDetachProcess((__int64)&v55, 0LL);
  if ( v45 != -1LL )
    ObfDereferenceObjectWithTag((PVOID)v15, 0x6D566D4Du);
  return (unsigned int)v16;
}

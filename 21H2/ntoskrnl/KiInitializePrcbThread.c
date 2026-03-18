/*
 * XREFs of KiInitializePrcbThread @ 0x1403C1454
 * Callers:
 *     KiStartDpcDelegateThread @ 0x1403C13E4 (KiStartDpcDelegateThread.c)
 *     KiInitializeIdleThread @ 0x140A590DC (KiInitializeIdleThread.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     MmGetSessionIdEx @ 0x140287F30 (MmGetSessionIdEx.c)
 *     KeStartThread @ 0x140292350 (KeStartThread.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     KiCopyAffinityEx @ 0x140300030 (KiCopyAffinityEx.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403C1A20 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiQueryProcessorNode @ 0x1403C1A84 (KiQueryProcessorNode.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObCreateObject @ 0x14066BA00 (ObCreateObject.c)
 *     KeInitThread @ 0x140A48020 (KeInitThread.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool3 @ 0x140A6E1B0 (ExAllocatePool3.c)
 */

__int64 __fastcall KiInitializePrcbThread(
        void **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 KernelStack,
        unsigned __int16 a6,
        __int64 a7,
        __int64 a8,
        __int16 a9,
        int a10)
{
  char v10; // r14
  __int64 v11; // rbx
  char *v13; // rdi
  __int64 v14; // rcx
  int Object; // esi
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rsi
  unsigned __int16 **v18; // r13
  _DWORD *v19; // rcx
  unsigned __int16 *v20; // rcx
  unsigned __int16 *v21; // rbx
  unsigned __int16 *v22; // rbx
  __int64 v23; // rbx
  __int64 v24; // rcx
  unsigned __int16 *v25; // r8
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  char v34; // al
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int SessionId; // r8d
  __int64 p_Process; // rbx
  unsigned int v38; // ecx
  int v39; // r9d
  _QWORD *v40; // rdx
  _QWORD *v41; // rax
  __int64 v43; // rax
  int v44; // ebx
  __int64 Pool3; // rax
  __int64 v46; // rcx
  __int16 v47; // bx
  unsigned __int16 *v48; // rcx
  void *v49; // rcx
  void *v50; // rcx
  __int64 Size; // [rsp+58h] [rbp-69h]
  __int128 v52; // [rsp+60h] [rbp-61h] BYREF
  _QWORD v53[4]; // [rsp+78h] [rbp-49h] BYREF
  __int128 v54; // [rsp+98h] [rbp-29h]
  void *v55; // [rsp+A8h] [rbp-19h]
  int v56; // [rsp+B0h] [rbp-11h]
  int v57; // [rsp+B4h] [rbp-Dh]
  __int64 v58; // [rsp+B8h] [rbp-9h]
  int v61; // [rsp+120h] [rbp+5Fh] BYREF
  int v62; // [rsp+124h] [rbp+63h]

  v62 = HIDWORD(a4);
  v10 = a9;
  v11 = a7;
  v61 = 0;
  a6 = 0;
  v13 = 0LL;
  v52 = 0LL;
  if ( (_BYTE)a9 )
  {
    v17 = a2;
    KernelStack = a2;
  }
  else
  {
    v14 = *(unsigned int *)(a7 + 36);
    v61 = -1;
    a6 = -1;
    Object = KiQueryProcessorNode(v14, &v61, &a6);
    if ( Object )
      goto LABEL_55;
    KernelStack = MmCreateKernelStack(0, a6, 0LL);
    v16 = KernelStack;
    if ( !KernelStack )
    {
      Object = -1073741670;
      goto LABEL_55;
    }
    *a1 = 0LL;
    Object = ObCreateObject(0, (_DWORD)PsThreadType, 0, 0, 0, 2288, 0, 2288, (__int64)a1);
    if ( Object < 0 )
      goto LABEL_53;
    memset(*a1, 0, 0x8F0uLL);
    v17 = v16;
  }
  v13 = (char *)*a1;
  a9 = KiMaximumGroups;
  v18 = (unsigned __int16 **)(v13 + 552);
  if ( v10 )
  {
    if ( *(_DWORD *)(v11 + 36) )
    {
      v19 = (_DWORD *)*((_QWORD *)v13 + 72);
    }
    else
    {
      v19 = &KiBootProcessorIdleThreadAffinity;
      *((_QWORD *)v13 + 72) = &KiBootProcessorIdleThreadAffinity;
      *v18 = (unsigned __int16 *)&KiBootProcessorIdleThreadUserAffinity;
    }
    v19[1] = 0;
    *v19 = 2097153;
    memset(v19 + 2, 0, 0x100uLL);
    v20 = *v18;
    *((_DWORD *)v20 + 1) = 0;
    *(_DWORD *)v20 = 2097153;
    memset(v20 + 4, 0, 0x100uLL);
  }
  else
  {
    v43 = *(_QWORD *)(v11 + 192);
    LOBYTE(v52) = 3;
    DWORD2(v52) = *(unsigned __int16 *)(v43 + 138);
    Size = 8LL * (unsigned __int16)KiMaximumGroups;
    v44 = 8 * (unsigned __int16)KiMaximumGroups + 8;
    *((_QWORD *)v13 + 72) = ExAllocatePool3(64, v44, 538993995, (unsigned int)&v52, 1);
    Pool3 = ExAllocatePool3(64, v44, 538993995, (unsigned int)&v52, 1);
    v46 = *((_QWORD *)v13 + 72);
    *v18 = (unsigned __int16 *)Pool3;
    if ( !v46 || !Pool3 )
    {
      Object = -1073741670;
LABEL_52:
      v16 = KernelStack;
      if ( KernelStack )
      {
LABEL_53:
        if ( !a2 )
          MmDeleteKernelStackEx(v16, 0, 0LL);
      }
LABEL_55:
      v49 = (void *)*((_QWORD *)v13 + 72);
      if ( v49 && !v10 )
      {
        ExFreePoolWithTag(v49, 0);
        *((_QWORD *)v13 + 72) = 0LL;
      }
      v50 = (void *)*((_QWORD *)v13 + 69);
      if ( v50 && !v10 )
      {
        ExFreePoolWithTag(v50, 0);
        *((_QWORD *)v13 + 69) = 0LL;
      }
      if ( *a1 && !v10 )
        ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
      return (unsigned int)Object;
    }
    *(_DWORD *)(v46 + 4) = 0;
    v47 = a9;
    *(_WORD *)(v46 + 2) = a9;
    *(_WORD *)v46 = 1;
    memset((void *)(v46 + 8), 0, Size);
    v48 = *v18;
    v48[1] = v47;
    *((_DWORD *)v48 + 1) = 0;
    *v48 = 1;
    memset(v48 + 4, 0, Size);
  }
  v53[1] = a3;
  *((_DWORD *)v13 + 20) = 0;
  v55 = &KiInitialProcess;
  v54 = 0LL;
  v57 = a10 | 2;
  v56 = 0;
  v58 = 0LL;
  v53[0] = v17;
  v53[2] = 0LL;
  v53[3] = 0LL;
  Object = KeInitThread(v13, v53);
  if ( Object < 0 )
    goto LABEL_52;
  KeStartThread((__int64)v13, 0LL, 0LL);
  *((_QWORD *)*a1 + 204) = a8;
  v21 = (unsigned __int16 *)*((_QWORD *)v13 + 72);
  memset(v21 + 4, 0, 8LL * *v21);
  *v21 = 1;
  v22 = *v18;
  memset(*v18 + 4, 0, 8LL * **v18);
  *v22 = 1;
  v23 = a7;
  KeAddProcessorAffinityEx(*v18, *(_DWORD *)(a7 + 36));
  v24 = *((_QWORD *)v13 + 72);
  v25 = *v18;
  *((_WORD *)v13 + 280) = *(unsigned __int8 *)(v23 + 208);
  *((_DWORD *)v13 + 49) = *(_DWORD *)(v23 + 36);
  KiCopyAffinityEx(v24, *(_WORD *)(v24 + 2), v25);
  *((_WORD *)v13 + 292) = *(unsigned __int8 *)(v23 + 208);
  *((_DWORD *)v13 + 147) = *(_DWORD *)(v23 + 36);
  v28 = *(_DWORD *)(v23 + 36);
  *((_DWORD *)v13 + 29) |= 8u;
  *((_DWORD *)v13 + 134) = v28;
  v29 = *a1;
  v29[148] = a3;
  v29[164] = a3;
  v30 = (char *)*a1 + 1456;
  v30[1] = v30;
  *v30 = v30;
  v31 = (char *)*a1 + 1472;
  v31[1] = v31;
  *v31 = v31;
  *((_QWORD *)*a1 + 186) = 0LL;
  if ( v10 && !*(_DWORD *)(v23 + 36) )
    goto LABEL_18;
  if ( KiSchedulerAssistThreadFlagEnabled )
    _interlockedbittestandset((volatile signed __int32 *)v13, 0x16u);
  if ( v10 && !*(_DWORD *)(v23 + 36) || PopEnergyEstimationEnabled )
LABEL_18:
    _interlockedbittestandset((volatile signed __int32 *)v13, 0x15u);
  v13[195] = 63;
  if ( v10 )
  {
    v13[388] = 2;
    v13[113] = 1;
    KeInterlockedSetProcessorAffinityEx(&unk_140D32C70, *(unsigned int *)(v23 + 36), v26, v27);
    v40 = (_QWORD *)qword_140D330E8;
    v41 = (char *)*a1 + 1336;
    if ( *(_UNKNOWN **)qword_140D330E8 == &unk_140D330E0 )
    {
      *v41 = &unk_140D330E0;
      v41[1] = v40;
      *v40 = v41;
      qword_140D330E8 = (__int64)v41;
      return (unsigned int)Object;
    }
LABEL_47:
    __fastfail(3u);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)qword_140D33360, 0LL);
  v32 = (_QWORD *)qword_140D330E8;
  v33 = (char *)*a1 + 1336;
  if ( *(_UNKNOWN **)qword_140D330E8 != &unk_140D330E0 )
    goto LABEL_47;
  *v33 = &unk_140D330E0;
  v33[1] = v32;
  *v32 = v33;
  qword_140D330E8 = (__int64)v33;
  v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)qword_140D33360, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v34 & 2) != 0 && (v34 & 4) == 0 )
    ExfTryToWakePushLock(qword_140D33360);
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int64)qword_140D33360 - qword_140C50630 < 0x8000000000LL )
    SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  _disable();
  p_Process = (__int64)&CurrentThread[1].Process;
  v38 = 0;
  while ( (*(_QWORD *)p_Process & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)qword_140D33360 & 0x7FFFFFFFFFFFFFFCLL)
       || !*(_BYTE *)(p_Process + 18)
       || (*(_DWORD *)p_Process & 1) != 0
       || *(_DWORD *)(p_Process + 8) != SessionId )
  {
    ++v38;
    p_Process += 96LL;
    if ( v38 >= 6 )
      goto LABEL_42;
  }
  *(_BYTE *)(p_Process + 18) = 0;
  if ( p_Process )
  {
    if ( *(__int64 *)p_Process < 0 )
    {
      *(_BYTE *)p_Process |= 2u;
      _enable();
      KiAbEntryRemoveFromTree(p_Process);
      _disable();
    }
    v39 = *(_DWORD *)(p_Process + 88);
    *(_DWORD *)(p_Process + 88) = 0;
    *(_BYTE *)(p_Process + 17) = 0;
    *(_QWORD *)p_Process = 0LL;
    CurrentThread->AbEntrySummary |= 1 << *(_BYTE *)(p_Process + 16);
    _enable();
    if ( v39 )
      KiAbThreadRemoveBoostsSlow((ULONG_PTR)CurrentThread, (__int64)qword_140D33360, v39);
    return (unsigned int)Object;
  }
LABEL_42:
  if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
    KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, (ULONG_PTR)qword_140D33360, SessionId, 0LL);
  _enable();
  return (unsigned int)Object;
}

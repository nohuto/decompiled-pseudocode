/*
 * XREFs of PspCreateThread @ 0x140707180
 * Callers:
 *     PsCreateSystemThreadEx @ 0x140655580 (PsCreateSystemThreadEx.c)
 *     NtCreateThreadEx @ 0x1407075D0 (NtCreateThreadEx.c)
 *     NtCreateThread @ 0x140901470 (NtCreateThread.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     PspIsProcessReadyForRemoteThread @ 0x1403153D4 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     PspAllocateThread @ 0x14070559C (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x140707500 (PspMapThreadCreationFlags.c)
 */

__int64 __fastcall PspCreateThread(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  __int64 v14; // rdx
  __int64 v15; // r8
  _DWORD *v16; // r9
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  char PreviousMode; // al
  _KPROCESS *v20; // rbx
  int v21; // edi
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r13
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v30; // ebx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  int Flink_high; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *Tag; // [rsp+20h] [rbp-E0h]
  char v39; // [rsp+60h] [rbp-A0h]
  int v40[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  __int64 v46; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  _QWORD *v48; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  __int64 v51; // [rsp+C0h] [rbp-40h]
  __int64 v52; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v53; // [rsp+D0h] [rbp-30h]
  __int64 v54[50]; // [rsp+E0h] [rbp-20h] BYREF

  v40[0] = 0;
  v45 = a6;
  v50 = a7;
  v48 = a9;
  v42 = a11;
  v46 = a12;
  v49 = a3;
  v41 = a2;
  v51 = a1;
  v47 = a13;
  *(_QWORD *)&v40[1] = a8;
  memset(v54, 0, sizeof(v54));
  v53 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  DmaAdapter = 0LL;
  v20 = 0LL;
  v39 = PreviousMode;
  v21 = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    LOBYTE(v16) = PreviousMode;
    LODWORD(Tag) = 1917023056;
    result = ObpReferenceObjectByHandleWithTag(a4, 2LL, PsProcessType, (ULONG)v16, Tag, &Object, 0LL, 0LL);
    v20 = (_KPROCESS *)Object;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v40[1] )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v20 = a5;
LABEL_6:
  if ( v20 != Process && !PspIsProcessReadyForRemoteThread((__int64)v20, v14, v15, v16) )
    return 3221225473LL;
  v23 = v42;
  if ( v42 && *(_QWORD *)&v40[1] )
  {
    v23 = v42 & -(__int64)((v20->SecureState.SecureHandle & 1) != 0);
    v42 = v23;
  }
  if ( !v45
    && !v23
    && (((__int64)v20[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || (HIDWORD(v20[2].ReadyListHead.Blink) & 0x4000) != 0
     || (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v39 )
  {
    Flink_high = HIDWORD(v20[2].Header.WaitListHead.Flink);
    if ( (Flink_high & 0x1000) != 0 || (Flink_high & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v20, 0x72437350u);
      return (unsigned int)v21;
    }
  }
  if ( (HIDWORD(v20[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v20[2].Affinity.Count && *(_QWORD *)&v40[1] )
  {
    v21 = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, v40);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v20[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v24, v25, v26);
    v21 = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v20, 0x72437350u);
  v27 = v45;
  v52 = (__int64)v48;
  v21 = PspAllocateThread(
          (ULONG_PTR)v20,
          v49,
          v39,
          v45,
          *(__int64 *)&v40[1],
          (_INITIAL_TEB **)&v52,
          v42,
          v46,
          v40,
          &DmaAdapter,
          (char *)v47,
          (_DMA_OPERATIONS **)v54);
  if ( v21 < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v20[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v35, v36, v37);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v20, 0x72437350u);
  inserted = PspInsertThread(
               (char *)DmaAdapter,
               (ULONG_PTR)v20,
               v48,
               v40,
               v41,
               (_DWORD *)v47,
               v27,
               v46,
               (__int64)v54,
               (_QWORD *)v51,
               (struct _DMA_ADAPTER *)v50);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v20[1].ProfileListHead.Blink;
  v30 = inserted;
  ExReleaseRundownProtection_0(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread, v31, v32, v33);
  HalPutDmaAdapter(DmaAdapter);
  return v30;
}

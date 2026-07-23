/*
 * XREFs of PspCreateThread @ 0x1406B12C0
 * Callers:
 *     NtCreateThreadEx @ 0x1406B1710 (NtCreateThreadEx.c)
 *     PsCreateSystemThreadEx @ 0x1406CFBE0 (PsCreateSystemThreadEx.c)
 *     NtCreateThread @ 0x140903C40 (NtCreateThread.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     ObfDereferenceObjectWithTag @ 0x140208290 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 *     PspIsProcessReadyForRemoteThread @ 0x140353124 (PspIsProcessReadyForRemoteThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     PspInsertThread @ 0x1406AE2E4 (PspInsertThread.c)
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 *     PspMapThreadCreationFlags @ 0x1406B1640 (PspMapThreadCreationFlags.c)
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
        __int64 a9,
        unsigned int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  struct _KTHREAD *CurrentThread; // r15
  _KPROCESS *Process; // r13
  char PreviousMode; // al
  _KPROCESS *v17; // rbx
  int v18; // edi
  __int64 result; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  unsigned int inserted; // eax
  struct _EX_RUNDOWN_REF *p_Blink; // rcx
  unsigned int v24; // ebx
  int Flink_high; // eax
  unsigned __int8 v26; // [rsp+60h] [rbp-A0h]
  int v27[3]; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+80h] [rbp-80h] BYREF
  PVOID Object; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  ULONG_PTR v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  __int64 v38; // [rsp+C0h] [rbp-40h]
  __int64 v39; // [rsp+C8h] [rbp-38h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h]
  _BYTE AccessState[400]; // [rsp+E0h] [rbp-20h] BYREF

  v27[0] = 0;
  v32 = a6;
  v37 = a7;
  v35 = a9;
  v29 = a11;
  v33 = a12;
  v36 = a3;
  v28 = a2;
  v38 = a1;
  v34 = a13;
  *(_QWORD *)&v27[1] = a8;
  memset(AccessState, 0, sizeof(AccessState));
  v40 = 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a8 )
    PreviousMode = CurrentThread->PreviousMode;
  else
    PreviousMode = 0;
  DmaAdapter = 0LL;
  v17 = 0LL;
  v26 = PreviousMode;
  v18 = -1073741816;
  Object = 0LL;
  if ( a4 )
  {
    result = ObpReferenceObjectByHandleWithTag(
               a4,
               2,
               (__int64)PsProcessType,
               PreviousMode,
               0x72437350u,
               &Object,
               0LL,
               0LL);
    v17 = (_KPROCESS *)Object;
    goto LABEL_5;
  }
  if ( *(_QWORD *)&v27[1] )
  {
    result = 3221225480LL;
LABEL_5:
    if ( (int)result < 0 )
      return result;
    goto LABEL_6;
  }
  ObfReferenceObjectWithTag(a5, 0x72437350u);
  v17 = a5;
LABEL_6:
  if ( v17 != Process && !PspIsProcessReadyForRemoteThread((__int64)v17) )
    return 3221225473LL;
  v20 = v29;
  if ( v29 && *(_QWORD *)&v27[1] )
  {
    v20 = v29 & -(__int64)((v17->SecureState.SecureHandle & 1) != 0);
    v29 = v20;
  }
  if ( !v32
    && !v20
    && (((__int64)v17[2].ReadyListHead.Blink & 1) != 0
     || ((__int64)Process[2].ReadyListHead.Blink & 1) != 0
     || (HIDWORD(v17[2].ReadyListHead.Blink) & 0x4000) != 0
     || (HIDWORD(Process[2].ReadyListHead.Blink) & 0x4000) != 0) )
  {
    return 3221225506LL;
  }
  if ( v26 )
  {
    Flink_high = HIDWORD(v17[2].Header.WaitListHead.Flink);
    if ( (Flink_high & 0x1000) != 0 || (Flink_high & 1) != 0 )
    {
LABEL_31:
      ObfDereferenceObjectWithTag(v17, 0x72437350u);
      return (unsigned int)v18;
    }
  }
  if ( (HIDWORD(v17[2].Header.WaitListHead.Flink) & 1) != 0 && !*(_QWORD *)&v17[2].Affinity.Count && *(_QWORD *)&v27[1] )
  {
    v18 = -1073741790;
    goto LABEL_31;
  }
  PspMapThreadCreationFlags(a10, v27);
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)&v17[1].ProfileListHead.Blink) )
  {
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    v18 = -1073741558;
    goto LABEL_31;
  }
  ObfReferenceObjectWithTag(v17, 0x72437350u);
  v21 = v32;
  v39 = v35;
  v18 = PspAllocateThread(
          (ULONG_PTR)v17,
          v36,
          v26,
          v32,
          *(__int64 *)&v27[1],
          (_INITIAL_TEB **)&v39,
          v29,
          v33,
          v27,
          &DmaAdapter,
          (char *)v34,
          (_DMA_OPERATIONS **)AccessState);
  if ( v18 < 0 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v17[1].ProfileListHead.Blink);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    goto LABEL_31;
  }
  ObfDereferenceObjectWithTag(v17, 0x72437350u);
  inserted = PspInsertThread(
               (char *)DmaAdapter,
               v17,
               v35,
               v27,
               v28,
               (_BYTE *)v34,
               v21,
               v33,
               (PACCESS_STATE)AccessState,
               (PVOID *)v38,
               (struct _DMA_ADAPTER *)v37);
  p_Blink = (struct _EX_RUNDOWN_REF *)&v17[1].ProfileListHead.Blink;
  v24 = inserted;
  ExReleaseRundownProtection_0(p_Blink);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  HalPutDmaAdapter(DmaAdapter);
  return v24;
}

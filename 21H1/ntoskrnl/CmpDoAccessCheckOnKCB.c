/*
 * XREFs of CmpDoAccessCheckOnKCB @ 0x14086B9F0
 * Callers:
 *     CmpVEExecuteCreateLogic @ 0x1406D038C (CmpVEExecuteCreateLogic.c)
 * Callees:
 *     SepDeleteAccessState @ 0x140206590 (SepDeleteAccessState.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetCurrentThreadProcess @ 0x14030E2D0 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     SeCreateAccessStateEx @ 0x140613790 (SeCreateAccessStateEx.c)
 *     CmpCheckKeyBodyAccess @ 0x1406BB974 (CmpCheckKeyBodyAccess.c)
 */

BOOLEAN __fastcall CmpDoAccessCheckOnKCB(_DMA_OPERATIONS *a1, __int64 a2, ACCESS_MASK a3, char a4)
{
  BOOLEAN v7; // si
  PADAPTER_OBJECT v9; // r14
  struct _KTHREAD *CurrentThread; // rdi
  GENERIC_MAPPING *v11; // rbx
  struct _KPROCESS *CurrentThreadProcess; // rax
  PADAPTER_OBJECT v13; // rcx
  BOOLEAN v14; // bl
  __int64 v15; // [rsp+20h] [rbp-E0h]
  PADAPTER_OBJECT DmaAdapter; // [rsp+50h] [rbp-B0h] BYREF
  ACCESS_MASK v17; // [rsp+58h] [rbp-A8h]
  NTSTATUS AccessState[41]; // [rsp+5Ch] [rbp-A4h] BYREF
  _QWORD v19[28]; // [rsp+100h] [rbp+0h] BYREF

  v17 = a3;
  memset(&AccessState[1], 0, 0xA0uLL);
  memset(v19, 0, sizeof(v19));
  v7 = 0;
  DmaAdapter = 0LL;
  if ( (int)ObCreateObjectEx(a4, CmKeyObjectType, 0LL, a4, v15, 104, 0, 0, &DmaAdapter, 0LL) < 0 )
    return 0;
  v9 = DmaAdapter;
  DmaAdapter[3].DmaOperations = 0LL;
  *(_QWORD *)&v9[4].Version = 0LL;
  *(_DWORD *)&v9->Version = 1803104306;
  v9->DmaOperations = 0LL;
  *(_DWORD *)&v9[3].Version = 0;
  *(_QWORD *)&v9[5].Version = (char *)v9 + 72;
  v9[4].DmaOperations = (_DMA_OPERATIONS *)&v9[4].DmaOperations;
  CurrentThread = KeGetCurrentThread();
  v11 = (GENERIC_MAPPING *)((char *)CmKeyObjectType + 76);
  CurrentThreadProcess = PsGetCurrentThreadProcess();
  AccessState[0] = SeCreateAccessStateEx(CurrentThread, CurrentThreadProcess, &AccessState[1], v19, v17, v11);
  if ( AccessState[0] >= 0 )
  {
    v13 = DmaAdapter;
    v9->DmaOperations = a1;
    v14 = CmpCheckKeyBodyAccess(v13, a2, (PACCESS_STATE)&AccessState[1], a4, AccessState);
    SepDeleteAccessState((__int64)&AccessState[1]);
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&AccessState[9]);
    v9->DmaOperations = 0LL;
    v7 = v14;
  }
  HalPutDmaAdapter(DmaAdapter);
  return v7;
}

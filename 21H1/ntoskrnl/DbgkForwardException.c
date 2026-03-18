/*
 * XREFs of DbgkForwardException @ 0x14071E1F0
 * Callers:
 *     KiDispatchException @ 0x14032AA60 (KiDispatchException.c)
 *     KiSchedulerApc @ 0x1403564C0 (KiSchedulerApc.c)
 *     PsDispatchIumService @ 0x14057D274 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     KeCopyExceptionRecord @ 0x140323088 (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PsCaptureExceptionPort @ 0x140707008 (PsCaptureExceptionPort.c)
 *     PsSetProcessFaultInformation @ 0x14075E230 (PsSetProcessFaultInformation.c)
 *     DbgkpSendApiMessage @ 0x140882D44 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140882E30 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 */

bool __fastcall DbgkForwardException(__int64 a1, char a2, char a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rsi
  struct _DMA_ADAPTER *v8; // rbx
  char v9; // r14
  __int64 v11; // r8
  int v12; // esi
  int v13; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  _OWORD v15[17]; // [rsp+30h] [rbp-D0h] BYREF

  v14 = 0LL;
  memset(v15, 0, sizeof(v15));
  if ( a3 )
  {
    LODWORD(v14) = 1;
    PsSetProcessFaultInformation(KeGetCurrentThread()->ApcState.Process, &v14);
  }
  DWORD2(v15[2]) = 0;
  *(_QWORD *)&v15[0] = 0x800D000A8LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( a2 )
  {
    if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 4) != 0 )
      v8 = 0LL;
    else
      v8 = (struct _DMA_ADAPTER *)Process[1].AffinityPadding[9];
    v9 = 0;
  }
  else
  {
    v8 = (struct _DMA_ADAPTER *)PsCaptureExceptionPort((__int64)CurrentThread->ApcState.Process);
    DWORD1(v15[0]) = 7;
    v9 = 1;
  }
  if ( !v8 && a2 )
    return 0;
  KeCopyExceptionRecord(&v15[3], a1);
  DWORD2(v15[12]) = a3 == 0;
  if ( v9 )
  {
    if ( v8 )
    {
      LOBYTE(v11) = a2;
      v12 = DbgkpSendApiMessageLpc(v15, v8, v11);
      HalPutDmaAdapter(v8);
    }
    else
    {
      v12 = 0;
      HIDWORD(v15[2]) = -2147418111;
    }
  }
  else
  {
    v12 = DbgkpSendApiMessage(Process);
  }
  if ( v12 < 0 )
    return 0;
  v13 = HIDWORD(v15[2]);
  if ( HIDWORD(v15[2]) == -2147418111 )
  {
    if ( a2 )
      return 0;
    v13 = DbgkpSendErrorMessage(a1, 2LL, v15);
  }
  return v13 >= 0;
}

/*
 * XREFs of DbgkForwardException @ 0x1407323B0
 * Callers:
 *     KiDispatchException @ 0x1402612C0 (KiDispatchException.c)
 *     KiSchedulerApc @ 0x140267BA0 (KiSchedulerApc.c)
 *     PsDispatchIumService @ 0x140582F24 (PsDispatchIumService.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeCopyExceptionRecord @ 0x140251E58 (KeCopyExceptionRecord.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PsCaptureExceptionPort @ 0x1406418C8 (PsCaptureExceptionPort.c)
 *     PsSetProcessFaultInformation @ 0x140772EF0 (PsSetProcessFaultInformation.c)
 *     DbgkpSendApiMessage @ 0x1408872B4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x1408873A0 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x1408874D0 (DbgkpSendErrorMessage.c)
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
  _OWORD v14[17]; // [rsp+30h] [rbp-D0h] BYREF

  memset(v14, 0, sizeof(v14));
  if ( a3 )
    PsSetProcessFaultInformation((ULONG_PTR)KeGetCurrentThread()->ApcState.Process);
  DWORD2(v14[2]) = 0;
  *(_QWORD *)&v14[0] = 0x800D000A8LL;
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
    DWORD1(v14[0]) = 7;
    v9 = 1;
  }
  if ( !v8 && a2 )
    return 0;
  KeCopyExceptionRecord(&v14[3], a1);
  DWORD2(v14[12]) = a3 == 0;
  if ( v9 )
  {
    if ( v8 )
    {
      LOBYTE(v11) = a2;
      v12 = DbgkpSendApiMessageLpc(v14, v8, v11);
      HalPutDmaAdapter(v8);
    }
    else
    {
      v12 = 0;
      HIDWORD(v14[2]) = -2147418111;
    }
  }
  else
  {
    v12 = DbgkpSendApiMessage(Process);
  }
  if ( v12 < 0 )
    return 0;
  v13 = HIDWORD(v14[2]);
  if ( HIDWORD(v14[2]) == -2147418111 )
  {
    if ( a2 )
      return 0;
    v13 = DbgkpSendErrorMessage(a1, 2LL, v14);
  }
  return v13 >= 0;
}

/*
 * XREFs of HampConnectionInitialize @ 0x180004D90
 * Callers:
 *     HampConnectionCreate @ 0x1800039B0 (HampConnectionCreate.c)
 *     HamConnectForExtendedExecution @ 0x180004F90 (HamConnectForExtendedExecution.c)
 * Callees:
 *     memset_0 @ 0x18000AB30 (memset_0.c)
 */

void *__fastcall HampConnectionInitialize(_OWORD *a1, void *a2, __int64 a3)
{
  void *result; // rax

  *(_OWORD *)a3 = 0LL;
  *(_OWORD *)(a3 + 16) = 0LL;
  *(_OWORD *)(a3 + 32) = 0LL;
  *(_OWORD *)(a3 + 48) = 0LL;
  *(_OWORD *)(a3 + 64) = 0LL;
  *(_OWORD *)(a3 + 80) = 0LL;
  *(_OWORD *)(a3 + 96) = 0LL;
  *(_QWORD *)(a3 + 112) = 0LL;
  if ( a1 )
    *(_OWORD *)(a3 + 96) = *a1;
  if ( a2 == &unk_180015730 )
  {
    *(_DWORD *)(a3 + 112) = 0;
    memset_0((void *)(a3 + 16), 0, 0x50uLL);
    *(_QWORD *)(a3 + 40) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    RtlInitializeSRWLock(a3 + 24);
    result = (void *)(a3 + 56);
    *(_QWORD *)(a3 + 64) = a3 + 56;
    *(_QWORD *)(a3 + 56) = a3 + 56;
    *(_QWORD *)(a3 + 72) = &HampConnectionDeliverPayload;
    *(_QWORD *)(a3 + 80) = HampConnectionObjectCompareToObject;
    *(_QWORD *)(a3 + 88) = HampConnectionObjectCompareToMessage;
    return result;
  }
  if ( a2 == &unk_180015790 )
  {
    *(_DWORD *)(a3 + 112) = 2;
    *(_OWORD *)(a3 + 16) = 0LL;
    *(_OWORD *)(a3 + 32) = 0LL;
    *(_OWORD *)(a3 + 48) = 0LL;
    *(_OWORD *)(a3 + 64) = 0LL;
    *(_OWORD *)(a3 + 80) = 0LL;
    *(_QWORD *)(a3 + 40) = 0LL;
    *(_QWORD *)(a3 + 48) = 0LL;
    RtlInitializeSRWLock(a3 + 24);
    result = (void *)(a3 + 56);
    *(_QWORD *)(a3 + 64) = a3 + 56;
    *(_QWORD *)(a3 + 56) = a3 + 56;
    *(_QWORD *)(a3 + 72) = &HampConnectionDeliverPayload;
    *(_QWORD *)(a3 + 80) = HampConnectionObjectCompareToObject;
    *(_QWORD *)(a3 + 88) = HampConnectionObjectCompareToMessage;
    return result;
  }
  result = &unk_180015B30;
  if ( a2 == &unk_180015B30 )
  {
    *(_DWORD *)(a3 + 112) = 6;
    return result;
  }
  if ( a2 == &unk_180015B90 )
  {
    *(_DWORD *)(a3 + 112) = 1;
    return (void *)HamIpcChannelInitialize(
                     &HampConnectionDeliverPayload,
                     HampConnectionObjectCompareToObject,
                     HampConnectionObjectCompareToMessage,
                     a3 + 16);
  }
  if ( a2 == &unk_180015C50 )
  {
    *(_DWORD *)(a3 + 112) = 3;
    return (void *)HamIpcChannelInitialize(
                     &HampConnectionDeliverPayload,
                     HampConnectionObjectCompareToObject,
                     HampConnectionObjectCompareToMessage,
                     a3 + 16);
  }
  result = &unk_180015BF0;
  if ( a2 == &unk_180015BF0 )
  {
    *(_DWORD *)(a3 + 112) = 4;
  }
  else
  {
    result = &unk_180015CE0;
    if ( a2 == &unk_180015CE0 )
      *(_DWORD *)(a3 + 112) = 5;
    else
      *(_DWORD *)(a3 + 112) = 7;
  }
  return result;
}

/*
 * XREFs of ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02C0BFC
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0060230 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C00E9BEC (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdHostLifeTimeManager::QueueTryResurrectPffApc(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  char v4; // [rsp+30h] [rbp-18h]

  if ( a1 )
  {
    v2 = Win32AllocPoolNonPaged(88LL, 1668309319LL);
    v3 = v2;
    if ( v2 )
    {
      v4 = 0;
      KeInitializeApc(
        v2,
        KeGetCurrentThread(),
        0LL,
        SpbApcRundown,
        SpbApcRundown,
        UmfdHostLifeTimeManager::TryResurrectPffApcRoutine,
        v4,
        0LL);
      KeInsertQueueApc(v3, a1, 0LL, 0LL);
    }
  }
}

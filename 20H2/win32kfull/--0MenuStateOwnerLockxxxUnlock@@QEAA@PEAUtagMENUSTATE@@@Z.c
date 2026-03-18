/*
 * XREFs of ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF7D4
 * Callers:
 *     xxxDestroyWindow @ 0x1C00CEED0 (xxxDestroyWindow.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D8A90 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0113AF8 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C01266FC (xxxSysCommand.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0221F50 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C02225EC (xxxMNStartMenuState.c)
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     <none>
 */

MenuStateOwnerLockxxxUnlock *__fastcall MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        MenuStateOwnerLockxxxUnlock *this,
        struct tagMENUSTATE *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( gptiCurrent == *((_QWORD *)a2 + 4) )
      ++*((_DWORD *)a2 + 10);
    else
      *(_QWORD *)this = 0LL;
  }
  return this;
}

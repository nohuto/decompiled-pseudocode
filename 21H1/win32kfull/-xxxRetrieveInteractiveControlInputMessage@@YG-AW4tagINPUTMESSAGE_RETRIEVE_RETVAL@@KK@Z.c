/*
 * XREFs of ?xxxRetrieveInteractiveControlInputMessage@@YG?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x19F9AF
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     ?RetrieveInputMessage@InteractiveControlManager@@QAE?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1AE5F9 (-RetrieveInputMessage@InteractiveControlManager@@QAE-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 */

int __fastcall xxxRetrieveInteractiveControlInputMessage(int a1, int a2)
{
  struct InteractiveControlManager *v2; // eax

  v2 = InteractiveControlManager::Instance();
  return InteractiveControlManager::RetrieveInputMessage(v2, a1, a2);
}

/*
 * XREFs of ?IsEqualByQ@CInputDest@@QEBA_NAEBV1@@Z @ 0x1C005C774
 * Callers:
 *     ?HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtagPOINT@@I@Z @ 0x1C005D080 (-HandleCapture_MakeNoMouseOwner@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCButtonEvent@1@_JUtag.c)
 *     ?CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@@PEAUtagQMSG@@PEAUCPointerQFrame@@PEAW4CPointerCoalesce@@@Z @ 0x1C018E93C (-CanCoalesceNodeWithPrevious@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@PEBUCPointerInfoNode@.c)
 * Callees:
 *     ?GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C0065904 (-GetThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ.c)
 *     ??8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z @ 0x1C00717D8 (--8CInputDest@@QEBA_NAEBUtagINPUTDEST@@@Z.c)
 */

char __fastcall CInputDest::IsEqualByQ(CInputDest *this, const struct CInputDest *a2)
{
  CInputDest *v2; // rdx
  struct tagTHREADINFO *ThreadInfo; // rax
  __int64 v4; // rdx
  __int64 v5; // r9
  __int64 v6; // r10
  char v7; // r8

  CInputDest::GetThreadInfo(this);
  ThreadInfo = CInputDest::GetThreadInfo(v2);
  v7 = 0;
  if ( v5 )
  {
    if ( ThreadInfo )
      return *(_QWORD *)(v5 + 424) == *((_QWORD *)ThreadInfo + 53);
    return v7;
  }
  if ( ThreadInfo )
    return v7;
  return CInputDest::operator==(v6, v4);
}

/*
 * XREFs of ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C0194680
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0193EFC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreePointerQFrameList(CTouchProcessor *this, struct CPointerQFrame *a2, __int64 a3)
{
  CInputDest *v4; // rbx
  __int64 v5; // rsi

  if ( (_DWORD)a3 )
  {
    v4 = (struct CPointerQFrame *)((char *)a2 + 16);
    v5 = (unsigned int)a3;
    do
    {
      CInputDest::SetEmpty(v4);
      v4 = (CInputDest *)((char *)v4 + 160);
      --v5;
    }
    while ( v5 );
  }
  Win32FreePool((__int64)a2, (__int64)a2, a3);
}

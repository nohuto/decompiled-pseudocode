/*
 * XREFs of ?FreePointerQFrameList@CTouchProcessor@@AEAAXPEAUCPointerQFrame@@K@Z @ 0x1C018C460
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018BCDC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreePointerQFrameList(
        CTouchProcessor *this,
        struct CPointerQFrame *a2,
        __int64 a3,
        __int64 a4)
{
  CInputDest *v5; // rbx
  __int64 v6; // rsi

  if ( (_DWORD)a3 )
  {
    v5 = (struct CPointerQFrame *)((char *)a2 + 16);
    v6 = (unsigned int)a3;
    do
    {
      CInputDest::SetEmpty(v5, (__int64)a2, a3, a4);
      v5 = (CInputDest *)((char *)v5 + 160);
      --v6;
    }
    while ( v6 );
  }
  Win32FreePool((__int64)a2);
}

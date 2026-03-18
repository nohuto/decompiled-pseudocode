/*
 * XREFs of ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C01944AC
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0190D58 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C0191514 (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0193EFC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0071780 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoList(CTouchProcessor *this, struct CPointerInfoNode *a2, __int64 a3)
{
  char *v4; // rbx
  __int64 v5; // rsi

  if ( (_DWORD)a3 )
  {
    v4 = (char *)a2 + 24;
    v5 = (unsigned int)a3;
    do
    {
      CInputDest::SetEmpty((CInputDest *)(v4 + 328));
      CInputDest::SetEmpty((CInputDest *)v4);
      v4 += 480;
      --v5;
    }
    while ( v5 );
  }
  Win32FreePool((__int64)a2, (__int64)a2, a3);
}

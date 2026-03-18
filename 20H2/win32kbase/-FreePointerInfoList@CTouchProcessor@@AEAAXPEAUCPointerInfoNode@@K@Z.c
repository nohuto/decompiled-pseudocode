/*
 * XREFs of ?FreePointerInfoList@CTouchProcessor@@AEAAXPEAUCPointerInfoNode@@K@Z @ 0x1C018C28C
 * Callers:
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0188B30 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z @ 0x1C01892EC (-CopyPTPPointerInputFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAU2@PEAX@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C018BCDC (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 * Callees:
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0055364 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 */

void __fastcall CTouchProcessor::FreePointerInfoList(
        CTouchProcessor *this,
        struct CPointerInfoNode *a2,
        __int64 a3,
        __int64 a4)
{
  char *v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  if ( (_DWORD)a3 )
  {
    v5 = (char *)a2 + 24;
    v6 = (unsigned int)a3;
    do
    {
      CInputDest::SetEmpty((CInputDest *)(v5 + 328), (__int64)a2, a3, a4);
      CInputDest::SetEmpty((CInputDest *)v5, v7, v8, v9);
      v5 += 480;
      --v6;
    }
    while ( v6 );
  }
  Win32FreePool((__int64)a2);
}

/*
 * XREFs of _LockExchangeW32Thread@8 @ 0xAD400
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     <none>
 */

int __fastcall LockExchangeW32Thread(int a1, int a2)
{
  int result; // eax

  if ( a1 )
  {
    ObfReferenceObject(*(PVOID *)a1);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
  }
  result = *(_DWORD *)(a2 + 4);
  *(_DWORD *)(a2 + 4) = a1;
  if ( result )
    return (*(int (__stdcall **)(int))(a2 + 8))(result);
  return result;
}

/*
 * XREFs of EtwTraceBeginDelegatedInputWorker @ 0x1C012D870
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqqq_EtwWriteTransfer @ 0x1C012FF58 (McTemplateK0cpttttttpppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginDelegatedInputWorker(__int64 a1)
{
  int v2; // r9d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1232);
    else
      LOBYTE(v2) = -1;
    McTemplateK0cpttttttpppqqq_EtwWriteTransfer(
      -__CFSHR__(*(_DWORD *)(a1 + 100), 7),
      (unsigned int)&BeginDelegatedInputWorker,
      -__CFSHR__(*(_DWORD *)(a1 + 100), 8),
      v2,
      a1);
  }
}

/*
 * XREFs of EtwTraceEndDelegatedInputWorker @ 0x1C0128030
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpttttttpppqqq_EtwWriteTransfer @ 0x1C0129F68 (McTemplateK0cpttttttpppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceEndDelegatedInputWorker(char a1)
{
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1240);
    else
      LOBYTE(v4) = -1;
    McTemplateK0cpttttttpppqqq_EtwWriteTransfer(v2, (unsigned int)&EndDelegatedInputWorker, v3, v4, a1);
  }
}

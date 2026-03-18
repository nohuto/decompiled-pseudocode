/*
 * XREFs of EtwTraceBeginAppMessageProcessing @ 0x1C00264E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cdqq_EtwWriteTransfer @ 0x1C01297B0 (McTemplateK0cdqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginAppMessageProcessing(char a1, char a2, __int64 a3)
{
  int v6; // r9d
  int v7; // edx
  int v8; // ecx

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1240);
    McTemplateK0cdqq_EtwWriteTransfer(v8, v7, *(_DWORD *)(a3 + 8), v6, a1, a2, *(_DWORD *)(a3 + 8));
  }
}

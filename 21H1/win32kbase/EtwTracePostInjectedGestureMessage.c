/*
 * XREFs of EtwTracePostInjectedGestureMessage @ 0x1C012E930
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpp_EtwWriteTransfer @ 0x1C012F8B8 (McTemplateK0cpp_EtwWriteTransfer.c)
 */

void __fastcall EtwTracePostInjectedGestureMessage(_QWORD *a1, char a2)
{
  int v4; // r9d
  int v5; // edx
  int v6; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1232);
    McTemplateK0cpp_EtwWriteTransfer(*a1, v5, v6, v4, *a1, a2);
  }
}

/*
 * XREFs of EtwTraceBeginInjectMouse @ 0x1C0045E90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cddd_EtwWriteTransfer @ 0x1C012F708 (McTemplateK0cddd_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginInjectMouse(char a1, char a2, char a3)
{
  int v6; // r9d
  int v7; // ecx
  int v8; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v6) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1232);
    McTemplateK0cddd_EtwWriteTransfer(v7, (unsigned int)&BeginInjectMouse, v8, v6, a1, a2, a3);
  }
}

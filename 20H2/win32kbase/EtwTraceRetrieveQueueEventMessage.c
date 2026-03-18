/*
 * XREFs of EtwTraceRetrieveQueueEventMessage @ 0x1C00A0110
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppqp_EtwWriteTransfer @ 0x1C0127994 (McTemplateK0cppqp_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceRetrieveQueueEventMessage(__int64 a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cppqp_EtwWriteTransfer(
      v3,
      (unsigned int)&RetrieveQueueEventMessage,
      v4,
      v2,
      a1,
      *(_QWORD *)(a1 + 104),
      *(_DWORD *)(a1 + 96),
      *(_QWORD *)(a1 + 16));
  }
}

/*
 * XREFs of EtwTraceRetrievePseudoMessage @ 0x1C009B1B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x1C01276BC (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceRetrievePseudoMessage(char a1, _QWORD *a2)
{
  int v4; // r9d
  int v5; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x2000) != 0 )
  {
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    McTemplateK0cppppqqq_EtwWriteTransfer(*a2, (unsigned int)&RetrievePseudoMessage, v5, v4, a1, *a2);
  }
}

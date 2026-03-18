/*
 * XREFs of EtwTraceRetrievePostMessage @ 0x1C0026F40
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqqq_EtwWriteTransfer @ 0x1C0129A0C (McTemplateK0cppppqqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceRetrievePostMessage(__int64 a1)
{
  int v2; // r9d
  int v3; // ecx
  int v4; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(v2) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1240);
    McTemplateK0cppppqqq_EtwWriteTransfer(v3, (unsigned int)&RetrievePostMessage, v4, v2, a1, *(_QWORD *)(a1 + 16));
  }
}

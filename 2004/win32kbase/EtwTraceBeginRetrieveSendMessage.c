/*
 * XREFs of EtwTraceBeginRetrieveSendMessage @ 0x1C0029640
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cppppqq_EtwWriteTransfer @ 0x1C0129954 (McTemplateK0cppppqq_EtwWriteTransfer.c)
 */

void __fastcall EtwTraceBeginRetrieveSendMessage(__int64 a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  int v4; // r9d
  int v5; // r8d

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    v2 = *(__int64 **)(a1 + 112);
    if ( v2 )
      v3 = *v2;
    else
      LOBYTE(v3) = 0;
    LOBYTE(v4) = *(_BYTE *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 1240);
    McTemplateK0cppppqq_EtwWriteTransfer(
      *(_DWORD *)(a1 + 80),
      (unsigned int)&BeginRetrieveSendMessage,
      v5,
      v4,
      a1,
      v3,
      0,
      0,
      0,
      *(_DWORD *)(a1 + 80));
  }
}

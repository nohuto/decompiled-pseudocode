/*
 * XREFs of EtwTraceRetrieveInputMessage @ 0x1C00A1220
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     McTemplateK0cpppqqq_EtwWriteTransfer @ 0x1C01278C0 (McTemplateK0cpppqqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceRetrieveInputMessage(_QWORD *a1)
{
  __int64 result; // rax
  int v3; // r9d
  int v4; // edx
  int v5; // r8d

  result = MEMORY[0xFFFFF78000000320];
  if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    LOBYTE(v3) = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1248);
    return McTemplateK0cpppqqq_EtwWriteTransfer(*a1, v4, v5, v3, *a1);
  }
  return result;
}

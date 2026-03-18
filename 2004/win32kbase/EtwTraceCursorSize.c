/*
 * XREFs of EtwTraceCursorSize @ 0x1C0127CE0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C012A144 (McTemplateK0qqq_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceCursorSize(int a1, char a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0qqq_EtwWriteTransfer(a1, (unsigned int)&CursorSize, a3, a1, a2, a3);
  return result;
}

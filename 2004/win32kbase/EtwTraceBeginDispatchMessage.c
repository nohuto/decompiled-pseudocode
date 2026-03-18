/*
 * XREFs of EtwTraceBeginDispatchMessage @ 0x1C0040D40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C01296A0 (McTemplateK0cd_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceBeginDispatchMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(a4) = a1;
    return McTemplateK0cd_EtwWriteTransfer(a1, &BeginDispatchMessage, a3, a4, a2);
  }
  return result;
}

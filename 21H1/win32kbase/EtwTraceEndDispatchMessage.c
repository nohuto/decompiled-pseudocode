/*
 * XREFs of EtwTraceEndDispatchMessage @ 0x1C0031DA0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0cd_EtwWriteTransfer @ 0x1C012F690 (McTemplateK0cd_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceEndDispatchMessage(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x800) != 0 )
  {
    LOBYTE(a4) = a1;
    return McTemplateK0cd_EtwWriteTransfer(a1, &EndDispatchMessage, a3, a4, a2);
  }
  return result;
}

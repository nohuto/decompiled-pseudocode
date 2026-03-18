/*
 * XREFs of EtwTraceConvertibleState @ 0x1C012DC40
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C01300D0 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceConvertibleState(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x20) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &SystemConvertibleState, a3, (unsigned int)a1);
  return result;
}

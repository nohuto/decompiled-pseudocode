/*
 * XREFs of EtwTraceTouchPadConfidenceUpped @ 0x1C012ECF0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C01300D0 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceTouchPadConfidenceUpped(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x10000000) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &TouchPadConfidenceUpped, a3, (unsigned int)a1);
  return result;
}

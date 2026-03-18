/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C012E9EC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0067F7C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C006B620 (DestroyProcessInfo.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C01300D0 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}

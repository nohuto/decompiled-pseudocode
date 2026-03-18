/*
 * XREFs of EtwTraceScreenSaverProcessEvent @ 0x1C01289FC
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C0072F8C (xxxCreateThreadInfo.c)
 *     DestroyProcessInfo @ 0x1C0078F74 (DestroyProcessInfo.c)
 * Callees:
 *     McTemplateK0d_EtwWriteTransfer @ 0x1C012A0E0 (McTemplateK0d_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwTraceScreenSaverProcessEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    return McTemplateK0d_EtwWriteTransfer(a1, &ScreenSaverProcessEvent, a3, (unsigned int)a1);
  return result;
}

/*
 * XREFs of EtwDwmSpriteCreateEvent @ 0x1C00B3A70
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1C014E2E4 (McTemplateK0xx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwDwmSpriteCreateEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx_EtwWriteTransfer(a1, &DwmSpriteCreateEvent, a3, a1, a2);
  return result;
}

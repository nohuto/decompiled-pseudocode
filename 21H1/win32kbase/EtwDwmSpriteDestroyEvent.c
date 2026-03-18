/*
 * XREFs of EtwDwmSpriteDestroyEvent @ 0x1C0046380
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0xx_EtwWriteTransfer @ 0x1C0156BE4 (McTemplateK0xx_EtwWriteTransfer.c)
 */

__int64 __fastcall EtwDwmSpriteDestroyEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return McTemplateK0xx_EtwWriteTransfer(a1, &DwmSpriteDestroyEvent, a3, a1, a2);
  return result;
}

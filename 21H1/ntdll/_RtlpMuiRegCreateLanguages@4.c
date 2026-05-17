/*
 * XREFs of _RtlpMuiRegCreateLanguages@4 @ 0x4B2ADBBD
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 * Callees:
 *     _SafeAllocBlob @ 0x4B2D3295 (_SafeAllocBlob.c)
 */

int RtlpMuiRegCreateLanguages()
{
  int result; // eax
  int v1; // ecx
  int v2; // [esp+4h] [ebp-4h] BYREF

  result = SafeAllocBlob(28, 0, 0, &v2);
  if ( result )
  {
    v1 = v2;
    *(_WORD *)(result + 6) = 0;
    *(_DWORD *)result = v1;
    *(_WORD *)(result + 4) = 4;
    *(_DWORD *)(result + 12) = result + 16;
  }
  return result;
}

/*
 * XREFs of _RtlStringCchCatW@12 @ 0x4B352F81
 * Callers:
 *     _RtlpSetPreferredUILanguages@12 @ 0x4B3552F0 (_RtlpSetPreferredUILanguages@12.c)
 *     _RtlpOpenAndMapCustomCultureFile@12 @ 0x4B3635BF (_RtlpOpenAndMapCustomCultureFile@12.c)
 * Callees:
 *     RtlStringCopyWorkerW_4 @ 0x4B347663 (RtlStringCopyWorkerW_4.c)
 *     RtlStringLengthWorkerW_0 @ 0x4B3476B3 (RtlStringLengthWorkerW_0.c)
 */

int __fastcall RtlStringCchCatW(_WORD *a1, int a2, int a3)
{
  int result; // eax
  int v6; // ecx
  int v7; // [esp+8h] [ebp-4h] BYREF

  result = 0;
  if ( a2 <= 0 )
    result = -1073741811;
  if ( result >= 0 )
  {
    result = RtlStringLengthWorkerW_0(a1, a2, &v7);
    if ( result >= 0 )
      return RtlStringCopyWorkerW_4(&a1[v7], a2 - v7, v6, a3, v6);
  }
  return result;
}

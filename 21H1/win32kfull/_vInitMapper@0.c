/*
 * XREFs of _vInitMapper@0 @ 0x292920
 * Callers:
 *     <none>
 * Callees:
 *     _InitializeFontSignatures@0 @ 0x29292A (_InitializeFontSignatures@0.c)
 */

int __usercall vInitMapper@<eax>(struct _KEY_VALUE_PARTIAL_INFORMATION *a1@<edi>, unsigned __int16 *a2@<esi>)
{
  InitializeFontSignatures();
  return InitializeDefaultFamilyFonts(a1, a2);
}

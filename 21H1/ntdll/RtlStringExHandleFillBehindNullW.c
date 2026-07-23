/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x4B36260B
 * Callers:
 *     _RtlStringCchPrintfExW @ 0x4B2A76F1 (_RtlStringCchPrintfExW.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __fastcall RtlStringExHandleFillBehindNullW(int a1, unsigned int a2, unsigned __int8 a3)
{
  size_t _FFFFFFFC; // [esp-4h] [ebp-4h]

  if ( a2 > 2 )
  {
    LODWORD(_FFFFFFFC) = a2 - 2;
    memset((void *)(a1 + 2), a3, _FFFFFFFC);
  }
  return 0;
}

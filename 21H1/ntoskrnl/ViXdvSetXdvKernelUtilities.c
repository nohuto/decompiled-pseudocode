/*
 * XREFs of ViXdvSetXdvKernelUtilities @ 0x14059B2C4
 * Callers:
 *     ViXdvDriverLoadImage @ 0x1409C5E0C (ViXdvDriverLoadImage.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 */

char __fastcall ViXdvSetXdvKernelUtilities(void (__fastcall *a1)(__int64 (__fastcall **)(PCONTEXT ContextRecord)))
{
  char result; // al

  result = (char)a1;
  if ( a1 )
  {
    a1(&ViUtilsForXDV);
    return 1;
  }
  return result;
}

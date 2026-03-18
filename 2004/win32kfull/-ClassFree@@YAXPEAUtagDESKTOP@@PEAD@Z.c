/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E921C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C008D05C (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C0103CE0 (ReferenceClass.c)
 * Callees:
 *     <none>
 */

void __fastcall ClassFree(PVOID *a1, char *a2)
{
  if ( a1 )
    RtlFreeHeap(a1[16], 0, a2);
  else
    Win32FreePool(a2);
}

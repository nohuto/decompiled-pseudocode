/*
 * XREFs of ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E858C
 * Callers:
 *     InternalRegisterClassEx @ 0x1C00D237C (InternalRegisterClassEx.c)
 *     ReferenceClass @ 0x1C0104220 (ReferenceClass.c)
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

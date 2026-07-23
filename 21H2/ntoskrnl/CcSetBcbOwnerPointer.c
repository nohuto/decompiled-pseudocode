/*
 * XREFs of CcSetBcbOwnerPointer @ 0x140867980
 * Callers:
 *     <none>
 * Callees:
 *     ExSetResourceOwnerPointer @ 0x1405B56D0 (ExSetResourceOwnerPointer.c)
 */

void __stdcall CcSetBcbOwnerPointer(PVOID Bcb, PVOID OwnerPointer)
{
  char *i; // rbx

  if ( *(_WORD *)Bcb == 762 )
  {
    for ( i = (char *)Bcb + 16; *(_QWORD *)i; i += 8 )
      ExSetResourceOwnerPointer((PERESOURCE)(*(_QWORD *)i + 72LL), OwnerPointer);
  }
  else
  {
    ExSetResourceOwnerPointer((PERESOURCE)((char *)Bcb + 72), OwnerPointer);
  }
}

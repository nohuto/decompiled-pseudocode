/*
 * XREFs of HalpFindInterruptController @ 0x1403AA174
 * Callers:
 *     HalpInterruptSelectController @ 0x1403AA0F0 (HalpInterruptSelectController.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpFindInterruptController(int a1)
{
  ULONG_PTR *v1; // rdx
  ULONG_PTR *result; // rax

  if ( HalpInterruptControllerCount )
  {
    v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    while ( v1 != &HalpRegisteredInterruptControllers )
    {
      result = v1;
      v1 = (ULONG_PTR *)*v1;
      if ( !a1 || *((_DWORD *)result + 54) == a1 )
        return result;
    }
  }
  return 0LL;
}

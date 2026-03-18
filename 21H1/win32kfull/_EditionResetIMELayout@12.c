/*
 * XREFs of _EditionResetIMELayout@12 @ 0xEA082
 * Callers:
 *     <none>
 * Callees:
 *     _xxxImmLoadLayout@4 @ 0xEA0CC (_xxxImmLoadLayout@4.c)
 */

BOOL __stdcall EditionResetIMELayout(int a1, int a2, int *a3)
{
  int Layout; // eax

  if ( (HIWORD(a1) & 0xF000) != 0xE000 && (*_gpsi & 4) == 0 )
  {
    *a3 = 0;
    return 1;
  }
  Layout = xxxImmLoadLayout();
  *a3 = Layout;
  return Layout || (a2 & 0xC0000000) != 0;
}

/*
 * XREFs of ?IsMetaDummyHandle@@YGHPAX@Z @ 0x181CFC
 * Callers:
 *     ?UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z @ 0x181FED (-UT_FreeCBFormat@@YGXPAUtagCLIP@@@Z.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsMetaDummyHandle(void *this)
{
  return this == (void *)4 || this == (void *)3;
}

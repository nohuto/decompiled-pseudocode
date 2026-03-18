/*
 * XREFs of _RemoveThreadSwitchWindowInfo@4 @ 0xA434A
 * Callers:
 *     <none>
 * Callees:
 *     ?SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z @ 0x15C6A6 (-SwitchWndCleanup@@YGXPAPAUtagSwitchWndInfo@@@Z.c)
 */

struct tagSwitchWndInfo *__userpurge RemoveThreadSwitchWindowInfo@<eax>(struct tagSwitchWndInfo **a1@<edi>, int a2)
{
  struct tagSwitchWndInfo *result; // eax
  struct tagSwitchWndInfo **v3; // esi
  struct tagSwitchWndInfo **v4; // [esp-4h] [ebp-8h]

  result = gpswiFirst;
  v3 = &gpswiFirst;
  if ( gpswiFirst )
  {
    v4 = a1;
    do
    {
      if ( *((_DWORD *)result + 1) == a2 )
      {
        *v3 = *(struct tagSwitchWndInfo **)result;
        SwitchWndCleanup(v4);
        result = *v3;
      }
      if ( !result )
        break;
      v3 = (struct tagSwitchWndInfo **)result;
      result = *(struct tagSwitchWndInfo **)result;
    }
    while ( result );
  }
  return result;
}

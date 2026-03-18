/*
 * XREFs of ?ShouldConsultShell@@YGHH@Z @ 0x9263E
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E (-xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ShouldConsultShell(void *this)
{
  int v1; // edx

  v1 = 0;
  switch ( (unsigned int)this )
  {
    case 1u:
    case 3u:
    case 4u:
    case 5u:
    case 8u:
    case 9u:
      v1 = 1;
      break;
    default:
      return v1;
  }
  return v1;
}

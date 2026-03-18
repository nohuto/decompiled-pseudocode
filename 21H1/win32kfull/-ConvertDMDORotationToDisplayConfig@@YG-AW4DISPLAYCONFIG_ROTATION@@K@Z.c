/*
 * XREFs of ?ConvertDMDORotationToDisplayConfig@@YG?AW4DISPLAYCONFIG_ROTATION@@K@Z @ 0x140793
 * Callers:
 *     ?xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z @ 0x141004 (-xxxRotateScreen@CLegacyRotationMgr@@AAEJKHPAH@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall ConvertDMDORotationToDisplayConfig(char *this)
{
  char *v1; // ecx
  char *v2; // ecx

  if ( this )
  {
    v1 = this - 1;
    if ( !v1 )
      return 2;
    v2 = v1 - 1;
    if ( !v2 )
      return 3;
    if ( v2 == (char *)1 )
      return 4;
  }
  return 1;
}

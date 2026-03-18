/*
 * XREFs of ?ValidateBehaviors@ShellWindowManagement@@YG_NK@Z @ 0xF4F18
 * Callers:
 *     ?_EnableShellWindowManagementBehavior@@YGHKK@Z @ 0xE9D9A (-_EnableShellWindowManagementBehavior@@YGHKK@Z.c)
 * Callees:
 *     <none>
 */

unsigned int __fastcall ShellWindowManagement::ValidateBehaviors(int a1)
{
  unsigned int v1; // ecx

  v1 = -(a1 & 0xEFFFFF00);
  LOBYTE(v1) = -(v1 != 0);
  return v1 + 1;
}

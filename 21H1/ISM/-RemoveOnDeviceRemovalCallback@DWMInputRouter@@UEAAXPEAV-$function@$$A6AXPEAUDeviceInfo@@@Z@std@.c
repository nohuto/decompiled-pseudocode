/*
 * XREFs of ?RemoveOnDeviceRemovalCallback@DWMInputRouter@@UEAAXPEAV?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@@Z @ 0x1801392E0
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 */

void *__fastcall DWMInputRouter::RemoveOnDeviceRemovalCallback(__int64 a1, __int64 a2)
{
  char *v2; // r8
  char *i; // rcx
  void *result; // rax

  v2 = *(char **)(a1 + 648);
  for ( i = *(char **)(a1 + 640); i != v2 && *(_QWORD *)i != a2; i += 8 )
    ;
  result = memmove_0(i, i + 8, v2 - (i + 8));
  *(_QWORD *)(a1 + 648) -= 8LL;
  return result;
}

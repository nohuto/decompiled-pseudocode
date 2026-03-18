/*
 * XREFs of ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C7AE0
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0075770 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall vFreeDriverInfo2(struct _DRIVER_INFO_2W *a1)
{
  char *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( a1 )
  {
    v1 = (char *)a1 - 32;
    PopThreadGuardedObject((_QWORD *)a1 - 4);
    Win32FreePool((__int64)v1, v2, v3);
  }
}

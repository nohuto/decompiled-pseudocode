/*
 * XREFs of ?vFreeDriverInfo2@@YAXPEAU_DRIVER_INFO_2W@@@Z @ 0x1C00C8200
 * Callers:
 *     <none>
 * Callees:
 *     PopThreadGuardedObject @ 0x1C0084420 (PopThreadGuardedObject.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 */

void __fastcall vFreeDriverInfo2(struct _DRIVER_INFO_2W *a1)
{
  char *v1; // rbx

  if ( a1 )
  {
    v1 = (char *)a1 - 32;
    PopThreadGuardedObject((_QWORD *)a1 - 4);
    Win32FreePool((__int64)v1);
  }
}

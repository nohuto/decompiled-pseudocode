/*
 * XREFs of sub_1C003CB00 @ 0x1C003CB00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

void __fastcall sub_1C003CB00(__int64 a1)
{
  _DWORD *v1; // rbx

  v1 = sub_1C000F050(a1);
  KeInitializeEvent((PRKEVENT)(v1 + 712), NotificationEvent, 1u);
  KeInitializeSemaphore((PRKSEMAPHORE)v1 + 88, 1, 1);
  v1[702] = 1;
}

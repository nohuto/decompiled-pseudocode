/*
 * XREFs of sub_1800429A0 @ 0x1800429A0
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_1800429A0(int *a1, __int64 a2)
{
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  __int64 (__fastcall *v7)(__int64, __int64, __int64, __int64, __int64 *); // r9
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // rcx
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF

  v12 = 0LL;
  a1[14] = 0;
  *((_QWORD *)a1 + 5) = a1 + 14;
  v4 = sub_18002BF9C(*a1);
  memcpy(v6, v5, v4);
  if ( (unsigned int)*a1 > 0x22 || (v7 = sub_18002B0A0, v8 = 0x54000E000LL, !_bittest64(&v8, *a1)) )
    v7 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, __int64 *))sub_180043AF0;
  v9 = RtlSubscribeWnfStateChangeNotification(&v12, a2, 0LL, v7, a1, 0LL, 0, 0);
  if ( v9 < 0 )
  {
    v10 = v12;
  }
  else
  {
    v10 = 0LL;
    *((_QWORD *)a1 + 9) = v12;
    v9 = 0;
    v12 = 0LL;
  }
  if ( v10 )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  return (unsigned int)v9;
}

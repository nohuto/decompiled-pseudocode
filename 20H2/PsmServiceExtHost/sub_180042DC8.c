/*
 * XREFs of sub_180042DC8 @ 0x180042DC8
 * Callers:
 *     sub_18002B3C0 @ 0x18002B3C0 (sub_18002B3C0.c)
 * Callees:
 *     sub_18002BF9C @ 0x18002BF9C (sub_18002BF9C.c)
 *     memcpy @ 0x180046822 (memcpy.c)
 */

__int64 __fastcall sub_180042DC8(__int64 a1, const GUID *a2)
{
  unsigned int v4; // eax
  const void *v5; // rdx
  void *v6; // r9
  signed int v7; // eax
  unsigned int v8; // ebx
  HPOWERNOTIFY v9; // rcx
  _QWORD Recipient[3]; // [rsp+20h] [rbp-18h] BYREF
  HPOWERNOTIFY RegistrationHandle; // [rsp+40h] [rbp+8h] BYREF

  RegistrationHandle = 0LL;
  *(_DWORD *)(a1 + 56) = -1;
  *(_QWORD *)(a1 + 40) = a1 + 56;
  v4 = sub_18002BF9C(*(_DWORD *)a1);
  memcpy(v6, v5, v4);
  Recipient[1] = a1;
  Recipient[0] = sub_18003E300;
  v7 = PowerSettingRegisterNotification(a2, 2u, Recipient, &RegistrationHandle);
  v8 = v7;
  if ( v7 )
  {
    v9 = RegistrationHandle;
    if ( v7 > 0 )
      v8 = (unsigned __int16)v7 | 0xC0070000;
  }
  else
  {
    v9 = 0LL;
    *(_QWORD *)(a1 + 64) = RegistrationHandle;
    RegistrationHandle = 0LL;
  }
  if ( v9 )
    PowerSettingUnregisterNotification(v9);
  return v8;
}

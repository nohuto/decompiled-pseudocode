/*
 * XREFs of sub_180067790 @ 0x180067790
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 */

__int64 __fastcall sub_180067790(HPOWERNOTIFY *a1, void *a2)
{
  DWORD v4; // eax
  DWORD v5; // eax
  DWORD v6; // eax
  DWORD v7; // ebx
  _OWORD v9[26]; // [rsp+20h] [rbp-1B8h] BYREF

  memset(v9, 0, sizeof(v9));
  DWORD2(v9[0]) = 0;
  LODWORD(v9[0]) = 416;
  v9[1] = xmmword_18015BB58;
  ((void (__fastcall *)(_OWORD *, _QWORD, __int64 (__fastcall *)(), HPOWERNOTIFY *))CM_Register_Notification)(
    v9,
    0LL,
    sub_180115D60,
    a1 + 1);
  v4 = PowerSettingRegisterNotification(&Uuid2, 1u, a2, a1 + 5);
  if ( v4
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 19LL, &unk_18016D4B0, v4);
  }
  v5 = PowerSettingRegisterNotification(&GUID_ACDC_POWER_SOURCE, 1u, a2, a1 + 4);
  if ( v5
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 20LL, &unk_18016D4B0, v5);
  }
  v6 = PowerSettingRegisterNotification(&stru_18015D1E0, 1u, a2, a1 + 6);
  v7 = v6;
  if ( v6
    && off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 4) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 21LL, &unk_18016D4B0, v6);
  }
  return v7;
}

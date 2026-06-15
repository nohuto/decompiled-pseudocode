/*
 * XREFs of sub_18001D714 @ 0x18001D714
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001D714(void *a1, __int64 a2, _DWORD *a3, _DWORD *a4)
{
  HRESULT v7; // ebx
  int v8; // esi
  LPVOID ppv; // [rsp+50h] [rbp+8h] BYREF

  ppv = a1;
  *a3 = 0;
  *a4 = 0;
  v7 = CoInitializeEx(0LL, 0);
  if ( v7 < 0 )
    goto LABEL_13;
  v7 = CoCreateInstance(&stru_180045738, 0LL, 1u, &stru_180043D18, &ppv);
  if ( v7 >= 0 )
  {
    v8 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64, _DWORD *))(*(_QWORD *)ppv + 48LL))(ppv, a2, 1LL, a3);
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
    if ( *a3 )
      *a4 = 1;
    if ( v8 < 0
      && off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 3u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Au, &stru_1800445C8, v8);
    }
  }
  CoUninitialize();
  if ( v7 < 0 )
  {
LABEL_13:
    if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
      && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
      && *((_BYTE *)off_18004F000 + 25) >= 2u )
    {
      sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Bu, &stru_1800445C8, v7);
    }
    sub_180005724("CApplicationManager::ReadBackgroundAudioTaskCapability", 1298, v7);
  }
  return (unsigned int)v7;
}

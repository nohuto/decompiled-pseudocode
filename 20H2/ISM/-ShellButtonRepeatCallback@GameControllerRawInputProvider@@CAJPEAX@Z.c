/*
 * XREFs of ?ShellButtonRepeatCallback@GameControllerRawInputProvider@@CAJPEAX@Z @ 0x180040B90
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ @ 0x1800884C4 (-GetCurrentMicroSecTime@QpcTimeConverter@@QEBA_KXZ.c)
 */

__int64 __fastcall GameControllerRawInputProvider::ShellButtonRepeatCallback(_DWORD *a1)
{
  QpcTimeConverter *v2; // rcx
  _DWORD v4[4]; // [rsp+20h] [rbp-808h] BYREF
  unsigned __int64 CurrentMicroSecTime; // [rsp+30h] [rbp-7F8h]
  int v6; // [rsp+38h] [rbp-7F0h]
  __int64 v7; // [rsp+40h] [rbp-7E8h]
  int v8; // [rsp+60h] [rbp-7C8h]
  char v9; // [rsp+64h] [rbp-7C4h]

  memset_0(v4, 0, 0x7F0uLL);
  v6 = 2032;
  v4[0] = 128;
  v4[1] = a1[9];
  CurrentMicroSecTime = QpcTimeConverter::GetCurrentMicroSecTime(v2);
  v7 = *((_QWORD *)a1 + 5);
  v8 = a1[8];
  v9 = 1;
  v4[2] = GetTickCount();
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)a1 + 2) + 24LL))(*((_QWORD *)a1 + 2), v4);
  return 0LL;
}

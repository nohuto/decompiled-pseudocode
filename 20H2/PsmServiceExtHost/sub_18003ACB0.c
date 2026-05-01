/*
 * XREFs of sub_18003ACB0 @ 0x18003ACB0
 * Callers:
 *     sub_180039F88 @ 0x180039F88 (sub_180039F88.c)
 * Callees:
 *     sub_1800383E4 @ 0x1800383E4 (sub_1800383E4.c)
 *     sub_1800384E8 @ 0x1800384E8 (sub_1800384E8.c)
 *     sub_18003ADE8 @ 0x18003ADE8 (sub_18003ADE8.c)
 *     sub_18003B130 @ 0x18003B130 (sub_18003B130.c)
 *     sub_18003B18C @ 0x18003B18C (sub_18003B18C.c)
 *     sub_18003B1D4 @ 0x18003B1D4 (sub_18003B1D4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_180064EDC @ 0x180064EDC (sub_180064EDC.c)
 *     sub_18006570C @ 0x18006570C (sub_18006570C.c)
 *     sub_180065FF4 @ 0x180065FF4 (sub_180065FF4.c)
 */

__int64 __fastcall sub_18003ACB0(__int64 a1, _QWORD *a2)
{
  DWORD CurrentProcessId; // eax
  HANDLE Mutex; // rax
  void *v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  unsigned int v9; // edi
  _DWORD *v10; // rax
  int v12; // eax
  __int64 v13; // r8
  void *v14; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD *v15; // [rsp+38h] [rbp-C8h] BYREF
  void *v16; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR Name[264]; // [rsp+50h] [rbp-B0h] BYREF
  void *retaddr; // [rsp+288h] [rbp+188h]

  *a2 = 0LL;
  CurrentProcessId = GetCurrentProcessId();
  sub_18003B1D4(Name, 260LL, L"Local\\SM0:%d:%d:%hs", CurrentProcessId, 304, a1);
  v14 = 0LL;
  Mutex = CreateMutexExW(0LL, Name, 0, 0x1F0001u);
  sub_18003B18C(&v14, Mutex);
  v6 = v14;
  if ( !v14 )
    return (unsigned int)sub_180064EDC();
  sub_18003B130(&v14, &v16);
  v15 = 0LL;
  v7 = sub_18003ADE8(Name, &v15);
  v9 = v7;
  if ( v7 < 0 )
  {
    sub_180065FF4(retaddr, 294LL, v8, (unsigned int)v7);
    goto LABEL_7;
  }
  v10 = v15;
  if ( v15 )
  {
    *a2 = v15;
    *(_DWORD *)*a2 = *v10 + 1;
  }
  else
  {
    v12 = sub_18006570C(Name, &v14, a2);
    v9 = v12;
    if ( v12 < 0 )
    {
      sub_180065FF4(retaddr, 302LL, v13, (unsigned int)v12);
      goto LABEL_6;
    }
  }
  v9 = 0;
LABEL_6:
  v6 = v14;
LABEL_7:
  if ( v16 )
    sub_1800384E8(v16);
  if ( v6 )
    sub_1800383E4(v6);
  return v9;
}

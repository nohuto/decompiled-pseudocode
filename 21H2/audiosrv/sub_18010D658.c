/*
 * XREFs of sub_18010D658 @ 0x18010D658
 * Callers:
 *     sub_18010CAB0 @ 0x18010CAB0 (sub_18010CAB0.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     sub_180109634 @ 0x180109634 (sub_180109634.c)
 *     sub_18010E270 @ 0x18010E270 (sub_18010E270.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18010D658(__int64 a1, unsigned int a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  BOOL v6; // r14d
  int v7; // eax
  BOOL v8; // [rsp+30h] [rbp-98h] BYREF
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+38h] [rbp-90h]
  struct _RTL_CRITICAL_SECTION *v10; // [rsp+48h] [rbp-80h]
  __int128 v11; // [rsp+50h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+60h] [rbp-68h] BYREF
  __int128 *v13; // [rsp+80h] [rbp-48h]
  int v14; // [rsp+88h] [rbp-40h]
  int v15; // [rsp+8Ch] [rbp-3Ch]
  __int64 v16; // [rsp+90h] [rbp-38h]
  int v17; // [rsp+98h] [rbp-30h]
  int v18; // [rsp+9Ch] [rbp-2Ch]
  BOOL *v19; // [rsp+A0h] [rbp-28h]
  int v20; // [rsp+A8h] [rbp-20h]
  int v21; // [rsp+ACh] [rbp-1Ch]
  _UNKNOWN *retaddr; // [rsp+C8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v5 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
  v10 = v5;
  v6 = a2 <= 2 || a2 == 5;
  v11 = xmmword_18015B730;
  if ( (unsigned int)CallbackContext > 5 )
  {
    v8 = v6;
    v19 = &v8;
    v20 = 4;
    v21 = 0;
    v16 = a1 + 136;
    v17 = 16;
    v18 = 0;
    v13 = &v11;
    v14 = 16;
    v15 = 0;
    sub_180109634((__int64)&CallbackContext, (unsigned __int8 *)dword_180169758, 0LL, 0LL, 5u, &v12);
  }
  try
  {
    *(_DWORD *)(a1 + 176) = v6 + 1;
    v7 = sub_18010E270(a1);
    if ( v7 < 0 )
      sub_18006D26C(
        (int)retaddr,
        316,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
        v7);
  }
  catch ( std::bad_alloc )
  {
    sub_1800DC664(
      (int)retaddr,
      321,
      (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\exclusivemodelistener.cpp",
      0x8007000E);
    v5 = v9;
    v4 = v9;
  }
  if ( v4 )
    LeaveCriticalSection(v5);
}

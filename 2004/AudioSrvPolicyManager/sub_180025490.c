/*
 * XREFs of sub_180025490 @ 0x180025490
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     sub_18001E454 @ 0x18001E454 (sub_18001E454.c)
 *     sub_1800201E0 @ 0x1800201E0 (sub_1800201E0.c)
 *     sub_1800203F4 @ 0x1800203F4 (sub_1800203F4.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 */

// Hidden C++ exception states: #wind=1
char *__fastcall sub_180025490(char *a1, char a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rsi
  __int64 v5; // rcx
  const wchar_t *v6; // rdi
  const wchar_t *v7; // rdx
  int v8; // eax
  int v9; // eax
  float v11[14]; // [rsp+40h] [rbp-38h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]
  unsigned __int8 v13; // [rsp+80h] [rbp+8h] BYREF
  char v14; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int8 v15; // [rsp+90h] [rbp+18h] BYREF
  unsigned __int8 v16; // [rsp+98h] [rbp+20h] BYREF

  *(_QWORD *)a1 = off_18003F3C0;
  if ( a1[16] )
  {
    v4 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
    EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
    v6 = (const wchar_t *)(a1 + 24);
    v7 = (const wchar_t *)(a1 + 24);
    if ( *((_QWORD *)a1 + 6) >= 8uLL )
      v7 = *(const wchar_t **)v6;
    v8 = sub_1800201E0(v5, v7, *((_DWORD *)a1 + 5), &v14, &v15, (__int64)v11, &v13, (__int64)&v16);
    if ( v8 < 0 )
      sub_18000F8F4(
        retaddr,
        127,
        (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
        v8);
    if ( v14 )
      sub_18001E454(qword_18004FE78, *((_DWORD *)a1 + 5), 3u);
    if ( v15 || v13 )
    {
      if ( *((_QWORD *)a1 + 6) >= 8uLL )
        v6 = *(const wchar_t **)v6;
      v9 = sub_1800203F4(v13, v6, v15, v11[0], v13, v16);
      if ( v9 < 0 )
        sub_18000F8F4(
          retaddr,
          137,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\streamprestartcontext.cpp",
          v9);
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  sub_180009CF0((__int64)(a1 + 24));
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    sub_180039D98(a1);
  return a1;
}

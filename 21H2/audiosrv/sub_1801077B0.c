/*
 * XREFs of sub_1801077B0 @ 0x1801077B0
 * Callers:
 *     sub_180047720 @ 0x180047720 (sub_180047720.c)
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180106674 @ 0x180106674 (sub_180106674.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     sub_18010917C @ 0x18010917C (sub_18010917C.c)
 *     sub_180109E70 @ 0x180109E70 (sub_180109E70.c)
 *     sub_18010BBE4 @ 0x18010BBE4 (sub_18010BBE4.c)
 */

__int64 __fastcall sub_1801077B0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  int v12; // edx
  int v13; // r9d
  int v14; // eax
  __int64 v16; // rax
  __int128 v17; // [rsp+20h] [rbp-60h]
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v19; // [rsp+48h] [rbp-38h]
  unsigned __int64 v20; // [rsp+58h] [rbp-28h]
  __int64 (__fastcall ***v21)(); // [rsp+78h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  sub_180109E70(v9, a2, a3, a4);
  v10 = sub_180106674(a1, a2);
  if ( !v10 )
  {
    v11 = -2005139191;
    v12 = 485;
    v13 = -2005139191;
    goto LABEL_8;
  }
  v14 = sub_18010BBE4(v10, a3, a4);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = 488;
LABEL_7:
    v13 = v14;
    goto LABEL_8;
  }
  v18 = off_180155880;
  *(_QWORD *)&v17 = a1;
  *((_QWORD *)&v17 + 1) = a2;
  v21 = &v18;
  v19 = v17;
  v20 = __PAIR64__(a4, a3);
  v14 = sub_180108708(a1 + 344, &v18);
  v11 = v14;
  if ( v14 < 0 )
  {
    v12 = 492;
    goto LABEL_7;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  if ( a3 )
  {
    if ( !(unsigned __int8)sub_18010917C(a1 + 344) )
    {
      v11 = -2005139188;
      sub_18004BD84(
        (int)retaddr,
        497,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        -2005139188);
      return v11;
    }
    EnterCriticalSection(v4);
    v16 = sub_180106674(a1, a2);
    if ( !v16 )
    {
      v11 = -2005139191;
      v12 = 502;
LABEL_20:
      v13 = v11;
LABEL_8:
      sub_18004BD84(
        (int)retaddr,
        v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
        v13);
      if ( v4 )
        LeaveCriticalSection(v4);
      return v11;
    }
    if ( *(_DWORD *)(v16 + 80) < a3 )
    {
      v11 = -2005139188;
      v12 = 505;
      goto LABEL_20;
    }
    if ( v4 )
      LeaveCriticalSection(v4);
  }
  return 0LL;
}

/*
 * XREFs of sub_1800372D0 @ 0x1800372D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180051B0C @ 0x180051B0C (sub_180051B0C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800B4E2C @ 0x1800B4E2C (sub_1800B4E2C.c)
 */

__int64 __fastcall sub_1800372D0(_QWORD *a1, __int64 a2)
{
  HANDLE Event; // rbp
  __int64 v5; // rsi
  int v6; // ebx
  DWORD LastError; // ebx
  __int64 v9; // rdx
  void *retaddr; // [rsp+28h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    v5 = a1[40];
    if ( v5 )
    {
      LastError = GetLastError();
      sub_180051B0C(v5);
      SetLastError(LastError);
    }
    a1[40] = Event;
    v6 = 0;
  }
  else
  {
    v6 = sub_1800B4E2C();
  }
  if ( v6 < 0 )
  {
    v9 = 237LL;
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 144LL))(a1, *(unsigned __int16 *)(a2 + 2));
    if ( v6 >= 0 )
      return 0LL;
    v9 = 239LL;
  }
  sub_18004BD84(retaddr, v9, "avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp", (unsigned int)v6);
  return (unsigned int)v6;
}

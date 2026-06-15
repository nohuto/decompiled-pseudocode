/*
 * XREFs of sub_1800CF96C @ 0x1800CF96C
 * Callers:
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 * Callees:
 *     sub_1800274A0 @ 0x1800274A0 (sub_1800274A0.c)
 *     sub_180028850 @ 0x180028850 (sub_180028850.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800524EC @ 0x1800524EC (sub_1800524EC.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CD7AC @ 0x1800CD7AC (sub_1800CD7AC.c)
 *     sub_1800CD878 @ 0x1800CD878 (sub_1800CD878.c)
 *     sub_1800D0290 @ 0x1800D0290 (sub_1800D0290.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800CF96C(__int64 a1, _QWORD *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v5; // r9
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // esi
  char *v9; // rcx
  __int64 result; // rax
  _QWORD *v11; // rdx
  char *v12; // rcx
  char *v13; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  char *v15; // [rsp+40h] [rbp+8h] BYREF
  char **v16; // [rsp+48h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v17; // [rsp+50h] [rbp+18h]

  v4 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v17 = v4;
  sub_1800CD878(&v15, *(char **)(a1 + 168), *(char **)(a1 + 176));
  sub_1800D0290(a1 + 168, &v15, v15, *(_QWORD *)(a1 + 176));
  sub_1800CD7AC(&v15, *(_QWORD **)(a1 + 168), *(_QWORD **)(a1 + 176), a2);
  try
  {
    if ( v15 == *(char **)(a1 + 176) )
    {
      v15 = 0LL;
      v16 = &v15;
      v6 = sub_1800524EC((__int64 **)&v16);
      v7 = sub_1800274A0((__int64 (__fastcall ***)(_QWORD, void *, __int64 *))*a2, v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        sub_18004BD84((int)retaddr, 2383, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp", v7);
        v9 = v15;
        if ( v15 )
        {
          v15 = 0LL;
          (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v9);
        }
        if ( v4 )
          LeaveCriticalSection(v4);
        return v8;
      }
      v11 = *(_QWORD **)(a1 + 176);
      if ( *(_QWORD **)(a1 + 184) == v11 )
      {
        sub_180028850((unsigned __int64 *)(a1 + 168), v11, &v15);
      }
      else
      {
        v12 = v15;
        *v11 = v15;
        if ( v12 )
          (*(void (__fastcall **)(char *))(*(_QWORD *)v12 + 8LL))(v12);
        *(_QWORD *)(a1 + 176) += 8LL;
      }
      v13 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
    if ( v4 )
      LeaveCriticalSection(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)sub_1800C437C(
                           (int)retaddr,
                           2389,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
                           v5);
  }
  return result;
}

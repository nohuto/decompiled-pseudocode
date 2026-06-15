/*
 * XREFs of sub_1800EA9AC @ 0x1800EA9AC
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_1800EDDB4 @ 0x1800EDDB4 (sub_1800EDDB4.c)
 * Callees:
 *     sub_180011960 @ 0x180011960 (sub_180011960.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     memset @ 0x18006AB8C (memset.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800CF96C @ 0x1800CF96C (sub_1800CF96C.c)
 *     sub_1800EA620 @ 0x1800EA620 (sub_1800EA620.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800EA9AC(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v6; // eax
  int v7; // edi
  char v8; // si
  __int64 v9; // rdx
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v15; // [rsp+28h] [rbp-D8h] BYREF
  __int64 *v16; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v17; // [rsp+38h] [rbp-C8h] BYREF
  char v18; // [rsp+40h] [rbp-C0h]
  _BYTE v19[1264]; // [rsp+50h] [rbp-B0h] BYREF
  _UNKNOWN *retaddr; // [rsp+578h] [rbp+478h]

  v14 = 0LL;
  v6 = sub_18002AEF8(&v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    sub_18004BD84((int)retaddr, 1272, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v6);
    goto LABEL_19;
  }
  v15 = 0LL;
  v16 = &v15;
  v17 = 0LL;
  v8 = 1;
  v18 = 1;
  v7 = sub_180011960(v14, a3, (__int64)&v17);
  if ( v18 )
  {
    v9 = *v16;
    *v16 = v17;
    if ( v9 )
      sub_18002B930(v9);
  }
  if ( v7 >= 0 )
  {
    sub_1800CF96C(v15, a2);
    memset(v19, 0, sizeof(v19));
    v16 = (__int64 *)v19;
    LOBYTE(v17) = 1;
    v10 = sub_1800EABCC(a1, a3, *a2, v19);
    v11 = v10;
    if ( v10 < 0 )
      sub_18006D26C((int)retaddr, 1294, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v10);
    if ( v11 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *, __int64))(*(_QWORD *)*a2 + 272LL))(*a2, v19, a3);
      v7 = v12;
      if ( v12 < 0 )
      {
        sub_18004BD84(
          (int)retaddr,
          1296,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          v12);
        goto LABEL_15;
      }
      LOBYTE(v17) = 0;
      v8 = 0;
    }
    v7 = 0;
LABEL_15:
    if ( v8 )
    {
      LOBYTE(v17) = 0;
      sub_1800EA620((__int64 *)&v16);
    }
    goto LABEL_17;
  }
  sub_18004BD84((int)retaddr, 1275, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp", v7);
LABEL_17:
  if ( v15 )
    sub_18002B930(v15);
LABEL_19:
  if ( v14 )
    sub_18002AD80(v14);
  return (unsigned int)v7;
}

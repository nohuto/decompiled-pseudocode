/*
 * XREFs of sub_1800D83F0 @ 0x1800D83F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_180011960 @ 0x180011960 (sub_180011960.c)
 *     sub_18002AD80 @ 0x18002AD80 (sub_18002AD80.c)
 *     sub_18002AEF8 @ 0x18002AEF8 (sub_18002AEF8.c)
 *     sub_18002B930 @ 0x18002B930 (sub_18002B930.c)
 *     sub_18002C2A0 @ 0x18002C2A0 (sub_18002C2A0.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_1800512F4 @ 0x1800512F4 (sub_1800512F4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_180112490 @ 0x180112490 (sub_180112490.c)
 */

__int64 __fastcall sub_1800D83F0(__int64 a1, void *a2, unsigned int a3)
{
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  HRESULT v9; // eax
  int v10; // eax
  int v11; // edx
  __int64 v12; // rbx
  int v13; // eax
  void *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v18; // [rsp+30h] [rbp-20h] BYREF
  LPVOID ppv; // [rsp+38h] [rbp-18h] BYREF
  void *v20[2]; // [rsp+40h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v22; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v23; // [rsp+88h] [rbp+38h] BYREF

  if ( !a2 )
  {
    v5 = -2147024809;
    sub_18004BD84((int)retaddr, 2436, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", -2147024809);
    return v5;
  }
  v6 = (_DWORD *)sub_180008448(a1, sub_1800B6240)[1];
  if ( *v6 > 4u )
  {
    LODWORD(v22) = a3;
    v20[0] = a2;
    sub_1800512F4((__int64)v6, byte_1801670F3, v7, v8, v20, (__int64)&v22);
  }
  ppv = 0LL;
  v9 = CoCreateInstance(&stru_18015E170, 0LL, 0x17u, &stru_18015E160, &ppv);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v18 = 0LL;
    v10 = (*(__int64 (__fastcall **)(_QWORD, void *, __int64 *))(**(_QWORD **)&dwCreationFlags + 40LL))(
            *(_QWORD *)&dwCreationFlags,
            a2,
            &v18);
    v5 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(LPVOID, __int64, _QWORD))(*(_QWORD *)ppv + 48LL))(ppv, v18, a3);
      v5 = v10;
      if ( v10 >= 0 )
      {
        if ( !a3 )
        {
          v12 = 0LL;
          v20[0] = 0LL;
          v22 = 0LL;
          v13 = sub_18002AEF8((__int64 *)v20);
          v14 = v20[0];
          if ( v13 >= 0 )
          {
            v15 = sub_180011960((__int64)v20[0], (__int64)a2, (__int64)&v22);
            v12 = v22;
            if ( !v15 )
              sub_18002C2A0(v22, 0, 1);
          }
          if ( v14 )
            sub_18002AD80((__int64)v14);
          if ( v12 )
            sub_18002B930(v12);
        }
        v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 48LL))(v18, &v23);
        v5 = v10;
        if ( v10 >= 0 )
        {
          sub_180112490(v16, a2, v23);
          v5 = 0;
LABEL_23:
          if ( v18 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          goto LABEL_25;
        }
        v11 = 2469;
      }
      else
      {
        v11 = 2450;
      }
    }
    else
    {
      v11 = 2448;
    }
    sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v10);
    goto LABEL_23;
  }
  sub_18004BD84((int)retaddr, 2445, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp", v9);
LABEL_25:
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return v5;
}

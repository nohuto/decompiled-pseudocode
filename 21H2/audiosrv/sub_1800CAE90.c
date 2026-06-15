/*
 * XREFs of sub_1800CAE90 @ 0x1800CAE90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180037AE8 @ 0x180037AE8 (sub_180037AE8.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800C24EC @ 0x1800C24EC (sub_1800C24EC.c)
 *     sub_1800C85C8 @ 0x1800C85C8 (sub_1800C85C8.c)
 */

__int64 __fastcall sub_1800CAE90(__int64 a1, int a2, unsigned __int8 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v8; // esi
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // edx
  __int64 v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v16; // esi
  unsigned int v17; // ebx
  __int64 v18; // rdi
  _UNKNOWN **v19; // rcx
  int v20; // eax
  __int64 v21; // [rsp+40h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v23; // [rsp+78h] [rbp+10h] BYREF

  v8 = a3;
  sub_180037AE8(a1, a2, 0, a4, 0, 0LL);
  if ( (unsigned int)(a2 - 2) <= 1 )
    return 0LL;
  v21 = 0LL;
  v9 = sub_1800C85C8(a1, &v21);
  v10 = v9;
  if ( v9 >= 0 )
  {
    v12 = a1 + 336;
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v21 + 144LL))(v21, v8, a1 + 336, 0LL);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 4903;
      goto LABEL_8;
    }
    v13 = *(_QWORD *)(a1 + 1032);
    v23 = 0;
    v9 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 48LL))(v13, &v23);
    v10 = v9;
    if ( v9 < 0 )
    {
      v11 = 4906;
      goto LABEL_8;
    }
    v16 = a5;
    v17 = 0;
    if ( a5 )
    {
      v18 = a6;
      v19 = (_UNKNOWN **)off_18019C348;
      do
      {
        if ( v19 != &off_18019C348 && (*((_DWORD *)v19 + 7) & 0x200000) != 0 && *((_BYTE *)v19 + 25) >= 4u )
        {
          sub_1800C24EC((__int64)v19[2], 0x52u, (__int64)&unk_18015DEF0, v17);
          v19 = (_UNKNOWN **)off_18019C348;
        }
        if ( v17 < v23 )
        {
          v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v21 + 96LL))(
                  v21,
                  v17,
                  v14,
                  v12,
                  0LL);
          if ( v20 < 0 )
            sub_18006D26C((int)retaddr, 4915, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v20);
          v19 = (_UNKNOWN **)off_18019C348;
        }
        ++v17;
        v18 += 4LL;
      }
      while ( v17 < v16 );
    }
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    return 0LL;
  }
  v11 = 4896;
LABEL_8:
  sub_18004BD84((int)retaddr, v11, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp", v9);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  return v10;
}

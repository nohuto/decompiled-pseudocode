/*
 * XREFs of sub_18006BD88 @ 0x18006BD88
 * Callers:
 *     sub_180040E64 @ 0x180040E64 (sub_180040E64.c)
 *     sub_18006D300 @ 0x18006D300 (sub_18006D300.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_1800412D4 @ 0x1800412D4 (sub_1800412D4.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800624C0 @ 0x1800624C0 (sub_1800624C0.c)
 *     sub_18006B98C @ 0x18006B98C (sub_18006B98C.c)
 *     sub_18006C1E0 @ 0x18006C1E0 (sub_18006C1E0.c)
 */

char __fastcall sub_18006BD88(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx
  _QWORD *v6; // rcx
  _BYTE *v7; // rdi
  _QWORD *i; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  _QWORD *v12; // rcx
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  int v19; // [rsp+44h] [rbp-BCh] BYREF
  _BYTE *v20; // [rsp+48h] [rbp-B8h] BYREF
  __int16 v21; // [rsp+50h] [rbp-B0h]
  _BYTE v22[160]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2 + 40;
  v4 = *(_QWORD *)(a2 + 40);
  if ( *(_QWORD *)(v4 + 8) != v2 || (v6 = *(_QWORD **)(v2 + 8), *v6 != v2) )
    __fastfail(3u);
  *v6 = v4;
  *(_QWORD *)(v4 + 8) = v6;
  *(_OWORD *)v2 = 0LL;
  memset(v22, 0, sizeof(v22));
  v7 = 0LL;
  for ( i = *(_QWORD **)(a2 + 24); i != (_QWORD *)(a2 + 24); i = (_QWORD *)*i )
  {
    v9 = *(i - 3);
    if ( *(_DWORD *)(v9 + 264) )
    {
      v10 = 20LL;
      v11 = v9 - (_QWORD)v22;
      v12 = v22;
      do
      {
        *v12 |= *(_QWORD *)((char *)v12 + v11 + 104);
        ++v12;
        --v10;
      }
      while ( v10 );
      v7 = v22;
    }
  }
  v13 = sub_1800412D4(*(HANDLE *)(a2 + 16), v7);
  v15 = v13;
  if ( v7 )
  {
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      LOBYTE(v13) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
      if ( (_BYTE)v13 )
      {
        v18 = *(_DWORD *)(a2 + 56);
        v20 = v7;
        v21 = 20;
        v19 = v15;
        LOBYTE(v13) = sub_18006B98C(v16, byte_18009C4FB, v14, v15, (__int64)&v19, (__int64)&v18, (__int64 *)&v20);
      }
    }
  }
  else if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    LOBYTE(v13) = sub_180010470((__int64)&dword_1800B31E0, 1LL);
    if ( (_BYTE)v13 )
    {
      v19 = *(_DWORD *)(a2 + 56);
      v18 = v15;
      LOBYTE(v13) = sub_1800624C0((__int64)&dword_1800B31E0, byte_18009C75E, v14, v15, (__int64)&v18, (__int64)&v19);
    }
  }
  if ( !*(_DWORD *)(a2 + 60) )
    LOBYTE(v13) = sub_18006C1E0(a1, a2, v14, v15);
  return v13;
}

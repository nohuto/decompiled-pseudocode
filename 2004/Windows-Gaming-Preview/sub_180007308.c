/*
 * XREFs of sub_180007308 @ 0x180007308
 * Callers:
 *     sub_180007400 @ 0x180007400 (sub_180007400.c)
 *     sub_1800077D0 @ 0x1800077D0 (sub_1800077D0.c)
 * Callees:
 *     sub_180004984 @ 0x180004984 (sub_180004984.c)
 *     sub_180007CC4 @ 0x180007CC4 (sub_180007CC4.c)
 *     sub_180007D94 @ 0x180007D94 (sub_180007D94.c)
 */

bool __fastcall sub_180007308(__int64 a1, unsigned int a2, unsigned __int8 a3, int a4, _DWORD *a5)
{
  int v5; // esi
  volatile __int32 *v7; // rbx
  unsigned int v11; // r15d
  bool v12; // di
  char v13; // dl
  int v14; // [rsp+68h] [rbp+20h] BYREF

  v5 = a3;
  v7 = (volatile __int32 *)&unk_18005AD88;
  if ( !a4 )
    v7 = (volatile __int32 *)&unk_18005AC78;
  if ( (*v7 & 1) != 0 )
    return (*v7 & 8) != 0 && (unsigned int)sub_180004984(a1, a2, a3, a4, 0LL, a5) != 0;
  v14 = 1;
  v11 = sub_180007CC4();
  v12 = (unsigned int)sub_180004984(a1, a2, v5, a4, &v14, a5) != 0;
  v13 = _InterlockedExchange(v7, v14 != 0 ? 11 : 3);
  if ( !v14 && (v13 & 2) == 0 )
    sub_180007D94(v7, 0LL, v11);
  return v12;
}

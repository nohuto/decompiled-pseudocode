/*
 * XREFs of sub_18006C4C0 @ 0x18006C4C0
 * Callers:
 *     sub_18007354C @ 0x18007354C (sub_18007354C.c)
 *     sub_18007483C @ 0x18007483C (sub_18007483C.c)
 * Callees:
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     sub_18006C618 @ 0x18006C618 (sub_18006C618.c)
 */

void __fastcall sub_18006C4C0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  _QWORD *j; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *v8; // rcx
  _QWORD v9[9]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *(_QWORD **)(a1 + 88);
  j = (_QWORD *)*v2;
  while ( j != v2 )
  {
    v9[2] = 0LL;
    v9[3] = 0LL;
    sub_18001269C(v9, (__int64)(j + 4));
    sub_18006C618(a1, a2, v9);
    v6 = (__int64 **)j[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = j[1]; !*(_BYTE *)(i + 25) && j == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        j = (_QWORD *)i;
      j = (_QWORD *)i;
    }
    else
    {
      v8 = *v6;
      for ( j = (_QWORD *)j[2]; !*((_BYTE *)v8 + 25); v8 = (__int64 *)*v8 )
        j = v8;
    }
  }
}

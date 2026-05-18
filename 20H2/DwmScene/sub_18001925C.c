/*
 * XREFs of sub_18001925C @ 0x18001925C
 * Callers:
 *     sub_1800165CC @ 0x1800165CC (sub_1800165CC.c)
 *     sub_18006B140 @ 0x18006B140 (sub_18006B140.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001CD3C @ 0x18001CD3C (sub_18001CD3C.c)
 *     memmove @ 0x18011E0B2 (memmove.c)
 */

__int64 __fastcall sub_18001925C(__int64 a1, __int64 a2)
{
  char **v2; // rsi
  const void *v5; // r15
  char *v6; // rbp
  signed __int64 v7; // r14
  __int64 result; // rax

  *(_DWORD *)a1 = *(_DWORD *)a2;
  v2 = (char **)(a1 + 48);
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(a2 + 20);
  *(_BYTE *)(a1 + 24) = *(_BYTE *)(a2 + 24);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  if ( a1 + 48 != a2 + 48 )
  {
    v5 = *(const void **)(a2 + 48);
    v6 = *v2;
    v7 = *(_QWORD *)(a2 + 56) - (_QWORD)v5;
    if ( v7 >> 2 > (unsigned __int64)((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 48)) >> 2) )
    {
      sub_18001CD3C(a1 + 48);
      v6 = *v2;
    }
    memmove(v6, v5, v7);
    v2[1] = &v6[v7];
  }
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 72), (_QWORD *)(a2 + 72));
  result = a1;
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  return result;
}

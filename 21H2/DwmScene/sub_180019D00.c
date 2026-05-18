/*
 * XREFs of sub_180019D00 @ 0x180019D00
 * Callers:
 *     sub_18001680C @ 0x18001680C (sub_18001680C.c)
 *     sub_180070A10 @ 0x180070A10 (sub_180070A10.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800114D8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180020AC0 @ 0x180020AC0 (sub_180020AC0.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_180019D00(__int64 a1, __int64 a2)
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
      sub_180020AC0(a1 + 48);
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

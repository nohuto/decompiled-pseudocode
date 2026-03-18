/*
 * XREFs of rimObsFreeInputMessageQueue @ 0x1C01852C4
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 */

void __fastcall rimObsFreeInputMessageQueue(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx

  v3 = (_QWORD *)(a1 + 144);
  v5 = *(_QWORD **)(a1 + 144);
  while ( v5 != v3 )
  {
    v6 = (_QWORD *)*v5;
    v7 = (__int64)v5;
    v5 = v6;
    if ( v6[1] != v7 || (v8 = *(_QWORD **)(v7 + 8), *v8 != v7) )
      __fastfail(3u);
    *v8 = v6;
    v6[1] = v8;
    Win32FreePool(v7, (__int64)v8, a3);
  }
  *(_DWORD *)(a1 + 160) = -1;
}

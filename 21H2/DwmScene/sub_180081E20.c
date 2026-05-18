/*
 * XREFs of sub_180081E20 @ 0x180081E20
 * Callers:
 *     sub_18007AF2C @ 0x18007AF2C (sub_18007AF2C.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z @ 0x18002C698 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@QEB_W_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180081E20(__int64 a1, __int64 a2)
{
  const void *v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r8
  const void *v7; // rdx

  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 7LL;
  *(_WORD *)a2 = 0;
  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 && std::wstreambuf::pptr(a1) )
  {
    v4 = **(const void ***)(a1 + 32);
    v5 = std::wstreambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    v6 = (__int64)(v5 - (_QWORD)v4) >> 1;
    v7 = v4;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::wstreambuf::gptr(a1) )
  {
    v7 = **(const void ***)(a1 + 24);
    v6 = (**(_QWORD **)(a1 + 56) + 2LL * **(int **)(a1 + 80) - (__int64)v7) >> 1;
LABEL_9:
    std::wstring::assign((char *)a2, v7, v6);
  }
  return a2;
}

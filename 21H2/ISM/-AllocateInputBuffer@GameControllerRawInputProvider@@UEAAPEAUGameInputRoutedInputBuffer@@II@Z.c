/*
 * XREFs of ?AllocateInputBuffer@GameControllerRawInputProvider@@UEAAPEAUGameInputRoutedInputBuffer@@II@Z @ 0x180088760
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18003C200 (memset_0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18003D030 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008951C (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct GameInputRoutedInputBuffer *__fastcall GameControllerRawInputProvider::AllocateInputBuffer(
        GameControllerRawInputProvider *this,
        int a2,
        unsigned int a3)
{
  size_t v3; // rdi
  unsigned int v5; // ebx
  _DWORD *v6; // rax
  unsigned int v7; // r8d
  const char *v8; // r9
  char *v10; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  v5 = a3 + 88;
  v6 = operator new(a3 + 88LL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v6 )
  {
    v6[6] = v5;
    v10 = (char *)(v6 + 22);
    *((_QWORD *)v6 + 4) = 0LL;
    *((_QWORD *)v6 + 5) = 0LL;
    *((_QWORD *)v6 + 6) = 0LL;
    *((_QWORD *)v6 + 7) = 0LL;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_QWORD *)v6 + 9) = 0LL;
    *((_BYTE *)v6 + 80) = 0;
    v6[2] = 0;
    *((_QWORD *)v6 + 2) = 0LL;
    *v6 = 64;
    v6[1] = a2;
    memset_0(v6 + 22, 0, v3);
    return (struct GameInputRoutedInputBuffer *)v10;
  }
  else
  {
    wil::details::in1diag3::_Log_NullAlloc(retaddr, (void *)0x11B, v7, v8);
    return 0LL;
  }
}

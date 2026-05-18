/*
 * XREFs of sub_1800DAA08 @ 0x1800DAA08
 * Callers:
 *     sub_1800DB1F8 @ 0x1800DB1F8 (sub_1800DB1F8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800113F8 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x18011EB10 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

__int64 __fastcall sub_1800DAA08(__int64 a1, int a2, __int64 a3)
{
  unsigned int i; // edi
  int v7; // eax
  _QWORD *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14

  *(_QWORD *)a1 = &Spectre::Engine::SamplerState::`vftable';
  `eh vector constructor iterator'(
    (void *)(a1 + 8),
    0x100uLL,
    6uLL,
    (void (*)(void *))sub_180021990,
    (void (*)(void *))sub_180021DB0);
  `eh vector constructor iterator'(
    (void *)(a1 + 1544),
    0x100uLL,
    6uLL,
    (void (*)(void *))sub_180021990,
    (void (*)(void *))sub_180021DB0);
  `eh vector constructor iterator'(
    (void *)(a1 + 3080),
    0x100uLL,
    6uLL,
    (void (*)(void *))sub_180021990,
    (void (*)(void *))sub_180021DB0);
  *(_DWORD *)(a1 + 4616) = a2;
  *(_BYTE *)(a1 + 4620) = 1;
  for ( i = 0; i < 6; ++i )
  {
    v7 = *(_DWORD *)(a1 + 4616);
    if ( _bittest(&v7, i) )
    {
      v8 = (_QWORD *)(((unsigned __int64)i << 8) + a1 + 3080);
      v9 = a3 - (_QWORD)v8;
      v10 = 16LL;
      do
      {
        std::shared_ptr<__ExceptionPtr>::operator=(v8, (_QWORD *)((char *)v8 + v9 + 448));
        v8 += 2;
        --v10;
      }
      while ( v10 );
    }
  }
  return a1;
}

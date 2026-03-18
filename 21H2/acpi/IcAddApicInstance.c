/*
 * XREFs of IcAddApicInstance @ 0x1C00BE290
 * Callers:
 *     IrqLibpParseMadt @ 0x1C00BE180 (IrqLibpParseMadt.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall IcAddApicInstance(int a1)
{
  unsigned int v2; // eax
  char v3; // bl
  unsigned int v4; // ebp
  unsigned int v5; // esi
  _DWORD *Pool2; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 result; // rax

  v2 = (*(__int64 (**)(void))(PmHalDispatchTable + 64))();
  v3 = v2;
  if ( !v2 )
    return 3221226021LL;
  v4 = HIBYTE(v2);
  v5 = HIWORD(v2);
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 200 * (HIBYTE(v2) - 1) + 232, 1232102209LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  Pool2[4] = a1;
  Pool2[6] = v4;
  Pool2[5] = a1 + (unsigned __int8)v5;
  if ( !(_BYTE)v5 && !v3 )
    Pool2[7] = 0x80000000;
  v8 = (_QWORD *)qword_1C00805F8;
  if ( *(__int64 **)qword_1C00805F8 != &IcListHead )
    __fastfail(3u);
  v7[1] = qword_1C00805F8;
  *v7 = &IcListHead;
  *v8 = v7;
  result = 0LL;
  qword_1C00805F8 = (__int64)v7;
  return result;
}

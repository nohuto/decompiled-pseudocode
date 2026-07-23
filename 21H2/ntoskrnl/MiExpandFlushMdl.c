/*
 * XREFs of MiExpandFlushMdl @ 0x140238E90
 * Callers:
 *     MiFlushSectionInternal @ 0x1402BE6B0 (MiFlushSectionInternal.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall MiExpandFlushMdl(unsigned int *Src, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // rbx
  void *Pool; // rax
  __int64 v8; // rsi
  __int64 result; // rax

  v4 = Src[10];
  if ( (_DWORD)v4 == 1048574 )
    return 0LL;
  v6 = (unsigned int)(2 * v4);
  if ( (unsigned int)v6 <= (unsigned int)v4 || (unsigned int)v6 > 0xFFFFE )
    return 0LL;
  if ( (unsigned int)v6 > a2 )
    v6 = a2;
  Pool = (void *)MiAllocatePool(64LL, 8 * v6 + 48, 1816554829LL, a4);
  v8 = (__int64)Pool;
  if ( !Pool )
    return 0LL;
  memmove(Pool, Src, 8 * v4 + 48);
  result = v8;
  *(_DWORD *)(v8 + 44) = v6;
  return result;
}

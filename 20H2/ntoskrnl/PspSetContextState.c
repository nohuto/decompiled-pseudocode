/*
 * XREFs of PspSetContextState @ 0x1409119F4
 * Callers:
 *     PspGetSetContextInternal @ 0x140687060 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlGetExtendedContextLength @ 0x1402E6530 (RtlGetExtendedContextLength.c)
 *     RtlInitializeExtendedContext @ 0x1402E65B0 (RtlInitializeExtendedContext.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlCopyContext @ 0x140693BBC (RtlCopyContext.c)
 */

__int64 __fastcall PspSetContextState(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rsi
  int v5; // ebx
  int v6; // edx
  __int64 result; // rax
  size_t Size; // [rsp+40h] [rbp+8h] BYREF
  char v9; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(Size) = 0;
  v4 = *(_DWORD **)(a1 + 1560);
  if ( (*(_BYTE *)(a1 + 3) & 8) == 0 )
  {
    v5 = MEMORY[0xFFFFF780000003D8] != 0LL ? 0x40 : 0;
    RtlGetExtendedContextLength((unsigned int)(v5 + 0x100000), (__int64)&Size);
    memset(v4, 0, (unsigned int)Size);
    RtlInitializeExtendedContext((__int64)v4, v5 + 0x100000, (__int64)&v9);
    v4[12] = 0x100000;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x1Bu);
  }
  v6 = *(_DWORD *)(a2 + 48);
  if ( (v6 & 0x100040) == 0x100040 )
  {
    v4[12] |= 0x100040u;
    v6 = *(_DWORD *)(a2 + 48);
  }
  RtlCopyContext((__int64)v4, v6, a2);
  result = *(_DWORD *)(a2 + 48) & 0x100008;
  if ( (_DWORD)result == 1048584 )
  {
    LODWORD(Size) = _mm_getcsr();
    *(_DWORD *)(a2 + 280) = Size;
    result = 7999LL;
    *(_WORD *)(a2 + 256) &= 0x1F3Fu;
  }
  return result;
}

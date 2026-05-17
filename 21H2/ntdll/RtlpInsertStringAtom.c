/*
 * XREFs of RtlpInsertStringAtom @ 0x180059A30
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x18005948C (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     RtlAllocateHandle @ 0x180059AC0 (RtlAllocateHandle.c)
 *     memset @ 0x1800A4780 (memset.c)
 */

char __fastcall RtlpInsertStringAtom(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int16 v5; // ax
  char result; // al
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (_QWORD *)RtlAllocateHandle(a1 + 16, &v7);
  if ( v4 )
  {
    v5 = v7;
    if ( v7 <= 0xFFFF && v7 + 49152 >= v7 && v7 + 49152 <= 0xFFFF )
    {
      *(_WORD *)(a2 + 8) = v7;
      *(_WORD *)(a2 + 10) = v5 - 0x4000;
      result = 1;
      v4[1] = a2;
      *(_DWORD *)v4 = 1;
      return result;
    }
    memset(v4, 0, *(unsigned int *)(a1 + 20));
    *v4 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v4;
  }
  return 0;
}

/*
 * XREFs of MiCloneImageVad @ 0x1405594C0
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiCreatePerSessionProtos @ 0x14061BAE4 (MiCreatePerSessionProtos.c)
 *     MiCopyForkedFixupVad @ 0x1408D7D4C (MiCopyForkedFixupVad.c)
 */

__int64 __fastcall MiCloneImageVad(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // r9d
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int SessionId; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 48);
  v5 = **(_QWORD **)(a3 + 72);
  if ( (v3 & 0x100000) == 0 && (v3 & 0x70) == 0x20 && (v3 & 0x200000) != 0 )
  {
    v6 = 1;
    MiCopyForkedFixupVad(a2, a3);
    ++*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 384LL);
  }
  else
  {
    v6 = 0;
  }
  if ( (*(_DWORD *)(v5 + 56) & 0x4000000) == 0 )
    return 0LL;
  SessionId = MmGetSessionIdEx(a1);
  result = MiCreatePerSessionProtos(v5, SessionId);
  if ( (int)result >= 0 )
    return 0LL;
  if ( v6 == 1 )
    --*(_QWORD *)(*(_QWORD *)(a1 + 1680) + 384LL);
  return result;
}

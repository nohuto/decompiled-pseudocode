/*
 * XREFs of MiReadEntirePageHashEntry @ 0x1405BC90C
 * Callers:
 *     MiObtainPagefileHashes @ 0x14045D4C6 (MiObtainPagefileHashes.c)
 *     MiLateWritePageHash @ 0x1405BC69C (MiLateWritePageHash.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadEntirePageHashEntry(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = *(_DWORD *)a1;
  result = 0LL;
  if ( dword_140C531D0 )
    result = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = result;
  return result;
}

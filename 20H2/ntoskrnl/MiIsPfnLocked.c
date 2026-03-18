/*
 * XREFs of MiIsPfnLocked @ 0x140380A68
 * Callers:
 *     MiDeletePteRun @ 0x1402C5480 (MiDeletePteRun.c)
 *     MmAreMdlPagesLocked @ 0x1409C8CE0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiPfnIsNonPagedPool @ 0x14054322C (MiPfnIsNonPagedPool.c)
 */

__int64 __fastcall MiIsPfnLocked(__int64 a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *(unsigned __int16 *)(a1 + 32);
  if ( v1 > (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) )
    return 1LL;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
    return 1LL;
  if ( ((*(_QWORD *)(a1 + 40) >> 60) & 7) == 1 )
    return 1LL;
  if ( (unsigned __int16)v1 > 1u )
    return 1LL;
  if ( (*(_BYTE *)a1 & 1) == 0 )
    return 1LL;
  result = MiPfnIsNonPagedPool();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}

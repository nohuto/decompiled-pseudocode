/*
 * XREFs of MiIsPfnLocked @ 0x14037ED38
 * Callers:
 *     MiDeletePteRun @ 0x14023FDD0 (MiDeletePteRun.c)
 *     MmAreMdlPagesLocked @ 0x1409C2CC0 (MmAreMdlPagesLocked.c)
 * Callees:
 *     MiPfnIsNonPagedPool @ 0x14053F85C (MiPfnIsNonPagedPool.c)
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

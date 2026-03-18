/*
 * XREFs of CmCloseRmHandle @ 0x14069FFE8
 * Callers:
 *     CmpTryToRundownHive @ 0x140208D94 (CmpTryToRundownHive.c)
 *     CmShutdownSystem1 @ 0x14053EBD8 (CmShutdownSystem1.c)
 *     CmpPerformUnloadKey @ 0x14069E98C (CmpPerformUnloadKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmCloseRmHandle(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 64) == 1 || a2 == 1) )
  {
    result = *(_QWORD *)(a1 + 48);
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}

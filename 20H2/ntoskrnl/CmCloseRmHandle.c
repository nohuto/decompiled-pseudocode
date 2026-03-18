/*
 * XREFs of CmCloseRmHandle @ 0x1406A3DF4
 * Callers:
 *     CmpTryToRundownHive @ 0x1402F2E7C (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1406A26DC (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x14086DCC8 (CmShutdownSystem.c)
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

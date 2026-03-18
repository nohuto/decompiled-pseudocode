/*
 * XREFs of CmCloseTmHandle @ 0x14065903C
 * Callers:
 *     CmpTryToRundownHive @ 0x1402D2F68 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x14065A0C0 (CmpPerformUnloadKey.c)
 *     CmShutdownSystem @ 0x140866F58 (CmShutdownSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmCloseTmHandle(__int64 a1, char a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 && (*(_DWORD *)(a1 + 64) == 1 || a2 == 1) )
  {
    result = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = 0LL;
  }
  return result;
}

/*
 * XREFs of CmpMarkCachedFullKCBNameStale @ 0x1404ECB90
 * Callers:
 *     CmRenameKey @ 0x14086CB64 (CmRenameKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpMarkCachedFullKCBNameStale(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 296);
  if ( result )
    _InterlockedOr64((volatile signed __int64 *)(a1 + 296), 1uLL);
  return result;
}

/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C00176C0
 * Callers:
 *     CreateTokenManagerSessionGlobal @ 0x1C0012E58 (CreateTokenManagerSessionGlobal.c)
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C0017690 (-Release@CTokenManager@@UEAAJXZ.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C0012C1C (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}

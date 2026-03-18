/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0012CC8
 * Callers:
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C0012D00 (-Release@CTokenManager@@UEAAJXZ.c)
 *     CreateTokenManagerSessionGlobal @ 0x1C001AE58 (CreateTokenManagerSessionGlobal.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C0012B8C (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}

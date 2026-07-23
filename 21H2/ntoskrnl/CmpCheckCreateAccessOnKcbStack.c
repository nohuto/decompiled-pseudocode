/*
 * XREFs of CmpCheckCreateAccessOnKcbStack @ 0x1405FC750
 * Callers:
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     CmpCheckCreateAccess @ 0x1405FC81C (CmpCheckCreateAccess.c)
 *     CmpGetSecurityCacheEntryForKcbStack @ 0x1406DEBC0 (CmpGetSecurityCacheEntryForKcbStack.c)
 *     CmpSetAccessStateForBackupRestore @ 0x14076F0B4 (CmpSetAccessStateForBackupRestore.c)
 */

char __fastcall CmpCheckCreateAccessOnKcbStack(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        int a6,
        char a7,
        __int64 a8,
        _DWORD *a9)
{
  __int64 SecurityCacheEntryForKcbStack; // rax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // rsi
  char v15; // bl
  __int64 v16; // rcx

  SecurityCacheEntryForKcbStack = CmpGetSecurityCacheEntryForKcbStack(a2, a8, 0LL);
  v14 = SecurityCacheEntryForKcbStack;
  v15 = 1;
  if ( a7
    && (LOBYTE(v12) = a5,
        LOBYTE(v13) = 1,
        (int)CmpSetAccessStateForBackupRestore(a4, v12, SecurityCacheEntryForKcbStack + 32, v13) < 0)
    || (v16 = a6 | *(_DWORD *)(a4 + 24) | 4u, ((unsigned int)v16 & *(_DWORD *)(a3 + 96)) != (_DWORD)v16) )
  {
    v15 = 0;
    *a9 = -1073741790;
  }
  else if ( !a7 || *(_DWORD *)(a4 + 16) )
  {
    LOBYTE(v13) = a5;
    return CmpCheckCreateAccess(v16, v14 + 32, a4, v13, a6, a9);
  }
  else
  {
    *a9 = 0;
  }
  return v15;
}

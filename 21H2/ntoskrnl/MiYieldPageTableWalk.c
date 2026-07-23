/*
 * XREFs of MiYieldPageTableWalk @ 0x140228654
 * Callers:
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 * Callees:
 *     MiReleaseWalkLocks @ 0x1402286D0 (MiReleaseWalkLocks.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall MiYieldPageTableWalk(__int64 a1, int a2)
{
  __int64 (*v3)(void); // rax
  char v4; // r8
  int v6; // eax
  int v7; // edi
  char v8; // r8

  v3 = *(__int64 (**)(void))(a1 + 160);
  v4 = *(_BYTE *)(a1 + 2) | 2;
  *(_BYTE *)(a1 + 2) = v4;
  if ( v3 )
  {
    v6 = v3();
    v4 = *(_BYTE *)(a1 + 2);
    v7 = v6;
  }
  else
  {
    v7 = 0;
    if ( *(_BYTE *)(a1 + 6) == 17 )
    {
      *(_BYTE *)(a1 + 2) = v4 & 0xFD;
      return 0LL;
    }
  }
  v8 = v4 & 0xFD;
  *(_BYTE *)(a1 + 2) = v8;
  if ( (v8 & 1) == 0 && v7 < 3 )
  {
    if ( a2 )
      MiReleaseWalkLocks(a1);
  }
  return (unsigned int)v7;
}

/*
 * XREFs of ExpRevokeBootLoaderPagePrivileges @ 0x140A8D354
 * Callers:
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 * Callees:
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 */

int __fastcall ExpRevokeBootLoaderPagePrivileges(__int64 a1)
{
  _UNKNOWN **v1; // rax
  __int64 *v2; // rsi
  __int64 *i; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rbp
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  v2 = (__int64 *)(a1 + 32);
  v7 = 0uLL;
  for ( i = *(__int64 **)(a1 + 32); i != v2; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == 4 )
    {
      v4 = i[3];
      v5 = i[4] + v4 - 1;
      while ( v4 <= v5 )
        LODWORD(v1) = KeSetPagePrivilege(v4++, &v7, 16);
    }
  }
  return (int)v1;
}

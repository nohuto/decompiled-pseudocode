/*
 * XREFs of sub_1C0073840 @ 0x1C0073840
 * Callers:
 *     sub_1C00556F0 @ 0x1C00556F0 (sub_1C00556F0.c)
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 */

__int64 __fastcall sub_1C0073840(__int64 a1)
{
  __int64 v3; // r13
  unsigned int v4; // r15d
  unsigned int v5; // r14d
  __int64 v6; // rsi
  __int64 v7; // rax
  int v8; // r12d
  char *PoolWithQuotaTag; // rax
  __int64 v10; // rcx

  if ( *(_BYTE *)(a1 + 64) )
    return 3221225488LL;
  v3 = *(_QWORD *)(a1 + 184);
  v4 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = (v5 + 7) & 0xFFFFFFF8;
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
  {
    if ( v4 < 0x18 || (unsigned int)v6 < v5 || (unsigned int)v6 + v4 < (unsigned int)v6 )
      return 3221225990LL;
    v8 = *(_DWORD *)(*(_QWORD *)(v3 + 32) + 20LL);
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)512, (unsigned int)v6 + v4, 0x7070534Bu);
    *(_QWORD *)(a1 + 24) = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      *(_DWORD *)(a1 + 16) |= 0x30u;
      sub_1C001D080(&PoolWithQuotaTag[v6], *(char **)(v3 + 32), v4);
      *(_DWORD *)(*(_QWORD *)(a1 + 24) + v6 + 20) = v8;
      if ( v8 == 2 )
      {
        if ( v5 )
        {
          if ( *(_BYTE *)(a1 + 64) )
            ProbeForRead(*(volatile void **)(a1 + 112), v5, 1u);
          sub_1C001D080(*(char **)(a1 + 24), *(char **)(a1 + 112), v5);
        }
      }
    }
    v7 = *(_QWORD *)(a1 + 24);
    if ( !v7 )
      return 3221225626LL;
  }
  v10 = v7 + (unsigned int)v6;
  if ( *(_QWORD *)v10 != 0x4FAC41982F2C8DDDLL || *(_QWORD *)(v10 + 8) != 0x6DEB705BB6129BALL )
    return 3221226032LL;
  if ( *(_DWORD *)(v10 + 16) )
    return 3221226021LL;
  if ( *(_DWORD *)(v10 + 20) != 2 )
    return 3221225474LL;
  if ( v4 < 0x58 || v5 < 0x10 )
    return 3221225507LL;
  return 0LL;
}

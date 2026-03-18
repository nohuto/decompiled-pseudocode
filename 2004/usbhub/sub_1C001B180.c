/*
 * XREFs of sub_1C001B180 @ 0x1C001B180
 * Callers:
 *     sub_1C000C0F0 @ 0x1C000C0F0 (sub_1C000C0F0.c)
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C000F880 @ 0x1C000F880 (sub_1C000F880.c)
 *     sub_1C0010064 @ 0x1C0010064 (sub_1C0010064.c)
 *     sub_1C00140B0 @ 0x1C00140B0 (sub_1C00140B0.c)
 *     sub_1C002DCC0 @ 0x1C002DCC0 (sub_1C002DCC0.c)
 *     sub_1C003BACC @ 0x1C003BACC (sub_1C003BACC.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

void __fastcall sub_1C001B180(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rbx

  if ( (dword_1C006B268 & 0x10) != 0 )
  {
    if ( !a1 )
      goto LABEL_13;
    v2 = *(_QWORD *)(a1 + 64);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
      *(_DWORD *)v3 = 760698728;
      *(_QWORD *)(v3 + 8) = 0LL;
      *(_QWORD *)(v3 + 16) = 0LL;
      *(_QWORD *)(v3 + 24) = 0LL;
    }
  }
  if ( !a1 )
LABEL_13:
    sub_1C002DC78(a1, a1);
  v4 = *(_QWORD *)(a1 + 64);
  if ( !v4 )
    sub_1C002DC78(a1, 0LL);
  if ( *(_DWORD *)v4 != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  if ( *(_DWORD *)(v4 + 4884) )
  {
    _m_prefetchw((const void *)(v4 + 4884));
    if ( _InterlockedOr((volatile signed __int32 *)(v4 + 4884), 1u) == 4 )
    {
      IoCancelIrp(*(PIRP *)(v4 + 4888));
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 4884), 4, 5) == 7 )
        IofCompleteRequest(*(PIRP *)(v4 + 4888), 0);
    }
  }
}

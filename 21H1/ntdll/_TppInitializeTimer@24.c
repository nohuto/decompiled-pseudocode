/*
 * XREFs of _TppInitializeTimer@24 @ 0x4B2B4877
 * Callers:
 *     _TpAllocWait@16 @ 0x4B2B4140 (_TpAllocWait@16.c)
 *     _TpAllocTimer@16 @ 0x4B2B4570 (_TpAllocTimer@16.c)
 * Callees:
 *     _TpAdjustBindingCount@8 @ 0x4B2B48DF (_TpAdjustBindingCount@8.c)
 *     _TppWorkInitialize@24 @ 0x4B2B492B (_TppWorkInitialize@24.c)
 *     _TppCleanupGroupAddMember@4 @ 0x4B2E7383 (_TppCleanupGroupAddMember@4.c)
 */

int __fastcall TppInitializeTimer(int a1, char a2, int a3, int a4, int a5, int a6)
{
  int v8; // eax
  int result; // eax

  if ( a4 )
    v8 = *(_DWORD *)(a4 + 28);
  else
    v8 = 0;
  result = TppWorkInitialize(a4, v8, a5, a6);
  if ( result >= 0 )
  {
    TpAdjustBindingCount(*(_DWORD *)(a1 + 92), 1);
    *(_DWORD *)(a1 + 144) = 0;
    *(_BYTE *)(a1 + 221) = a2;
    if ( a4 )
      *(_DWORD *)(a1 + 16) = *(_DWORD *)(a4 + 24);
    if ( *(_DWORD *)(a1 + 8) )
      TppCleanupGroupAddMember(a1);
    return 0;
  }
  return result;
}

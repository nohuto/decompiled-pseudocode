/*
 * XREFs of KiAbEntryFreeAndEnableInterrupts @ 0x140351DF0
 * Callers:
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 * Callees:
 *     KiAbThreadRemoveBoostsSlow @ 0x14022B568 (KiAbThreadRemoveBoostsSlow.c)
 *     KiAbEntryRemoveFromTree @ 0x14034EE30 (KiAbEntryRemoveFromTree.c)
 */

__int64 __fastcall KiAbEntryFreeAndEnableInterrupts(__int64 a1, ULONG_PTR a2, __int64 a3, int a4)
{
  int v8; // r8d
  __int64 result; // rax

  if ( *(__int64 *)a1 < 0 )
  {
    *(_BYTE *)a1 |= 2u;
    _enable();
    KiAbEntryRemoveFromTree(a1);
    _disable();
  }
  v8 = *(_DWORD *)(a1 + 88);
  result = 0LL;
  *(_DWORD *)(a1 + 88) = 0;
  *(_BYTE *)(a1 + 17) = 0;
  *(_QWORD *)a1 = 0LL;
  if ( a4 )
  {
    result = *(unsigned __int8 *)(a1 + 16);
    *(_BYTE *)(a2 + 792) |= 1 << result;
  }
  _enable();
  if ( v8 )
    return KiAbThreadRemoveBoostsSlow(a2, a3, v8);
  return result;
}

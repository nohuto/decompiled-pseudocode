/*
 * XREFs of IopIsNotifyInBroadcast @ 0x1409988AC
 * Callers:
 *     IoBuildPoDeviceNotifyList @ 0x1409982B0 (IoBuildPoDeviceNotifyList.c)
 * Callees:
 *     <none>
 */

char __fastcall IopIsNotifyInBroadcast(char a1, __int64 a2)
{
  char v2; // r8
  signed __int32 v4; // eax
  signed __int32 v5; // ett

  v2 = 1;
  if ( (a1 & 1) != 0 )
  {
    _m_prefetchw((const void *)(a2 + 136));
    v4 = *(_DWORD *)(a2 + 136);
    do
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 136), v4, v4);
    }
    while ( v5 != v4 );
    return BYTE1(v4) & 1;
  }
  return v2;
}

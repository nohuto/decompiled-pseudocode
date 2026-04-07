/*
 * XREFs of ?FindStationaryAnimation@CContactManager@@AEAAHIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18009DC58
 * Callers:
 *     ?CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@@Z @ 0x18009D7E4 (-CancelStationaryAnimation@CContactManager@@AEAAXIW4STATIONARY_ANIMATION_TYPE@CContactStationary.c)
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18009E71C (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800A01C4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CContactManager::FindStationaryAnimation(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // r10d
  __int64 v5; // r9
  __int64 v6; // r11
  __int64 v7; // rax

  v3 = *(_DWORD *)(a1 + 144);
  v4 = -1;
  v5 = 0LL;
  if ( v3 )
  {
    v6 = *(_QWORD *)(a1 + 120);
    while ( 1 )
    {
      if ( *(_DWORD *)(v6 + 24 * v5) == a2 )
      {
        v7 = *(_QWORD *)(v6 + 24 * v5 + 16);
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 416) == a3 )
            break;
        }
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v3 )
        return v4;
    }
    return (unsigned int)v5;
  }
  return v4;
}

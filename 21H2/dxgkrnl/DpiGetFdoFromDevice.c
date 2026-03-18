/*
 * XREFs of DpiGetFdoFromDevice @ 0x1C001BAFC
 * Callers:
 *     DpiGetSysMmAdapterFromDevice @ 0x1C001BAD0 (DpiGetSysMmAdapterFromDevice.c)
 *     DpiMiracastFindDisplayAdapterFdoIhv @ 0x1C01EEB90 (DpiMiracastFindDisplayAdapterFdoIhv.c)
 *     DpiMiracastFindRenderAdapterForSession @ 0x1C01EEE34 (DpiMiracastFindRenderAdapterForSession.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetFdoFromDevice(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  if ( !a1 )
    return 0LL;
  result = *(_QWORD *)(a1 + 64);
  if ( !result )
    return 0LL;
  if ( *(_DWORD *)(result + 16) != 1953656900 )
    return 0LL;
  if ( *(_DWORD *)(result + 20) == 3 )
  {
    v2 = *(_QWORD *)(result + 2728);
    if ( v2 )
    {
      result = *(_QWORD *)(v2 + 64);
      if ( !result )
        return 0LL;
    }
  }
  if ( *(_DWORD *)(result + 16) != 1953656900 || *(_DWORD *)(result + 20) != 2 )
    return 0LL;
  return result;
}

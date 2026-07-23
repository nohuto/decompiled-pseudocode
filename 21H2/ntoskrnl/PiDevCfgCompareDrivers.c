/*
 * XREFs of PiDevCfgCompareDrivers @ 0x14036D2D0
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x14073BEC8 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PiDevCfgCompareDrivers(__int64 a1, __int64 a2)
{
  int v2; // r10d
  int v3; // r8d
  __int64 result; // rax
  int v5; // r8d
  unsigned int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = *(_DWORD *)(a1 + 184);
  v3 = *(_DWORD *)(a2 + 184);
  if ( (v2 & 4) != 0 )
  {
    result = (v3 & 4) == 0;
  }
  else
  {
    if ( (v3 & 4) != 0 )
      return 0xFFFFFFFFLL;
    result = 0LL;
  }
  if ( (_DWORD)result )
    return result;
  v5 = v3 & 2;
  if ( (v2 & 2) != 0 )
  {
    result = (unsigned int)(v5 != 0) - 1;
    goto LABEL_7;
  }
  if ( !v5 )
  {
LABEL_7:
    if ( (_DWORD)result )
      return result;
    v6 = *(_DWORD *)(a1 + 108);
    if ( v6 >= *(_DWORD *)(a2 + 108) )
    {
      if ( v6 != *(_DWORD *)(a2 + 108) )
        return 1LL;
      v7 = *(_QWORD *)(a1 + 112);
      if ( v7 <= *(_QWORD *)(a2 + 112) )
      {
        if ( v7 != *(_QWORD *)(a2 + 112) )
          return 1LL;
        v8 = *(_QWORD *)(a1 + 120);
        if ( v8 <= *(_QWORD *)(a2 + 120) )
        {
          if ( v8 != *(_QWORD *)(a2 + 120) )
            return 1LL;
          v9 = *(_QWORD *)(a2 + 136);
          if ( *(_QWORD *)(a1 + 136) )
          {
            if ( !v9 )
              return 0xFFFFFFFFLL;
          }
          else if ( v9 )
          {
            return 1LL;
          }
          return 0LL;
        }
      }
    }
    return 0xFFFFFFFFLL;
  }
  return 1LL;
}

/*
 * XREFs of _LdrpSendShimEngineInitialNotifications@8 @ 0x4B2A66C4
 * Callers:
 *     _LdrpLoadShimEngine@4 @ 0x4B2A6525 (_LdrpLoadShimEngine@4.c)
 *     _LdrpSendShimEngineInitialNotifications@8 @ 0x4B2A66C4 (_LdrpSendShimEngineInitialNotifications@8.c)
 *     _LdrpDynamicShimModule@4 @ 0x4B2D234A (_LdrpDynamicShimModule@4.c)
 * Callees:
 *     _LdrpSendShimEngineInitialNotifications@8 @ 0x4B2A66C4 (_LdrpSendShimEngineInitialNotifications@8.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 */

int __fastcall LdrpSendShimEngineInitialNotifications(int *a1, int (__thiscall *a2)(_DWORD, _DWORD))
{
  int *v2; // edi
  int result; // eax
  _DWORD *v4; // ebx
  _DWORD *v5; // esi
  int (__thiscall *v6)(_DWORD, _DWORD); // edi
  int *v7; // ebx
  int (__thiscall *v9)(_DWORD, _DWORD); // [esp+8h] [ebp-4h]

  v2 = a1;
  v9 = a2;
  result = *a1;
  if ( (*(_DWORD *)(*a1 - 32) & 0x800) == 0 )
  {
    *(_BYTE *)(result - 31) |= 8u;
    v4 = (_DWORD *)a1[6];
    if ( v4 )
    {
      v5 = (_DWORD *)a1[6];
      v6 = a2;
      do
      {
        v5 = (_DWORD *)*v5;
        result = LdrpSendShimEngineInitialNotifications(v5[1], v6);
      }
      while ( v5 != v4 );
      v2 = a1;
      a2 = v9;
    }
    v7 = (int *)v2[1];
    while ( v7 != v2 )
    {
      result = v9(a2, v7 - 21);
      *((_BYTE *)v7 - 31) |= 8u;
      v7 = (int *)v7[1];
      a2 = v9;
    }
  }
  return result;
}

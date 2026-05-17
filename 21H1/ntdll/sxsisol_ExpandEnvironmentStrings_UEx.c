/*
 * XREFs of sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614
 * Callers:
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 * Callees:
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 */

int __fastcall sxsisol_ExpandEnvironmentStrings_UEx(int a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  int v4; // esi
  unsigned int v6; // eax
  int *v7; // esi
  int v8; // ecx
  unsigned __int16 v9; // cx
  unsigned __int16 v10; // ax
  int v11; // eax
  unsigned int v12; // eax
  _DWORD v13[2]; // [esp+14h] [ebp-28h] BYREF
  unsigned int v14; // [esp+1Ch] [ebp-20h] BYREF
  int v15; // [esp+20h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  v15 = -1073741595;
  if ( !a2 || !a3 || a2 == a3 )
    return -1073741811;
  if ( *a2 )
  {
    v13[0] = 0;
    v13[1] = 0;
    RtlEnterCriticalSection((int)&FastPebLock);
    ms_exc.registration.TryLevel = 0;
    v11 = RtlExpandEnvironmentStrings_U(0, a2, (int)v13, &v14);
    v4 = v11;
    v15 = v11;
    if ( v11 >= 0 || v11 == -1073741789 )
    {
      if ( v14 <= 0xFFFE )
      {
        v12 = v14 + 4;
        if ( v14 + 4 <= 0xFFFE )
        {
          if ( (a3 == (unsigned __int16 *)-8 || v12 > *((_DWORD *)a3 + 4))
            && RtlpEnsureBufferSize(0, (int)(a3 + 4), v12) < 0 )
          {
            v4 = -1073741801;
          }
          else
          {
            *((_DWORD *)a3 + 1) = *((_DWORD *)a3 + 2);
            a3[1] = a3[8];
            v4 = 0;
          }
        }
        else
        {
          v4 = -1073741562;
        }
        v15 = v4;
        if ( v4 < 0 )
          goto LABEL_29;
        v4 = RtlExpandEnvironmentStrings_U(0, a2, (int)a3, 0);
        v15 = v4;
        if ( v4 < 0 )
          goto LABEL_29;
        v4 = 0;
      }
      else
      {
        v4 = -1073741562;
      }
      v15 = v4;
    }
LABEL_29:
    ms_exc.registration.TryLevel = -2;
    RtlLeaveCriticalSection((int)&FastPebLock);
    return v4;
  }
  *a3 = 0;
  v6 = *a2 + 2;
  if ( v6 > 0xFFFE )
    return -1073741562;
  v7 = (int *)(a3 + 4);
  if ( (a3 == (unsigned __int16 *)-8 || v6 > *((_DWORD *)a3 + 4)) && RtlpEnsureBufferSize(0, (int)(a3 + 4), *a2 + 2) < 0 )
    return -1073741801;
  v8 = *v7;
  *((_DWORD *)a3 + 1) = *v7;
  memmove((void *)(v8 + 2 * (*a3 >> 1)), *((const void **)a2 + 1), *a2);
  v9 = *a3;
  a3[1] = *a3 + *a2 + 2;
  v10 = v9 + *a2;
  *a3 = v10;
  *(_WORD *)(*((_DWORD *)a3 + 1) + 2 * (v10 >> 1)) = 0;
  return 0;
}

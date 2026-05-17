/*
 * XREFs of _RtlpWakeSingle@8 @ 0x4B366206
 * Callers:
 *     _RtlSleepConditionVariableSRW@16 @ 0x4B2C2180 (_RtlSleepConditionVariableSRW@16.c)
 *     _RtlSleepConditionVariableCS@12 @ 0x4B366010 (_RtlSleepConditionVariableCS@12.c)
 * Callees:
 *     _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1 (_RtlpWakeConditionVariable@12.c)
 */

bool __fastcall RtlpWakeSingle(volatile signed __int32 *a1, int a2)
{
  signed __int32 v3; // edx
  signed __int32 v4; // eax
  signed __int32 v6; // ecx
  char v7; // bl
  unsigned int v8; // edi
  unsigned int v9; // eax
  signed __int32 v10; // edx
  _DWORD *v11; // esi
  unsigned int v12; // ebx
  signed __int32 v13; // eax
  volatile signed __int32 *v14; // esi
  unsigned int v15; // [esp+Ch] [ebp-14h]
  unsigned int v17; // [esp+14h] [ebp-Ch]
  char v19; // [esp+1Fh] [ebp-1h]

  v3 = *a1;
  if ( !*a1 )
    return 0;
  while ( 1 )
  {
    if ( (v3 & 7) == 7 )
      return 0;
    if ( (v3 & 8) != 0 )
    {
      v4 = _InterlockedCompareExchange(a1, v3 | 7, v3);
      if ( v4 == v3 )
        return 0;
      goto LABEL_7;
    }
    v6 = v3 + 8;
    v4 = _InterlockedCompareExchange(a1, v3 + 8, v3);
    if ( v4 == v3 )
      break;
LABEL_7:
    v3 = v4;
    if ( !v4 )
      return 0;
  }
  v7 = 0;
  v8 = v6 & 0xFFFFFFF0;
  v19 = 0;
  v9 = v6 & 0xFFFFFFF0;
  v10 = v3 + 8;
  v17 = v6 & 0xFFFFFFF0;
  v11 = 0;
  if ( (v6 & 0xFFFFFFF0) == 0 )
    goto LABEL_29;
  while ( 2 )
  {
    v12 = *(_DWORD *)v8;
    v15 = *(_DWORD *)v8;
    if ( v8 != a2 )
    {
      *(_DWORD *)(v8 + 8) = v11;
      v11 = (_DWORD *)v8;
      goto LABEL_23;
    }
    if ( v11 )
    {
      v19 = 1;
      _interlockedbittestandset((volatile signed __int32 *)(v8 + 20), 2u);
      *v11 = v12;
      if ( v12 )
        *(_DWORD *)(v12 + 8) = v11;
      v9 = v17;
LABEL_23:
      v8 = v12;
    }
    else
    {
      v6 = *(_DWORD *)v8;
      if ( v12 )
        v6 = v12 ^ ((unsigned __int8)v10 ^ (unsigned __int8)v12) & 0xF;
      v13 = _InterlockedCompareExchange(a1, v6, v10);
      if ( v13 == v10 )
      {
        v19 = 1;
        _interlockedbittestandset((volatile signed __int32 *)(v8 + 20), 2u);
        v10 = v6;
        if ( !v15 )
          return 1;
      }
      else
      {
        v10 = v13;
        v6 = v13;
      }
      v8 = v10 & 0xFFFFFFF0;
      v11 = 0;
      v9 = v10 & 0xFFFFFFF0;
      v17 = v10 & 0xFFFFFFF0;
    }
    if ( v8 )
      continue;
    break;
  }
  if ( v9 )
    *(_DWORD *)(v9 + 4) = v11;
  v7 = v19;
  if ( v19 )
  {
    v14 = (volatile signed __int32 *)(a2 + 20);
    goto LABEL_30;
  }
LABEL_29:
  v14 = (volatile signed __int32 *)(a2 + 20);
  _InterlockedOr((volatile signed __int32 *)(a2 + 20), 2u);
LABEL_30:
  RtlpWakeConditionVariable(a1, 0, v6);
  if ( !v7 )
    return !_interlockedbittestandreset(v14, 1u);
  return v7;
}

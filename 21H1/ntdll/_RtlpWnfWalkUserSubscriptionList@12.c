/*
 * XREFs of _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18
 * Callers:
 *     _RtlpWnfProcessCurrentDescriptor@8 @ 0x4B2DECC3 (_RtlpWnfProcessCurrentDescriptor@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpWnfWalkUserSubscriptionList@12 @ 0x4B2DEE18 (_RtlpWnfWalkUserSubscriptionList@12.c)
 *     _RtlSetThreadSubProcessTag@4 @ 0x4B2DF1C0 (_RtlSetThreadSubProcessTag@4.c)
 *     _RtlpDecRefWnfUserSubscription@12 @ 0x4B2DF21A (_RtlpDecRefWnfUserSubscription@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 *     _RtlpWnfETWEventCallback@32 @ 0x4B33C380 (_RtlpWnfETWEventCallback@32.c)
 *     _RtlpWnfMarkFailure@12 @ 0x4B33C616 (_RtlpWnfMarkFailure@12.c)
 */

unsigned int __fastcall RtlpWnfWalkUserSubscriptionList(_DWORD *a1, int a2, int a3)
{
  int v4; // ebx
  int *v5; // esi
  int *v7; // esi
  unsigned int v8; // edx
  int v9; // ecx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  volatile signed __int32 *v16; // [esp+10h] [ebp-8Ch]
  volatile signed __int32 *v17; // [esp+24h] [ebp-78h]
  int v18; // [esp+28h] [ebp-74h] BYREF
  char *v19; // [esp+2Ch] [ebp-70h]
  int v20; // [esp+30h] [ebp-6Ch]
  int *v21; // [esp+34h] [ebp-68h]
  int v22; // [esp+38h] [ebp-64h]
  int v23; // [esp+3Ch] [ebp-60h]
  int v24; // [esp+40h] [ebp-5Ch]
  void (__thiscall *v25)(_DWORD, int); // [esp+44h] [ebp-58h]
  int *v26; // [esp+48h] [ebp-54h]
  int v27; // [esp+4Ch] [ebp-50h]
  BOOL v28; // [esp+50h] [ebp-4Ch]
  int v29; // [esp+54h] [ebp-48h]
  int v30; // [esp+58h] [ebp-44h]
  int v31; // [esp+5Ch] [ebp-40h]
  int v32; // [esp+60h] [ebp-3Ch]
  __int64 v33; // [esp+64h] [ebp-38h]
  int v34; // [esp+6Ch] [ebp-30h]
  void (__thiscall *v35)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD); // [esp+70h] [ebp-2Ch]
  volatile signed __int32 *v36; // [esp+74h] [ebp-28h]
  int v37; // [esp+78h] [ebp-24h]
  _DWORD *v38; // [esp+7Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+84h] [ebp-18h]

  v29 = a2;
  v38 = a1;
  v25 = 0;
  v18 = 0;
  v4 = 0;
  v22 = 0;
  v19 = (char *)a1 + a1[11];
  v17 = (volatile signed __int32 *)(a2 + 40);
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 40));
  v5 = *(int **)(a2 + 44);
  v21 = v5;
  while ( v5 != (int *)(v29 + 44) )
  {
    v26 = v5 - 1;
    while ( 1 )
    {
      v32 = HIDWORD(RtlpFreezeTimeBias);
      v34 = RtlpFreezeTimeBias;
      v36 = (volatile signed __int32 *)MEMORY[0x7FFE03B0];
      v24 = MEMORY[0x7FFE03B4];
      while ( MEMORY[0x7FFE000C] != MEMORY[0x7FFE0010] )
        _mm_pause();
      v33 = MEMORY[0x7FFE03B0];
      if ( v36 == (volatile signed __int32 *)MEMORY[0x7FFE03B0] && v24 == MEMORY[0x7FFE03B4] )
      {
        v36 = (volatile signed __int32 *)HIDWORD(RtlpFreezeTimeBias);
        if ( v34 == (_DWORD)RtlpFreezeTimeBias && (volatile signed __int32 *)v32 == v36 )
          break;
      }
    }
    v7 = v21;
    v4 = v22;
    v8 = (MEMORY[0x7FFE0008] - v33 - __PAIR64__(v32, v34) + 500000) >> 32;
    v36 = (volatile signed __int32 *)(MEMORY[0x7FFE0008] - v33 - v34 + 500000);
    _InterlockedIncrement(v21 + 10);
    v9 = v38[6] & v7[8];
    LODWORD(v33) = v9;
    if ( v7[12] || !v9 )
      goto LABEL_43;
    v23 = v9 & 1;
    if ( ((v9 & 1) == 0 || v7[6] && v38[4] - v7[6] <= 0) && ((v9 & 0xFFFFFFFE) == 0 || v7[24]) && (v9 & 0x10) == 0 )
      goto LABEL_43;
    if ( v7[15] && __PAIR64__(v8, (unsigned int)v36) < *(_QWORD *)(v7 + 17) && (unsigned int)v7[22] >= v38[4]
      || a3 && !v7[21] )
    {
      goto LABEL_43;
    }
    v37 = 0;
    v34 = 0;
    v35 = (void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))v7[3];
    v10 = (_DWORD *)v7[2];
    v30 = v10[4];
    v31 = v10[5];
    v24 = v10[9];
    HIDWORD(v33) = v7[4];
    v20 = v7[5];
    v7[23] = (int)NtCurrentTeb()->ClientId.UniqueThread;
    v16 = (volatile signed __int32 *)(v29 + 40);
    v36 = (volatile signed __int32 *)(v29 + 40);
    RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v29 + 40));
    v11 = 0;
    v27 = 0;
    v28 = 0;
    v32 = 0;
    v12 = v7[9];
    if ( v12 )
    {
      v28 = !_interlockedbittestandset((volatile signed __int32 *)(v12 + 16), 0);
      v32 = v28;
      if ( !v28 )
      {
        if ( a3 != 1 )
        {
          v15 = 1;
          goto LABEL_40;
        }
        RtlAcquireSRWLockExclusive((volatile signed __int32 *)(v7[9] + 16));
        v28 = 1;
        v32 = 1;
      }
    }
    if ( !v7[12] )
    {
      v34 = 1;
      v20 = RtlSetThreadSubProcessTag(v20);
      ms_exc.registration.TryLevel = 0;
      if ( v23 )
        v37 = ((int (__thiscall *)(void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int, int, _DWORD, int, _DWORD, char *, _DWORD))v35)(
                v35,
                v30,
                v31,
                v38[4],
                v24,
                HIDWORD(v33),
                v19,
                v38[5]);
      v13 = v33;
      if ( (v33 & 0x10) != 0 && !v7[12] && (v37 >= 0 || (v7[7] & 4) == 0) )
      {
        ((void (__thiscall *)(void (__thiscall *)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD), int, int, _DWORD, int, _DWORD, _DWORD, _DWORD))v35)(
          v35,
          v30,
          v31,
          0,
          v24,
          HIDWORD(v33),
          0,
          0);
        v37 = 0;
        v13 = v33;
      }
      if ( (v13 & 0xFFFFFFEE) != 0 )
      {
        v37 = 0;
        v35(v35, v30, v31, HIDWORD(v33), v13);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v14 = (int)NtCurrentPeb()->SharedData + 564;
      else
        v14 = 2147353486;
      if ( *(_BYTE *)v14 )
        RtlpWnfETWEventCallback(v29, v35, v33, v37, v30, v31);
      ms_exc.registration.TryLevel = -2;
      RtlSetThreadSubProcessTag(v20);
    }
    if ( v28 )
      RtlReleaseSRWLockExclusive((volatile signed __int32 *)(v7[9] + 16));
    if ( !v34 )
      goto LABEL_70;
    RtlAcquireSRWLockExclusive(v16);
    v11 = 1;
    v27 = 1;
    if ( v37 != -1073741267 && v37 != -1073741801 )
    {
      if ( !v7[6] || v38[4] - v7[6] > 0 )
        v7[6] = v38[4];
      if ( (v7[7] & 4) != 0 && v7[19] )
      {
        v7[15] = 0;
        v7[20] = 0;
        v7[17] = 0;
        v7[18] = 0;
        v7[19] = 0;
        v7[22] = 0;
      }
      goto LABEL_39;
    }
    if ( (v7[7] & 4) != 0 )
    {
      v4 = 1;
      v22 = 1;
      RtlpWnfMarkFailure(v38[4]);
LABEL_70:
      v11 = v27;
    }
LABEL_39:
    v15 = 0;
LABEL_40:
    v7[21] = v15;
    if ( !v11 )
      RtlAcquireSRWLockExclusive(v36);
    v7[23] = 0;
LABEL_43:
    v5 = (int *)*v7;
    v21 = v5;
    RtlpDecRefWnfUserSubscription(&v18);
    if ( v25 )
      v25(v25, v18);
  }
  RtlReleaseSRWLockExclusive(v17);
  return v4 != 0 ? 0xC000022D : 0;
}

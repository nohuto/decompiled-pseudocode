/*
 * XREFs of _TppWorkerFindTask@12 @ 0x4B2B6930
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpWakeSRWLock@12 @ 0x4B2E3BAB (_RtlpWakeSRWLock@12.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 *     _TppETWWorkerNodeSwitch@20 @ 0x4B385006 (_TppETWWorkerNodeSwitch@20.c)
 *     _TppQueueRemoveHead@4 @ 0x4B38508E (_TppQueueRemoveHead@4.c)
 *     _TppAreNodeWorkersSteadyState@4 @ 0x4B3850CA (_TppAreNodeWorkersSteadyState@4.c)
 */

int __fastcall TppWorkerFindTask(_RTL_SRWLOCK *a1, int a2, int *a3)
{
  _RTL_SRWLOCK *v3; // ebx
  unsigned __int8 Number; // cl
  int Group; // eax
  unsigned int v7; // edx
  unsigned int v8; // esi
  unsigned int Value; // eax
  unsigned int v10; // eax
  unsigned int v11; // edi
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int *v16; // eax
  _RTL_SRWLOCK *v17; // edi
  _RTL_SRWLOCK *v18; // ebx
  unsigned int v19; // eax
  signed __int32 v20; // ecx
  int v21; // eax
  int v22; // eax
  int v23; // esi
  int v24; // edi
  unsigned int v25; // ecx
  unsigned int v26; // eax
  unsigned int v27; // eax
  int v28; // eax
  unsigned int v30; // ecx
  int v31; // eax
  signed __int32 v32; // eax
  unsigned int *v33; // eax
  int v34; // edi
  unsigned int *v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // ecx
  int v38; // eax
  int v39; // [esp+Ch] [ebp-50h] BYREF
  int *v40; // [esp+10h] [ebp-4Ch]
  int v41; // [esp+14h] [ebp-48h]
  _RTL_SRWLOCK *v42; // [esp+18h] [ebp-44h]
  int v43; // [esp+1Ch] [ebp-40h]
  int v44; // [esp+20h] [ebp-3Ch] BYREF
  int v45; // [esp+24h] [ebp-38h]
  int v46; // [esp+28h] [ebp-34h]
  _RTL_SRWLOCK *v47; // [esp+2Ch] [ebp-30h]
  int v48; // [esp+30h] [ebp-2Ch]
  unsigned __int8 v49; // [esp+37h] [ebp-25h]
  int v50; // [esp+38h] [ebp-24h]
  unsigned int v51; // [esp+3Ch] [ebp-20h]
  _DWORD v52[3]; // [esp+40h] [ebp-1Ch] BYREF
  _DWORD ThreadInformation[3]; // [esp+4Ch] [ebp-10h] BYREF

  v40 = a3;
  v3 = a1;
  v47 = a1;
  Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
  v49 = Number;
  Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
  v7 = TppNumberNodes;
  v8 = TppNumberNodes;
  v45 = a2;
  v50 = Group;
  v46 = TppNumberNodes;
  if ( !v47 || (Value = v3[68].Value, v7 = TppNumberNodes, !Value) )
    Value = MEMORY[0x7FFE03C0];
  if ( v3[64].Value != Value )
  {
    RtlAcquireSRWLockExclusive(v3 + 11);
    TppAdjustRunningThreadGoalWithLock(v3);
    RtlReleaseSRWLockExclusive(v3 + 11);
    v7 = TppNumberNodes;
    v8 = v46;
    Number = v49;
  }
  v10 = 0;
  v51 = 0;
  if ( !v7 )
    goto LABEL_11;
  v11 = v3[8].Value;
  while ( 1 )
  {
    v3 = v47;
    if ( *(_WORD *)(v11 + 4) == (_WORD)v50 )
      break;
LABEL_35:
    ++v10;
    v11 += 12;
    v51 = v10;
    if ( v10 >= v7 )
      goto LABEL_10;
  }
  if ( ((1 << Number) & *(_DWORD *)v11) == 0 )
  {
    v10 = v51;
    goto LABEL_35;
  }
  v8 = v51;
  v46 = v51;
LABEL_10:
  a2 = v45;
LABEL_11:
  if ( v8 >= v7 )
  {
    v8 = 0;
    v46 = 0;
  }
  v12 = *(_DWORD *)(a2 + 200);
  v44 = v49;
  v13 = v3[65].Value;
  v50 = v12;
  if ( v8 == v12 )
  {
    if ( v13 == -1 && !*(_BYTE *)(a2 + 208) )
    {
      *(_BYTE *)(a2 + 208) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(v3[7].Value + 4 * v8));
    }
  }
  else
  {
    if ( v13 == -1 )
    {
      if ( *(_BYTE *)(a2 + 208) )
        _InterlockedDecrement((volatile signed __int32 *)(v3[7].Value + 4 * v12));
      else
        *(_BYTE *)(a2 + 208) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(v3[7].Value + 4 * v8));
    }
    *(_DWORD *)(a2 + 200) = v8;
    v30 = v3[8].Value;
    v51 = *(unsigned __int16 *)(v30 + 12 * v8 + 4);
    v48 = *(unsigned __int16 *)(v30 + 12 * v12 + 4);
    if ( RtlGetCurrentServiceSessionId() )
      v31 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v31 = 2147353478;
    if ( *(_BYTE *)v31 )
      TppETWWorkerNodeSwitch(v8, v48, v51);
    if ( (_WORD)v48 != (_WORD)v51 )
    {
      ThreadInformation[2] = 0;
      ThreadInformation[1] = (unsigned __int16)v51;
      ThreadInformation[0] = 0;
      ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadGroupInformation, ThreadInformation, 0xCu);
      ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadIdealProcessor, &v44, 4u);
      a2 = v45;
    }
  }
  v14 = v3[65].Value;
  v51 = v8;
  if ( v14 != -1 || *(_DWORD *)(a2 + 204) < 0x10u || TppAreNodeWorkersSteadyState(v3) )
  {
    v48 = 0;
    v15 = 12 * v8;
    v16 = (unsigned int *)&v3[4];
    v41 = 12 * v8;
    v50 = (int)&v3[4];
    do
    {
      v17 = (_RTL_SRWLOCK *)(v15 + *v16);
      RtlAcquireSRWLockExclusive(v17 + 2);
      v18 = (_RTL_SRWLOCK *)v17->Value;
      v42 = v18;
      if ( (_RTL_SRWLOCK *)v18[1].Value != v17 || (v19 = v18->Value, *(_RTL_SRWLOCK **)(v18->Value + 4) != v18) )
        __fastfail(3u);
      v17->Value = v19;
      *(_DWORD *)(v19 + 4) = v17;
      v20 = _InterlockedCompareExchange((volatile signed __int32 *)&v17[2], 0, 1);
      if ( v20 != 1 )
      {
        while ( 1 )
        {
          v43 = v20 & 6;
          v32 = _InterlockedCompareExchange((volatile signed __int32 *)&v17[2], v20 + 4 * (v43 == 2) - 1, v20);
          if ( v32 == v20 )
            break;
          v20 = v32;
        }
        v18 = v42;
        if ( v43 == 2 )
          RtlpWakeSRWLock(v20 + 4 * ((v20 & 6) == 2) - 1);
      }
      v21 = v17 != v18 ? (unsigned int)v18 : 0;
      if ( v21 )
      {
        v3 = v47;
        goto LABEL_22;
      }
      v16 = (unsigned int *)(v50 + 4);
      ++v48;
      v50 += 4;
      v15 = v41;
    }
    while ( v48 <= 2 );
    v3 = v47;
    v8 = v46;
  }
  if ( *((_BYTE *)&v3[57].0 + 1) )
    return 0;
  v33 = (unsigned int *)&v3[4];
  v34 = v8;
LABEL_60:
  v35 = v33;
  v50 = 0;
  v47 = (_RTL_SRWLOCK *)v33;
  while ( 1 )
  {
    v21 = TppQueueRemoveHead(*v35 + 12 * v34);
    if ( v21 )
      break;
    v35 = (unsigned int *)v47;
    v34 = v34 + 1 < (unsigned int)TppNumberNodes ? v34 + 1 : 0;
    v51 = v34;
    if ( v34 == v8 )
    {
      v35 = (unsigned int *)&v47[1];
      ++v47;
      if ( ++v50 > 2 )
      {
        v33 = (unsigned int *)&v3[4];
        if ( !*((_BYTE *)&v3[57].0 + 1) )
          goto LABEL_60;
        return 0;
      }
    }
  }
LABEL_22:
  v22 = v21 - 12;
  v23 = v45;
  *v40 = v22;
  v24 = *(_DWORD *)(v23 + 200);
  v25 = v51;
  v39 = *(unsigned __int8 *)(v22 + 8);
  v26 = v3[65].Value;
  if ( v51 == v24 )
  {
    if ( v26 == -1 && !*(_BYTE *)(v23 + 208) )
    {
      *(_BYTE *)(v23 + 208) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(v3[7].Value + 4 * v25));
    }
  }
  else
  {
    if ( v26 == -1 )
    {
      if ( *(_BYTE *)(v23 + 208) )
        _InterlockedDecrement((volatile signed __int32 *)(v3[7].Value + 4 * v24));
      else
        *(_BYTE *)(v23 + 208) = 1;
      _InterlockedIncrement((volatile signed __int32 *)(v3[7].Value + 4 * v25));
    }
    v36 = v51;
    *(_DWORD *)(v23 + 200) = v51;
    v37 = v3[8].Value;
    v50 = *(unsigned __int16 *)(v37 + 12 * v36 + 4);
    v48 = *(unsigned __int16 *)(v37 + 12 * v24 + 4);
    if ( RtlGetCurrentServiceSessionId() )
      v38 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v38 = 2147353478;
    if ( *(_BYTE *)v38 )
      TppETWWorkerNodeSwitch(v51, v48, v50);
    if ( (_WORD)v48 != (_WORD)v50 )
    {
      v52[2] = 0;
      v52[1] = (unsigned __int16)v50;
      v52[0] = 0;
      ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadGroupInformation, v52, 0xCu);
      ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadIdealProcessor, &v39, 4u);
    }
  }
  if ( v51 == v46 )
  {
    v27 = *(_DWORD *)(v23 + 204);
    if ( v27 < 0x10 )
      v28 = v27 + 1;
    else
      v28 = 16;
  }
  else
  {
    v28 = 0;
  }
  *(_DWORD *)(v23 + 204) = v28;
  return 1;
}

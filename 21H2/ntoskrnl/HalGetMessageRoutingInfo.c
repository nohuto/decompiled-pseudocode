/*
 * XREFs of HalGetMessageRoutingInfo @ 0x140376ED0
 * Callers:
 *     IopConnectMessageBasedInterrupt @ 0x140762014 (IopConnectMessageBasedInterrupt.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403770A0 (HalGetProcessorIdByNtNumber.c)
 */

__int64 __fastcall HalGetMessageRoutingInfo(int *a1, _DWORD *a2)
{
  unsigned __int16 *v4; // rdx
  char v5; // r8
  __int16 v6; // r9
  char v7; // si
  __int64 v8; // rcx
  int v9; // r13d
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  int v14; // esi
  char v15; // r12
  int v16; // r14d
  int v17; // r15d
  unsigned __int16 *v18[2]; // [rsp+20h] [rbp-30h] BYREF
  __int16 v19; // [rsp+30h] [rbp-20h]
  int v20; // [rsp+32h] [rbp-1Eh]
  __int16 v21; // [rsp+36h] [rbp-1Ah]
  __int128 v22; // [rsp+38h] [rbp-18h]
  unsigned int v23; // [rsp+80h] [rbp+30h] BYREF

  v20 = 0;
  v21 = 0;
  v23 = 0;
  v22 = 0LL;
  if ( (unsigned int)*a1 > 1 )
    goto LABEL_53;
  v4 = (unsigned __int16 *)*((_QWORD *)a1 + 2);
  if ( !v4
    || (v5 = 1, (unsigned __int16 *)((unsigned __int64)v4 & ((unsigned __int64)v4 ^ ((unsigned __int64)v4 - 1))) != v4) )
  {
    v5 = 0;
  }
  v6 = *((_WORD *)a1 + 12);
  v7 = 0;
  if ( !v6 )
  {
    v8 = 0LL;
    if ( KeActiveProcessors[0] )
      v8 = qword_140CFC848[0];
    if ( v4 == (unsigned __int16 *)v8 )
      v7 = 1;
  }
  v9 = a1[8];
  v19 = v6;
  v18[1] = v4;
  v18[0] = 0LL;
  if ( v9 == 1 )
  {
    if ( v5 || v7 )
    {
      v10 = KeEnumerateNextProcessor(&v23, v18);
      if ( v10 >= 0 )
      {
        if ( v7 )
        {
          while ( 1 )
          {
            v11 = v23;
            if ( v23 >= (unsigned int)HalpInterruptProcessorCount )
              break;
            v10 = KeEnumerateNextProcessor(&v23, v18);
            if ( v10 < 0 )
            {
              v11 = v23;
              goto LABEL_49;
            }
          }
          v10 = -1073741811;
LABEL_49:
          if ( (unsigned int)v11 < (unsigned int)HalpInterruptProcessorCount )
            v10 = 0;
        }
        else
        {
          v11 = v23;
        }
        if ( v10 >= 0 && (int)HalGetProcessorIdByNtNumber(v11, &v23) >= 0 )
          goto LABEL_16;
      }
    }
    goto LABEL_44;
  }
  if ( v9 == 2 )
  {
    if ( !HalpInterruptClusterModeEnabled )
    {
      if ( (int)KeEnumerateNextProcessor(&v23, v18) < 0 )
        return 3221225485LL;
      v14 = DWORD2(v22);
      while ( v23 < (unsigned int)HalpInterruptProcessorCount )
      {
        if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v23) != 5 )
          goto LABEL_53;
        v14 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 8);
        if ( (int)KeEnumerateNextProcessor(&v23, v18) < 0 )
        {
          if ( v14 )
            goto LABEL_16;
          return 3221225485LL;
        }
      }
LABEL_44:
      HalpInterruptLastProblem = 21;
      return 3221225485LL;
    }
LABEL_53:
    HalpInterruptLastProblem = 20;
    return 3221225485LL;
  }
  if ( v9 != 3 || !HalpInterruptClusterModeEnabled )
    goto LABEL_53;
  v15 = 0;
  if ( (int)KeEnumerateNextProcessor(&v23, v18) >= 0 )
  {
    v16 = HIDWORD(v22);
    v17 = DWORD2(v22);
    while ( v23 < (unsigned int)HalpInterruptProcessorCount )
    {
      if ( *(_DWORD *)(HalpInterruptTargets + 24LL * v23) != 6 )
        goto LABEL_53;
      if ( v15 )
      {
        if ( v17 != *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 8) )
        {
          if ( !v7 )
            goto LABEL_53;
          v16 = *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 12);
          v17 = *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 8);
        }
        v16 |= *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 12);
      }
      else
      {
        v16 = *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 12);
        v17 = *(_DWORD *)(HalpInterruptTargets + 24LL * v23 + 8);
        v15 = 1;
      }
      if ( (int)KeEnumerateNextProcessor(&v23, v18) < 0 )
        goto LABEL_16;
    }
    goto LABEL_44;
  }
LABEL_16:
  v12 = *a1;
  *a2 = 1;
  if ( v12 )
  {
    a2[2] = 3;
    a2[20] = v9;
  }
  else
  {
    a2[2] = 1;
    a2[21] = a1[10];
    a2[20] = a1[11];
    a2[22] = *((unsigned __int16 *)a1 + 24);
  }
  return 0LL;
}

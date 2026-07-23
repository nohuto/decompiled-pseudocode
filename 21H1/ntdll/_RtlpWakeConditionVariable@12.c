/*
 * XREFs of _RtlpWakeConditionVariable@12 @ 0x4B2F1BC1
 * Callers:
 *     _RtlWakeConditionVariable@4 @ 0x4B2F1B80 (_RtlWakeConditionVariable@4.c)
 *     _RtlpOptimizeConditionVariableWaitList@8 @ 0x4B3661B5 (_RtlpOptimizeConditionVariableWaitList@8.c)
 *     _RtlpWakeSingle@8 @ 0x4B366206 (_RtlpWakeSingle@8.c)
 * Callees:
 *     _RtlpQueueWaitBlockToSRWLock@8 @ 0x4B2F1CB0 (_RtlpQueueWaitBlockToSRWLock@8.c)
 *     _ZwAlertThreadByThreadId@4 @ 0x4B2F3080 (_ZwAlertThreadByThreadId@4.c)
 */

int __fastcall RtlpWakeConditionVariable(volatile signed __int32 *a1, int a2, signed __int32 a3)
{
  signed __int32 v3; // edi
  signed __int32 v4; // esi
  signed __int32 v6; // ecx
  char v7; // al
  _DWORD *v8; // ecx
  unsigned int i; // ebx
  int *v10; // edx
  int *v11; // ecx
  unsigned int v12; // edi
  int *v13; // eax
  bool v14; // cc
  int result; // eax
  int *v16; // esi
  int *v17; // edi
  _DWORD *v18; // eax
  int **v19; // [esp+Ch] [ebp-20h]
  int *v21; // [esp+14h] [ebp-18h] BYREF
  signed __int32 v22; // [esp+18h] [ebp-14h]
  int v23; // [esp+1Ch] [ebp-10h]
  volatile signed __int32 *v24; // [esp+20h] [ebp-Ch]
  unsigned int v25; // [esp+24h] [ebp-8h]
  int *v26; // [esp+28h] [ebp-4h]

  v21 = 0;
  v25 = 0;
  v3 = a3;
  v4 = a3;
  v26 = (int *)&v21;
  v6 = a3;
  v24 = a1;
  v7 = a3;
  v23 = a3;
  while ( 1 )
  {
    v22 = v3;
    v8 = (_DWORD *)(v6 & 0xFFFFFFF0);
    if ( (v7 & 7) == 7 )
      break;
    v19 = (int **)(v8 + 1);
    for ( i = a2 + (v3 & 7); !v8[1]; v8[2] = v18 )
    {
      v18 = v8;
      v8 = (_DWORD *)*v8;
    }
    v10 = (int *)v8[1];
    if ( i <= v25 )
      goto LABEL_22;
    v11 = v26;
    v12 = v25;
    do
    {
      v13 = (int *)v10[2];
      if ( !v13 )
        break;
      *v11 = (int)v10;
      ++v12;
      *v10 = 0;
      v11 = v10;
      *v19 = v13;
      v10 = v13;
      *v13 = 0;
    }
    while ( i > v12 );
    v4 = v23;
    v14 = i <= v12;
    v25 = v12;
    v3 = v22;
    v26 = v11;
    if ( v14 )
    {
LABEL_22:
      a1 = v24;
      result = _InterlockedCompareExchange(v24, v4 & 0xFFFFFFF0, v3);
      v4 = result;
      v23 = result;
      if ( result == v3 )
        goto LABEL_10;
    }
    else
    {
      result = _InterlockedCompareExchange(v24, 0, v22);
      v4 = result;
      v23 = result;
      if ( result == v3 )
      {
        *v26 = (int)v10;
        *v10 = 0;
        goto LABEL_10;
      }
      a1 = v24;
    }
    v3 = v4;
    v6 = v4;
    v7 = v4;
  }
  result = _InterlockedExchange(a1, 0) & 0xFFFFFFF0;
  *v26 = result;
LABEL_10:
  v16 = v21;
  if ( v21 )
  {
    do
    {
      v17 = (int *)*v16;
      if ( !_interlockedbittestandreset(v16 + 5, 1u) )
      {
        if ( !v16[6] || (result = RtlpQueueWaitBlockToSRWLock(v16), !(_BYTE)result) )
        {
          _InterlockedOr(v16 + 5, 4u);
          result = ZwAlertThreadByThreadId((HANDLE)v16[3]);
        }
      }
      v16 = v17;
    }
    while ( v17 );
  }
  return result;
}

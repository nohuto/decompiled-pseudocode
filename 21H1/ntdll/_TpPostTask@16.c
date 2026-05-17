/*
 * XREFs of _TpPostTask@16 @ 0x4B2C1C3F
 * Callers:
 *     _TppDirectExecuteCallback@8 @ 0x4B2AB3E0 (_TppDirectExecuteCallback@8.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _TppWorkPost@4 @ 0x4B2C1B97 (_TppWorkPost@4.c)
 *     _RtlQueueWorkItem@12 @ 0x4B2E8AE0 (_RtlQueueWorkItem@12.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _ZwReleaseWorkerFactoryWorker@4 @ 0x4B2F4070 (_ZwReleaseWorkerFactoryWorker@4.c)
 *     _TppAdjustRunningThreadGoalWithLock@4 @ 0x4B384257 (_TppAdjustRunningThreadGoalWithLock@4.c)
 */

unsigned int __fastcall TpPostTask(int a1, int a2, int a3, int a4)
{
  int v4; // edi
  signed __int32 v6; // edx
  signed __int32 v7; // eax
  int *v8; // ebx
  int v9; // esi
  int **v10; // eax
  int v11; // eax
  int *ThreadPoolData; // eax
  int v13; // eax
  unsigned int *v14; // eax
  int v15; // edi
  unsigned int v16; // esi
  unsigned int result; // eax
  signed __int64 v18; // rax
  unsigned int v19; // ebx
  signed __int64 v20; // rax
  signed __int32 v21; // ecx
  int v22; // [esp+10h] [ebp-18h]
  signed __int32 v23; // [esp+14h] [ebp-14h]
  unsigned int v24; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+18h] [ebp-10h]
  volatile signed __int64 *v28; // [esp+1Ch] [ebp-Ch]
  unsigned __int64 v29; // [esp+20h] [ebp-8h]

  v4 = a2;
  v22 = a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 28) & 2) != 0 )
    {
      v4 = TppPoolpSerializedPool;
      v22 = TppPoolpSerializedPool;
      goto LABEL_34;
    }
    v4 = TppPoolpGlobalPool;
    v22 = TppPoolpGlobalPool;
  }
  if ( v4 == TppPoolpSerializedPool )
LABEL_34:
    a3 = 1;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = *(_DWORD *)(v4 + 260);
  while ( 1 )
  {
    v23 = v7;
    if ( v7 != -2 )
      break;
    v21 = v6;
LABEL_27:
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 260), v21, v7);
    if ( v7 == v23 )
      goto LABEL_6;
  }
  if ( v7 != v6 && v7 != -1 )
  {
    v21 = -1;
    goto LABEL_27;
  }
LABEL_6:
  v8 = (int *)(a1 + 12);
  v9 = *(_DWORD *)(v4 + 4 * a3 + 16) + 12 * v6;
  RtlAcquireSRWLockExclusive(v9 + 8);
  v10 = *(int ***)(v9 + 4);
  if ( *v10 != (int *)v9 )
    __fastfail(3u);
  v8[1] = (int)v10;
  *v8 = v9;
  *v10 = v8;
  *(_DWORD *)(v9 + 4) = v8;
  RtlReleaseSRWLockExclusive(v9 + 8);
  if ( !v4 || (v11 = *(_DWORD *)(v4 + 272)) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( *(_DWORD *)(v4 + 256) != v11 )
  {
    RtlAcquireSRWLockExclusive(v4 + 44);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive(v4 + 44);
  }
  v26 = 0;
  ThreadPoolData = (int *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v13 = *ThreadPoolData;
    if ( *(_DWORD *)(v13 + 24) == v4 && *(_DWORD *)(v13 + 64) == 3 )
    {
      *(_DWORD *)(v13 + 64) = 4;
      v26 = 1;
    }
  }
  v14 = (unsigned int *)(v4 + 8);
  v15 = v26;
  v16 = *v14;
  v28 = (volatile signed __int64 *)v14;
  result = v14[1];
  do
  {
    HIDWORD(v18) = result;
    v19 = v16;
    v29 = __PAIR64__(result, v16);
    v24 = result + 1;
    if ( (v16 & 0xFFFF0000) != 0 || v15 )
    {
      v27 = 0;
    }
    else
    {
      v27 = 1;
      v16 = ((v16 & 0xFFFF0000) + 0x10000) | (unsigned __int16)v16;
    }
    LODWORD(v18) = v19;
    v20 = _InterlockedCompareExchange64(v28, __SPAIR64__(v24, v16), v18);
    v16 = v20;
    result = HIDWORD(v20);
  }
  while ( __PAIR64__(HIDWORD(v20), v16) != v29 );
  if ( v27 )
    return ZwReleaseWorkerFactoryWorker(*(_DWORD *)(v22 + 36));
  return result;
}

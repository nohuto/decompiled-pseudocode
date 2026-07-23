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

NTSTATUS __fastcall TpPostTask(int a1, _RTL_SRWLOCK *a2, int a3, int a4)
{
  _RTL_SRWLOCK *v4; // edi
  signed __int32 v6; // edx
  signed __int32 Value; // eax
  _RTL_SRWLOCK **v8; // ebx
  _RTL_SRWLOCK *v9; // esi
  _RTL_SRWLOCK **v10; // eax
  unsigned int v11; // eax
  int *ThreadPoolData; // eax
  int v13; // eax
  unsigned int *v14; // eax
  int v15; // edi
  unsigned int v16; // esi
  NTSTATUS result; // eax
  signed __int64 v18; // rax
  unsigned int v19; // ebx
  signed __int64 v20; // rax
  signed __int32 v21; // ecx
  int v22; // [esp+10h] [ebp-18h]
  signed __int32 v23; // [esp+14h] [ebp-14h]
  NTSTATUS v24; // [esp+14h] [ebp-14h]
  int v26; // [esp+18h] [ebp-10h]
  int v27; // [esp+18h] [ebp-10h]
  volatile signed __int64 *v28; // [esp+1Ch] [ebp-Ch]
  unsigned __int64 v29; // [esp+20h] [ebp-8h]

  v4 = a2;
  v22 = (int)a2;
  if ( !a2 )
  {
    if ( a4 && (*(_BYTE *)(a4 + 28) & 2) != 0 )
    {
      v4 = (_RTL_SRWLOCK *)TppPoolpSerializedPool;
      v22 = TppPoolpSerializedPool;
      goto LABEL_34;
    }
    v4 = (_RTL_SRWLOCK *)TppPoolpGlobalPool;
    v22 = TppPoolpGlobalPool;
  }
  if ( v4 == (_RTL_SRWLOCK *)TppPoolpSerializedPool )
LABEL_34:
    a3 = 1;
  v6 = *(_DWORD *)(a1 + 4);
  Value = v4[65].Value;
  while ( 1 )
  {
    v23 = Value;
    if ( Value != -2 )
      break;
    v21 = v6;
LABEL_27:
    Value = _InterlockedCompareExchange((volatile signed __int32 *)&v4[65], v21, Value);
    if ( Value == v23 )
      goto LABEL_6;
  }
  if ( Value != v6 && Value != -1 )
  {
    v21 = -1;
    goto LABEL_27;
  }
LABEL_6:
  v8 = (_RTL_SRWLOCK **)(a1 + 12);
  v9 = (_RTL_SRWLOCK *)(v4[a3 + 4].Value + 12 * v6);
  RtlAcquireSRWLockExclusive(v9 + 2);
  v10 = (_RTL_SRWLOCK **)v9[1].Value;
  if ( *v10 != v9 )
    __fastfail(3u);
  v8[1] = (_RTL_SRWLOCK *)v10;
  *v8 = v9;
  *v10 = (_RTL_SRWLOCK *)v8;
  v9[1].Value = (unsigned int)v8;
  RtlReleaseSRWLockExclusive(v9 + 2);
  if ( !v4 || (v11 = v4[68].Value) == 0 )
    v11 = MEMORY[0x7FFE03C0];
  if ( v4[64].Value != v11 )
  {
    RtlAcquireSRWLockExclusive(v4 + 11);
    TppAdjustRunningThreadGoalWithLock(v4);
    RtlReleaseSRWLockExclusive(v4 + 11);
  }
  v26 = 0;
  ThreadPoolData = (int *)NtCurrentTeb()->ThreadPoolData;
  if ( ThreadPoolData )
  {
    v13 = *ThreadPoolData;
    if ( *(_RTL_SRWLOCK **)(v13 + 24) == v4 && *(_DWORD *)(v13 + 64) == 3 )
    {
      *(_DWORD *)(v13 + 64) = 4;
      v26 = 1;
    }
  }
  v14 = (unsigned int *)&v4[2];
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
    return ZwReleaseWorkerFactoryWorker(*(HANDLE *)(v22 + 36));
  return result;
}

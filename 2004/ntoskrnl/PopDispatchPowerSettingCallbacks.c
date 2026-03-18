/*
 * XREFs of PopDispatchPowerSettingCallbacks @ 0x1406A7380
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x1402071B0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14020AC90 (KeReleaseGuardedMutex.c)
 *     PopIncrementPowerSettingPendingUpdates @ 0x1402DEC48 (PopIncrementPowerSettingPendingUpdates.c)
 *     PopDecrementPowerSettingPendingUpdates @ 0x1402DECD0 (PopDecrementPowerSettingPendingUpdates.c)
 *     PopUnregisterPowerSettingCallback @ 0x14037E99C (PopUnregisterPowerSettingCallback.c)
 *     PopCallPowerSettingCallback @ 0x1406A4CB0 (PopCallPowerSettingCallback.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 PopDispatchPowerSettingCallbacks()
{
  __int64 v0; // rbx
  PVOID *v1; // rdi
  __int64 v2; // r14
  __int64 *v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 *v6; // rbp
  char v7; // cl
  PVOID *v8; // rbx
  char v10; // al
  _QWORD *v11; // rdx
  __int64 v12; // r8
  PVOID *v14; // rax

  PopIncrementPowerSettingPendingUpdates(0);
  PopDecrementPowerSettingPendingUpdates(1);
  v0 = dword_140C238AC;
  ExAcquireFastMutex(&PopSettingLock);
  v1 = (PVOID *)PopPowerSettings;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v2 = v0;
    while ( 1 )
    {
      v3 = (__int64 *)(v1 + 2);
      v4 = (__int64 *)v1[2];
      while ( v4 != v3 )
      {
        if ( *((_BYTE *)v4 + 104) )
        {
          v4 = (__int64 *)*v4;
        }
        else
        {
          *((_BYTE *)v4 + 104) = 1;
          v5 = (__int64)v1[v2 + 8];
          if ( v4[9] != v5 )
            PopCallPowerSettingCallback(v4, v5);
          v6 = (__int64 *)*v4;
          *((_BYTE *)v4 + 104) = 0;
          if ( *((_BYTE *)v4 + 33) || *((_BYTE *)v4 + 32) )
            PopUnregisterPowerSettingCallback(v4);
          v4 = v6;
        }
      }
      v7 = 0;
      if ( (__int64 *)*v3 == v3 && !*((_DWORD *)v1 + 14) && !*((_DWORD *)v1 + 15) )
      {
        v10 = 1;
        v11 = v1 + 8;
        v12 = 3LL;
        do
        {
          v7 = 0;
          if ( *v11++ == 0LL )
            v7 = v10;
          v10 = v7;
          --v12;
        }
        while ( v12 );
      }
      v8 = (PVOID *)*v1;
      if ( v7 )
      {
        if ( v8[1] != v1 || (v14 = (PVOID *)v1[1], *v14 != v1) )
          __fastfail(3u);
        *v14 = v8;
        v8[1] = v14;
        ExFreePoolWithTag(v1, 0x74655350u);
      }
      if ( v8 == &PopPowerSettings )
        break;
      v1 = v8;
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
  return PopDecrementPowerSettingPendingUpdates(0);
}

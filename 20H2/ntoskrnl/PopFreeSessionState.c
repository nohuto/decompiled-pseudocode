/*
 * XREFs of PopFreeSessionState @ 0x140774DB0
 * Callers:
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14021ECD0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140220130 (ExAcquireFastMutex.c)
 *     PopFreeRegistration @ 0x140774E64 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // edi
  _DWORD **v3; // rbx
  _DWORD *v4; // rax
  int v5; // ecx
  __int64 v6; // rsi
  _QWORD *v7; // rcx

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (_DWORD **)((char *)&PopSessionSpecificLists + 16 * i);
    v4 = *v3;
    while ( v4 != (_DWORD *)v3 )
    {
      if ( v4[12] == a1 )
      {
        v5 = v4[13];
        v6 = *(_QWORD *)v4;
        if ( (v5 & 2) != 0 )
        {
          v4[13] = v5 | 4;
        }
        else
        {
          if ( *(_DWORD **)(v6 + 8) != v4 || (v7 = (_QWORD *)*((_QWORD *)v4 + 1), (_DWORD *)*v7 != v4) )
            __fastfail(3u);
          *v7 = v6;
          *(_QWORD *)(v6 + 8) = v7;
          PopFreeRegistration(v4);
        }
        v4 = (_DWORD *)v6;
      }
      else
      {
        v4 = *(_DWORD **)v4;
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}

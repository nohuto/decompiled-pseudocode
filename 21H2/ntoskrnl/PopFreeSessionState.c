/*
 * XREFs of PopFreeSessionState @ 0x1407EC100
 * Callers:
 *     NtPowerInformation @ 0x14074F950 (NtPowerInformation.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PopFreeRegistration @ 0x1407EC1B0 (PopFreeRegistration.c)
 */

void __fastcall PopFreeSessionState(int a1)
{
  unsigned int i; // edi
  _DWORD **v3; // rbx
  _DWORD *j; // rax
  __int64 v5; // rsi
  int v6; // ecx
  _QWORD *v7; // rcx

  ExAcquireFastMutex(&PopSettingLock);
  for ( i = 0; i < 2; ++i )
  {
    v3 = (_DWORD **)((char *)&PopSessionSpecificLists + 16 * i);
    for ( j = *v3; j != (_DWORD *)v3; j = (_DWORD *)v5 )
    {
      v5 = *(_QWORD *)j;
      if ( j[12] == a1 )
      {
        v6 = j[13];
        if ( (v6 & 2) != 0 )
        {
          j[13] = v6 | 4;
        }
        else
        {
          if ( *(_DWORD **)(v5 + 8) != j || (v7 = (_QWORD *)*((_QWORD *)j + 1), (_DWORD *)*v7 != j) )
            __fastfail(3u);
          *v7 = v5;
          *(_QWORD *)(v5 + 8) = v7;
          PopFreeRegistration(j);
        }
      }
    }
  }
  KeReleaseGuardedMutex(&PopSettingLock);
}

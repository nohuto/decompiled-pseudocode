/*
 * XREFs of PopAllowAwayModeSettingCallback @ 0x1407C1380
 * Callers:
 *     <none>
 * Callees:
 *     PopSetSystemState @ 0x1403A3240 (PopSetSystemState.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopAllowAwayModeSettingCallback(_QWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r9

  v6 = -1073741811;
  PopAcquirePolicyLock((_DWORD)a1);
  v9 = *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_ALLOW_AWAYMODE.Data1 == *a1 )
    v9 = *(_QWORD *)GUID_ALLOW_AWAYMODE.Data4 - a1[1];
  if ( !v9 )
  {
    v8 = 4LL;
    if ( a3 == 4 )
    {
      if ( a2 )
      {
        if ( *a2 )
        {
          byte_140C238B2 = 1;
        }
        else
        {
          byte_140C238B2 = 0;
          if ( byte_140C238B1 )
            PopSetSystemState(4, 7u);
        }
        v6 = 0;
      }
    }
  }
  PopReleasePolicyLock(v8, v7);
  return v6;
}

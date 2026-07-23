/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x1407C9194
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x1407C9058 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     CmpVolumeContextUnlockShared @ 0x1407C9224 (CmpVolumeContextUnlockShared.c)
 *     CmpVolumeContextLockShared @ 0x1407C9258 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockExclusive @ 0x1407C9340 (CmpVolumeContextUnlockExclusive.c)
 *     PpPagePathAssign @ 0x1408A1100 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x1408A1118 (PpPagePathRelease.c)
 */

__int64 __fastcall CmpVolumeContextSendDeviceUsageNotification(__int64 a1)
{
  int v2; // edi
  char v4; // si

  if ( *(_QWORD *)(a1 + 48) )
  {
    CmpVolumeContextLockShared();
    if ( *(_BYTE *)(a1 + 64) )
    {
      v2 = 0;
      CmpVolumeContextUnlockShared(a1);
    }
    else
    {
      CmpVolumeContextUnlockShared(a1);
      v2 = PpPagePathAssign(*(_QWORD *)(a1 + 48));
      if ( v2 >= 0 )
      {
        v4 = 1;
        ExAcquirePushLockExclusiveEx(a1 + 56, 0LL);
        if ( !*(_BYTE *)(a1 + 64) )
        {
          *(_BYTE *)(a1 + 64) = 1;
          v4 = 0;
        }
        CmpVolumeContextUnlockExclusive(a1);
        v2 = 0;
        if ( v4 )
          PpPagePathRelease(*(_QWORD *)(a1 + 48));
      }
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}

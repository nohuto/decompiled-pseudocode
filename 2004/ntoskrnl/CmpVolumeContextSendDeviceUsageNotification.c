/*
 * XREFs of CmpVolumeContextSendDeviceUsageNotification @ 0x1407B6384
 * Callers:
 *     CmpHandlePageFileOpenNotification @ 0x1407B6248 (CmpHandlePageFileOpenNotification.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     CmpVolumeContextUnlockShared @ 0x1407B6414 (CmpVolumeContextUnlockShared.c)
 *     CmpVolumeContextLockShared @ 0x1407B6448 (CmpVolumeContextLockShared.c)
 *     CmpVolumeContextUnlockExclusive @ 0x1407B6530 (CmpVolumeContextUnlockExclusive.c)
 *     PpPagePathAssign @ 0x14089DEA0 (PpPagePathAssign.c)
 *     PpPagePathRelease @ 0x14089DEB8 (PpPagePathRelease.c)
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

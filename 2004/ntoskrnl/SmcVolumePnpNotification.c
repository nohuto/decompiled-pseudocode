/*
 * XREFs of SmcVolumePnpNotification @ 0x14092AFD0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     SmcCacheDelete @ 0x140929E74 (SmcCacheDelete.c)
 *     SmcCacheReference @ 0x14092A10C (SmcCacheReference.c)
 */

__int64 __fastcall SmcVolumePnpNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  __int64 v4; // rax
  unsigned int v5; // esi
  _DWORD *v6; // r14
  unsigned int v7; // ebx
  struct _EX_RUNDOWN_REF v8; // rax
  unsigned __int64 Count; // r15

  v2 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4;
  if ( !v2 )
    goto LABEL_7;
  v4 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4;
  if ( !v4 )
  {
LABEL_7:
    v5 = 0;
    v6 = &unk_140D241D8;
    do
    {
      v7 = v5 | (16 * (*v6 & 0xFFF));
      v8.Count = SmcCacheReference((__int64)&unk_140D241C0, v7).Count;
      Count = v8.Count;
      if ( v8.Count )
      {
        if ( *(_QWORD *)(v8.Count + 48) != NotificationStructure[3] )
          Count = 0LL;
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&unk_140D241C8 + 4 * (v7 & 0xF));
        if ( Count )
          SmcCacheDelete((__int64)&unk_140D241C0);
      }
      ++v5;
      v6 += 8;
    }
    while ( v5 < 0x10 );
  }
  return 0LL;
}

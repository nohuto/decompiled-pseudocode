/*
 * XREFs of EtwpGetSchematizedFilterSize @ 0x1406DB618
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x140638390 (EtwpAddRegEntryToGroup.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpBuildNotificationPacket @ 0x1406B89BC (EtwpBuildNotificationPacket.c)
 *     EtwpCalculateUpdateNotification @ 0x1406BB810 (EtwpCalculateUpdateNotification.c)
 *     EtwpRegisterUMGuid @ 0x1406DB250 (EtwpRegisterUMGuid.c)
 *     EtwpRegisterProvider @ 0x140762EE0 (EtwpRegisterProvider.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpGetSchematizedFilterSize(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r11
  unsigned int v3; // r10d
  unsigned int v5; // r8d
  _DWORD *v6; // r9
  __int64 v7; // r11

  v2 = *(_QWORD *)(a1 + 384);
  v3 = 0;
  if ( v2 )
  {
    v5 = 0;
    v6 = (_DWORD *)(a1 + 128);
    v7 = v2 + 88;
    do
    {
      if ( *v6 && *(_QWORD *)v7 && ((unsigned __int8)(1 << v5) & a2) != 0 )
        v3 += (*(_DWORD *)(*(_QWORD *)v7 + 16LL) + 7) & 0xFFFFFFF8;
      ++v5;
      v6 += 8;
      v7 += 104LL;
    }
    while ( v5 < 8 );
  }
  return v3;
}

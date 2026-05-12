/*
 * XREFs of RaidRemovePendingDeviceQueue @ 0x1C0016F10
 * Callers:
 *     RaidRemoveIoQueue @ 0x1C0016EE8 (RaidRemoveIoQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C003350C (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 *__fastcall RaidRemovePendingDeviceQueue(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  __int64 v5; // r8
  __int64 *v6; // rbx
  _QWORD *v7; // rax
  __int64 v9; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  bool v13; // zf

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v4 = (_QWORD *)(a1 + 96);
  LOBYTE(v5) = v2;
  v6 = *(__int64 **)(a1 + 96);
  if ( v6 == (__int64 *)(a1 + 96) )
  {
    v7 = (_QWORD *)(a1 + 80);
    v6 = *(__int64 **)(a1 + 80);
    if ( v6 == (__int64 *)(a1 + 80) )
    {
      v6 = 0LL;
    }
    else
    {
      if ( (_QWORD *)v6[1] != v7 )
        goto LABEL_17;
      v9 = *v6;
      if ( *(__int64 **)(*v6 + 8) != v6 )
        goto LABEL_17;
      *v7 = v9;
      *(_QWORD *)(v9 + 8) = v7;
    }
  }
  else
  {
    if ( (_QWORD *)v6[1] != v4 )
      goto LABEL_17;
    v3 = *v6;
    if ( *(__int64 **)(*v6 + 8) != v6 )
      goto LABEL_17;
    *v4 = v3;
    *(_QWORD *)(v3 + 8) = v4;
  }
  if ( v6 && (*((_BYTE *)v6 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v6, v3, v5);
    v11 = *QosEntryForDeviceEntry;
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) == QosEntryForDeviceEntry )
    {
      v12 = (_QWORD *)QosEntryForDeviceEntry[1];
      if ( (_QWORD *)*v12 == QosEntryForDeviceEntry )
      {
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        goto LABEL_5;
      }
    }
LABEL_17:
    __fastfail(3u);
  }
LABEL_5:
  if ( v6 )
  {
    v13 = (*((_BYTE *)v6 + 22) & 6) == 0;
    *((_BYTE *)v6 + 20) = 0;
    if ( v13 )
      --*(_DWORD *)(a1 + 16);
    else
      --*(_DWORD *)(a1 + 20);
    if ( (*((_BYTE *)v6 + 22) & 8) != 0 )
      --*(_DWORD *)(a1 + 24);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v5);
  return v6;
}

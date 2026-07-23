/*
 * XREFs of PiDrvDbCreateNode @ 0x1407A3BCC
 * Callers:
 *     PiDrvDbRegisterNode @ 0x1407A3A78 (PiDrvDbRegisterNode.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     ExInitializeResourceLite @ 0x1402C1550 (ExInitializeResourceLite.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwCreateEvent @ 0x1403FAE80 (ZwCreateEvent.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpAllocateStringRoutine @ 0x1406006F0 (ExpAllocateStringRoutine.c)
 *     _SysCtxRegOpenKey @ 0x1406374BC (_SysCtxRegOpenKey.c)
 *     RtlCreateUnicodeString @ 0x140669AF0 (RtlCreateUnicodeString.c)
 *     PiDrvDbDestroyNode @ 0x1408B5E54 (PiDrvDbDestroyNode.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbCreateNode(PCWSTR Source, int a2, __int64 a3, const WCHAR *a4, __int64 *a5)
{
  PVOID PoolWithTag; // rax
  __int64 v9; // rdi
  _WORD *v10; // r15
  unsigned __int16 v11; // ax
  PVOID StringRoutine; // rax
  int appended; // ebx
  unsigned __int16 v14; // ax
  PVOID v15; // rax
  int v16; // eax
  __int64 *v17; // rax
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+40h] BYREF

  Handle = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x208uLL, 0x62647050u);
  v9 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, 0x208uLL);
  v10 = (_WORD *)(v9 + 16);
  *(_DWORD *)(v9 + 64) = a2;
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v9 + 16), Source) )
    goto LABEL_22;
  v11 = *v10 + 38;
  *(_WORD *)(v9 + 32) = 0;
  *(_WORD *)(v9 + 34) = v11;
  StringRoutine = ExpAllocateStringRoutine(v11);
  *(_QWORD *)(v9 + 40) = StringRoutine;
  if ( !StringRoutine )
    goto LABEL_22;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 32), L"\\REGISTRY\\MACHINE\\");
  if ( appended < 0 )
    goto LABEL_17;
  appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 32), Source);
  if ( appended < 0 )
    goto LABEL_17;
  if ( !a4 )
  {
    v14 = *v10 + 58;
    *(_WORD *)(v9 + 48) = 0;
    *(_WORD *)(v9 + 50) = v14;
    v15 = ExpAllocateStringRoutine(v14);
    *(_QWORD *)(v9 + 56) = v15;
    if ( v15 )
    {
      appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 48), L"\\SystemRoot\\System32\\config\\");
      if ( appended < 0 )
        goto LABEL_17;
      appended = RtlAppendUnicodeToString((PUNICODE_STRING)(v9 + 48), Source);
      if ( appended < 0 )
        goto LABEL_17;
      goto LABEL_10;
    }
LABEL_22:
    appended = -1073741670;
    goto LABEL_17;
  }
  if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v9 + 48), a4) )
    goto LABEL_22;
LABEL_10:
  v16 = *(_DWORD *)(v9 + 64);
  if ( (v16 & 4) == 0 )
  {
LABEL_14:
    if ( (v16 & 0x10) == 0
      || (appended = SysCtxRegOpenKey(0LL, 0LL, *(_QWORD *)(v9 + 40), 0, 0x2000000u, (__int64)&Handle), appended >= 0)
      && (appended = SysCtxRegOpenKey(0LL, (__int64)Handle, (__int64)L"DriverDatabase", 0, 0x2000000u, v9 + 72),
          ZwClose(Handle),
          appended >= 0) )
    {
      *(_DWORD *)(v9 + 496) = 259;
      v17 = (__int64 *)qword_140C43108;
      if ( *(__int64 **)qword_140C43108 != &PiDrvDbNodeList )
        __fastfail(3u);
      *(_QWORD *)(v9 + 8) = qword_140C43108;
      *(_QWORD *)v9 = &PiDrvDbNodeList;
      *v17 = v9;
      qword_140C43108 = v9;
      *a5 = v9;
      v9 = 0LL;
    }
    goto LABEL_17;
  }
  appended = ExInitializeResourceLite((PERESOURCE)(v9 + 88));
  if ( appended >= 0 )
  {
    *(_BYTE *)(v9 + 192) = 1;
    KeInitializeTimerEx((PKTIMER)(v9 + 264), NotificationTimer);
    KeInitializeDpc((PRKDPC)(v9 + 328), (PKDEFERRED_ROUTINE)PiDrvDbUnloadNodeDpcRoutine, (PVOID)v9);
    *(_QWORD *)(v9 + 424) = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 512;
    ObjectAttributes.ObjectName = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    appended = ZwCreateEvent((PHANDLE)(v9 + 472), 0x1F0003u, &ObjectAttributes, NotificationEvent, 1u);
    if ( appended >= 0 )
    {
      *(_BYTE *)(v9 + 489) = 1;
      *(_QWORD *)(v9 + 480) = 0xFFFFFFFFLL;
      v16 = *(_DWORD *)(v9 + 64);
      goto LABEL_14;
    }
  }
LABEL_17:
  if ( v9 )
    PiDrvDbDestroyNode((PVOID)v9);
  return (unsigned int)appended;
}

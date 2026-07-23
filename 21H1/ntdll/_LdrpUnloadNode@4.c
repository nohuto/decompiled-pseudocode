/*
 * XREFs of _LdrpUnloadNode@4 @ 0x4B2D96F3
 * Callers:
 *     _LdrUnloadDll@4 @ 0x4B2CCD40 (_LdrUnloadDll@4.c)
 *     _LdrpDecrementModuleLoadCountEx@8 @ 0x4B2D9697 (_LdrpDecrementModuleLoadCountEx@8.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _LdrpDereferenceModule@4 @ 0x4B2CD3B1 (_LdrpDereferenceModule@4.c)
 *     _LdrpDecrementNodeLoadCountLockHeld@12 @ 0x4B2CD933 (_LdrpDecrementNodeLoadCountLockHeld@12.c)
 *     _LdrpSendDllNotifications@12 @ 0x4B2D0BFC (_LdrpSendDllNotifications@12.c)
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 *     _LdrpRemoveDataTableEntry@4 @ 0x4B2D9908 (_LdrpRemoveDataTableEntry@4.c)
 *     _RtlRbRemoveNode@8 @ 0x4B2D9B10 (_RtlRbRemoveNode@8.c)
 *     _LdrUnloadAlternateResourceModuleEx@8 @ 0x4B2DA360 (_LdrUnloadAlternateResourceModuleEx@8.c)
 *     _LdrpProcessDetachNode@4 @ 0x4B2DA4B3 (_LdrpProcessDetachNode@4.c)
 *     _LdrpUnmapModule@4 @ 0x4B2E67DF (_LdrpUnmapModule@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _AVrfDllUnloadNotification@4 @ 0x4B33849A (_AVrfDllUnloadNotification@4.c)
 */

struct _PEB *__thiscall LdrpUnloadNode(_DWORD *this)
{
  struct _PEB *result; // eax
  _DWORD *v2; // esi
  void (__thiscall *v3)(_DWORD, int); // ebx
  _DWORD **v4; // ecx
  _DWORD *v5; // edi
  _DWORD *v6; // ebx
  _DWORD *v7; // edi
  int v8; // ecx
  _DWORD *i; // eax
  int v10; // edi
  _DWORD *v11; // edi
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  _DWORD **v14; // ecx
  _DWORD *v15; // esi
  _DWORD *v16; // [esp+10h] [ebp-10h]
  struct _PEB *v17; // [esp+14h] [ebp-Ch]
  int v19; // [esp+1Ch] [ebp-4h] BYREF

  result = NtCurrentPeb();
  v2 = this;
  v17 = result;
  v3 = 0;
  if ( this[8] == -4 )
  {
LABEL_12:
    this[8] = -1;
    LdrpProcessDetachNode();
    goto LABEL_13;
  }
  if ( this[8] != 7 )
  {
    if ( this[8] != 9 )
      goto LABEL_4;
    goto LABEL_12;
  }
LABEL_13:
  if ( g_ShimsEnabled )
    v3 = (void (__thiscall *)(_DWORD, int))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                   g_pfnSE_LdrEntryRemoved,
                                                                   32 - (MEMORY[0x7FFE0330] & 0x1F)));
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  for ( i = (_DWORD *)*v2; ; i = (_DWORD *)*v16 )
  {
    v16 = i;
    if ( i == v2 )
      break;
    v10 = (int)(i - 21);
    if ( (*(_BYTE *)(i - 8) & 8) != 0 )
    {
      LdrpSendDllNotifications((int)(i - 21), 2, v8);
      if ( v3 )
        v3(v3, v10);
      SbUpdateSwitchContextBasedOnDll(v10, 1);
      if ( (v17->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(v10);
    }
    if ( (ShowSnaps & 5) != 0 )
      LdrpLogDbgPrint("minkernel\\ntdll\\ldrsnap.c", 3293, "LdrpUnloadNode", 2, "Unmapping DLL \"%wZ\"\n", v10 + 36);
    LdrUnloadAlternateResourceModuleEx(*(PVOID *)(v10 + 24), 0);
  }
  result = (struct _PEB *)RtlLeaveCriticalSection(&LdrpDllNotificationLock);
LABEL_4:
  while ( 1 )
  {
    v4 = (_DWORD **)v2[6];
    if ( !v4 )
      break;
    v11 = *v4;
    if ( *v4 == v4 )
    {
      v2[6] = 0;
    }
    else
    {
      result = (struct _PEB *)*v11;
      *v4 = (_DWORD *)*v11;
    }
    if ( !v11 )
      break;
    RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
    v12 = (_DWORD *)v11[1];
    v13 = v11 + 2;
    v14 = (_DWORD **)v12[7];
    if ( *v14 != v11 + 2 )
    {
      v15 = *v14;
      do
      {
        v14 = (_DWORD **)v15;
        v15 = (_DWORD *)*v15;
      }
      while ( v15 != v13 );
      v2 = this;
    }
    *v14 = (_DWORD *)*v13;
    if ( (_DWORD *)v12[7] == v13 )
      v12[7] = v13 != v14 ? v14 : 0;
    LdrpDecrementNodeLoadCountLockHeld(v12, 0, &v19);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v19 )
      LdrpUnloadNode(v12);
    result = (struct _PEB *)RtlFreeHeap(LdrpHeap, 0, v11);
  }
  v5 = (_DWORD *)*v2;
  v2[8] = -2;
  if ( v5 != v2 )
  {
    do
    {
      v6 = (_DWORD *)*v5;
      v7 = v5 - 21;
      v7[13] |= 2u;
      RtlAcquireSRWLockExclusive(&LdrpModuleDatatableLock);
      LdrpRemoveDataTableEntry(v7);
      if ( *((char *)v7 + 52) < 0 )
      {
        RtlRbRemoveNode(&LdrpMappingInfoIndex, (PRTL_BALANCED_NODE)(v7 + 29));
        RtlRbRemoveNode(&LdrpModuleBaseAddressIndex, (PRTL_BALANCED_NODE)(v7 + 26));
        v7[8] = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v7);
      result = (struct _PEB *)LdrpDereferenceModule((char *)v7);
      v5 = v6;
    }
    while ( v6 != v2 );
  }
  return result;
}

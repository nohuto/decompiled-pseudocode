/*
 * XREFs of LdrpUnloadNode @ 0x18006B528
 * Callers:
 *     LdrpDecrementModuleLoadCountEx @ 0x18000FC98 (LdrpDecrementModuleLoadCountEx.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 * Callees:
 *     LdrpDecrementNodeLoadCountLockHeld @ 0x18000FD28 (LdrpDecrementNodeLoadCountLockHeld.c)
 *     RtlReleaseSRWLockExclusive @ 0x180012C70 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAcquireSRWLockExclusive @ 0x1800290A0 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002A0A0 (RtlRbRemoveNode.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpDereferenceModule @ 0x1800302E4 (LdrpDereferenceModule.c)
 *     LdrpSendDllNotifications @ 0x18003DD70 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE04 (SbUpdateSwitchContextBasedOnDll.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18006B810 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpProcessDetachNode @ 0x18006BA04 (LdrpProcessDetachNode.c)
 *     LdrpUnmapModule @ 0x180071DE0 (LdrpUnmapModule.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 *     LdrpLogDbgPrint @ 0x1800CDC88 (LdrpLogDbgPrint.c)
 *     AVrfDllUnloadNotification @ 0x1800D9884 (AVrfDllUnloadNotification.c)
 */

void __fastcall LdrpUnloadNode(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  struct _PEB *v4; // r14
  void (__fastcall *v5)(_QWORD *); // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  _QWORD *i; // rsi
  _QWORD *v10; // rbx
  _DWORD *v11; // rdx
  _QWORD **v12; // rcx
  _QWORD *v13; // rbx
  __int64 v14; // rsi
  _QWORD *v15; // rdx
  _QWORD **v16; // rcx
  _QWORD *v17; // r8
  _QWORD **v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rsi
  __int64 v21; // rbx
  int v22; // eax
  __int64 v23; // rcx
  _QWORD *v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdx
  _QWORD *v28; // rcx
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // r9
  int v32; // [rsp+50h] [rbp+8h] BYREF

  v4 = NtCurrentPeb();
  v5 = 0LL;
  if ( *(_DWORD *)(a1 + 56) == -4 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 56) = -1;
    LdrpProcessDetachNode();
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 56) != 7 )
  {
    if ( *(_DWORD *)(a1 + 56) != 9 )
      goto LABEL_18;
    goto LABEL_4;
  }
LABEL_5:
  if ( g_ShimsEnabled )
    v5 = (void (__fastcall *)(_QWORD *))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                                g_pfnSE_LdrEntryRemoved,
                                                                64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = *(_QWORD **)a1; i != (_QWORD *)a1; i = (_QWORD *)*i )
  {
    v10 = i - 20;
    if ( (*(_BYTE *)(i - 7) & 8) != 0 )
    {
      LdrpSendDllNotifications((__int64)(i - 20), 2u);
      if ( v5 )
        v5(i - 20);
      SbUpdateSwitchContextBasedOnDll((__int64)(i - 20), v11, 1);
      if ( (v4->NtGlobalFlag & 0x100) != 0 )
        AVrfDllUnloadNotification(i - 20);
    }
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
        3293,
        (unsigned int)"LdrpUnloadNode",
        2,
        (__int64)"Unmapping DLL \"%wZ\"\n",
        v10 + 9);
    LdrUnloadAlternateResourceModuleEx(v10[6], 0LL);
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock, v7, v8);
LABEL_18:
  while ( 1 )
  {
    v12 = *(_QWORD ***)(a1 + 40);
    if ( !v12 )
      break;
    v13 = *v12;
    if ( *v12 == v12 )
      *(_QWORD *)(a1 + 40) = 0LL;
    else
      *v12 = (_QWORD *)*v13;
    if ( !v13 )
      break;
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
    v14 = v13[1];
    v15 = v13 + 2;
    v16 = *(_QWORD ***)(v14 + 48);
    v17 = *v16;
    if ( *v16 != v13 + 2 )
    {
      do
      {
        v16 = (_QWORD **)v17;
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != v15 );
    }
    *v16 = (_QWORD *)*v15;
    if ( *(_QWORD **)(v14 + 48) == v15 )
    {
      v18 = 0LL;
      if ( v16 != v15 )
        v18 = v16;
      *(_QWORD *)(v14 + 48) = v18;
    }
    LdrpDecrementNodeLoadCountLockHeld(v14, 0, &v32);
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    if ( v32 )
      LdrpUnloadNode(v14);
    RtlFreeHeap(LdrpHeap, 0, (__int64)v13);
  }
  v19 = *(_QWORD **)a1;
  *(_DWORD *)(a1 + 56) = -2;
  if ( v19 != (_QWORD *)a1 )
  {
    do
    {
      v20 = (_QWORD *)*v19;
      *((_DWORD *)v19 - 14) |= 2u;
      v21 = (__int64)(v19 - 20);
      RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, a2, a3, a4);
      v22 = *(_DWORD *)(v21 + 104);
      if ( (v22 & 0x40) != 0 )
      {
        v23 = *(_QWORD *)(v21 + 112);
        if ( *(_QWORD *)(v23 + 8) != v21 + 112 )
          goto LABEL_47;
        v24 = *(_QWORD **)(v21 + 120);
        if ( *v24 != v21 + 112 )
          goto LABEL_47;
        *v24 = v23;
        *(_QWORD *)(v23 + 8) = v24;
        v25 = *(_QWORD *)v21;
        if ( *(_QWORD *)(*(_QWORD *)v21 + 8LL) != v21
          || (v26 = *(_QWORD **)(v21 + 8), *v26 != v21)
          || (*v26 = v25, *(_QWORD *)(v25 + 8) = v26, v27 = *(_QWORD *)(v21 + 16), *(_QWORD *)(v27 + 8) != v21 + 16)
          || (v28 = *(_QWORD **)(v21 + 24), *v28 != v21 + 16) )
        {
LABEL_47:
          __fastfail(3u);
        }
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        *(_DWORD *)(v21 + 104) &= ~0x40u;
        v22 = *(_DWORD *)(v21 + 104);
      }
      if ( (v22 & 0x80u) != 0 )
      {
        RtlRbRemoveNode((unsigned __int64 *)&LdrpMappingInfoIndex, v21 + 224);
        RtlRbRemoveNode((unsigned __int64 *)&LdrpModuleBaseAddressIndex, v21 + 200);
        *(_DWORD *)(v21 + 64) = 0;
      }
      RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
      if ( LdrpIsSecureProcess )
        LdrpUnmapModule(v21);
      LdrpDereferenceModule(v21, v29, v30, v31);
      v19 = v20;
    }
    while ( v20 != (_QWORD *)a1 );
  }
}

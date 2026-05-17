/*
 * XREFs of LdrpSendPostSnapNotifications @ 0x18003DC4C
 * Callers:
 *     LdrpNotifyLoadOfGraph @ 0x18003DBC4 (LdrpNotifyLoadOfGraph.c)
 * Callees:
 *     LdrpLogDllState @ 0x18001A6CC (LdrpLogDllState.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     LdrpSendDllNotifications @ 0x18003DDB0 (LdrpSendDllNotifications.c)
 *     SbUpdateSwitchContextBasedOnDll @ 0x18003DE44 (SbUpdateSwitchContextBasedOnDll.c)
 *     CompatCachepLookupCdb @ 0x180073584 (CompatCachepLookupCdb.c)
 *     AVrfDllLoadNotification @ 0x1800849BC (AVrfDllLoadNotification.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A3EC0 (memmove.c)
 *     LdrpLogDbgPrint @ 0x1800CDCC8 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpSendPostSnapNotifications(__int64 a1)
{
  __int64 v1; // r13
  void (__fastcall *v2)(__int64); // rdi
  _BOOL8 v3; // rsi
  unsigned int NtGlobalFlag; // ebp
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r14
  int Notification; // r12d
  int v9; // ebp
  __int64 v10; // rbx
  _WORD *v11; // rsi
  __int64 v12; // rcx
  __int64 v14; // rcx
  __int64 v15; // r15
  char *Heap; // rbp
  char v17; // al
  __int64 v18; // r13
  __int64 v19; // r8
  __int64 v20; // r8
  int v22; // [rsp+78h] [rbp+10h]
  _BOOL8 v23; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = g_pShimmedModuleList != 0LL;
  v23 = v3;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    v5 = MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               g_pfnSE_DllLoaded,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v7 = *(_QWORD *)(v1 + 8);
  Notification = 0;
  if ( v7 != v1 )
  {
    v9 = NtGlobalFlag & 0x100;
    v22 = v9;
    do
    {
      v10 = v7 - 160;
      if ( v9 )
      {
        Notification = AVrfDllLoadNotification(v7 - 160);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v7 - 160, v5, 0LL);
      if ( v2 && !g_ShimsLoading )
      {
        v2(v7 - 160);
        *(_BYTE *)(v10 + 105) |= 8u;
      }
      if ( !v3 )
      {
        v11 = *(_WORD **)(v10 + 80);
        if ( (unsigned int)CompatCachepLookupCdb(v11) )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( v11[v14] );
          if ( g_pShimmedModuleList )
            v15 = v14 + g_pShimmedModuleListLength + 1;
          else
            v15 = v14 + 2;
          Heap = (char *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 2 * v15);
          if ( Heap )
          {
            if ( g_pShimmedModuleList )
            {
              v18 = 2 * g_pShimmedModuleListLength;
              memmove(Heap, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
              v19 = -1LL;
              do
                ++v19;
              while ( v11[v19] );
              memmove(&Heap[v18 + 2], v11, 2 * v19);
              RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)g_pShimmedModuleList);
              v1 = a1;
            }
            else
            {
              v20 = -1LL;
              do
                ++v20;
              while ( v11[v20] );
              memmove(Heap, v11, 2 * v20);
            }
            g_pShimmedModuleList = Heap;
            g_pShimmedModuleListLength = v15;
          }
          else
          {
            v17 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2824,
                (unsigned int)"LdrpCheckModule",
                0,
                (__int64)"Failed to allocated memory for shimmed module list\n");
              v17 = LdrpDebugFlags;
            }
            if ( (v17 & 0x10) != 0 )
              __debugbreak();
          }
          v9 = v22;
        }
        v3 = v23;
      }
      LdrpSendDllNotifications(v7 - 160, 1LL);
      v12 = *(_QWORD *)(v10 + 48);
      *(_DWORD *)(v10 + 104) |= 8u;
      LdrpLogDllState(v12, v10 + 72, 0x14ADu);
      v7 = *(_QWORD *)(v7 + 8);
    }
    while ( v7 != v1 );
  }
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock, v5, v6);
  return (unsigned int)Notification;
}

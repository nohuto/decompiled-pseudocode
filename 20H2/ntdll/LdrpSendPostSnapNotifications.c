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
  __int64 v6; // r14
  int Notification; // r12d
  int v8; // ebp
  __int64 v9; // rbx
  _WORD *v10; // rsi
  __int64 v11; // rcx
  __int64 v13; // rcx
  __int64 v14; // r15
  char *Heap; // rbp
  char v16; // al
  __int64 v17; // r13
  __int64 v18; // r8
  __int64 v19; // r8
  int v21; // [rsp+78h] [rbp+10h]
  _BOOL8 v22; // [rsp+80h] [rbp+18h]

  v1 = a1;
  v2 = 0LL;
  v3 = g_pShimmedModuleList != 0LL;
  v22 = v3;
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection(&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
  {
    v5 = MEMORY[0x7FFE0330];
    v2 = (void (__fastcall *)(__int64))(MEMORY[0x7FFE0330] ^ __ROR8__(
                                                               g_pfnSE_DllLoaded,
                                                               64 - (MEMORY[0x7FFE0330] & 0x3Fu)));
  }
  v6 = *(_QWORD *)(v1 + 8);
  Notification = 0;
  if ( v6 != v1 )
  {
    v8 = NtGlobalFlag & 0x100;
    v21 = v8;
    do
    {
      v9 = v6 - 160;
      if ( v8 )
      {
        Notification = AVrfDllLoadNotification(v6 - 160);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v6 - 160, v5, 0LL);
      if ( v2 && !g_ShimsLoading )
      {
        v2(v6 - 160);
        *(_BYTE *)(v9 + 105) |= 8u;
      }
      if ( !v3 )
      {
        v10 = *(_WORD **)(v9 + 80);
        if ( (unsigned int)CompatCachepLookupCdb(v10) )
        {
          v13 = -1LL;
          do
            ++v13;
          while ( v10[v13] );
          if ( g_pShimmedModuleList )
            v14 = v13 + g_pShimmedModuleListLength + 1;
          else
            v14 = v13 + 2;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v14);
          if ( Heap )
          {
            if ( g_pShimmedModuleList )
            {
              v17 = 2 * g_pShimmedModuleListLength;
              memmove(Heap, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
              v18 = -1LL;
              do
                ++v18;
              while ( v10[v18] );
              memmove(&Heap[v17 + 2], v10, 2 * v18);
              RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
              v1 = a1;
            }
            else
            {
              v19 = -1LL;
              do
                ++v19;
              while ( v10[v19] );
              memmove(Heap, v10, 2 * v19);
            }
            g_pShimmedModuleList = Heap;
            g_pShimmedModuleListLength = v14;
          }
          else
          {
            v16 = LdrpDebugFlags;
            if ( (LdrpDebugFlags & 3) != 0 )
            {
              LdrpLogDbgPrint(
                (unsigned int)"minkernel\\ntdll\\ldrinit.c",
                2824,
                (unsigned int)"LdrpCheckModule",
                0,
                (__int64)"Failed to allocated memory for shimmed module list\n");
              v16 = LdrpDebugFlags;
            }
            if ( (v16 & 0x10) != 0 )
              __debugbreak();
          }
          v8 = v21;
        }
        v3 = v22;
      }
      LdrpSendDllNotifications(v6 - 160, 1LL);
      v11 = *(_QWORD *)(v9 + 48);
      *(_DWORD *)(v9 + 104) |= 8u;
      LdrpLogDllState(v11, v9 + 72, 0x14ADu);
      v6 = *(_QWORD *)(v6 + 8);
    }
    while ( v6 != v1 );
  }
  RtlLeaveCriticalSection(&LdrpDllNotificationLock);
  return (unsigned int)Notification;
}

/*
 * XREFs of _LdrpSendPostSnapNotifications@4 @ 0x4B2D0ABB
 * Callers:
 *     _LdrpNotifyLoadOfGraph@4 @ 0x4B2D189B (_LdrpNotifyLoadOfGraph@4.c)
 * Callees:
 *     _AVrfDllLoadNotification@4 @ 0x4B2A6D66 (_AVrfDllLoadNotification@4.c)
 *     _SbUpdateSwitchContextBasedOnDll@12 @ 0x4B2B989E (_SbUpdateSwitchContextBasedOnDll@12.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _LdrpLogDllState@12 @ 0x4B2CDF06 (_LdrpLogDllState@12.c)
 *     _LdrpSendDllNotifications@12 @ 0x4B2D0BFC (_LdrpSendDllNotifications@12.c)
 *     _CompatCachepLookupCdb@8 @ 0x4B2D1C4D (_CompatCachepLookupCdb@8.c)
 *     _LdrpCheckNXCompatibility@4 @ 0x4B2E7520 (_LdrpCheckNXCompatibility@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 */

int __thiscall LdrpSendPostSnapNotifications(_DWORD *this)
{
  void (__thiscall *v1)(_DWORD, _DWORD *); // edi
  int v3; // esi
  _DWORD *v4; // eax
  int v5; // ecx
  _DWORD *v6; // esi
  int v7; // ecx
  int v8; // ecx
  _DWORD *i; // esi
  unsigned int v11; // ecx
  int v12; // eax
  char *Heap; // edx
  char v14; // al
  unsigned __int16 *v15; // edx
  unsigned __int16 *v16; // ecx
  int v18; // [esp+Ch] [ebp-24h]
  int Notification; // [esp+10h] [ebp-20h]
  _DWORD *v20; // [esp+14h] [ebp-1Ch]
  int v21; // [esp+18h] [ebp-18h]
  char *v22; // [esp+1Ch] [ebp-14h]
  BOOL v23; // [esp+20h] [ebp-10h]
  unsigned int NtGlobalFlag; // [esp+24h] [ebp-Ch]
  int v25; // [esp+24h] [ebp-Ch]
  unsigned __int16 *Src; // [esp+2Ch] [ebp-4h]
  _BYTE *Srca; // [esp+2Ch] [ebp-4h]

  v1 = 0;
  v23 = g_pShimmedModuleList != 0;
  if ( !LdrpNXProcessPermanent )
  {
    for ( i = (_DWORD *)this[1]; i != this; i = (_DWORD *)i[1] )
      LdrpCheckNXCompatibility(i - 21);
  }
  NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
  RtlEnterCriticalSection((int)&LdrpDllNotificationLock);
  if ( g_ShimsEnabled )
    v1 = (void (__thiscall *)(_DWORD, _DWORD *))(MEMORY[0x7FFE0330] ^ __ROR4__(
                                                                        g_pfnSE_DllLoaded,
                                                                        32 - (MEMORY[0x7FFE0330] & 0x1F)));
  v3 = 0;
  v4 = (_DWORD *)this[1];
  Notification = 0;
  v20 = v4;
  if ( v4 != this )
  {
    v5 = NtGlobalFlag & 0x100;
    v25 = v5;
    do
    {
      v6 = v4 - 21;
      if ( v5 )
      {
        Notification = AVrfDllLoadNotification(v4 - 21);
        if ( Notification < 0 )
          break;
      }
      SbUpdateSwitchContextBasedOnDll(v6, 0);
      if ( v1 && !g_ShimsLoading )
      {
        v1(v1, v6);
        *((_BYTE *)v6 + 53) |= 8u;
      }
      if ( !v23 )
      {
        Src = (unsigned __int16 *)v6[10];
        if ( CompatCachepLookupCdb(Src) )
        {
          v11 = wcslen(Src);
          if ( g_pShimmedModuleList )
            v12 = v11 + g_pShimmedModuleListLength + 1;
          else
            v12 = v11 + 2;
          v21 = v12;
          Heap = (char *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 2 * v12);
          v22 = Heap;
          if ( Heap )
          {
            if ( g_pShimmedModuleList )
            {
              v18 = 2 * g_pShimmedModuleListLength;
              memcpy(Heap, g_pShimmedModuleList, 2 * g_pShimmedModuleListLength);
              v15 = Src;
              v16 = Src;
              Srca = Src + 1;
              while ( *v16++ )
                ;
              memcpy(&v22[v18 + 2], v15, 2 * (((char *)v16 - Srca) >> 1));
              RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)g_pShimmedModuleList);
            }
            else
            {
              memcpy(Heap, Src, 2 * wcslen(Src));
            }
            g_pShimmedModuleList = v22;
            g_pShimmedModuleListLength = v21;
          }
          else
          {
            v14 = ShowSnaps;
            if ( (ShowSnaps & 3) != 0 )
            {
              LdrpLogDbgPrint(
                "minkernel\\ntdll\\ldrinit.c",
                2804,
                "LdrpCheckModule",
                0,
                "Failed to allocated memory for shimmed module list\n");
              v14 = ShowSnaps;
            }
            if ( (v14 & 0x10) != 0 )
              __debugbreak();
          }
        }
      }
      LdrpSendDllNotifications(v7);
      v8 = v6[6];
      v6[13] |= 8u;
      LdrpLogDllState(v8, (int)(v6 + 9), 5293);
      v5 = v25;
      v4 = (_DWORD *)v20[1];
      v20 = v4;
    }
    while ( v4 != this );
    v3 = Notification;
  }
  RtlLeaveCriticalSection((int)&LdrpDllNotificationLock);
  return v3;
}

/*
 * XREFs of _LdrpDynamicShimModule@4 @ 0x4B2D234A
 * Callers:
 *     _LdrpPrepareModuleForExecution@8 @ 0x4B2D2176 (_LdrpPrepareModuleForExecution@8.c)
 * Callees:
 *     _LdrpSendShimEngineInitialNotifications@8 @ 0x4B2A66C4 (_LdrpSendShimEngineInitialNotifications@8.c)
 *     _RtlLeaveCriticalSection@4 @ 0x4B2BE700 (_RtlLeaveCriticalSection@4.c)
 *     _RtlEnterCriticalSection@4 @ 0x4B2BFE90 (_RtlEnterCriticalSection@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _LdrpLogDbgPrint @ 0x4B32E582 (_LdrpLogDbgPrint.c)
 *     _LdrpGetProcApphelpCheckModule@4 @ 0x4B331AA6 (_LdrpGetProcApphelpCheckModule@4.c)
 */

int __thiscall LdrpDynamicShimModule(int *this)
{
  int v1; // ebx
  int v2; // esi
  int result; // eax
  char v4; // al
  const unsigned __int16 *i; // edi
  int v6; // edi
  int v8; // [esp+10h] [ebp-8h]
  int (__thiscall *v9)(_DWORD, const unsigned __int16 *, _DWORD, int, int, _DWORD, int, int); // [esp+14h] [ebp-4h] BYREF

  v1 = dword_4B3A38B8;
  v2 = 0;
  if ( dword_4B3A38B8 && g_pShimmedModuleList )
  {
    dword_4B3A38B8 = 0;
    v2 = LdrpGetProcApphelpCheckModule(&v9);
    if ( v2 >= 0 )
    {
      for ( i = (const unsigned __int16 *)g_pShimmedModuleList; *i; i += wcslen(i) + 1 )
      {
        if ( !v9(v9, i, 0, 1, 1, 0, 1, 16) )
        {
          v2 = -1073741502;
          goto LABEL_3;
        }
      }
      v8 = MEMORY[0x7FFE0330];
      v6 = __ROR4__(g_pfnSE_DllLoaded, 32 - (MEMORY[0x7FFE0330] & 0x1F));
      RtlEnterCriticalSection(&LdrpDllNotificationLock);
      if ( LdrInitState < 3 && (*(_DWORD *)(*this - 32) & 0x800) == 0 )
        LdrpSendShimEngineInitialNotifications(this, (int (__thiscall *)(_DWORD, _DWORD))(v8 ^ v6));
      RtlLeaveCriticalSection(&LdrpDllNotificationLock);
    }
    else
    {
      v4 = ShowSnaps;
      if ( (ShowSnaps & 3) != 0 )
      {
        LdrpLogDbgPrint(
          "minkernel\\ntdll\\ldrinit.c",
          2977,
          "LdrpDynamicShimModule",
          0,
          "Getting ApphelpCheckModule failed with status 0x%08lx\n",
          v2);
        v4 = ShowSnaps;
      }
      if ( (v4 & 0x10) != 0 )
        __debugbreak();
      v2 = 0;
    }
  }
LABEL_3:
  if ( v1 == 1 && g_pShimmedModuleList )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, g_pShimmedModuleList);
    g_pShimmedModuleList = 0;
    g_pShimmedModuleListLength = 0;
  }
  result = v2;
  dword_4B3A38B8 = v1;
  return result;
}

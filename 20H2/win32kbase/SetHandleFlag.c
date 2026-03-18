/*
 * XREFs of SetHandleFlag @ 0x1C0063370
 * Callers:
 *     CloseProtectedHandle @ 0x1C0063328 (CloseProtectedHandle.c)
 * Callees:
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0059680 (Win32AllocPoolWithQuotaZInit.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  unsigned int *v11; // rbx
  ULONG v12; // eax
  ULONG *v14; // rax
  ULONG *v15; // r14
  const void *v16; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
  if ( CurrentProcessWin32Process )
  {
    v11 = (unsigned int *)(CurrentProcessWin32Process + 720);
    v12 = *(_DWORD *)(CurrentProcessWin32Process + 720);
    if ( a3 )
    {
      if ( v5 >= v12 )
      {
        v14 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3, 0x69707355u);
        v15 = v14;
        if ( !v14 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        v16 = (const void *)*((_QWORD *)v11 + 1);
        if ( v16 )
        {
          memmove(v14, v16, (unsigned __int64)*v11 >> 3);
          Win32FreePool(*((_QWORD *)v11 + 1));
        }
        RtlInitializeBitMap((PRTL_BITMAP)v11, v15, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits((PRTL_BITMAP)v11, v5, 1u);
    }
    else if ( v5 < v12 )
    {
      RtlClearBits((PRTL_BITMAP)v11, v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}

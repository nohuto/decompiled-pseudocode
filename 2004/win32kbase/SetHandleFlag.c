/*
 * XREFs of SetHandleFlag @ 0x1C0029140
 * Callers:
 *     CloseProtectedHandle @ 0x1C0029104 (CloseProtectedHandle.c)
 * Callees:
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C0098B90 (Win32AllocPoolWithQuotaZInit.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
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
  struct _RTL_BITMAP *v11; // rbx
  ULONG v12; // eax
  ULONG *v14; // rax
  ULONG *v15; // r14
  PULONG Buffer; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
  if ( CurrentProcessWin32Process )
  {
    v11 = (struct _RTL_BITMAP *)(CurrentProcessWin32Process + 720);
    v12 = *(_DWORD *)(CurrentProcessWin32Process + 720);
    if ( a3 )
    {
      if ( v5 >= v12 )
      {
        v14 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3);
        v15 = v14;
        if ( !v14 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        Buffer = v11->Buffer;
        if ( Buffer )
        {
          memmove(v14, Buffer, (unsigned __int64)v11->SizeOfBitMap >> 3);
          Win32FreePool(v11->Buffer);
        }
        RtlInitializeBitMap(v11, v15, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits(v11, v5, 1u);
    }
    else if ( v5 < v12 )
    {
      RtlClearBits(v11, v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}

/*
 * XREFs of SetHandleFlag @ 0x1C0019490
 * Callers:
 *     CloseProtectedHandle @ 0x1C0019454 (CloseProtectedHandle.c)
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuotaZInit @ 0x1C008F2E0 (Win32AllocPoolWithQuotaZInit.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall SetHandleFlag(unsigned int a1, int a2, int a3)
{
  unsigned int v4; // esi
  ULONG v5; // edi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct _RTL_BITMAP *v8; // rbx
  ULONG v9; // eax
  ULONG *v11; // rax
  ULONG *v12; // r14
  PULONG Buffer; // rdx

  v4 = 1;
  v5 = a2 + 2 * (a1 >> 2) + (a1 >> 2);
  ExEnterCriticalRegionAndAcquireFastMutexUnsafe(gpHandleFlagsMutex);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
  {
    v8 = (struct _RTL_BITMAP *)(CurrentProcessWin32Process + 720);
    v9 = *(_DWORD *)(CurrentProcessWin32Process + 720);
    if ( a3 )
    {
      if ( v5 >= v9 )
      {
        v11 = (ULONG *)Win32AllocPoolWithQuotaZInit((unsigned __int64)((v5 + 32) & 0xFFFFFFE0) >> 3);
        v12 = v11;
        if ( !v11 )
        {
          v4 = 0;
          goto LABEL_5;
        }
        Buffer = v8->Buffer;
        if ( Buffer )
        {
          memmove(v11, Buffer, (unsigned __int64)v8->SizeOfBitMap >> 3);
          Win32FreePool(v8->Buffer);
        }
        RtlInitializeBitMap(v8, v12, (v5 + 32) & 0xFFFFFFE0);
      }
      RtlSetBits(v8, v5, 1u);
    }
    else if ( v5 < v9 )
    {
      RtlClearBits(v8, v5, 1u);
    }
  }
LABEL_5:
  ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(gpHandleFlagsMutex);
  return v4;
}

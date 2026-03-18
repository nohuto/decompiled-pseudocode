/*
 * XREFs of WdipSemDisableContextProvider @ 0x140775180
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140775110 (WdipSemDisableContextProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     WdipSemCaptureState @ 0x14039BBBC (WdipSemCaptureState.c)
 *     WdipSemEnableDisableTrace @ 0x1407753D8 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // esi
  int v6; // r8d
  __int64 v7; // rbx
  __int32 v8; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  v3 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C548, 0LL);
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      v8 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v7 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v7 + 40) )
        {
          LOBYTE(v6) = *(_BYTE *)(v7 + 16);
          v3 = WdipSemEnableDisableTrace(v8, a1, v6, *(_QWORD *)(v7 + 24), *(_DWORD *)(v7 + 32), 1);
          if ( v3 >= 0 )
          {
            *(_BYTE *)(v7 + 48) = *(_BYTE *)(v7 + 16);
            *(_QWORD *)(v7 + 56) = *(_QWORD *)(v7 + 24);
            *(_DWORD *)(v7 + 64) = *(_DWORD *)(v7 + 32);
          }
        }
        else
        {
          v3 = WdipSemEnableDisableTrace(v8, a1, 0, 0, 0, 0);
          if ( v3 >= 0 )
          {
            *(_OWORD *)(v7 + 48) = 0LL;
            *(_OWORD *)(v7 + 64) = 0LL;
          }
        }
      }
    }
  }
  else
  {
    v3 = -1073741811;
  }
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C548, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return (unsigned int)v3;
}

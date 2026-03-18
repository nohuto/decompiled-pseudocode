/*
 * XREFs of WdipSemEnableContextProvider @ 0x1407776E8
 * Callers:
 *     WdipSemEnableContextProviders @ 0x14077768C (WdipSemEnableContextProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     WdipSemEnableDisableTrace @ 0x1407777E8 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  int v4; // r8d
  __int64 v5; // rbx
  unsigned __int8 v6; // bp
  unsigned __int8 v7; // al
  __int64 v8; // rcx
  int v9; // edx
  __int64 v10; // r15
  int v11; // r14d

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C1C388, 0LL);
  if ( !a1 )
  {
    v2 = -1073741811;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(a1 + 32) != 1 )
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = *(_BYTE *)(a1 + 18);
    v7 = *(_BYTE *)(v5 + 48);
    v8 = *(_QWORD *)(v5 + 56);
    v9 = *(_DWORD *)(v5 + 64);
    if ( v6 <= v7 )
      v6 = *(_BYTE *)(v5 + 48);
    v10 = v8 | *(_QWORD *)(a1 + 24);
    v11 = v9 | *(_DWORD *)(a1 + 36);
    if ( *(_BYTE *)(v5 + 69) && v10 == v8 && v6 == v7 && v11 == v9 )
      goto LABEL_8;
    LOBYTE(v4) = v6;
    v2 = WdipSemEnableDisableTrace(
           _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
           a1,
           v4,
           (unsigned int)v8 | *(_DWORD *)(a1 + 24),
           v11,
           1);
    if ( v2 >= 0 )
    {
      *(_BYTE *)(v5 + 69) = 1;
      *(_QWORD *)(v5 + 56) = v10;
      *(_BYTE *)(v5 + 48) = v6;
      *(_DWORD *)(v5 + 64) = v11;
LABEL_8:
      ++*(_DWORD *)(v5 + 72);
    }
  }
LABEL_9:
  ExReleasePushLockEx((ULONG_PTR)&qword_140C1C388, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v2;
}

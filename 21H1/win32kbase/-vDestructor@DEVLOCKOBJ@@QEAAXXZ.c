/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C008C364
 * Callers:
 *     GreGetClipBox @ 0x1C008C160 (GreGetClipBox.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C008C33C (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     pProcessDfbSurfacesInternal @ 0x1C009B2E0 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C00A89F0 (GreGetNearestColor.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C0147A04 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014896C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C01524EC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C0152B60 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C01534DC (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C0155C90 (GreIntersectVisRect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreDecLockCount @ 0x1C00096F0 (GreDecLockCount.c)
 *     IsThreadCrossSessionAttached @ 0x1C0084880 (IsThreadCrossSessionAttached.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this, __int64 a2, int a3)
{
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rdx
  struct _ERESOURCE *v9; // rcx
  __int64 v10; // rcx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx

  v4 = -1073741637;
  if ( qword_1C02571E0 )
    v5 = qword_1C02571E0();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C02571E8 )
    qword_1C02571E8(this);
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 0x1000) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
      --*(_DWORD *)(ThreadWin32Thread + 104);
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached(v12) )
    {
      v14 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v14 )
      {
        v15 = *v14;
        if ( v15 )
        {
          *(_QWORD *)(v15 + 320) = 0LL;
          *(_QWORD *)(v15 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v6 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemTrg", *(_QWORD *)this, a3);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v16);
    }
  }
  v7 = *((_DWORD *)this + 6);
  if ( (v7 & 8) != 0 )
    *((_DWORD *)this + 6) = v7 & 0xFFFFFFF7;
  v8 = *((_QWORD *)this + 1);
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore((__int64)L"hsemDMC", v8, a3);
    v9 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v9 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v9);
      PsLeavePriorityRegion(v10);
    }
  }
  if ( qword_1C02571F0 )
    v4 = qword_1C02571F0();
  if ( v4 >= 0 )
  {
    if ( qword_1C02571F8 )
      qword_1C02571F8((char *)this + 72, (char *)this + 64, (char *)this + 56, (char *)this + 28);
  }
}

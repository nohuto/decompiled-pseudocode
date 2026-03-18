/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0
 * Callers:
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C007BE98 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C007C550 (GreGetClipBox.c)
 *     GreGetNearestColor @ 0x1C00A4250 (GreGetNearestColor.c)
 *     pProcessDfbSurfacesInternal @ 0x1C00BF6C0 (pProcessDfbSurfacesInternal.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C01416B4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014261C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C014C19C (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014C810 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C014D18C (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C014F940 (GreIntersectVisRect.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreDecLockCount @ 0x1C007AB30 (GreDecLockCount.c)
 *     W32GetThreadWin32Thread @ 0x1C0087B20 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C008B950 (IsThreadCrossSessionAttached.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx

  v4 = -1073741637;
  if ( qword_1C0251220 )
    v5 = qword_1C0251220();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0251228 )
    qword_1C0251228(this);
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 0x1000) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      --*(_DWORD *)(ThreadWin32Thread + 104);
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned int)IsThreadCrossSessionAttached() )
    {
      v13 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v13 )
      {
        v14 = *v13;
        if ( v14 )
        {
          *(_QWORD *)(v14 + 320) = 0LL;
          *(_QWORD *)(v14 + 312) = 0LL;
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
      PsLeavePriorityRegion(v15);
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
  if ( qword_1C0251230 )
    v4 = qword_1C0251230();
  if ( v4 >= 0 )
  {
    if ( qword_1C0251238 )
      qword_1C0251238((char *)this + 72, (char *)this + 64, (char *)this + 56, (char *)this + 28);
  }
}

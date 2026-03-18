/*
 * XREFs of ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148
 * Callers:
 *     pProcessDfbSurfacesInternal @ 0x1C001AA60 (pProcessDfbSurfacesInternal.c)
 *     GreGetNearestColor @ 0x1C001BF60 (GreGetNearestColor.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C004C120 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     GreGetClipBox @ 0x1C004C930 (GreGetClipBox.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1C013F1F4 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 *     ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C014014C (-vClearSurface@PDEVOBJ@@QEAAXXZ.c)
 *     ?GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z @ 0x1C0149CCC (-GreSetPrivateDeviceGammaRamp@@YAHPEAUHDC__@@PEAXH@Z.c)
 *     NtGdiGetGammaRampCapability @ 0x1C014A330 (NtGdiGetGammaRampCapability.c)
 *     GreSetMagicColors @ 0x1C014AD44 (GreSetMagicColors.c)
 *     GreIntersectVisRect @ 0x1C014D3A0 (GreIntersectVisRect.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0043BB0 (W32GetThreadWin32Thread.c)
 *     IsThreadCrossSessionAttached @ 0x1C0045E90 (IsThreadCrossSessionAttached.c)
 *     GreDecLockCount @ 0x1C004FD50 (GreDecLockCount.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  int v2; // edi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  __int64 v6; // rdx
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx

  v2 = -1073741637;
  if ( qword_1C024F220 )
    v3 = qword_1C024F220();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024F228 )
    qword_1C024F228(this);
  v4 = *((_DWORD *)this + 6);
  if ( (v4 & 0x1000) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
      --*(_DWORD *)(ThreadWin32Thread + 104);
    *((_DWORD *)this + 6) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !IsThreadCrossSessionAttached() )
    {
      v11 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( v11 )
      {
        v12 = *v11;
        if ( v12 )
        {
          *(_QWORD *)(v12 + 320) = 0LL;
          *(_QWORD *)(v12 + 312) = 0LL;
        }
      }
    }
  }
  else if ( (v4 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    if ( *(_QWORD *)this )
    {
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)this);
      PsLeavePriorityRegion(v13);
    }
  }
  v5 = *((_DWORD *)this + 6);
  if ( (v5 & 8) != 0 )
    *((_DWORD *)this + 6) = v5 & 0xFFFFFFF7;
  v6 = *((_QWORD *)this + 1);
  if ( v6 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v6);
    v7 = (struct _ERESOURCE *)*((_QWORD *)this + 1);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion(v8);
    }
  }
  if ( qword_1C024F230 )
    v2 = qword_1C024F230();
  if ( v2 >= 0 )
  {
    if ( qword_1C024F238 )
      qword_1C024F238((char *)this + 72, (char *)this + 64, (char *)this + 56, (char *)this + 28);
  }
}

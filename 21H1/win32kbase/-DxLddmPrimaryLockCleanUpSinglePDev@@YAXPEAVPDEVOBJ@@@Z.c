/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C00B16E8
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00B2198 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0009110 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreLockSprite @ 0x1C0075E70 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     GreLockDisplayDevice @ 0x1C00B5170 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00B51B0 (GreUnlockDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1, int a2, int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  _QWORD **v6; // rsi
  _QWORD *v7; // r14
  int v8; // r8d
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  int v15; // ecx

  GreLockVisRgn(*(_QWORD *)a1, a2, a3);
  GreLockSprite();
  GreLockDisplayDevice(*(_QWORD *)a1);
  v6 = (_QWORD **)(*(_QWORD *)a1 + 2624LL);
  v7 = *v6;
  while ( v7 != v6 )
  {
    v12 = (_QWORD *)*v7;
    v13 = (__int64)v7;
    v7 = v12;
    if ( v12[1] != v13 || (v14 = *(_QWORD **)(v13 + 8), *v14 != v13) )
      __fastfail(3u);
    *v14 = v12;
    v12[1] = v14;
    v15 = *(_DWORD *)(v13 + 20);
    if ( v15 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2640LL) -= v15;
      if ( qword_1C0256F08 )
        qword_1C0256F08(*(_QWORD *)a1, v13 + 28, 1LL);
    }
    Win32FreePool(v13, v4, v5);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v8);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v11);
  }
  GreUnlockVisRgn(*(_QWORD *)a1, v9, v10);
}

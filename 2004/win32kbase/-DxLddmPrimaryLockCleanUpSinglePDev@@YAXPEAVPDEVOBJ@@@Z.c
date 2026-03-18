/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C004FB70
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C004FAD8 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C001EDA0 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     Win32FreePool @ 0x1C0096F60 (Win32FreePool.c)
 *     GreLockSprite @ 0x1C00A5A70 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     GreLockDisplayDevice @ 0x1C00A7D10 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C00A7D50 (GreUnlockDisplayDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // r14
  int v4; // r8d
  __int64 v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rcx
  int v9; // ecx

  GreLockVisRgn(*(_QWORD *)a1);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v2 = (_QWORD **)(*(_QWORD *)a1 + 2624LL);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v6 = (_QWORD *)*v3;
    v7 = v3;
    v3 = v6;
    if ( (_QWORD *)v6[1] != v7 || (v8 = (_QWORD *)v7[1], (_QWORD *)*v8 != v7) )
      __fastfail(3u);
    *v8 = v6;
    v6[1] = v8;
    v9 = *((_DWORD *)v7 + 5);
    if ( v9 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2640LL) -= v9;
      if ( qword_1C0250F48 )
        qword_1C0250F48(*(_QWORD *)a1, (char *)v7 + 28, 1LL);
    }
    Win32FreePool(v7);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (int)ghsemSprite, v4);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion(v5);
  }
  GreUnlockVisRgn(*(_QWORD *)a1);
}

/*
 * XREFs of ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0011340
 * Callers:
 *     ?DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z @ 0x1C00112A8 (-DxLddmPrimaryLockCleanUp@@YAXPEAUHDEV__@@@Z.c)
 * Callees:
 *     GreLockDisplayDevice @ 0x1C0011AC0 (GreLockDisplayDevice.c)
 *     GreUnlockDisplayDevice @ 0x1C0011B00 (GreUnlockDisplayDevice.c)
 *     GreUnlockVisRgn @ 0x1C003CF80 (GreUnlockVisRgn.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     GreLockSprite @ 0x1C005E870 (GreLockSprite.c)
 *     GreLockVisRgn @ 0x1C005E980 (GreLockVisRgn.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0082A70 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DxLddmPrimaryLockCleanUpSinglePDev(struct PDEVOBJ *a1)
{
  _QWORD **v2; // rsi
  _QWORD *v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  _QWORD *v6; // rcx
  int v7; // ecx

  GreLockVisRgn(*(_QWORD *)a1);
  GreLockSprite(*(_QWORD *)a1);
  GreLockDisplayDevice(*(_QWORD *)a1);
  v2 = (_QWORD **)(*(_QWORD *)a1 + 2624LL);
  v3 = *v2;
  while ( v3 != v2 )
  {
    v4 = (_QWORD *)*v3;
    v5 = v3;
    v3 = v4;
    if ( (_QWORD *)v4[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
      __fastfail(3u);
    *v6 = v4;
    v4[1] = v6;
    v7 = *((_DWORD *)v5 + 5);
    if ( v7 )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 2640LL) -= v7;
      if ( qword_1C024EF48 )
        qword_1C024EF48(*(_QWORD *)a1, (char *)v5 + 28, 1LL);
    }
    Win32FreePool(v5);
  }
  GreUnlockDisplayDevice(*(_QWORD *)a1);
  EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
  if ( ghsemSprite )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
    PsLeavePriorityRegion();
  }
  GreUnlockVisRgn(*(_QWORD *)a1);
}

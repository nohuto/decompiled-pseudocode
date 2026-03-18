/*
 * XREFs of ACPIEcQueueEcIrp @ 0x1C0052CB0
 * Callers:
 *     ACPIEcOpRegionHandler @ 0x1C0052C20 (ACPIEcOpRegionHandler.c)
 *     ACPIEcReadWrite @ 0x1C00AD3E0 (ACPIEcReadWrite.c)
 * Callees:
 *     ACPIEcLogAction @ 0x1C0053808 (ACPIEcLogAction.c)
 *     ACPIEcServiceDevice @ 0x1C0053A64 (ACPIEcServiceDevice.c)
 */

__int64 __fastcall ACPIEcQueueEcIrp(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int16 v7; // r14
  char v8; // bl
  KSPIN_LOCK *v11; // rsi
  KIRQL v12; // bp
  unsigned int v13; // ebx
  __int64 Pool2; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 *v18; // rcx
  __int64 v19; // rbx

  v7 = a4;
  v8 = a3;
  if ( a3 > 0xFF || (unsigned int)(a3 + a4) > 0x100 )
    return 3221225489LL;
  v11 = (KSPIN_LOCK *)(a1 + 88);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 88));
  if ( *(_BYTE *)(a1 + 121) > 1u )
  {
    v13 = -1073741810;
LABEL_7:
    KeReleaseSpinLock(v11, v12);
    return v13;
  }
  Pool2 = ExAllocatePool2(64LL, 48LL, 1164993345LL);
  v16 = Pool2;
  if ( !Pool2 )
  {
    v13 = -1073741670;
    goto LABEL_7;
  }
  *(_BYTE *)(Pool2 + 16) = a2;
  *(_QWORD *)(Pool2 + 32) = a6;
  *(_QWORD *)(Pool2 + 40) = a7;
  *(_QWORD *)(Pool2 + 24) = a5;
  *(_BYTE *)(Pool2 + 17) = v8;
  *(_WORD *)(Pool2 + 18) = v7;
  v18 = *(__int64 **)(a1 + 472);
  if ( *v18 != a1 + 464 )
    __fastfail(3u);
  *(_QWORD *)(Pool2 + 8) = v18;
  *(_QWORD *)Pool2 = a1 + 464;
  *v18 = Pool2;
  *(_QWORD *)(a1 + 472) = Pool2;
  LOBYTE(v16) = -112;
  v19 = *(_QWORD *)(a1 + 480);
  LOBYTE(v15) = v19 == 0;
  ACPIEcLogAction(a1, v16, v15);
  KeReleaseSpinLock(v11, v12);
  if ( !v19 )
    ACPIEcServiceDevice(a1);
  return 0LL;
}

/*
 * XREFs of _bDrvDisplayIOCtl@12 @ 0x2264B0
 * Callers:
 *     _CtxDisplayIOCtl@12 @ 0x1879E1 (_CtxDisplayIOCtl@12.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

int __fastcall bDrvDisplayIOCtl(int a1, int a2, int a3)
{
  int v4; // esi
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int); // ecx
  HSEMAPHORE v8; // [esp-14h] [ebp-60h]
  unsigned int v9; // [esp-10h] [ebp-5Ch]
  HSEMAPHORE v10; // [esp-Ch] [ebp-58h]
  unsigned int v11; // [esp-8h] [ebp-54h]
  _BYTE v12[64]; // [esp+8h] [ebp-44h] BYREF
  _DWORD *v13; // [esp+48h] [ebp-4h] BYREF

  v13 = (_DWORD *)a1;
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) == 0 )
    return 0;
  v4 = 1;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v12,
    _ghsemDynamicModeChange,
    1u,
    _ghsemGreLock,
    2u,
    _ghsemDCVisRgn,
    3u,
    *(HSEMAPHORE *)(a1 + 40),
    4u,
    _ghsemSprite,
    5u,
    _ghsemHT,
    6u,
    v8,
    v9,
    v10,
    v11);
  GreAcquireSemaphore(v13[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v13[8], 11);
  PDEVOBJ::vSync((PDEVOBJ *)&v13, v13[455] != 0 ? (struct _SURFOBJ *)(v13[455] + 16) : 0, 0, 0);
  v5 = v13;
  v6 = (int (__stdcall *)(int, int))v13[559];
  if ( v6 )
  {
    v4 = v6(a2, a3);
    v5 = v13;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v5[8]);
  GreReleaseSemaphoreInternal(v13[8]);
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v12);
  return v4;
}

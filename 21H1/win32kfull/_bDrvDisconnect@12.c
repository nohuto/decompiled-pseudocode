/*
 * XREFs of _bDrvDisconnect@12 @ 0x2263A6
 * Callers:
 *     ?InitiateWin32kCleanup@@YGHXZ @ 0xCCE00 (-InitiateWin32kCleanup@@YGHXZ.c)
 *     _xxxRemoteConsoleShadowStop@0 @ 0x1882F1 (_xxxRemoteConsoleShadowStop@0.c)
 *     _xxxRemotePassthruEnable@0 @ 0x188512 (_xxxRemotePassthruEnable@0.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

int __stdcall bDrvDisconnect(int a1)
{
  HANDLE v1; // ebx
  PVOID v2; // edi
  int v3; // esi
  int (__stdcall *v4)(HANDLE, PVOID); // eax
  HSEMAPHORE v6; // [esp-10h] [ebp-6Ch]
  unsigned int v7; // [esp-Ch] [ebp-68h]
  HSEMAPHORE v8; // [esp-8h] [ebp-64h]
  unsigned int v9; // [esp-4h] [ebp-60h]
  _BYTE v10[68]; // [esp+10h] [ebp-4Ch] BYREF
  _DWORD *v11; // [esp+54h] [ebp-8h] BYREF

  v11 = (_DWORD *)gConsoleShadowhDev;
  v1 = ghConsoleShadowThinwireChannel;
  v2 = gConsoleShadowThinwireFileObject;
  if ( !gConsoleShadowhDev || (*(_BYTE *)(gConsoleShadowhDev + 24) & 1) == 0 )
    return 0;
  v3 = 1;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v10,
    _ghsemDynamicModeChange,
    1u,
    _ghsemGreLock,
    2u,
    _ghsemDCVisRgn,
    3u,
    *(HSEMAPHORE *)(gConsoleShadowhDev + 40),
    4u,
    _ghsemSprite,
    5u,
    _ghsemHT,
    6u,
    v6,
    v7,
    v8,
    v9);
  GreAcquireSemaphore(v11[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v11[8], 11);
  PDEVOBJ::vSync((PDEVOBJ *)&v11, v11[455] != 0 ? (struct _SURFOBJ *)(v11[455] + 16) : 0, 0, 0);
  v4 = (int (__stdcall *)(HANDLE, PVOID))v11[553];
  if ( v4 )
  {
    v3 = v4(v1, v2);
    if ( v3 )
      *(_DWORD *)(v11[276] + 36) = 3;
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v11[8]);
  GreReleaseSemaphoreInternal(v11[8]);
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v10);
  return v3;
}

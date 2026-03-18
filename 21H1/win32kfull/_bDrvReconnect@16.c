/*
 * XREFs of _bDrvReconnect@16 @ 0x226594
 * Callers:
 *     _RemotePassthruDisable@0 @ 0x187AD9 (_RemotePassthruDisable@0.c)
 *     _xxxRemoteConsoleShadowStart@12 @ 0x187F2C (_xxxRemoteConsoleShadowStart@12.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

int __fastcall bDrvReconnect(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // eax
  int (__stdcall *v6)(int, int); // ecx
  int v7; // esi
  int v8; // ecx
  void (__stdcall *v9)(_DWORD, int *, _DWORD, _DWORD, _DWORD); // edx
  HSEMAPHORE v11; // [esp-10h] [ebp-60h]
  unsigned int v12; // [esp-Ch] [ebp-5Ch]
  HSEMAPHORE v13; // [esp-8h] [ebp-58h]
  unsigned int v14; // [esp-4h] [ebp-54h]
  _BYTE v15[68]; // [esp+8h] [ebp-48h] BYREF
  _DWORD *v16; // [esp+4Ch] [ebp-4h] BYREF

  v16 = (_DWORD *)a1;
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) == 0 )
    return 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v15,
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
    v11,
    v12,
    v13,
    v14);
  GreAcquireSemaphore(v16[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v16[8], 11);
  PDEVOBJ::vSync((PDEVOBJ *)&v16, v16[455] != 0 ? (struct _SURFOBJ *)(v16[455] + 16) : 0, 0, 0);
  v5 = v16;
  v6 = (int (__stdcall *)(int, int))v16[554];
  if ( v6 )
  {
    v7 = v6(a2, a3);
    v5 = v16;
    if ( v7 )
    {
      *(_DWORD *)(v16[276] + 36) = 2;
      v5 = v16;
    }
  }
  else
  {
    v7 = 1;
  }
  if ( a4 == 1 )
  {
    v8 = v5[278];
    a3 = v8;
    if ( v7 == 1 && (*(_DWORD *)(v8 + 16) & 0x800) != 0 )
    {
      v9 = (void (__stdcall *)(_DWORD, int *, _DWORD, _DWORD, _DWORD))v5[497];
      if ( v9 )
      {
        v9(v5[277], &a3, 0, 0, *(_DWORD *)(v8 + 20));
        v5 = v16;
      }
      else
      {
        v7 = 0;
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v5[8]);
  GreReleaseSemaphoreInternal(v16[8]);
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v15);
  return v7;
}

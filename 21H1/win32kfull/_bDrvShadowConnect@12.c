/*
 * XREFs of _bDrvShadowConnect@12 @ 0x2266CF
 * Callers:
 *     _RemoteShadowStart@8 @ 0x187CE0 (_RemoteShadowStart@8.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

int __fastcall bDrvShadowConnect(int a1, int a2, int a3)
{
  _DWORD *v4; // eax
  int (__stdcall *v5)(int, int); // ecx
  int v6; // esi
  int v7; // ecx
  void (__stdcall *v8)(_DWORD, int *, _DWORD, _DWORD, _DWORD); // edx
  HSEMAPHORE v10; // [esp-18h] [ebp-64h]
  unsigned int v11; // [esp-14h] [ebp-60h]
  HSEMAPHORE v12; // [esp-10h] [ebp-5Ch]
  unsigned int v13; // [esp-Ch] [ebp-58h]
  _BYTE v14[64]; // [esp+4h] [ebp-48h] BYREF
  int v15; // [esp+44h] [ebp-8h] BYREF
  _DWORD *v16; // [esp+48h] [ebp-4h] BYREF

  v16 = (_DWORD *)a1;
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) == 0 )
    return 0;
  SEMOBJEX::SEMOBJEX(
    (SEMOBJEX *)v14,
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
    v10,
    v11,
    v12,
    v13);
  GreAcquireSemaphore(v16[8]);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v16[8], 11);
  PDEVOBJ::vSync((PDEVOBJ *)&v16, v16[455] != 0 ? (struct _SURFOBJ *)(v16[455] + 16) : 0, 0, 0);
  v4 = v16;
  v5 = (int (__stdcall *)(int, int))v16[555];
  if ( v5 )
  {
    v6 = v5(a2, a3);
    v4 = v16;
  }
  else
  {
    v6 = 1;
  }
  v7 = v4[278];
  v15 = v7;
  if ( v6 == 1 && (*(_DWORD *)(v7 + 16) & 0x800) != 0 )
  {
    v8 = (void (__stdcall *)(_DWORD, int *, _DWORD, _DWORD, _DWORD))v4[497];
    if ( v8 )
    {
      v8(v4[277], &v15, 0, 0, *(_DWORD *)(v7 + 20));
      v4 = v16;
    }
    else
    {
      v6 = 0;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v4[8]);
  GreReleaseSemaphoreInternal(v16[8]);
  SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v14);
  return v6;
}

/*
 * XREFs of _vDrvInvalidateRect@8 @ 0x22690F
 * Callers:
 *     _RemoteRedrawRectangle@4 @ 0x1814F1 (_RemoteRedrawRectangle@4.c)
 * Callees:
 *     ??1SEMOBJEX@@QAE@XZ @ 0xD2964 (--1SEMOBJEX@@QAE@XZ.c)
 *     ??0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0xD29EC (--0SEMOBJEX@@QAE@PAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 */

void __fastcall vDrvInvalidateRect(int a1, int a2)
{
  _DWORD *v3; // eax
  void (__stdcall *v4)(int); // ecx
  HSEMAPHORE v5; // [esp-10h] [ebp-60h]
  unsigned int v6; // [esp-Ch] [ebp-5Ch]
  HSEMAPHORE v7; // [esp-8h] [ebp-58h]
  unsigned int v8; // [esp-4h] [ebp-54h]
  _BYTE v9[68]; // [esp+8h] [ebp-48h] BYREF
  _DWORD *v10; // [esp+4Ch] [ebp-4h] BYREF

  v10 = (_DWORD *)a1;
  if ( a1 && (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v9,
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
      v5,
      v6,
      v7,
      v8);
    GreAcquireSemaphore(v10[8]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v10[8], 11);
    PDEVOBJ::vSync((PDEVOBJ *)&v10, v10[455] != 0 ? (struct _SURFOBJ *)(v10[455] + 16) : 0, 0, 0);
    v3 = v10;
    v4 = (void (__stdcall *)(int))v10[557];
    if ( v4 )
    {
      v4(a2);
      v3 = v10;
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v3[8]);
    GreReleaseSemaphoreInternal(v10[8]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v9);
  }
}

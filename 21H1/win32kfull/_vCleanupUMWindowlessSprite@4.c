/*
 * XREFs of _vCleanupUMWindowlessSprite@4 @ 0x1ECE2
 * Callers:
 *     <none>
 * Callees:
 *     _GreDeleteSprite@16 @ 0x1BB86 (_GreDeleteSprite@16.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

struct DwmState *__stdcall vCleanupUMWindowlessSprite(int a1)
{
  struct DwmState *result; // eax
  struct PDEVOBJ *v2; // ecx
  int v3; // esi
  struct DwmState *v4; // edi
  struct DwmState *v5; // ecx
  char *v6; // eax
  char *v7; // ecx
  int v8; // [esp+0h] [ebp-14h] BYREF
  char v9[4]; // [esp+4h] [ebp-10h] BYREF
  int v10; // [esp+8h] [ebp-Ch]
  int HDEV; // [esp+Ch] [ebp-8h]
  char v12; // [esp+13h] [ebp-1h] BYREF

  result = g_pDwmState;
  if ( g_pDwmState )
  {
    result = (struct DwmState *)PsGetCurrentProcess();
    if ( result != (struct DwmState *)_gpepCSRSS )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v12);
      v8 = _ghsemGreLock;
      GreAcquireSemaphore(_ghsemGreLock);
      HDEV = UserGetHDEV();
      DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v9, v2, 0, 1);
      v3 = _ghsemDwmState;
      v10 = _ghsemDwmState;
      GreAcquireSemaphore(_ghsemDwmState);
      if ( g_pDwmState )
      {
        v4 = (struct DwmState *)*((_DWORD *)g_pDwmState + 11);
        if ( v4 != (struct DwmState *)((char *)g_pDwmState + 44) )
        {
          do
          {
            v5 = v4;
            v6 = (char *)v4 - 16;
            v4 = *(struct DwmState **)v4;
            v7 = v5 != 0 ? v6 : 0;
            if ( (*((_DWORD *)v7 + 12) & 0x400000) != 0 && *((_DWORD *)v7 + 18) == a1 )
              GreDeleteSprite(*(HDEV *)v7, (HWND)1);
          }
          while ( v4 != (struct DwmState *)((char *)g_pDwmState + 44) );
          v3 = v10;
        }
      }
      EtwTraceGreLockReleaseSemaphore(L"hsem", v3);
      GreReleaseSemaphoreInternal(v3);
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v9);
      SEMOBJ::vUnlock((SEMOBJ *)&v8);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      return (struct DwmState *)GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    }
  }
  return result;
}

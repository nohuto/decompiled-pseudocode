/*
 * XREFs of ?TabletRetrieveDevMode@@YGJPAU_devicemodeW@@@Z @ 0x147384
 * Callers:
 *     ?TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z @ 0x147169 (-TabletButtonHandler@@YGXPAUDEVICEINFO@@@Z.c)
 *     ?xxxTabletSetDisplayOrientation@@YGXJPAU_devicemodeW@@@Z @ 0x147613 (-xxxTabletSetDisplayOrientation@@YGXJPAU_devicemodeW@@@Z.c)
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

NTSTATUS __thiscall TabletRetrieveDevMode(_WORD *this)
{
  NTSTATUS v2; // ebx
  ULONG_PTR RegionSize; // [esp+1Ch] [ebp-20h] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+24h] [ebp-18h]

  BaseAddress = 0;
  RegionSize = 220;
  memset(this, 0, 0xDCu);
  this[34] = 220;
  v2 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, 0, &RegionSize, 0x1000u, 4u);
  if ( v2 >= 0 )
  {
    memset(BaseAddress, 0, 0xDCu);
    *((_WORD *)BaseAddress + 34) = 220;
    ms_exc.registration.TryLevel = -2;
    v2 = DrvEnumDisplaySettings(0, *(_DWORD *)(*(_DWORD *)(_gpDispInfo + 52) + 120), -1, BaseAddress, 6);
    if ( v2 >= 0 )
    {
      qmemcpy(this, BaseAddress, 0xDCu);
      ms_exc.registration.TryLevel = -2;
    }
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFF, &BaseAddress, &RegionSize, 0x8000u);
  }
  return v2;
}

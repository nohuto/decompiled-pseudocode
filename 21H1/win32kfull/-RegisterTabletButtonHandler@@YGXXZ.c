/*
 * XREFs of ?RegisterTabletButtonHandler@@YGXXZ @ 0x146FC0
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 * Callees:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 *     ?ReadTabletButtonSettings@@YGXXZ @ 0x146F47 (-ReadTabletButtonSettings@@YGXXZ.c)
 */

void __stdcall RegisterTabletButtonHandler()
{
  int v0; // esi
  int i; // ecx
  _WORD v2[2]; // [esp+Ch] [ebp-Ch] BYREF
  int v3; // [esp+10h] [ebp-8h]
  void (__stdcall *v4)(struct DEVICEINFO *); // [esp+14h] [ebp-4h]

  v3 = 256;
  v2[1] = 9;
  v2[0] = 1;
  v4 = TabletButtonHandler;
  ReadTabletButtonSettings();
  v0 = gObjDummyLock;
  for ( i = 3; i; --i )
    v0 += 4;
  _RegisterRawInputDevices((int)v2, 1u, 1);
}

/*
 * XREFs of ?CleanupFreedTLCInfo@@YGXXZ @ 0xC977A
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 * Callees:
 *     ?HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z @ 0xC97D4 (-HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 *     _FreeHidTLCInfo@4 @ 0xD2BB8 (_FreeHidTLCInfo@4.c)
 */

void __stdcall CleanupFreedTLCInfo()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  _DWORD *v4; // eax
  _DWORD *v5; // ecx
  struct tagHID_TLC_INFO *v6; // [esp+0h] [ebp-8h]
  int v7; // [esp+4h] [ebp-4h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v7, _gTLCInfoLock);
  v0 = (_DWORD *)RawInputManagerObject::gHidRequestTable[0];
  v1 = (_DWORD *)RawInputManagerObject::gHidRequestTable[0];
  while ( v1 != v0 )
  {
    v1 = (_DWORD *)*v1;
    if ( HidTLCInfoNoReference(v6) )
      FreeHidTLCInfo();
    v0 = (_DWORD *)RawInputManagerObject::gHidRequestTable[0];
  }
  v2 = v0 + 2;
  v3 = (_DWORD *)*v2;
  while ( v3 != v2 )
  {
    v4 = v3;
    v3 = (_DWORD *)*v3;
    if ( !v4[3] )
    {
      if ( (_DWORD *)v3[1] != v4 || (v5 = (_DWORD *)v4[1], (_DWORD *)*v5 != v4) )
        __fastfail(3u);
      *v5 = v3;
      v3[1] = v5;
      Win32FreePool(v4);
    }
    v2 = &RawInputManagerObject::gHidRequestTable[2];
  }
  if ( v7 )
    RIMUnlockExclusive(v7);
}

/*
 * XREFs of _AllocateAndLinkHidTLCInfo@8 @ 0xC97E6
 * Callers:
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall AllocateAndLinkHidTLCInfo(__int16 a1, __int16 a2)
{
  int v4; // eax
  int v5; // esi
  int *i; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v8, _gTLCInfoLock);
  v4 = Win32AllocPoolZInit(40, 1416131413);
  v5 = v4;
  if ( v4 )
  {
    *(_WORD *)(v4 + 8) = a1;
    *(_WORD *)(v4 + 10) = a2;
    if ( *(_DWORD *)(RawInputManagerObject::gHidRequestTable[0] + 4) != RawInputManagerObject::gHidRequestTable[0] )
      __fastfail(3u);
    *(_DWORD *)v4 = RawInputManagerObject::gHidRequestTable[0];
    *(_DWORD *)(v4 + 4) = RawInputManagerObject::gHidRequestTable[0];
    *(_DWORD *)(RawInputManagerObject::gHidRequestTable[0] + 4) = v4;
    RawInputManagerObject::gHidRequestTable[0] = v4;
    for ( i = (int *)RawInputManagerObject::gHidRequestTable[2];
          i != &RawInputManagerObject::gHidRequestTable[2];
          i = (int *)*i )
    {
      if ( *((_WORD *)i + 4) == a1 )
      {
        *(_DWORD *)(v5 + 24) = i[3];
        break;
      }
    }
  }
  else
  {
    v5 = 0;
  }
  if ( v8 )
    RIMUnlockExclusive(v8);
  return v5;
}

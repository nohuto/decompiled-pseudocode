/*
 * XREFs of _AllocateProcessHidTable@0 @ 0xC9520
 * Callers:
 *     __RegisterRawInputDevices@12 @ 0xC9866 (__RegisterRawInputDevices@12.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 */

_DWORD *__stdcall AllocateProcessHidTable()
{
  _DWORD *v0; // eax
  _DWORD *v1; // esi
  _DWORD *v2; // eax
  int v3; // ecx
  bool v4; // zf
  int v6; // [esp+4h] [ebp-4h] BYREF

  v0 = (_DWORD *)Win32AllocPoolWithQuotaZInit(60, 1953002325);
  v1 = v0;
  if ( !v0 )
    return 0;
  v0[3] = v0 + 2;
  v0[2] = v0 + 2;
  v0[5] = v0 + 4;
  v0[4] = v0 + 4;
  v0[7] = v0 + 6;
  v0[6] = v0 + 6;
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, _gTLCInfoLock);
  v2 = &RawInputManagerObject::gHidRequestTable[4];
  v3 = RawInputManagerObject::gHidRequestTable[4];
  if ( *(_DWORD **)(v3 + 4) != &RawInputManagerObject::gHidRequestTable[4] )
    __fastfail(3u);
  v4 = v6 == 0;
  *v1 = v3;
  v1[1] = v2;
  *(_DWORD *)(v3 + 4) = v1;
  *v2 = v1;
  if ( !v4 )
    RIMUnlockExclusive(v6);
  ++gnHidProcess;
  return v1;
}

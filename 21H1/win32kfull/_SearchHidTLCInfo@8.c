/*
 * XREFs of _SearchHidTLCInfo@8 @ 0xCA014
 * Callers:
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 * Callees:
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 */

int *__fastcall SearchHidTLCInfo(__int16 a1, __int16 a2)
{
  int *i; // esi
  int v6; // [esp+Ch] [ebp-4h] BYREF

  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v6, _gTLCInfoLock);
  for ( i = (int *)RawInputManagerObject::gHidRequestTable[0];
        i != (int *)RawInputManagerObject::gHidRequestTable[0];
        i = (int *)*i )
  {
    if ( *((_WORD *)i + 4) == a1 && *((_WORD *)i + 5) == a2 )
      goto LABEL_6;
  }
  i = 0;
LABEL_6:
  if ( v6 )
    RIMUnlockExclusive(v6);
  return i;
}

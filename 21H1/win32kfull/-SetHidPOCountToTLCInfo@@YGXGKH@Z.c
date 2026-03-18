/*
 * XREFs of ?SetHidPOCountToTLCInfo@@YGXGKH@Z @ 0x143E91
 * Callers:
 *     ?InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAUtagWND@@H@Z @ 0xC9B90 (-InsertProcRequest@@YGHPAUtagPROCESSINFO@@PBUtagRAWINPUTDEVICE@@PAUtagPROCESS_HID_REQUEST@@KHPAU.c)
 *     ?DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z @ 0x143B7C (-DerefPageOnlyRequest@@YGXPAUtagPROCESS_HID_REQUEST@@PAUtagPROCESS_HID_TABLE@@H@Z.c)
 * Callees:
 *     ?HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z @ 0xC97D4 (-HidTLCInfoNoReference@@YGHPAUtagHID_TLC_INFO@@@Z.c)
 *     ??0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z @ 0xCA066 (--0RIMLOCKExclusiveIfNeeded@@QAE@PAURIMLOCK@@@Z.c)
 *     _FreeHidTLCInfo@4 @ 0xD2BB8 (_FreeHidTLCInfo@4.c)
 */

void __userpurge SetHidPOCountToTLCInfo(__int16 a1@<cx>, unsigned __int16 a2, unsigned int a3, int a4)
{
  int v4; // [esp+Ch] [ebp-8h] BYREF
  __int16 v5; // [esp+12h] [ebp-2h]

  v5 = a1;
  RIMLOCKExclusiveIfNeeded::RIMLOCKExclusiveIfNeeded((RIMLOCKExclusiveIfNeeded *)&v4, (PKTHREAD *)_gTLCInfoLock);
  if ( v4 )
    RIMUnlockExclusive(v4);
}

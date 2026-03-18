/*
 * XREFs of ?BroadcastCompositionChange@@YGXPBUtagDESKTOP@@@Z @ 0xE110C
 * Callers:
 *     _zzzDecomposeDesktop@8 @ 0xCF042 (_zzzDecomposeDesktop@8.c)
 *     _zzzComposeDesktop@4 @ 0xE0A14 (_zzzComposeDesktop@4.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _xxxSendMessageBSM@24 @ 0x7F422 (_xxxSendMessageBSM@24.c)
 */

void __thiscall BroadcastCompositionChange(_DWORD *this)
{
  _DWORD v2[7]; // [esp+4h] [ebp-24h] BYREF
  _BYTE v3[8]; // [esp+20h] [ebp-8h] BYREF

  v2[0] = 8;
  v2[1] = 178;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v3);
  xxxSendMessageBSM(*(_DWORD *)(this[1] + 12), 798, 0, 0, v2, 1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v3);
}

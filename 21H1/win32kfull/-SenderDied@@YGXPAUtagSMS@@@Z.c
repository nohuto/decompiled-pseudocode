/*
 * XREFs of ?SenderDied@@YGXPAUtagSMS@@@Z @ 0xD487A
 * Callers:
 *     _SendMsgCleanup@4 @ 0x9A52C (_SendMsgCleanup@4.c)
 * Callees:
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 */

void __thiscall SenderDied(_DWORD *this)
{
  int v2; // esi
  int v3; // eax
  int v4; // ecx

  v2 = 0;
  v3 = this[4];
  if ( !v3 )
    v3 = this[8];
  this[11] |= 4u;
  this[4] = 0;
  v4 = this[11];
  if ( (v4 & 0x4000) != 0 )
  {
    v4 |= 8u;
    this[11] = v4;
    v2 = 1;
  }
  if ( *(_DWORD **)(v3 + 272) == this )
    v2 = 1;
  if ( (*(_BYTE *)(v3 + 264) & 1) != 0 || !v2 )
  {
    if ( (v4 & 2) != 0 || (v4 & 9) == 1 )
      UnlinkSendListSms(this);
    else
      this[11] = v4 | 8;
  }
  else
  {
    this[9] = 0;
    this[11] = v4 | 1;
    SetWakeBit(v3, 512);
  }
}

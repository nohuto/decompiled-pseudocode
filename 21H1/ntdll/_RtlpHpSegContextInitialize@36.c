/*
 * XREFs of _RtlpHpSegContextInitialize@36 @ 0x4B37B6E8
 * Callers:
 *     _RtlpHpHeapCreate@20 @ 0x4B378A0E (_RtlpHpHeapCreate@20.c)
 * Callees:
 *     _memset @ 0x4B2F8F30 (_memset.c)
 */

int __thiscall RtlpHpSegContextInitialize(char *this, int a2, int a3, int a4, __int16 a5, char a6, int a7, int a8)
{
  unsigned int v9; // eax
  int result; // eax
  size_t v11; // [esp-4h] [ebp-Ch]

  LODWORD(v11) = 128;
  memset(this, 0, v11);
  *(_DWORD *)this = -1048576;
  _BitScanReverse(&v9, 0x1000u);
  *((_DWORD *)this + 3) = 520192;
  this[4] = v9;
  _BitScanForward(&v9, 1u);
  this[6] = 1;
  this[5] = v9;
  this[9] = a6;
  *(_WORD *)(this + 7) = 1031;
  *((_DWORD *)this + 18) = this + 68;
  *((_DWORD *)this + 17) = this + 68;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_WORD *)this + 8) = a5 - (_WORD)this + 16;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 7) = a7;
  *((_DWORD *)this + 8) = a8;
  result = a2;
  *((_WORD *)this + 9) = a5 - (_WORD)this;
  *((_DWORD *)this + 9) = a2;
  return result;
}

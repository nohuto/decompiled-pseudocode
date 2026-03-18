/*
 * XREFs of KiTpEmulateRegisterPushPop @ 0x140AB315C
 * Callers:
 *     KiTpEmulateInstruction @ 0x140AB28B8 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140AB2008 (KiTpAccessMemory.c)
 *     KiTpGetRegisterAddressByIndex @ 0x140AB32D4 (KiTpGetRegisterAddressByIndex.c)
 */

__int64 __fastcall KiTpEmulateRegisterPushPop(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  int v6; // ebx
  _BYTE *RegisterAddressByIndex; // r10
  char v8; // r11
  unsigned __int8 v9; // dl
  char *v10; // r8
  char *v11; // rdi

  if ( a2 )
  {
    v6 = a3 & 8;
    RegisterAddressByIndex = (_BYTE *)KiTpGetRegisterAddressByIndex(a1, a2, a3 & 7, *(_BYTE *)(a1 + 25) & 1, 1);
    v9 = *(_BYTE *)(a1 + 1) >> 3;
    v10 = *(char **)(*(_QWORD *)(a2 + 8) + 152LL);
    v11 = &v10[-v9];
    if ( v6 )
      v11 = &v10[v9];
    else
      v10 -= v9;
    result = KiTpAccessMemory(a2, RegisterAddressByIndex, v10, *(_BYTE *)(a2 + 16), 0, v9, v8);
    if ( (int)result >= 0 )
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) = v11;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1) != 16 )
      *(_BYTE *)(a1 + 1) = 64;
    return 0LL;
  }
  return result;
}

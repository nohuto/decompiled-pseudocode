/*
 * XREFs of KiTpEmulateRegisterPushPop @ 0x140A140DC
 * Callers:
 *     KiTpEmulateInstruction @ 0x140A138C0 (KiTpEmulateInstruction.c)
 * Callees:
 *     KiTpAccessMemory @ 0x140A13008 (KiTpAccessMemory.c)
 *     KiTpGetRegisterAddressByIndex @ 0x140A14254 (KiTpGetRegisterAddressByIndex.c)
 */

__int64 __fastcall KiTpEmulateRegisterPushPop(__int64 a1, __int64 a2, char a3)
{
  __int64 result; // rax
  _BYTE *RegisterAddressByIndex; // r10
  unsigned __int8 v7; // r9
  volatile void *v8; // rbx
  char v9; // r11
  int v10; // r11d
  volatile void *v11; // r8

  if ( a2 )
  {
    RegisterAddressByIndex = (_BYTE *)KiTpGetRegisterAddressByIndex(a1, a2, a3 & 7, *(_BYTE *)(a1 + 25) & 1, 1);
    v7 = *(_BYTE *)(a1 + 1) >> 3;
    v8 = (volatile void *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) - v7);
    v10 = v9 & 8;
    if ( v10 )
      v8 = (volatile void *)(v7 + *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL));
    v11 = v8;
    if ( v10 )
      v11 = *(volatile void **)(*(_QWORD *)(a2 + 8) + 152LL);
    result = KiTpAccessMemory(a2, RegisterAddressByIndex, v11, *(_BYTE *)(a2 + 16), 0, v7, v10 == 0);
    if ( (int)result >= 0 )
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 152LL) = v8;
  }
  else
  {
    if ( *(_BYTE *)(a1 + 1) != 16 )
      *(_BYTE *)(a1 + 1) = 64;
    return 0LL;
  }
  return result;
}

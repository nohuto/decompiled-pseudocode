/*
 * XREFs of sub_18007731C @ 0x18007731C
 * Callers:
 *     sub_180081090 @ 0x180081090 (sub_180081090.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180076564 @ 0x180076564 (sub_180076564.c)
 */

__int64 __fastcall sub_18007731C(__int64 a1, __int64 a2, char a3)
{
  unsigned int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp-10h] BYREF
  char v12; // [rsp+78h] [rbp+20h] BYREF

  v5 = Pdcv2ActivationClientRenewActivation();
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 9LL) )
  {
    v12 = a3;
    v11 = a1;
    v10 = v5;
    sub_180076564(v6, byte_18009EEC1, v7, v8, (__int64)&v10, (__int64)&v11, (__int64)&v12);
  }
  return v5;
}

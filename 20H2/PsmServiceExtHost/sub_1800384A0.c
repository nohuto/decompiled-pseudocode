/*
 * XREFs of sub_1800384A0 @ 0x1800384A0
 * Callers:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

char __fastcall sub_1800384A0(__int64 a1)
{
  char result; // al
  int v3; // ecx
  int v4; // r8d
  int v5; // r9d
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = Pdcv2ActivationClientDeactivate();
  if ( (unsigned int)dword_1800B31E0 > 4 )
  {
    result = sub_180010470((__int64)&dword_1800B31E0, 9LL);
    if ( result )
    {
      v7 = a1;
      v6 = v5;
      return sub_180063424(v3, (unsigned int)&unk_18009E89C, v4, v5, (__int64)&v6, (__int64)&v7);
    }
  }
  return result;
}

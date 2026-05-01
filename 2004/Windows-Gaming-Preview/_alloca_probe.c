/*
 * XREFs of _alloca_probe @ 0x180045C20
 * Callers:
 *     sub_180002780 @ 0x180002780 (sub_180002780.c)
 *     sub_180002F40 @ 0x180002F40 (sub_180002F40.c)
 *     sub_180004674 @ 0x180004674 (sub_180004674.c)
 *     sub_180004CAC @ 0x180004CAC (sub_180004CAC.c)
 *     sub_180005EA0 @ 0x180005EA0 (sub_180005EA0.c)
 *     sub_18001211C @ 0x18001211C (sub_18001211C.c)
 *     sub_18003FC80 @ 0x18003FC80 (sub_18003FC80.c)
 *     sub_180040654 @ 0x180040654 (sub_180040654.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}

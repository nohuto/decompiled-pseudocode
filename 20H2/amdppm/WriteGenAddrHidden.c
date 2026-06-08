/*
 * XREFs of WriteGenAddrHidden @ 0x1C000314C
 * Callers:
 *     WriteGenAddrHiddenEx @ 0x1C00031F0 (WriteGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x1C000BEF0 (SetPerfStateIOHidden.c)
 * Callees:
 *     WriteGenAddr @ 0x1C0003064 (WriteGenAddr.c)
 *     WriteIoMemRawHidden @ 0x1C0003370 (WriteIoMemRawHidden.c)
 */

void __fastcall WriteGenAddrHidden(unsigned int a1, _BYTE *a2, __int64 a3)
{
  char v5; // r9
  __int64 v6; // rdx
  unsigned __int8 v7; // bl
  __int64 v8; // r11
  char v9; // cl
  __int64 v10; // rdx

  if ( *a2 )
  {
    v5 = a2[2];
    if ( v5 || a2[1] != a2[3] )
    {
      v7 = a2[1];
      v8 = ((1LL << v7) - 1) << v5;
      v9 = a2[3];
      if ( v9 == 64 )
        v10 = -1LL;
      else
        v10 = (1LL << v9) - 1;
      v6 = ~v8 & v10;
      if ( v7 < 0x40u || v5 )
        a3 = v8 & (a3 << v5);
    }
    else
    {
      v6 = 0LL;
    }
    WriteIoMemRawHidden(a1, a2, v6, a3);
  }
  else
  {
    WriteGenAddr(a2, a3);
  }
}

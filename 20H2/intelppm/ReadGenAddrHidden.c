/*
 * XREFs of ReadGenAddrHidden @ 0x1C0008788
 * Callers:
 *     ReadGenAddrHiddenEx @ 0x1C00087F0 (ReadGenAddrHiddenEx.c)
 *     SetPerfStateIOHidden @ 0x1C000EFE0 (SetPerfStateIOHidden.c)
 * Callees:
 *     ReadGenAddr @ 0x1C00086DC (ReadGenAddr.c)
 *     ReadIoMemRawHidden @ 0x1C0008964 (ReadIoMemRawHidden.c)
 */

unsigned __int64 __fastcall ReadGenAddrHidden(__int64 a1, _BYTE *a2)
{
  unsigned __int64 IoMemRawHidden; // rax
  unsigned __int64 v5; // rdx
  char v6; // cl
  unsigned __int8 v7; // cl

  if ( !a2 )
    return 0LL;
  if ( !*a2 || *a2 == 126 )
    return ReadGenAddr((__int64)a2);
  IoMemRawHidden = ReadIoMemRawHidden();
  v5 = IoMemRawHidden;
  if ( IoMemRawHidden )
  {
    v6 = a2[2];
    if ( v6 )
      v5 = IoMemRawHidden >> v6;
    v7 = a2[1];
    if ( v7 < 0x40u )
      v5 &= (1LL << v7) - 1;
  }
  return v5;
}

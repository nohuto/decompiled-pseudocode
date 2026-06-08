/*
 * XREFs of WriteIoMemRaw @ 0x1C0008BF0
 * Callers:
 *     PerfControlHwp @ 0x1C00070F0 (PerfControlHwp.c)
 *     WriteGenAddr @ 0x1C0008A08 (WriteGenAddr.c)
 *     WriteIoMemRawEx @ 0x1C0008C80 (WriteIoMemRawEx.c)
 *     PerfControlCpcSingleRegister @ 0x1C0009590 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

char __fastcall WriteIoMemRaw(__int64 a1, unsigned __int64 a2)
{
  char result; // al
  _BYTE *v3; // r9
  char v5; // dl
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = 0;
  v3 = *(_BYTE **)(a1 + 4);
  v5 = *(_BYTE *)(a1 + 3);
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 1 )
    {
      switch ( v5 )
      {
        case 8:
          result = a2;
          __outbyte((unsigned __int16)v3, a2);
          break;
        case 16:
          result = a2;
          __outword((unsigned __int16)v3, a2);
          break;
        case 32:
          result = a2;
          __outdword((unsigned __int16)v3, a2);
          break;
      }
    }
    else if ( *(_BYTE *)a1 == 127 && v5 == 64 )
    {
      result = a2;
      __writemsr((unsigned int)v3, a2);
    }
  }
  else
  {
    switch ( v5 )
    {
      case 8:
        *v3 = a2;
        break;
      case 16:
        *(_WORD *)v3 = a2;
        break;
      case 32:
        *(_DWORD *)v3 = a2;
        break;
      default:
        return result;
    }
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}

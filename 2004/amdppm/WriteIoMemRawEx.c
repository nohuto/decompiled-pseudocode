/*
 * XREFs of WriteIoMemRawEx @ 0x1C00032DC
 * Callers:
 *     WriteGenAddrEx @ 0x1C00030D4 (WriteGenAddrEx.c)
 * Callees:
 *     WriteIoMemRaw @ 0x1C000324C (WriteIoMemRaw.c)
 */

char __fastcall WriteIoMemRawEx(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned int v5; // r10d
  int v6; // ecx
  __int64 v7; // r8
  signed __int32 v9[10]; // [rsp+0h] [rbp-28h] BYREF

  v3 = *(_QWORD *)(a1 + 4);
  if ( *(_BYTE *)a1 == 10 )
  {
    v5 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
    if ( v5 > 8 )
    {
      if ( v5 > 0x10 )
      {
        v6 = 64;
        if ( v5 <= 0x20 )
          v6 = 32;
      }
      else
      {
        v6 = 16;
      }
    }
    else
    {
      v6 = 8;
    }
    v4 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v4 + 88);
    switch ( v6 )
    {
      case 8:
        *(_BYTE *)(v3 + v7) = a2;
        break;
      case 16:
        *(_WORD *)(v3 + v7) = a2;
        break;
      case 32:
        *(_DWORD *)(v3 + v7) = a2;
        break;
      default:
        *(_QWORD *)(v3 + v7) = a2;
        break;
    }
    _InterlockedOr(v9, 0);
  }
  else
  {
    LOBYTE(v4) = WriteIoMemRaw(a1, a2);
  }
  return v4;
}

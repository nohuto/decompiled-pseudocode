/*
 * XREFs of DisplayPortEscapeI2cIoTransmission @ 0x1C004DD54
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004E010 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     CallDPDdiEscape @ 0x1C004DA68 (CallDPDdiEscape.c)
 */

__int64 __fastcall DisplayPortEscapeI2cIoTransmission(struct DXGADAPTER **a1, void *a2, int *a3)
{
  signed int v6; // esi
  _DWORD *v7; // rax
  _DWORD *v8; // rbx
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // ecx
  unsigned int v12; // r9d
  int v13; // eax

  v6 = a3[4] + 36;
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  v8 = v7;
  if ( v7 )
  {
    memset(v7, 0, v6);
    v10 = v8[3];
    *v8 = 516;
    v8[3] ^= (*a3 ^ v10) & 1;
    v8[3] ^= (*a3 ^ v8[3]) & 2;
    v8[4] ^= (v8[4] ^ ((unsigned int)*a3 >> 6)) & 1;
    v11 = v8[4] ^ ((unsigned __int8)v8[4] ^ (unsigned __int8)((unsigned int)*a3 >> 1)) & 2;
    v8[4] = v11;
    v8[4] = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)((unsigned int)*a3 >> 1)) & 0x1C;
    v8[5] = a3[1];
    v8[6] = a3[2];
    *((_BYTE *)v8 + 28) = *((_BYTE *)a3 + 12);
    v8[7] ^= (v8[7] ^ a3[3]) & 0x7F00;
    *((_BYTE *)v8 + 32) = *((_BYTE *)a3 + 20);
    *((_BYTE *)v8 + 34) = *((_BYTE *)a3 + 24);
    if ( (*a3 & 2) != 0 )
      memmove(v8 + 9, a3 + 10, (unsigned int)a3[5]);
    v9 = CallDPDdiEscape(a1, a2, v6, v8);
    a3[7] = v8[2];
    a3[8] = *((unsigned __int8 *)v8 + 33);
    v12 = *((unsigned __int8 *)v8 + 35);
    v13 = *a3;
    a3[9] = v12;
    if ( (v13 & 1) != 0 )
    {
      if ( v12 > *((unsigned __int8 *)v8 + 34) )
        v12 = *((unsigned __int8 *)v8 + 34);
      memmove(a3 + 10, v8 + 9, v12);
    }
    ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v9;
}

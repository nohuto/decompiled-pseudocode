/*
 * XREFs of DisplayPortEscapeAuxIoTransmission @ 0x1C004EA54
 * Callers:
 *     NtDxgkDisplayPortOperation @ 0x1C004EF60 (NtDxgkDisplayPortOperation.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     CallDPDdiEscape @ 0x1C004E9B8 (CallDPDdiEscape.c)
 */

__int64 __fastcall DisplayPortEscapeAuxIoTransmission(struct DXGADAPTER **a1, void *a2, int *a3)
{
  _OWORD *v6; // rax
  char *v7; // rbx
  unsigned int v8; // esi
  unsigned int v9; // eax
  int v10; // ecx

  v6 = operator new[](0x30uLL, 0x4B677844u, PagedPool);
  v7 = (char *)v6;
  if ( v6 )
  {
    *v6 = 0LL;
    v6[1] = 0LL;
    v6[2] = 0LL;
    *(_DWORD *)v6 = 515;
    *((_DWORD *)v6 + 3) = (*a3 & 1) + 1;
    *((_DWORD *)v6 + 4) ^= (*((_DWORD *)v6 + 4) ^ ((unsigned int)*a3 >> 1)) & 1;
    *((_DWORD *)v6 + 5) = a3[1];
    *((_DWORD *)v6 + 6) = a3[2];
    *((_BYTE *)v6 + 28) = *((_BYTE *)a3 + 12);
    if ( (*a3 & 1) != 0 )
      *(_OWORD *)((char *)v6 + 30) = *(_OWORD *)((char *)a3 + 21);
    v9 = CallDPDdiEscape(a1, a2, 0x30u, v6);
    v10 = *a3;
    v8 = v9;
    a3[4] = *((_DWORD *)v7 + 2);
    *((_BYTE *)a3 + 20) = v7[29];
    if ( (v10 & 1) == 0 )
      *(_OWORD *)((char *)a3 + 21) = *(_OWORD *)(v7 + 30);
    ExFreePoolWithTag(v7, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v8;
}

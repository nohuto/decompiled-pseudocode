/*
 * XREFs of ?IsValidCloneGroup@@YAEPEAUD3DKMT_GETPATHSMODALITY@@I@Z @ 0x1C02961E4
 * Callers:
 *     ?IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0296144 (-IsValidCloneConfiguration@@YAEPEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C02962B8 (-IsVirtualModeSupported@@YAEAEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z.c)
 */

char __fastcall IsValidCloneGroup(struct D3DKMT_GETPATHSMODALITY *a1, unsigned int a2)
{
  char v3; // si
  char *v4; // rbx
  unsigned __int8 v5; // al
  int v6; // r9d
  unsigned int v7; // r11d
  char v8; // r9
  unsigned __int8 i; // bp
  char *v10; // r10
  __int64 v11; // r10

  v3 = 1;
  v4 = (char *)a1 + 272 * a2;
  v5 = IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v4 + 48));
  v7 = v6 + 1;
  v8 = 0;
  for ( i = v5; v7 < *((unsigned __int16 *)a1 + 10); ++v7 )
  {
    v10 = (char *)a1 + 272 * v7;
    if ( *((_DWORD *)v4 + 58) == *((_DWORD *)v10 + 58) )
    {
      i &= -(IsVirtualModeSupported((struct D3DKMT_PATHMODALITY_DESCRIPTOR *)(v10 + 48)) != 0);
      if ( *((_DWORD *)v4 + 18) != *(_DWORD *)(v11 + 72)
        || *((_DWORD *)v4 + 16) != *(_DWORD *)(v11 + 64)
        || *((_DWORD *)v4 + 17) != *(_DWORD *)(v11 + 68) )
      {
        v3 = v8;
      }
      *(_QWORD *)(v11 + 48) |= 0x2000000000uLL;
    }
  }
  if ( i || v3 )
    return 1;
  return v8;
}

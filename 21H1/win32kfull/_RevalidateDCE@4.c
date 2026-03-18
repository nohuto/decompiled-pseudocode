/*
 * XREFs of _RevalidateDCE@4 @ 0x83C68
 * Callers:
 *     _DeleteHrgnClip@4 @ 0x83A5C (_DeleteHrgnClip@4.c)
 *     _UpdateRedirectedDCE@8 @ 0x83AE6 (_UpdateRedirectedDCE@8.c)
 *     ?RecalcDCVisRgn@@YGXPAUHDC__@@@Z @ 0x1A90C1 (-RecalcDCVisRgn@@YGXPAUHDC__@@@Z.c)
 * Callees:
 *     _SpbCheckDce@4 @ 0x3272A (_SpbCheckDce@4.c)
 *     _InvalidateDCE@4 @ 0x3277C (_InvalidateDCE@4.c)
 */

int __stdcall RevalidateDCE(int *a1)
{
  int v1; // edx
  int v2; // edi
  int v3; // ebx
  int v4; // ebx
  int v5; // ecx
  int v7; // ecx
  unsigned __int8 v8; // bl

  v1 = a1[8];
  if ( (v1 & 0x1000) != 0 )
  {
    v2 = a1[2];
    v3 = a1[3];
    if ( v1 >= 0 )
    {
      v1 &= 0x7FFFFFE7u;
      a1[8] = v1;
      if ( *(char *)(*(_DWORD *)(*(_DWORD *)(v2 + 76) + 4) + 8) >= 0
        || (v7 = *(_DWORD *)(v2 + 20), (*(_BYTE *)(v7 + 13) & 1) == 0)
        && (*(_BYTE *)(*(_DWORD *)(v3 + 20) + 23) & 2) != 0
        || (v8 = *(_BYTE *)(*(_DWORD *)(v3 + 20) + 23), ((v8 ^ *(_BYTE *)(v7 + 23)) & 0x10) != 0) )
      {
        v4 = *(_DWORD *)(v2 + 20);
        v5 = v1;
        if ( (*(_BYTE *)(v4 + 23) & 0x22) == 2 )
        {
          v5 = v1 | 8;
          a1[8] = v1 | 8;
          v4 = *(_DWORD *)(v2 + 20);
        }
        v1 = v5;
        if ( (*(_BYTE *)(v4 + 23) & 4) == 0 )
          goto LABEL_8;
      }
      else if ( (v8 & 4) == 0 )
      {
        goto LABEL_8;
      }
      v1 |= 0x10u;
    }
LABEL_8:
    a1[8] = v1 | 0x2000;
    return UserSetDCVisRgn(a1);
  }
  SpbCheckDce(a1);
  return InvalidateDCE(a1);
}

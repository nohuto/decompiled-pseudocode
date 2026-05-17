/*
 * XREFs of _RtlFindClosestEncodableLength@12 @ 0x4B356360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall RtlFindClosestEncodableLength(unsigned __int64 a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // edi
  unsigned int v5; // edi

  v2 = HIDWORD(a1);
  v3 = a1;
  if ( !HIDWORD(a1) )
    goto LABEL_4;
  if ( a1 <= 0xFFFFFFFF00LL )
  {
    v4 = a1 & 0xFFFFFF00;
    if ( (_DWORD)a1 == (a1 & 0xFFFFFF00) )
    {
LABEL_4:
      *(_QWORD *)a2 = a1;
      return 0;
    }
    v3 = v4 + 256;
    *(_DWORD *)a2 = v4 + 256;
    v2 = __CFADD__(v4, 256) + HIDWORD(a1);
    *(_DWORD *)(a2 + 4) = v2;
    if ( __PAIR64__(HIDWORD(a1), v4) + 256 <= 0xFFFFFFFF00LL )
      return 0;
  }
  if ( __PAIR64__(v2, v3) <= 0xFFFFFFFF0000LL )
  {
    v5 = v3 & 0xFFFF0000;
    if ( v3 == (v3 & 0xFFFF0000) )
      goto LABEL_8;
    v3 = v5 + 0x10000;
    *(_DWORD *)a2 = v5 + 0x10000;
    v2 += __CFADD__(v5, 0x10000);
    *(_DWORD *)(a2 + 4) = v2;
    if ( __PAIR64__(v2, v5) + 0x10000 <= 0xFFFFFFFF0000LL )
      return 0;
  }
  if ( __PAIR64__(v2, v3) <= 0xFFFFFFFF00000000uLL )
  {
    if ( v3 )
    {
      *(_DWORD *)a2 = 0;
      ++v2;
      goto LABEL_9;
    }
LABEL_8:
    *(_DWORD *)a2 = v3;
LABEL_9:
    *(_DWORD *)(a2 + 4) = v2;
    return 0;
  }
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  return -1073741823;
}

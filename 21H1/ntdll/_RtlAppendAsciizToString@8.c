/*
 * XREFs of _RtlAppendAsciizToString@8 @ 0x4B34E070
 * Callers:
 *     <none>
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlAppendAsciizToString(unsigned __int16 *a1, const char *Src)
{
  size_t v2; // esi
  int v3; // ebx

  if ( !Src )
    return 0;
  v2 = strlen(Src);
  if ( v2 <= 0xFFFF )
  {
    v3 = *a1;
    if ( v3 + v2 <= a1[1] )
    {
      memmove((void *)(v3 + *((_DWORD *)a1 + 1)), Src, v2);
      *a1 += v2;
      return 0;
    }
  }
  return -1073741789;
}

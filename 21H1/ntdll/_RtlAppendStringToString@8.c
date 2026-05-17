/*
 * XREFs of _RtlAppendStringToString@8 @ 0x4B34E0D0
 * Callers:
 *     <none>
 * Callees:
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 */

int __stdcall RtlAppendStringToString(unsigned __int16 *a1, const void **a2)
{
  int v2; // esi
  int v3; // ebx

  v2 = *(unsigned __int16 *)a2;
  if ( (_WORD)v2 )
  {
    v3 = *a1;
    if ( v2 + v3 > (unsigned int)a1[1] )
      return -1073741789;
    memmove((void *)(v3 + *((_DWORD *)a1 + 1)), a2[1], *(unsigned __int16 *)a2);
    *a1 += v2;
  }
  return 0;
}

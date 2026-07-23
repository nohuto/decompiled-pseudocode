/*
 * XREFs of __memccpy @ 0x4B2F7010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__cdecl _memccpy(void *Dst, const void *Src, int Val, size_t Size)
{
  int v4; // ecx
  void *result; // eax
  char *v6; // esi
  char v7; // bl
  char v8; // bl
  char v9; // bl

  v4 = Size;
  if ( !(_DWORD)Size )
    return 0;
  result = Dst;
  v6 = (char *)Src;
  if ( (Size & 1) == 0 )
    goto LABEL_5;
  v7 = *(_BYTE *)Src;
  v6 = (char *)Src + 1;
  *(_BYTE *)Dst = *(_BYTE *)Src;
  result = (char *)Dst + 1;
  if ( v7 == (_BYTE)Val )
    return result;
  v4 = Size - 1;
  if ( (_DWORD)Size == 1 )
    return 0;
LABEL_5:
  while ( 1 )
  {
    v8 = *v6;
    v6 += 2;
    if ( v8 == (_BYTE)Val )
      break;
    *(_BYTE *)result = v8;
    v9 = *(v6 - 1);
    *((_BYTE *)result + 1) = v9;
    result = (char *)result + 2;
    if ( v9 == (_BYTE)Val )
      return result;
    v4 -= 2;
    if ( !v4 )
      return 0;
  }
  *(_BYTE *)result = v8;
  return (char *)result + 1;
}

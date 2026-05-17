/*
 * XREFs of _AlpcInitializeMessageAttribute@16 @ 0x4B2E9E60
 * Callers:
 *     <none>
 * Callees:
 *     _AlpcGetHeaderSize@4 @ 0x4B2E9EE0 (_AlpcGetHeaderSize@4.c)
 */

int __stdcall AlpcInitializeMessageAttribute(int a1, _DWORD *a2, unsigned int a3, unsigned int *a4)
{
  unsigned int HeaderSize; // eax

  HeaderSize = AlpcGetHeaderSize(a1);
  *a4 = HeaderSize;
  if ( HeaderSize > a3 )
    return -1073741789;
  if ( a2 )
  {
    a2[1] = 0;
    *a2 = a1;
  }
  return 0;
}

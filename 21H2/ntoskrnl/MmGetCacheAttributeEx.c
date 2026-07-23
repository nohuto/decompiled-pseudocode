/*
 * XREFs of MmGetCacheAttributeEx @ 0x140532260
 * Callers:
 *     MmGetCacheAttribute @ 0x140532240 (MmGetCacheAttribute.c)
 * Callees:
 *     MiLookupIoPageNode @ 0x14021901C (MiLookupIoPageNode.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttributeEx(unsigned __int64 a1, int a2, _DWORD *a3)
{
  ULONG_PTR v5; // rbx
  int v6; // ecx
  _QWORD *v7; // rax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  if ( a1 >> 12 <= 0xFFFFFFFFFLL && ((*(_QWORD *)(48 * v5 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
  {
    if ( !*(_WORD *)(48 * v5 - 0x57FFFFFFFE0LL) && (struct _KTHREAD *)qword_140C4E748 != KeGetCurrentThread() )
      KeBugCheckEx(0x1Au, 0x1232uLL, v5, *(_BYTE *)(48 * v5 - 0x57FFFFFFFDELL) & 7, 0LL);
    v6 = *(unsigned __int8 *)(48 * v5 - 0x57FFFFFFFDELL) >> 6;
  }
  else
  {
    if ( (a2 & 1) == 0 )
      return 3221225793LL;
    v7 = MiLookupIoPageNode(v5);
    if ( v7 )
      v6 = *(unsigned __int16 *)(v7[6] + 2 * ((v5 & 0xFFFFFFFFFLL) - v7[5])) >> 14;
    else
      v6 = 3;
  }
  switch ( v6 )
  {
    case 1:
      *a3 = 1;
      return 0LL;
    case 0:
      *a3 = 0;
      return 0LL;
    case 2:
      *a3 = 2;
      return 0LL;
  }
  return 3221225711LL;
}

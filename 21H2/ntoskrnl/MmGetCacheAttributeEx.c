/*
 * XREFs of MmGetCacheAttributeEx @ 0x140585C20
 * Callers:
 *     HalCreateCommonBufferFromMdl @ 0x140514560 (HalCreateCommonBufferFromMdl.c)
 *     MmGetCacheAttribute @ 0x140585C00 (MmGetCacheAttribute.c)
 * Callees:
 *     MiLookupIoPageNode @ 0x1402137E4 (MiLookupIoPageNode.c)
 *     MiIsPageInHugePfn @ 0x1402166E0 (MiIsPageInHugePfn.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MmGetCacheAttributeEx(unsigned __int64 a1, int a2, _DWORD *a3)
{
  ULONG_PTR v5; // rbx
  int v6; // eax

  if ( (a2 & 0xFFFFFFFE) != 0 )
    return 3221225712LL;
  v5 = a1 >> 12;
  if ( a1 >> 12 <= qword_140C50840 && ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    if ( !*(_WORD *)(48 * v5 - 0x21FFFFFFFFE0LL) && (struct _KTHREAD *)qword_140C52A08 != KeGetCurrentThread() )
      KeBugCheckEx(0x1Au, 0x1232uLL, v5, *(_BYTE *)(48 * v5 - 0x21FFFFFFFFDELL) & 7, 0LL);
    v6 = *(unsigned __int8 *)(48 * v5 - 0x21FFFFFFFFDELL) >> 6;
  }
  else
  {
    if ( (a2 & 1) == 0 )
      return 3221225793LL;
    v6 = MiLookupIoPageNode(v5, 0);
    if ( v6 == 3 )
    {
      if ( MiIsPageInHugePfn(v5) )
      {
LABEL_14:
        *a3 = 1;
        return 0LL;
      }
      v6 = 3;
    }
  }
  switch ( v6 )
  {
    case 1:
      goto LABEL_14;
    case 0:
      *a3 = 0;
      return 0LL;
    case 2:
      *a3 = 2;
      return 0LL;
  }
  return 3221225711LL;
}

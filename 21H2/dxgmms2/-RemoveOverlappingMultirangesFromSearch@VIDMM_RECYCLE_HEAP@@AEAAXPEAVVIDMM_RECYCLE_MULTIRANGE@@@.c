/*
 * XREFs of ?RemoveOverlappingMultirangesFromSearch@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0080A28
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007F900 (-ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C0081BBC (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::RemoveOverlappingMultirangesFromSearch(
        VIDMM_RECYCLE_HEAP *this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2)
{
  struct VIDMM_RECYCLE_RANGE *i; // rbx
  int v5; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *v6; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v7; // rsi
  struct VIDMM_RECYCLE_MULTIRANGE *v8; // rsi

  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    WdLogSingleEntry1(4LL, i);
    v5 = *((_DWORD *)a2 + 54);
    if ( v5 )
    {
      v6 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 17);
      if ( v6 )
      {
        WdLogSingleEntry1(4LL, *((_QWORD *)i + 17));
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v6, a2);
        *((_QWORD *)i + 17) = 0LL;
        v5 = *((_DWORD *)a2 + 54);
      }
    }
    if ( v5 != 1 )
    {
      v7 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 18);
      if ( v7 )
      {
        WdLogSingleEntry1(4LL, *((_QWORD *)i + 18));
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v7, a2);
        *((_QWORD *)i + 18) = 0LL;
        v5 = *((_DWORD *)a2 + 54);
      }
    }
    if ( v5 != 2 )
    {
      v8 = (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)i + 19);
      if ( v8 )
      {
        WdLogSingleEntry1(4LL, *((_QWORD *)i + 19));
        VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(this, v8, a2);
        *((_QWORD *)i + 19) = 0LL;
      }
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
}

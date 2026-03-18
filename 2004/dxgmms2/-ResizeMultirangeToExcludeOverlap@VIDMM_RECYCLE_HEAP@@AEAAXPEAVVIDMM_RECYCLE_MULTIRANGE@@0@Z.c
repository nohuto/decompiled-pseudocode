/*
 * XREFs of ?ResizeMultirangeToExcludeOverlap@VIDMM_RECYCLE_HEAP@@AEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@0@Z @ 0x1C007A5F0
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C0078F40 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z @ 0x1C00780C4 (-ShrinkTo@VIDMM_RECYCLE_MULTIRANGE@@QEAAX_K0@Z.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A364 (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007A7D8 (-DestroyMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_MULTIRANGE@@@Z.c)
 *     ?GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ @ 0x1C007A860 (-GetNextRange@VIDMM_RECYCLE_RANGE@@QEAAPEAV1@XZ.c)
 *     ?RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C007BDF0 (-RemoveMultirangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0085B20 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0086574 (-MarkAllRangesWithNewOwner@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00C1E68 (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP::ResizeMultirangeToExcludeOverlap(
        VIDMM_RECYCLE_HEAP_MGR **this,
        struct VIDMM_RECYCLE_MULTIRANGE *a2,
        struct VIDMM_RECYCLE_MULTIRANGE *a3)
{
  unsigned __int64 v3; // r12
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rsi
  unsigned int v10; // r14d
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  struct VIDMM_RECYCLE_MULTIRANGE *v13; // r8
  struct VIDMM_RECYCLE_RANGE *i; // rcx
  int v15; // edx
  int v16; // edx
  struct VIDMM_RECYCLE_RANGE *NextRange; // rax
  struct VIDMM_RECYCLE_RANGE *v18; // r13
  struct VIDMM_RECYCLE_RANGE *v19; // rsi
  VIDMM_RECYCLE_MULTIRANGE *Multirange; // rax
  struct VIDMM_RECYCLE_MULTIRANGE *v21; // rbx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // rdx

  v3 = *((_QWORD *)a3 + 4);
  v5 = *((_QWORD *)a3 + 5);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *((_QWORD *)a2 + 5);
  v10 = *((_DWORD *)a2 + 22);
  VIDMM_RECYCLE_HEAP::RemoveMultirangeFromTree(this, v10, a2);
  if ( v3 > v7 )
  {
    if ( v5 >= v8 )
    {
      v12 = *((_QWORD *)a2 + 4);
      v11 = v3;
      goto LABEL_4;
    }
    NextRange = VIDMM_RECYCLE_RANGE::GetNextRange(*((VIDMM_RECYCLE_RANGE **)a3 + 9));
    v18 = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 9);
    v19 = NextRange;
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)a2, *((_QWORD *)a2 + 4), v3);
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)a2);
    Multirange = (VIDMM_RECYCLE_MULTIRANGE *)VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(
                                               this[1],
                                               *((unsigned int *)a2 + 54),
                                               *((_QWORD *)a2 + 10));
    v21 = Multirange;
    if ( Multirange )
    {
      *((_QWORD *)Multirange + 8) = v19;
      *((_QWORD *)Multirange + 9) = v18;
      VIDMM_RECYCLE_MULTIRANGE::MarkAllRangesWithNewOwner(Multirange);
      v13 = v21;
      goto LABEL_5;
    }
    while ( 1 )
    {
      v22 = *((_DWORD *)v19 + 16);
      if ( v22 )
      {
        v23 = v22 - 4;
        if ( v23 )
        {
          if ( v23 != 1 )
            goto LABEL_28;
          v24 = 1LL;
        }
        else
        {
          v24 = 0LL;
        }
      }
      else
      {
        v24 = 2LL;
      }
      VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v24, v19);
LABEL_28:
      if ( v19 == v18 )
        return;
      v19 = VIDMM_RECYCLE_RANGE::GetNextRange(v19);
    }
  }
  if ( v5 < v8 )
  {
    v11 = *((_QWORD *)a2 + 5);
    v12 = v5;
LABEL_4:
    VIDMM_RECYCLE_MULTIRANGE::ShrinkTo((struct VIDMM_RECYCLE_RANGE **)a2, v12, v11);
    v13 = a2;
LABEL_5:
    VIDMM_RECYCLE_HEAP::AddMultirangeToTree(this, v10, (__int64)v13);
    return;
  }
  for ( i = (struct VIDMM_RECYCLE_RANGE *)*((_QWORD *)a2 + 8); ; i = VIDMM_RECYCLE_RANGE::GetNextRange(i) )
  {
    v15 = *((_DWORD *)a2 + 54);
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 == 1 )
          *((_QWORD *)i + 19) = 0LL;
      }
      else
      {
        *((_QWORD *)i + 18) = 0LL;
      }
    }
    else
    {
      *((_QWORD *)i + 17) = 0LL;
    }
    if ( i == *((struct VIDMM_RECYCLE_RANGE **)a2 + 9) )
      break;
  }
  VIDMM_RECYCLE_HEAP_MGR::DestroyMultirange(this[1], a2);
}

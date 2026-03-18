/*
 * XREFs of ?LookupSufficientRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0080B58
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z @ 0x1C007F2D8 (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX11PEAEE@Z.c)
 * Callees:
 *     ?VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1C00A42D8 (-VidMmFindAlignedRange@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E637C (-AddRangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E64FC (-BuildIdleCommittedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAV.c)
 *     ?BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E65D0 (-BuildIdleFreeMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM.c)
 *     ?BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6644 (-BuildIdleLockedMultirangeForRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@PEAVVID.c)
 *     ?RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C00E6F68 (-RemoveRangeFromTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_RANGE.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::LookupSufficientRange(
        VIDMM_RECYCLE_HEAP *this,
        __int64 a2,
        unsigned int a3,
        char a4)
{
  struct _RTL_BALANCED_NODE *v4; // rbx
  int AlignedRange; // eax
  int v7; // eax
  struct VIDMM_RECYCLE_MULTIRANGE *result; // rax
  int v9; // eax
  __int64 v10; // rdx
  _QWORD v11[2]; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+30h] [rbp-18h]

  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v11[0] = a2;
  v11[1] = a3;
  v12 = a4;
  if ( v4 )
  {
    while ( 1 )
    {
      AlignedRange = VidMmFindAlignedRange(v11, v4);
      if ( AlignedRange >= 0 )
      {
        if ( AlignedRange <= 0 )
        {
LABEL_5:
          if ( v4 )
          {
            if ( !LODWORD(v4[1].Children[0]) )
            {
              VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
              result = VIDMM_RECYCLE_HEAP::BuildIdleLockedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
              if ( !result )
              {
                v10 = 0LL;
                goto LABEL_32;
              }
              return result;
            }
            return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
          }
          break;
        }
        v4 = v4->Children[1];
      }
      else
      {
        v4 = v4->Children[0];
      }
      if ( !v4 )
        goto LABEL_5;
    }
  }
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  if ( !v4 )
    goto LABEL_28;
  while ( 1 )
  {
    v7 = VidMmFindAlignedRange(v11, v4);
    if ( v7 >= 0 )
      break;
    v4 = v4->Children[0];
LABEL_13:
    if ( !v4 )
      goto LABEL_14;
  }
  if ( v7 > 0 )
  {
    v4 = v4->Children[1];
    goto LABEL_13;
  }
LABEL_14:
  if ( v4 )
  {
    if ( !LODWORD(v4[1].Children[0]) )
    {
      VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
      result = VIDMM_RECYCLE_HEAP::BuildIdleCommittedMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
      if ( !result )
      {
        v10 = 1LL;
        goto LABEL_32;
      }
      return result;
    }
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
  }
LABEL_28:
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 8);
  if ( !v4 )
    return 0LL;
  while ( 2 )
  {
    v9 = VidMmFindAlignedRange(v11, v4);
    if ( v9 < 0 )
    {
      v4 = v4->Children[0];
      goto LABEL_20;
    }
    if ( v9 > 0 )
    {
      v4 = v4->Children[1];
LABEL_20:
      if ( !v4 )
        break;
      continue;
    }
    break;
  }
  if ( !v4 )
    return 0LL;
  if ( LODWORD(v4[1].Children[0]) )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)v4;
  VIDMM_RECYCLE_HEAP::RemoveRangeFromTree(this, LODWORD(v4[3].ParentValue), v4);
  result = VIDMM_RECYCLE_HEAP::BuildIdleFreeMultirangeForRange(this, (struct VIDMM_RECYCLE_RANGE *)v4);
  if ( !result )
  {
    v10 = 2LL;
LABEL_32:
    VIDMM_RECYCLE_HEAP::AddRangeToTree(this, v10, v4);
    return 0LL;
  }
  return result;
}

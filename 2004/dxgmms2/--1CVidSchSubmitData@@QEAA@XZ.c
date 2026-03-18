/*
 * XREFs of ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C0029DAC
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x1C002C1F0 (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVidSchSubmitData::~CVidSchSubmitData(struct _SLIST_ENTRY **this)
{
  struct _SLIST_ENTRY *v1; // rdi
  __int64 v2; // rbx

  v1 = *this;
  if ( *this )
  {
    v2 = (__int64)&this[1][78];
    ++*(_DWORD *)(v2 + 28);
    if ( ExQueryDepthSList((PSLIST_HEADER)v2) < *(_WORD *)(v2 + 16) )
    {
      ExpInterlockedPushEntrySList((PSLIST_HEADER)v2, v1);
    }
    else
    {
      ++*(_DWORD *)(v2 + 32);
      (*(void (__fastcall **)(struct _SLIST_ENTRY *, __int64))(v2 + 56))(v1, v2);
    }
  }
}

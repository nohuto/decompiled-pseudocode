/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C020C338
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C020AFA4 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020BED8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002CC0 (--_V@YAXPEAX@Z.c)
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C0007554 (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 323) )
  {
    for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this); ++i )
    {
      v3 = *((_QWORD *)this + 323);
      v4 = 360LL * i;
      if ( *(_QWORD *)(v4 + v3 + 64) )
      {
        ObfDereferenceObject(*(PVOID *)(v4 + v3 + 64));
        *(_QWORD *)(v4 + *((_QWORD *)this + 323) + 64) = 0LL;
        v3 = *((_QWORD *)this + 323);
      }
      operator delete[](*(void **)(v4 + v3 + 32));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 323) + 40));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 323) + 120));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 323) + 128));
      *(_QWORD *)(v4 + *((_QWORD *)this + 323) + 32) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 323) + 40) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 323) + 120) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 323) + 128) = 0LL;
    }
  }
}

/*
 * XREFs of ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C02083BC
 * Callers:
 *     ??1DXGADAPTER@@QEAA@XZ @ 0x1C0207028 (--1DXGADAPTER@@QEAA@XZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0207F5C (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ @ 0x1C000A37C (-GetNumDifferentPhysicalAdapters@DXGADAPTER@@QEBAIXZ.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000A43C (--_V@YAXPEAX@Z.c)
 */

void __fastcall DXGADAPTER::DestroyPhysicalAdapterData(DXGADAPTER *this)
{
  unsigned int i; // esi
  __int64 v3; // rcx
  __int64 v4; // rdi

  if ( *((_QWORD *)this + 320) )
  {
    for ( i = 0; i < (unsigned int)DXGADAPTER::GetNumDifferentPhysicalAdapters(this); ++i )
    {
      v3 = *((_QWORD *)this + 320);
      v4 = 360LL * i;
      if ( *(_QWORD *)(v4 + v3 + 64) )
      {
        ObfDereferenceObject(*(PVOID *)(v4 + v3 + 64));
        *(_QWORD *)(v4 + *((_QWORD *)this + 320) + 64) = 0LL;
        v3 = *((_QWORD *)this + 320);
      }
      operator delete[](*(void **)(v4 + v3 + 32));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 320) + 40));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 320) + 120));
      operator delete[](*(void **)(v4 + *((_QWORD *)this + 320) + 128));
      *(_QWORD *)(v4 + *((_QWORD *)this + 320) + 32) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 320) + 40) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 320) + 120) = 0LL;
      *(_QWORD *)(v4 + *((_QWORD *)this + 320) + 128) = 0LL;
    }
  }
}

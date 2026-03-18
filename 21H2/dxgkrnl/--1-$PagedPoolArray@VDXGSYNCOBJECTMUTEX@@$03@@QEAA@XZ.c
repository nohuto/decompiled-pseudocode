/*
 * XREFs of ??1?$PagedPoolArray@VDXGSYNCOBJECTMUTEX@@$03@@QEAA@XZ @ 0x1C0318884
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01739B0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

void __fastcall PagedPoolArray<DXGSYNCOBJECTMUTEX,4>::~PagedPoolArray<DXGSYNCOBJECTMUTEX,4>(__int64 a1)
{
  char *v2; // rcx
  char *v3; // rbx
  unsigned int i; // edi
  DXGAUTOMUTEX *v5; // rcx

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 72); ++i )
    {
      v5 = (DXGAUTOMUTEX *)(*(_QWORD *)a1 + 16LL * i);
      if ( *((_BYTE *)v5 + 8) )
        DXGAUTOMUTEX::Release(v5);
    }
  }
  else if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      16LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX);
    operator delete[](v3);
  }
}

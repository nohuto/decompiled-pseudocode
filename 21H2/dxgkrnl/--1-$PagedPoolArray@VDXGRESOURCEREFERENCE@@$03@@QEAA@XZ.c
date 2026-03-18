/*
 * XREFs of ??1?$PagedPoolArray@VDXGRESOURCEREFERENCE@@$03@@QEAA@XZ @ 0x1C01D9914
 * Callers:
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C01D91E0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0195040 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 */

void __fastcall PagedPoolArray<DXGRESOURCEREFERENCE,4>::~PagedPoolArray<DXGRESOURCEREFERENCE,4>(__int64 a1)
{
  char *v2; // rcx
  unsigned int i; // ebx
  char *v4; // rbx

  v2 = *(char **)a1;
  if ( v2 == (char *)(a1 + 8) )
  {
    for ( i = 0; i < *(_DWORD *)(a1 + 40); ++i )
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE((struct _EX_RUNDOWN_REF **)(*(_QWORD *)a1 + 8LL * i));
  }
  else if ( v2 )
  {
    v4 = v2 - 8;
    `vector destructor iterator'(
      v2,
      8LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE);
    operator delete[](v4);
  }
}

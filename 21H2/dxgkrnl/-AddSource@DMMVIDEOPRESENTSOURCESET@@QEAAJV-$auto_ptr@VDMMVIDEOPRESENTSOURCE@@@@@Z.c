/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C02140E0
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0213FD0 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0011748 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0028D28 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, __int64 (__fastcall ****a2)(_QWORD, __int64))
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // r10

  v2 = (unsigned int *)*a2;
  v3 = 0;
  if ( !*a2 )
  {
    WdLogSingleEntry0(1LL);
    v2 = (unsigned int *)*a2;
  }
  v6 = IndexedSet<DMMVIDPNSOURCE>::FindById(a1, v2[6]);
  if ( v6 )
  {
    if ( v6 != v7 )
    {
      WdLogSingleEntry3(2LL, *((unsigned int *)*a2 + 6), *a2, a1);
      v3 = -1071774927;
      goto LABEL_6;
    }
LABEL_9:
    WdLogSingleEntry2(2LL, *a2, a1);
    v3 = -1071774953;
    goto LABEL_6;
  }
  if ( !Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v7) )
    goto LABEL_9;
  *a2 = 0LL;
LABEL_6:
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>(a2);
  return v3;
}

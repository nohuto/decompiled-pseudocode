/*
 * XREFs of ?AddSource@DMMVIDEOPRESENTSOURCESET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTSOURCE@@@@@Z @ 0x1C0198240
 * Callers:
 *     ?AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C0198130 (-AddSource@DXGPORTDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURC.c)
 * Callees:
 *     ??1?$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ @ 0x1C0009458 (--1-$auto_ptr@VDMMVIDPNSOURCE@@@@QEAA@XZ.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C000B848 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0023420 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTSOURCESET::AddSource(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  v2 = *a2;
  v3 = 0;
  if ( !*a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v12);
    v2 = *a2;
  }
  v6 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(a1, v2[6]);
  if ( v6 )
    LODWORD(v9) = v6 != v8;
  else
    LODWORD(v9) = Set<DMMVIDEOPRESENTSOURCE>::Add(a1, v8) != 0 ? 2 : 0;
  v9 = (unsigned int)v9;
  if ( (_DWORD)v9 )
  {
    v10 = (unsigned int)(v9 - 1);
    if ( (_DWORD)v10 )
    {
      if ( (_DWORD)v10 == 1 )
      {
        *a2 = 0LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v10, v7);
        WdLogEvent5_WdError(v13);
        v3 = -1073741823;
      }
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v10, v7);
      v14[3] = (*a2)[6];
      v14[4] = *a2;
      v14[5] = a1;
      WdLogEvent5_WdError(v14);
      v3 = -1071774927;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v9, v7);
    *(_QWORD *)(v15 + 24) = *a2;
    *(_QWORD *)(v15 + 32) = a1;
    WdLogEvent5_WdError(v15);
    v3 = -1071774953;
  }
  auto_ptr<DMMVIDPNSOURCE>::~auto_ptr<DMMVIDPNSOURCE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
  return v3;
}

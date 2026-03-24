/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C0111F04
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0111FB0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?Add@?$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C0005FE4 (-Add@-$Set@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0006114 (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C001A90C (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ??1?$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ @ 0x1C004D420 (--1-$auto_ptr@VDMMVIDPNSOURCEMODE@@@@QEAA@XZ.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, unsigned int **a2)
{
  unsigned int *v2; // r10
  __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rax

  v2 = *a2;
  if ( !*a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v14);
    v2 = *a2;
  }
  v5 = IndexedSet<DMMVIDPNTARGETMODE>::FindById(a1 + 24, v2[6]);
  if ( v5 )
    LODWORD(v8) = DMMVIDPNTARGETMODE::operator!=(v5, v6);
  else
    LODWORD(v8) = Set<DMMVIDPNTARGETMODE>::Add(a1 + 24, v6) != 0 ? 2 : 0;
  v8 = (unsigned int)v8;
  if ( !(_DWORD)v8 )
  {
    v20 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
    v16 = -1071774956;
    *(_QWORD *)(v20 + 24) = *a2;
    *(_QWORD *)(v20 + 32) = a1;
    goto LABEL_18;
  }
  v11 = (unsigned int)(v8 - 1);
  if ( !(_DWORD)v11 )
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdError(v11, v7);
    v19[3] = (*a2)[6];
    v19[4] = *a2;
    v19[5] = a1;
    WdLogEvent5_WdError(v19);
    v16 = -1071774940;
    goto LABEL_18;
  }
  if ( (_DWORD)v11 != 1 )
  {
    v15 = WdLogNewEntry5_WdError(v11, v7);
    WdLogEvent5_WdError(v15);
    v16 = -1073741823;
LABEL_18:
    auto_ptr<DMMVIDPNSOURCEMODE>::~auto_ptr<DMMVIDPNSOURCEMODE>((__int64 (__fastcall ****)(_QWORD, __int64))a2);
    return v16;
  }
  v12 = (__int64)(*a2 + 8);
  if ( a1 )
  {
    if ( *((_QWORD *)*a2 + 5) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v11, v7);
      WdLogEvent5_WdAssertion(v18);
    }
    *(_QWORD *)(v12 + 8) = a1;
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(v11, v7);
    *(_QWORD *)(v17 + 24) = v12;
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v12 + 8);
    WdLogEvent5_WdError(v17);
  }
  *a2 = 0LL;
  return 0LL;
}

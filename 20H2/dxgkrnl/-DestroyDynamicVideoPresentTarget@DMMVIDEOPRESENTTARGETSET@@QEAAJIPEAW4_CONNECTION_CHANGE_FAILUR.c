/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E4B14
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E3484 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B74 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C13C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C005C1C0 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C005C210 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        __int64 a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v4; // rbp
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DMMVIDEOPRESENTTARGET *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  DMMVIDEOPRESENTTARGET *v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rax
  DMMVIDEOPRESENTTARGET *v24; // rax

  v4 = (unsigned int)a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a2);
  v9 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(v8, v7);
    v12[3] = v4;
    v13 = *((_QWORD *)this + 11);
    v14 = *(_QWORD *)(v13 + 8);
    if ( !v14 )
    {
      v15 = WdLogNewEntry5_WdAssertion(v11, v10);
      WdLogEvent5_WdAssertion(v15);
      v14 = *(_QWORD *)(v13 + 8);
    }
    v16 = *(_QWORD *)(v14 + 16);
    v12[6] = 1LL;
LABEL_5:
    v12[5] = -1073741811LL;
    v12[4] = v16;
    WdLogEvent5_WdAssertion(v12);
    return 3221225485LL;
  }
  v18 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 59);
  if ( !v18 )
  {
    *(_DWORD *)a3 = 5;
    v12 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, v7);
    v12[3] = v4;
    v21 = *((_QWORD *)this + 11);
    v22 = *(_QWORD *)(v21 + 8);
    if ( !v22 )
    {
      v23 = WdLogNewEntry5_WdAssertion(v20, v19);
      WdLogEvent5_WdAssertion(v23);
      v22 = *(_QWORD *)(v21 + 8);
    }
    v16 = *(_QWORD *)(v22 + 16);
    v12[6] = 2LL;
    goto LABEL_5;
  }
  v24 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 66);
  if ( v24 )
  {
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v24, v9);
    v18 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v9 + 59);
  }
  if ( v18 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v18, v9);
  DMMVIDEOPRESENTTARGETSET::RemoveTarget((DMMVIDEOPRESENTTARGETSET ***)this, v9);
  return 0LL;
}

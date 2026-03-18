/*
 * XREFs of ?DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C039FE64
 * Callers:
 *     ?DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C03A46F0 (-DmmDestroyDynamicVideoPresentTarget@@YAJPEAXIPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000F0C8 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C006996C (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x1C00699F0 (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0069A40 (-RemoveTarget@DMMVIDEOPRESENTTARGETSET@@QEAAXPEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::DestroyDynamicVideoPresentTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        unsigned int a2,
        enum _CONNECTION_CHANGE_FAILURE_REASON *a3)
{
  __int64 v4; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  struct DMMVIDEOPRESENTTARGET *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  DMMVIDEOPRESENTTARGET *v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r8
  DMMVIDEOPRESENTTARGET *v14; // rax

  v4 = a2;
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById(this, a2);
  v7 = TargetById;
  if ( !TargetById )
  {
    *(_DWORD *)a3 = 1;
    v8 = *((_QWORD *)this + 11);
    v9 = *(_QWORD *)(v8 + 8);
    if ( !v9 )
    {
      WdLogSingleEntry0(1LL);
      v9 = *(_QWORD *)(v8 + 8);
    }
    WdLogSingleEntry4(1LL, v4, *(_QWORD *)(v9 + 16), -1073741811LL, 1LL);
    return 3221225485LL;
  }
  v11 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 59);
  if ( !v11 )
  {
    *(_DWORD *)a3 = 5;
    v12 = *((_QWORD *)this + 11);
    v13 = *(_QWORD *)(v12 + 8);
    if ( !v13 )
    {
      WdLogSingleEntry0(1LL);
      v13 = *(_QWORD *)(v12 + 8);
    }
    WdLogSingleEntry4(1LL, v4, *(_QWORD *)(v13 + 16), -1073741811LL, 2LL);
    return 3221225485LL;
  }
  v14 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)TargetById + 66);
  if ( !v14
    || (DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v14, v7), (v11 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)v7 + 59)) != 0LL) )
  {
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v11, v7);
  }
  DMMVIDEOPRESENTTARGETSET::RemoveTarget(this, v7);
  return 0LL;
}

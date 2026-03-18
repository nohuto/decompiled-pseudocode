/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0191B18
 * Callers:
 *     ?AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C01919D0 (-AddStaticTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESEN.c)
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02E564C (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0007B08 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0022C8C (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(
        DMMVIDEOPRESENTTARGETSET *this,
        struct DMMVIDEOPRESENTTARGET *a2)
{
  int v2; // ebx
  struct DMMVIDEOPRESENTTARGET *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rax

  v2 = 0;
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v12);
  }
  v5 = (struct DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)this, *((_DWORD *)a2 + 6));
  if ( v5 )
  {
    LOBYTE(v2) = v5 != a2;
    v8 = v2 + 1;
  }
  else
  {
    v7 = Set<DMMVIDEOPRESENTTARGET>::Add((__int64)this, (__int64)a2) != 0 ? 2 : 0;
    v8 = v7 + 1;
  }
  v9 = v8 - 1;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)a2 + 18);
        return 0LL;
      }
      else
      {
        v13 = WdLogNewEntry5_WdError(v7, v6);
        WdLogEvent5_WdError(v13);
        return 3221225473LL;
      }
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v7, v6);
      v14[3] = *((unsigned int *)a2 + 6);
      v14[4] = a2;
      v14[5] = this;
      WdLogEvent5_WdError(v14);
      return 3223192370LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v15 + 24) = a2;
    *(_QWORD *)(v15 + 32) = this;
    WdLogEvent5_WdError(v15);
    return 3223192344LL;
  }
}

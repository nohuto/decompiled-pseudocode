/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C005F5EC
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006328C (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2, __int64 a3)
{
  int v3; // eax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  char *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // rax

  v3 = *((_DWORD *)this + 4);
  if ( !v3 )
  {
    v11 = WdLogNewEntry5_WdAssertion(this, a2, a3);
    *(_QWORD *)(v11 + 24) = 2320LL;
    WdLogEvent5_WdAssertion(v11);
    v3 = *((_DWORD *)this + 4);
  }
  *((_DWORD *)this + 4) = v3 - 1;
  v6 = a2 + 3;
  v7 = a2[3];
  if ( *(_QWORD **)(v7 + 8) != a2 + 3
    || (v8 = (_QWORD *)a2[4], (_QWORD *)*v8 != v6)
    || (*v8 = v7,
        v9 = (char *)this + 56,
        *(_QWORD *)(v7 + 8) = v8,
        v10 = *(_QWORD *)v9,
        *(char **)(*(_QWORD *)v9 + 8LL) != v9) )
  {
    __fastfail(3u);
  }
  a2[4] = v9;
  *v6 = v10;
  *(_QWORD *)(v10 + 8) = v6;
  *(_QWORD *)v9 = v6;
  *((_BYTE *)a2 + 56) = 3;
}

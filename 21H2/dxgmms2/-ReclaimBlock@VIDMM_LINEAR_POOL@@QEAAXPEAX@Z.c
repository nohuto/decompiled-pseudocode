/*
 * XREFs of ?ReclaimBlock@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C00A20F8
 * Callers:
 *     ?ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00A1F50 (-ReclaimResource@VIDMM_SEGMENT@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C001CE40 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall VIDMM_LINEAR_POOL::ReclaimBlock(VIDMM_LINEAR_POOL *this, _QWORD *a2)
{
  int v2; // eax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *((_DWORD *)this + 4);
  if ( !v2 )
  {
    WdLogSingleEntry1(1LL, 2320LL);
    DxgkLogInternalTriageEvent(v10, 0x40000LL);
    v2 = *((_DWORD *)this + 4);
  }
  *((_DWORD *)this + 4) = v2 - 1;
  v5 = a2 + 3;
  v6 = a2[3];
  if ( *(_QWORD **)(v6 + 8) != a2 + 3
    || (v7 = (_QWORD *)a2[4], (_QWORD *)*v7 != v5)
    || (*v7 = v6,
        *(_QWORD *)(v6 + 8) = v7,
        v8 = (_QWORD *)((char *)this + 56),
        v9 = *((_QWORD *)this + 7),
        *(VIDMM_LINEAR_POOL **)(v9 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 56)) )
  {
    __fastfail(3u);
  }
  *v5 = v9;
  a2[4] = v8;
  *(_QWORD *)(v9 + 8) = v5;
  *v8 = v5;
  *((_BYTE *)a2 + 56) = 3;
}

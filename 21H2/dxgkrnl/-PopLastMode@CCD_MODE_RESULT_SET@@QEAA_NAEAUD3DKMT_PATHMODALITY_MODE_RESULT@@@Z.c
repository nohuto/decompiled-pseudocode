/*
 * XREFs of ?PopLastMode@CCD_MODE_RESULT_SET@@QEAA_NAEAUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02EAFE4
 * Callers:
 *     DxgkEnumerateModesForPathsModality @ 0x1C0295190 (DxgkEnumerateModesForPathsModality.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004D650 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

char __fastcall CCD_MODE_RESULT_SET::PopLastMode(CCD_MODE_RESULT_SET *this, struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rdx

  v4 = *((unsigned int *)this + 12);
  if ( !(_DWORD)v4 )
    return 0;
  if ( *((CCD_MODE_RESULT_SET **)this + 2) == (CCD_MODE_RESULT_SET *)((char *)this + 16) )
  {
    v6 = 0LL;
LABEL_6:
    v7 = WdLogNewEntry5_WdAssertion(v4, a2);
    WdLogEvent5_WdAssertion(v7);
    LODWORD(v4) = *((_DWORD *)this + 12);
    goto LABEL_7;
  }
  v6 = *((_QWORD *)this + 3) - 8LL;
  if ( *((_QWORD *)this + 3) == 8LL )
    goto LABEL_6;
LABEL_7:
  v8 = v4 - 1;
  *((_DWORD *)this + 12) = v8;
  v9 = 96LL * (v8 % 0x32);
  *(_OWORD *)a2 = *(_OWORD *)(v9 + v6 + 24);
  *((_OWORD *)a2 + 1) = *(_OWORD *)(v9 + v6 + 40);
  *((_OWORD *)a2 + 2) = *(_OWORD *)(v9 + v6 + 56);
  *((_OWORD *)a2 + 3) = *(_OWORD *)(v9 + v6 + 72);
  *((_OWORD *)a2 + 4) = *(_OWORD *)(v9 + v6 + 88);
  *((_OWORD *)a2 + 5) = *(_OWORD *)(v9 + v6 + 104);
  if ( *((_DWORD *)this + 12) == 50 * (*((_DWORD *)this + 12) / 0x32u) )
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
           (__int64)this,
           v6) )
    {
      v10 = (_QWORD *)(v6 + 8);
      v11 = *(_QWORD *)(v6 + 8);
      if ( *(_QWORD *)(v11 + 8) != v6 + 8 || (v12 = *(_QWORD **)(v6 + 16), (_QWORD *)*v12 != v10) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = 0LL;
      *(_QWORD *)(v6 + 16) = 0LL;
      --*((_QWORD *)this + 4);
    }
    if ( v6 )
      (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
  }
  return 1;
}

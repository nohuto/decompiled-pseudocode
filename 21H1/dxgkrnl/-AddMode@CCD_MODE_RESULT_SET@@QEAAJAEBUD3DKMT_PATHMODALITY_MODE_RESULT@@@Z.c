/*
 * XREFs of ?AddMode@CCD_MODE_RESULT_SET@@QEAAJAEBUD3DKMT_PATHMODALITY_MODE_RESULT@@@Z @ 0x1C02E5B70
 * Callers:
 *     _BmlGetPathModeListForPathTargetModes @ 0x1C02E82B0 (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C004B7B0 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 */

__int64 __fastcall CCD_MODE_RESULT_SET::AddMode(
        CCD_MODE_RESULT_SET *this,
        const struct D3DKMT_PATHMODALITY_MODE_RESULT *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // rcx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1

  if ( (**(unsigned __int8 (__fastcall ***)(CCD_MODE_RESULT_SET *))this)(this) )
  {
    v4 = (_QWORD *)((char *)this + 16);
    if ( (_QWORD *)*v4 != v4 )
    {
      v5 = *((unsigned int *)this + 12);
      v6 = (unsigned int)v5 / 0x32;
      if ( (_DWORD)v5 != 50 * (_DWORD)v6 )
      {
        v7 = (_QWORD *)(*((_QWORD *)this + 3) - 8LL);
        if ( *((_QWORD *)this + 3) == 8LL )
        {
          v8 = WdLogNewEntry5_WdAssertion(v5, v6);
          WdLogEvent5_WdAssertion(v8);
        }
LABEL_14:
        v12 = *((_OWORD *)a2 + 1);
        v13 = 12LL * (*((_DWORD *)this + 12) % 0x32u);
        *(_OWORD *)&v7[v13 + 3] = *(_OWORD *)a2;
        v14 = *((_OWORD *)a2 + 2);
        *(_OWORD *)&v7[v13 + 5] = v12;
        v15 = *((_OWORD *)a2 + 3);
        *(_OWORD *)&v7[v13 + 7] = v14;
        v16 = *((_OWORD *)a2 + 4);
        *(_OWORD *)&v7[v13 + 9] = v15;
        v17 = *((_OWORD *)a2 + 5);
        *(_OWORD *)&v7[v13 + 11] = v16;
        *(_OWORD *)&v7[v13 + 13] = v17;
        ++*((_DWORD *)this + 12);
        return 0LL;
      }
    }
    v9 = operator new[](0x12D8uLL, 0x4B677844u, PagedPool);
    v7 = v9;
    if ( v9 )
    {
      memset(v9 + 3, 0, 0x12C0uLL);
      v7[1] = 0LL;
      v7[2] = 0LL;
      *v7 = &SetElement::`vftable';
    }
    else
    {
      v7 = 0LL;
    }
    if ( v7 )
    {
      if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
              (__int64)this,
              (__int64)v7) )
      {
        v10 = (_QWORD *)*((_QWORD *)this + 3);
        v11 = v7 + 1;
        if ( (_QWORD *)*v10 != v4 )
          __fastfail(3u);
        *v11 = v4;
        v7[2] = v10;
        *v10 = v11;
        *((_QWORD *)this + 3) = v11;
        ++*((_QWORD *)this + 4);
      }
      goto LABEL_14;
    }
  }
  return 3221225495LL;
}

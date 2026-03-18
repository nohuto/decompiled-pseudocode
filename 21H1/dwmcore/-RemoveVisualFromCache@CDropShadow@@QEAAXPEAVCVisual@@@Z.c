/*
 * XREFs of ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x1800AA054
 * Callers:
 *     ??1CSpriteVisual@@UEAA@XZ @ 0x1800A9FC4 (--1CSpriteVisual@@UEAA@XZ.c)
 *     ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x1800AA244 (-ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVISUAL_SETSHADOW@@.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800BA17C (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V?$allocator@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@@std@@@std@@@2@@Z @ 0x1801C3A6C (-erase@-$list@U-$pair@QEAVCVisual@@VShadowIntermediates@CDropShadow@@@std@@V-$allocator@U-$pair@.c)
 */

void __fastcall CDropShadow::RemoveVisualFromCache(CDropShadow *this, struct CVisual *a2)
{
  unsigned __int64 appended; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 *v7; // rdi
  __int64 v8; // r8
  __int64 *i; // r11
  __int64 *v10; // rax
  unsigned __int64 v11; // rax
  _QWORD *v12; // r11
  __int64 v13; // rdx
  char v14; // [rsp+40h] [rbp+8h] BYREF
  struct CVisual *v15; // [rsp+48h] [rbp+10h] BYREF

  v15 = a2;
  appended = std::_Fnv1a_append_bytes((unsigned __int64)this, (const unsigned __int8 *const)&v15, 8uLL);
  v6 = *((_QWORD *)this + 28);
  v7 = (__int64 *)*((_QWORD *)this + 26);
  v8 = 2 * (*((_QWORD *)this + 31) & appended);
  for ( i = *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 31) & appended)); ; i = (__int64 *)*i )
  {
    v10 = *(__int64 **)(v6 + 8 * v8) == v7 ? (__int64 *)*((_QWORD *)this + 26) : **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( i == v10 )
      break;
    if ( (struct CVisual *)i[2] == a2 )
      goto LABEL_6;
  }
  i = (__int64 *)*((_QWORD *)this + 26);
LABEL_6:
  if ( i != v7 )
  {
    v11 = std::_Fnv1a_append_bytes(v5, (const unsigned __int8 *const)i + 16, 8uLL);
    v13 = 2 * (*((_QWORD *)this + 31) & v11);
    if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 31) & v11) + 8) == v12 )
    {
      if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 31) & v11)) == v12 )
      {
        *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 31) & v11)) = v7;
        *(_QWORD *)(*((_QWORD *)this + 28) + 8 * v13 + 8) = *((_QWORD *)this + 26);
      }
      else
      {
        *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 31) & v11) + 8) = v12[1];
      }
    }
    else if ( *(_QWORD **)(v6 + 16 * (*((_QWORD *)this + 31) & v11)) == v12 )
    {
      *(_QWORD *)(v6 + 16 * (*((_QWORD *)this + 31) & v11)) = *v12;
    }
    std::list<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>::erase((char *)this + 208, &v14, v12);
  }
}

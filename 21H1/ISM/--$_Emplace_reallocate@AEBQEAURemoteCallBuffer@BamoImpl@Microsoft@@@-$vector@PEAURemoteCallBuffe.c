/*
 * XREFs of ??$_Emplace_reallocate@AEBQEAURemoteCallBuffer@BamoImpl@Microsoft@@@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@QEAAPEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@QEAPEAU234@AEBQEAU234@@Z @ 0x18003EF30
 * Callers:
 *     ?SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z @ 0x18003F770 (-SubmitBuffer@BufferingMessageCallHost@BamoImpl@Microsoft@@UEAAJPEA_KIPEAXI@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Change_array@?$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V?$allocator@PEAURemoteCallBuffer@BamoImpl@Microsoft@@@std@@@std@@AEAAXQEAPEAURemoteCallBuffer@BamoImpl@Microsoft@@_K1@Z @ 0x18003FA60 (-_Change_array@-$vector@PEAURemoteCallBuffer@BamoImpl@Microsoft@@V-$allocator@PEAURemoteCallBuff.c)
 *     ?_Xlength@?$vector@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUPointerState@InputInfoValidator@@@std@@@std@@@std@@@std@@@2@@std@@CAXXZ @ 0x18003FB5C (-_Xlength@-$vector@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CBKU.c)
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 */

__int64 __fastcall std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Emplace_reallocate<Microsoft::BamoImpl::RemoteCallBuffer * const &>(
        const void **a1,
        _BYTE *a2,
        _QWORD *a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  size_t size_of; // rax
  _QWORD *v13; // rsi
  _BYTE *v14; // r8
  _BYTE *v15; // rdx
  _QWORD *v16; // rcx
  size_t v17; // r8

  v6 = (a2 - (_BYTE *)*a1) >> 3;
  v7 = ((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3;
  if ( v7 == 0x1FFFFFFFFFFFFFFFLL )
    std::vector<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,InputInfoValidator::PointerState>>>>>::_Xlength();
  v8 = v7 + 1;
  v9 = ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3;
  v10 = v9 >> 1;
  if ( v9 <= 0x1FFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  size_of = std::_Get_size_of_n<8>(v11);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v13[v6] = *a3;
  v14 = a1[1];
  v15 = *a1;
  v16 = v13;
  if ( a2 == v14 )
  {
    v17 = v14 - v15;
  }
  else
  {
    memmove_0(v13, v15, a2 - (_BYTE *)*a1);
    v16 = &v13[v6 + 1];
    v17 = (_BYTE *)a1[1] - a2;
    v15 = a2;
  }
  memmove_0(v16, v15, v17);
  std::vector<Microsoft::BamoImpl::RemoteCallBuffer *>::_Change_array(a1, v13, v8, v11);
  return (__int64)*a1 + 8 * v6;
}

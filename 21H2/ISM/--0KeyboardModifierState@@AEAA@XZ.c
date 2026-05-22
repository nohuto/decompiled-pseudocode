/*
 * XREFs of ??0KeyboardModifierState@@AEAA@XZ @ 0x1800253C8
 * Callers:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180023BDC (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0?$_Hash@V?$_Umap_traits@KKV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA@AEBV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@1@AEBV?$allocator@U?$pair@$$CBKK@std@@@1@@Z @ 0x180025428 (--0-$_Hash@V-$_Umap_traits@KKV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$allocato.c)
 */

// Hidden C++ exception states: #wind=1
KeyboardModifierState *__fastcall KeyboardModifierState::KeyboardModifierState(KeyboardModifierState *this)
{
  char *v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+3Ch] [rbp+14h]

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &KeyboardModifierState::`vftable';
  v2 = (char *)this + 16;
  v5 = HIDWORD(v2);
  v4 = 0;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Hash<std::_Umap_traits<unsigned long,unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>(
    v2,
    &v4);
  KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  *((_DWORD *)this + 20) = 0;
  return this;
}

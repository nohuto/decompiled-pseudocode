/*
 * XREFs of ?OnViewDestroyed@TabTipAdapterPolicy@KeyboardHosting@@QEAAXI@Z @ 0x1803690C4
 * Callers:
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18034E860 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x180073B14 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?erase@?$list@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@std@@@std@@@2@@Z @ 0x18036AAE0 (-erase@-$list@U-$pair@$$CBIUViewState@KeyboardHosting@@@std@@V-$allocator@U-$pair@$$CBIUViewStat.c)
 */

void __fastcall KeyboardHosting::TabTipAdapterPolicy::OnViewDestroyed(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v2; // rsi
  __int64 v5; // r8
  unsigned __int64 i; // r9
  __int64 v7; // rax
  _QWORD *Ptr; // rbx
  PVOID v9; // rdi
  PVOID j; // r11
  PVOID v11; // rax
  __int64 appended; // rax
  _QWORD *v13; // r11
  __int64 v14; // rdx
  char v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h]

  v16 = a2;
  v2 = this + 55;
  AcquireSRWLockExclusive(this + 55);
  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
  {
    v7 = *((unsigned __int8 *)&v16 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  Ptr = this[50].Ptr;
  v9 = this[48].Ptr;
  for ( j = (PVOID)Ptr[2 * (v5 & (__int64)this[53].Ptr)]; ; j = *(PVOID *)j )
  {
    v11 = (PVOID)Ptr[2 * (v5 & (__int64)this[53].Ptr)] == v9
        ? this[48].Ptr
        : *(PVOID *)Ptr[2 * (v5 & (__int64)this[53].Ptr) + 1];
    if ( j == v11 )
      break;
    if ( *((_DWORD *)j + 4) == a2 )
      goto LABEL_11;
  }
  j = this[48].Ptr;
LABEL_11:
  if ( j != v9 )
  {
    appended = std::_Fnv1a_append_bytes(2 * (v5 & (__int64)this[53].Ptr), (const unsigned __int8 *const)j + 16, 4uLL);
    v14 = 2 * ((__int64)this[53].Ptr & appended);
    if ( (_QWORD *)Ptr[2 * ((__int64)this[53].Ptr & appended) + 1] == v13 )
    {
      if ( (_QWORD *)Ptr[2 * ((__int64)this[53].Ptr & appended)] == v13 )
      {
        Ptr[2 * ((__int64)this[53].Ptr & appended)] = v9;
        *((RTL_SRWLOCK *)this[50].Ptr + v14 + 1) = this[48];
      }
      else
      {
        Ptr[2 * ((__int64)this[53].Ptr & appended) + 1] = v13[1];
      }
    }
    else if ( (_QWORD *)Ptr[2 * ((__int64)this[53].Ptr & appended)] == v13 )
    {
      Ptr[2 * ((__int64)this[53].Ptr & appended)] = *v13;
    }
    std::list<std::pair<unsigned int const,KeyboardHosting::ViewState>>::erase(&this[48], &v15, v13);
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
}

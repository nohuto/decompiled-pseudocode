/*
 * XREFs of ?OnDeviceRemoval@SystemControlDeviceCollection@@MEAAJK@Z @ 0x18009A050
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 *     ?CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x180099FB8 (-CreateButtonInfo@SystemControlDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V?$allocator@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@2@@Z @ 0x18009A760 (-erase@-$list@U-$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@V-$allocator@U-$pair@$$CBU.c)
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x18009C930 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 */

__int64 __fastcall SystemControlDeviceCollection::OnDeviceRemoval(SystemControlDeviceCollection *this, DWORD a2)
{
  __int64 v4; // rcx
  __int64 appended; // rax
  __int64 v6; // r8
  __int64 **v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 *i; // rbx
  __int64 *v11; // rax
  unsigned __int16 *j; // rsi
  DWORD TickCount; // edi
  int ButtonInfo; // edi
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 *v21; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp-838h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-830h] BYREF
  union _LARGE_INTEGER v24[3]; // [rsp+50h] [rbp-828h] BYREF
  int v25; // [rsp+68h] [rbp-810h]
  wil::details::in1diag3 *retaddr; // [rsp+878h] [rbp+0h]

  PerformanceCount.LowPart = a2;
  memset_0(v24, 0, 0x7F0uLL);
  v25 = 2032;
  appended = std::_Fnv1a_append_bytes(v4, (const unsigned __int8 *const)&PerformanceCount, 4uLL);
  v6 = *((_QWORD *)this + 348);
  v7 = (__int64 **)((char *)this + 2768);
  v8 = 2 * (*((_QWORD *)this + 351) & appended);
  v9 = *(__int64 **)(v6 + 16 * (*((_QWORD *)this + 351) & appended));
  for ( i = v9; ; i = (__int64 *)*i )
  {
    v11 = v9 == *v7 ? *v7 : **(__int64 ***)(v6 + 8 * v8 + 8);
    if ( i == v11 )
      break;
    if ( *((_DWORD *)i + 4) == a2 )
      goto LABEL_9;
  }
  i = *v7;
LABEL_9:
  if ( i == *v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x67,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  else
  {
    for ( j = (unsigned __int16 *)i + 10; j != (unsigned __int16 *)((char *)i + 60); ++j )
    {
      TickCount = GetTickCount();
      QueryPerformanceCounter(&PerformanceCount);
      ButtonInfo = SystemControlDeviceCollection::CreateButtonInfo(
                     (SystemControlDeviceCollection *)*j,
                     a2,
                     TickCount,
                     PerformanceCount,
                     *j,
                     0,
                     v24);
      if ( ButtonInfo < 0 )
      {
        v17 = 132LL;
        goto LABEL_20;
      }
      ButtonInfo = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(**((_QWORD **)this + 2) + 24LL))(
                     *((_QWORD *)this + 2),
                     v24);
      if ( ButtonInfo < 0 )
      {
        v17 = 138LL;
        goto LABEL_20;
      }
    }
    ButtonInfo = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( ButtonInfo < 0 )
    {
      v17 = 142LL;
LABEL_20:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\systemcontroldevicecollection.cpp",
        (const char *)(unsigned int)ButtonInfo);
      return (unsigned int)ButtonInfo;
    }
    v18 = std::_Fnv1a_append_bytes(v16, (const unsigned __int8 *const)i + 16, 4uLL);
    v19 = *((_QWORD *)this + 348);
    v20 = 2 * (*((_QWORD *)this + 351) & v18);
    if ( *(__int64 **)(v19 + 16 * (*((_QWORD *)this + 351) & v18) + 8) == i )
    {
      if ( *(__int64 **)(v19 + 16 * (*((_QWORD *)this + 351) & v18)) == i )
      {
        *(_QWORD *)(v19 + 16 * (*((_QWORD *)this + 351) & v18)) = *v7;
        v19 = *((_QWORD *)this + 348);
        v21 = *v7;
      }
      else
      {
        v21 = (__int64 *)i[1];
      }
      *(_QWORD *)(v19 + 8 * v20 + 8) = v21;
    }
    else if ( *(__int64 **)(v19 + 16 * (*((_QWORD *)this + 351) & v18)) == i )
    {
      *(_QWORD *)(v19 + 16 * (*((_QWORD *)this + 351) & v18)) = *i;
    }
    std::list<std::pair<tagMsgRoutingInfo const,IInputTarget *>>::erase((char *)this + 2768, v23, i);
    return 0LL;
  }
}

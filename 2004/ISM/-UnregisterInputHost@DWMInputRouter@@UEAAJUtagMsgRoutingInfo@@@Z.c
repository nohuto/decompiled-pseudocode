/*
 * XREFs of ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x1801395C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180035638 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?RemoveTarget@DWMInputRouter@@AEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@PEAUIInputTarget@@@std@@@std@@@std@@@std@@V23@@Z @ 0x180138E68 (-RemoveTarget@DWMInputRouter@@AEAA-AV-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterInputHost(__int64 a1, _DWORD *a2)
{
  __int64 appended; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // r8
  __int64 v6; // rax
  _QWORD *v7; // r11
  __int64 v8; // rsi
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 i; // r10
  __int64 v12; // rax
  __int64 *v13; // r10
  __int64 v14; // r10
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v17[16]; // [rsp+28h] [rbp-10h] BYREF

  *(_DWORD *)v17 = *a2;
  *(_DWORD *)v16 = a2[1];
  appended = std::_Fnv1a_append_bytes(a1, v16, 4uLL);
  v6 = std::_Fnv1a_append_bytes(v4, v17, v5);
  v8 = v7[7];
  v9 = v7[5];
  v10 = 2 * (v7[10] & (v6 ^ appended));
  for ( i = *(_QWORD *)(v8 + 8 * v10); ; i = *v13 )
  {
    v12 = *(_QWORD *)(v8 + 8 * v10) == v9 ? v9 : **(_QWORD **)(v8 + 8 * v10 + 8);
    if ( i == v12 )
      break;
    if ( operator==(i + 16, (__int64)a2) )
    {
      if ( operator==((__int64)a2, (__int64)(v13 + 2)) )
        v9 = v14;
      break;
    }
  }
  if ( v9 != v7[5] )
    DWMInputRouter::RemoveTarget((__int64)(v7 - 6), (__int64)v17, v9);
  return 0LL;
}

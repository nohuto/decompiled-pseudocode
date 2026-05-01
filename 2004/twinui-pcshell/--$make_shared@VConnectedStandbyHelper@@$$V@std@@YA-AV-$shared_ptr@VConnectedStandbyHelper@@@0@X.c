/*
 * XREFs of ??$make_shared@VConnectedStandbyHelper@@$$V@std@@YA?AV?$shared_ptr@VConnectedStandbyHelper@@@0@XZ @ 0x18029FC64
 * Callers:
 *     ?SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802A7EE0 (-SubscribeToServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     ?SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1802B8EA0 (-SubscribeToServices@WindowEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005B120 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008DA5C (--2@YAPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A0750 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$?0$$V@?$_Ref_count_obj@VConnectedStandbyHelper@@@std@@QEAA@XZ @ 0x18029DBB4 (--$-0$$V@-$_Ref_count_obj@VConnectedStandbyHelper@@@std@@QEAA@XZ.c)
 */

_QWORD *__fastcall std::make_shared<ConnectedStandbyHelper,>(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  volatile signed __int32 *v4; // rbx
  std::_Ref_count_base *v6; // rcx
  void *v8; // [rsp+30h] [rbp+8h]

  v8 = operator new(0x48uLL);
  v2 = std::_Ref_count_obj<ConnectedStandbyHelper>::_Ref_count_obj<ConnectedStandbyHelper>((__int64)v8);
  a1[1] = v2;
  *a1 = v2 + 16;
  if ( v2 != -16 )
  {
    v3 = *(_QWORD *)(v2 + 24);
    v4 = (volatile signed __int32 *)v2;
    if ( !(v3 ? *(_DWORD *)(v3 + 8) : 0) )
    {
      if ( v2 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
        v4 = (volatile signed __int32 *)a1[1];
      }
      if ( v4 )
        _InterlockedIncrement(v4 + 3);
      v6 = *(std::_Ref_count_base **)(v2 + 24);
      *(_QWORD *)(v2 + 16) = v2 + 16;
      *(_QWORD *)(v2 + 24) = v4;
      if ( v6 )
        std::_Ref_count_base::_Decwref(v6);
      if ( v4 )
        std::_Ref_count_base::_Decref((std::_Ref_count_base *)v4);
    }
  }
  return a1;
}

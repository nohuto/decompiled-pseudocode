/*
 * XREFs of ?at@?$map@UDockInputIdentity@@_KU?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@_K@std@@@3@@std@@QEAAAEA_KAEBUDockInputIdentity@@@Z @ 0x18012D980
 * Callers:
 *     ?BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@@std@@PEAUIHeatSystemContextClient@@@Z @ 0x18012C440 (-BroadcastContextMessage@ISMHeatFrameworkHost@@IEAAJPEAV-$variant@Umonostate@std@@UInputConfigCo.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::map<DockInputIdentity,unsigned __int64>::at(__int64 *a1, __int64 a2)
{
  __int64 *v2; // r10
  __int64 *v3; // r8
  __int64 *v4; // rcx
  unsigned int v5; // eax
  bool v6; // cf
  unsigned __int64 v7; // rax
  unsigned int v8; // eax
  bool v9; // cf
  unsigned __int64 v10; // rax

  v2 = (__int64 *)*a1;
  v3 = (__int64 *)*a1;
  v4 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v4 + 25) )
    goto LABEL_15;
  do
  {
    v5 = *((_DWORD *)v4 + 8);
    v6 = v5 < *(_DWORD *)a2;
    if ( v5 == *(_DWORD *)a2 )
    {
      v7 = *(_QWORD *)(a2 + 8);
      v6 = v4[5] < v7;
      if ( v4[5] == v7 )
        v6 = *((_WORD *)v4 + 24) < *(_WORD *)(a2 + 16);
    }
    if ( v6 )
    {
      v4 = (__int64 *)v4[2];
    }
    else
    {
      v3 = v4;
      v4 = (__int64 *)*v4;
    }
  }
  while ( !*((_BYTE *)v4 + 25) );
  if ( v3 == v2 )
    goto LABEL_15;
  v8 = *((_DWORD *)v3 + 8);
  v9 = *(_DWORD *)a2 < v8;
  if ( *(_DWORD *)a2 == v8 )
  {
    v10 = *(_QWORD *)(a2 + 8);
    v9 = v10 < v3[5];
    if ( v10 == v3[5] )
      v9 = *(_WORD *)(a2 + 16) < *((_WORD *)v3 + 24);
  }
  if ( v9 )
  {
LABEL_15:
    std::_Xout_of_range("invalid map<K, T> key");
    __debugbreak();
    JUMPOUT(0x18012DA12LL);
  }
  return v3 + 7;
}

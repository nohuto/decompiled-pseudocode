/*
 * XREFs of ?SetHostHandle@DXGKEYEDMUTEX@@QEAAJII@Z @ 0x1C0291ED4
 * Callers:
 *     ?VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z @ 0x1C024A01C (-VmBusSendOpenKeyedMutex@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGKEYEDMUTEX@@I@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGKEYEDMUTEX::SetHostHandle(DXGKEYEDMUTEX *this, int a2, int a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // rcx

  v8 = operator new[](0x18uLL, 0x4B677844u, PagedPool);
  if ( v8 )
  {
    v8[2] = 0LL;
    v8[1] = 0LL;
    *v8 = 0LL;
  }
  else
  {
    v8 = 0LL;
  }
  if ( v8 )
  {
    *((_DWORD *)v8 + 4) = a2;
    *((_DWORD *)v8 + 5) = a3;
    DXGFASTMUTEX::Acquire((DXGKEYEDMUTEX *)((char *)this + 112));
    v14 = (_QWORD *)((char *)this + 40);
    v15 = *((_QWORD *)this + 5);
    if ( *(DXGKEYEDMUTEX **)(v15 + 8) != (DXGKEYEDMUTEX *)((char *)this + 40) )
      __fastfail(3u);
    *v8 = v15;
    v8[1] = v14;
    *(_QWORD *)(v15 + 8) = v8;
    *v14 = v8;
    DXGFASTMUTEX::Release((struct _KTHREAD **)this + 14, v13);
    return 0LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdLowResource(v7, v6, v9, v10);
    *(_QWORD *)(v11 + 24) = 5809LL;
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
}

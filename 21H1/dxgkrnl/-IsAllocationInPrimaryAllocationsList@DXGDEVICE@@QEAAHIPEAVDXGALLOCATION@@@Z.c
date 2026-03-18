/*
 * XREFs of ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C0158420
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0133700 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00115CC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::IsAllocationInPrimaryAllocationsList(
        DXGDEVICE *this,
        __int64 a2,
        struct DXGALLOCATION *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // edi
  unsigned int v11; // r8d
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _BYTE v18[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v19; // [rsp+28h] [rbp-20h]
  int v20; // [rsp+30h] [rbp-18h]

  v4 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 464) )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3790LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v7, v6);
    *(_QWORD *)(v15 + 24) = 3791LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 231)) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v16 + 24) = 3792LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = 1;
  if ( *((_DWORD *)this + 108) != 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v9, v8);
    *(_QWORD *)(v17 + 24) = 3793LL;
    WdLogEvent5_WdAssertion(v17);
  }
  if ( *((_QWORD *)this + 231) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v18, (struct _KTHREAD **)this + 42, 0);
    DXGPUSHLOCK::AcquireExclusive(v19);
    v11 = *((_DWORD *)this + v4 + 238);
    v12 = 0LL;
    v20 = 2;
    if ( v11 )
    {
      while ( *(struct DXGALLOCATION **)(*((_QWORD *)this + v4 + 103) + 8 * v12) != a3 )
      {
        v12 = (unsigned int)(v12 + 1);
        if ( (unsigned int)v12 >= v11 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v10 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  }
  return v10;
}

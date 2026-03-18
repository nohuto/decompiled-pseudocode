/*
 * XREFs of ?DmmAdapterPowerChange@@YAJQEAXE@Z @ 0x1C02DBAEC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C0196790 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005424 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0007EFC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A4B0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000B3EC (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DmmAdapterPowerChange(PERESOURCE *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  PERESOURCE v8; // rax
  _QWORD *Address; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  const struct DMMVIDEOPRESENTTARGET *i; // rax
  __int64 v15; // rdx
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF

  if ( (_BYTE)a2 == 1 )
  {
    if ( !a1 )
    {
      v3 = WdLogNewEntry5_WdError(0LL, a2);
      *(_QWORD *)(v3 + 24) &= (unsigned __int64)a1;
      WdLogEvent5_WdError(v3);
      return 3223191554LL;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      v7 = WdLogNewEntry5_WdAssertion(v6, v5);
      WdLogEvent5_WdAssertion(v7);
    }
    v8 = a1[337];
    if ( v8 )
    {
      Address = v8->Address;
      if ( !Address )
      {
        v10 = WdLogNewEntry5_WdError(v6, v5);
        *(_QWORD *)(v10 + 24) = a1;
        WdLogEvent5_WdError(v10);
        return 3223192373LL;
      }
      EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v16, (__int64)v8->Address);
      _InterlockedIncrement((volatile signed __int32 *)(Address[10] + 72LL));
      v12 = (_QWORD *)Address[10];
      v13 = (_QWORD *)v12[3];
      if ( v13 != v12 + 3 )
      {
        for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1);
              i;
              i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, i) )
        {
          *((_BYTE *)i + 396) = 0;
        }
      }
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 8), v11);
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v16 + 40), v15);
    }
  }
  return 0LL;
}

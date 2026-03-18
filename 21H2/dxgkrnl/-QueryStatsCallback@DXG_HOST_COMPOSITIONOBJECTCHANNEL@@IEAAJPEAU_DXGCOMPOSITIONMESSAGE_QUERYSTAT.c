/*
 * XREFs of ?QueryStatsCallback@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@IEAAJPEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS@@PEAU_DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN@@@Z @ 0x1C02E0D24
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C02E0840 (-ProcessChannelMessage@DXG_HOST_COMPOSITIONOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006C430 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_HOST_COMPOSITIONOBJECTCHANNEL::QueryStatsCallback(
        DXG_HOST_COMPOSITIONOBJECTCHANNEL *this,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS *a2,
        struct _DXGCOMPOSITIONMESSAGE_QUERYSTATS_RETURN *a3,
        __int64 a4)
{
  unsigned int v7; // ebx
  DxgkCompositionObject *v8; // rsi
  struct DXGPROCESS *Current; // rax
  struct DXGFASTMUTEX *v10; // rax
  DxgkCompositionObject *v11; // rax
  int v12; // eax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  _BYTE v17[16]; // [rsp+20h] [rbp-88h] BYREF
  _OWORD v18[4]; // [rsp+30h] [rbp-78h] BYREF

  v7 = -1073741811;
  v8 = 0LL;
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, (__int64)a3, a4);
  if ( (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
  {
    v10 = (struct DXGFASTMUTEX *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1));
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v17, v10, 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v17);
    v11 = (DxgkCompositionObject *)(*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**((_QWORD **)this + 1) + 72LL))(
                                     *((_QWORD *)this + 1),
                                     *((unsigned int *)a2 + 3),
                                     17LL);
    if ( v11 )
    {
      v8 = v11;
      DxgkCompositionObject::AddRef(v11);
    }
    else
    {
      WdLogSingleEntry1(3LL, -1073741811LL);
    }
    if ( v17[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v17);
    if ( v8 )
    {
      memset(v18, 0, sizeof(v18));
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _OWORD *))(*((_QWORD *)v8 + 4) + 48LL))((_QWORD *)v8 + 4, v18);
      v7 = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(3LL, v12);
      }
      else
      {
        v13 = v18[1];
        *((_OWORD *)a3 + 1) = v18[0];
        v14 = v18[2];
        *((_OWORD *)a3 + 2) = v13;
        v15 = v18[3];
        *((_OWORD *)a3 + 3) = v14;
        *((_OWORD *)a3 + 4) = v15;
      }
      DxgkCompositionObject::Release(v8);
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, -1073741811LL);
  }
  *((_DWORD *)a3 + 1) = v7;
  return v7;
}

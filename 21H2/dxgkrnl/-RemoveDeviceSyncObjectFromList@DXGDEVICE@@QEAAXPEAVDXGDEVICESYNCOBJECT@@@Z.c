/*
 * XREFs of ?RemoveDeviceSyncObjectFromList@DXGDEVICE@@QEAAXPEAVDXGDEVICESYNCOBJECT@@@Z @ 0x1C0186074
 * Callers:
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C018692C (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 */

void __fastcall DXGDEVICE::RemoveDeviceSyncObjectFromList(DXGDEVICE *this, struct DXGDEVICESYNCOBJECT ***a2)
{
  struct DXGDEVICESYNCOBJECT **v4; // rax
  struct DXGDEVICESYNCOBJECT **v5; // rcx

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && !*((_BYTE *)this + 1905) )
  {
    WdLogSingleEntry1(1LL, 8151LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsDeviceLockExclusiveOwner() || IgnoreDeviceLock()",
      8151LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 8152LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8152LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = *a2;
  if ( (*a2)[1] != (struct DXGDEVICESYNCOBJECT *)a2 || (v5 = a2[1], *v5 != (struct DXGDEVICESYNCOBJECT *)a2) )
    __fastfail(3u);
  *v5 = (struct DXGDEVICESYNCOBJECT *)v4;
  v4[1] = (struct DXGDEVICESYNCOBJECT *)v5;
}

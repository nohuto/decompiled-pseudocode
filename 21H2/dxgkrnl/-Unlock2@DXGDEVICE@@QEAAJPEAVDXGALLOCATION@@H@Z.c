/*
 * XREFs of ?Unlock2@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@H@Z @ 0x1C03172F0
 * Callers:
 *     DxgkLock2 @ 0x1C017D050 (DxgkLock2.c)
 *     DxgkUnlock2Internal @ 0x1C0317BFC (DxgkUnlock2Internal.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0009418 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x1C0013D10 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1C0317470 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::Unlock2(DXGDEVICE *this, struct DXGALLOCATION *a2, int a3)
{
  DXGDEVICE *v3; // r9
  unsigned int v6; // edi
  unsigned int v7; // edi
  __int64 v8; // rbp
  unsigned int v9; // edi
  int v10; // eax

  v3 = (DXGDEVICE *)*((_QWORD *)a2 + 1);
  if ( v3 == this )
  {
    if ( !*((_DWORD *)this + 108) )
    {
      v7 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL);
      if ( (v7 & 4) != 0 )
      {
        if ( a3 )
        {
          v8 = *((_QWORD *)this + 231);
          v9 = (v7 >> 6) & 0xF;
          if ( v8 )
          {
            if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 231)) )
            {
              WdLogSingleEntry1(1LL, 1171LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
                1171LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( *((_DWORD *)this + 144) == 1
              && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v8 + 2792), this, v9)
              && DXGDEVICE::GetDisplayedPrimary((struct _KTHREAD **)this, v9) == a2 )
            {
              DXGDEVICE::UpdateDodFrontBuffer(this, a2);
            }
          }
        }
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL)
                                                    + 832LL))(
            *(_QWORD *)(*((_QWORD *)this + 2) + 656LL),
            *((_QWORD *)a2 + 3));
    v6 = v10;
    if ( v10 < 0 )
      WdLogSingleEntry3(3LL, this, a2, v10);
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry4(3LL, a2, this, v3, -1073741811LL);
  }
  return v6;
}

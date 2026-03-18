/*
 * XREFs of ?CreateOverlay@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C02E42E8
 * Callers:
 *     DxgkCreateOverlay @ 0x1C032A080 (DxgkCreateOverlay.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??2?$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z @ 0x1C00096C0 (--2-$DXGQUOTAALLOCATOR@$0BAA@$0ELGHHIEE@@@SAPEAX_K@Z.c)
 *     ??_GDXGOVERLAY@@QEAAPEAXI@Z @ 0x1C004C2AC (--_GDXGOVERLAY@@QEAAPEAXI@Z.c)
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C03296A0 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::CreateOverlay(DXGDEVICE *this, struct _D3DKMT_CREATEOVERLAY *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  DXGOVERLAY *v7; // rbx
  int v8; // edi
  DXGOVERLAY **v9; // rax
  __int64 v10; // rcx

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 3970LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 3970LL, 0LL, 0LL, 0LL, 0LL);
  }
  v6 = DXGQUOTAALLOCATOR<256,1265072196>::operator new(56LL, (__int64)a2, a3, a4);
  v7 = (DXGOVERLAY *)v6;
  if ( v6 )
  {
    *(_QWORD *)(v6 + 16) = this;
    *(_OWORD *)v6 = 0LL;
    *(_DWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 28) = 0;
    *(_DWORD *)(v6 + 32) = -1;
    *(_QWORD *)(v6 + 40) = 0LL;
    v8 = DXGOVERLAY::Initialize((DXGOVERLAY *)v6, a2);
    if ( v8 >= 0 )
    {
      v9 = (DXGOVERLAY **)((char *)this + 480);
      v10 = *((_QWORD *)this + 60);
      if ( *(DXGDEVICE **)(v10 + 8) != (DXGDEVICE *)((char *)this + 480) )
        __fastfail(3u);
      *(_QWORD *)v7 = v10;
      *((_QWORD *)v7 + 1) = v9;
      *(_QWORD *)(v10 + 8) = v7;
      *v9 = v7;
    }
    else
    {
      DXGOVERLAY::`scalar deleting destructor'(v7);
    }
  }
  else
  {
    v8 = -1073741801;
    WdLogSingleEntry2(3LL, this, -1073741801LL);
  }
  return (unsigned int)v8;
}

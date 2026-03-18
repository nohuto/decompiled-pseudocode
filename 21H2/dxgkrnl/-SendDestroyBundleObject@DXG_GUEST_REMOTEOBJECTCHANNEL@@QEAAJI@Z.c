/*
 * XREFs of ?SendDestroyBundleObject@DXG_GUEST_REMOTEOBJECTCHANNEL@@QEAAJI@Z @ 0x1C033D1B8
 * Callers:
 *     ?VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z @ 0x1C0352A3C (-VailSendDestroyBundleObject@DXGSESSIONDATA@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXG_GUEST_REMOTEOBJECTCHANNEL::SendDestroyBundleObject(
        DXG_GUEST_REMOTEOBJECTCHANNEL *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  unsigned int v6; // ebx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v11; // [rsp+50h] [rbp-30h] BYREF
  int v12; // [rsp+58h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+5Ch] [rbp-24h]
  int v14; // [rsp+60h] [rbp-20h]
  int v15; // [rsp+64h] [rbp-1Ch]
  _DWORD v16[4]; // [rsp+68h] [rbp-18h] BYREF

  v4 = a2;
  if ( DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4) )
  {
    if ( v4 )
    {
      v7 = *((_QWORD *)this + 1);
      v15 = 0;
      v16[2] = 3;
      v16[0] = 1869901170;
      v12 = 1869901170;
      v16[1] = -1073741823;
      v13 = -1073741823;
      v14 = 4;
      v11 = 16;
      v16[3] = v4;
      v8 = (*(__int64 (__fastcall **)(__int64, _DWORD *, __int64, int *, unsigned int *))(*(_QWORD *)v7 + 32LL))(
             v7,
             v16,
             16LL,
             &v12,
             &v11);
      v6 = v8;
      if ( v8 >= 0 )
      {
        if ( v11 == 16 )
        {
          if ( v14 == 4 )
            return v13;
          v9 = v14;
        }
        else
        {
          v9 = v11;
        }
        WdLogSingleEntry2(3LL, v9, -1073741823LL);
        return (unsigned int)-1073741823;
      }
      else
      {
        WdLogSingleEntry1(3LL, v8);
      }
    }
    else
    {
      v6 = -1073741811;
      WdLogSingleEntry2(3LL, 0LL, -1073741811LL);
    }
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context. Returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v6;
}

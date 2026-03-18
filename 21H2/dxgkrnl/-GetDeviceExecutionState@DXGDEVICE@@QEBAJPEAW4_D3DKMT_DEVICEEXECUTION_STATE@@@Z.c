/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C01BECBC
 * Callers:
 *     DxgkGetDeviceStateInternal @ 0x1C017C6C0 (DxgkGetDeviceStateInternal.c)
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C01BEC84 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v4; // ebp
  enum _D3DKMT_DEVICEEXECUTION_STATE v5; // esi
  unsigned int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // ecx
  unsigned int v10; // edx
  unsigned int v12; // [rsp+70h] [rbp+8h] BYREF

  v12 = 0;
  v4 = 0;
  v5 = D3DKMT_DEVICEEXECUTION_ACTIVE;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 10076LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pExecutionState != NULL", 10076LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 144) != 1 )
  {
    if ( *((_DWORD *)this + 144) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v4;
    }
    if ( *((_DWORD *)this + 144) == 3 )
      goto LABEL_28;
    if ( *((_DWORD *)this + 144) != 4 )
    {
      WdLogSingleEntry1(1LL, 10175LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Unexpected device execution state!",
        10175LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
LABEL_19:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
    return v4;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    v7 = *(_DWORD *)(*((_QWORD *)this + 56) + 16LL);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 624LL) + 8LL)
                                                           + 192LL))(
           *((_QWORD *)this + 96),
           &v12);
    v7 = v12;
    v4 = v6;
  }
  v8 = v7;
  v9 = v7 & 0x7FFFFFFF;
  v10 = v8 & 0x80000000;
  v12 = v9;
  if ( (v4 & 0x80000000) != 0 )
    return v4;
  if ( v9 > 0xD )
  {
    if ( v9 != 14 )
    {
      if ( v9 <= 0x13 )
        goto LABEL_36;
      if ( v9 != 22 )
      {
        if ( v9 == 24 )
          goto LABEL_36;
        if ( v9 != 25 )
          goto LABEL_26;
      }
    }
    goto LABEL_19;
  }
  if ( v9 >= 0xB )
    goto LABEL_27;
  if ( v9 )
  {
    if ( v9 != 2 )
    {
      if ( v9 == 6 )
      {
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
        return v4;
      }
      if ( v9 != 7 )
      {
        if ( v9 <= 8 )
        {
LABEL_26:
          WdLogSingleEntry1(1LL, 10163LL);
          DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Unexpected device error!", 10163LL, 0LL, 0LL, 0LL, 0LL);
          goto LABEL_27;
        }
LABEL_36:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
        return v4;
      }
LABEL_28:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v4;
    }
LABEL_27:
    *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
    return v4;
  }
  if ( v10 || *((_BYTE *)this + 73) )
    v5 = D3DKMT_DEVICEEXECUTION_RESET;
  *a2 = v5;
  return v4;
}

/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C014379C
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0143764 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     Feature_3895685435__private_IsEnabledDeviceUsage @ 0x1C00276A0 (Feature_3895685435__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // edi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // eax
  int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rax
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v5 + 24) = 10076LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((_DWORD *)this + 144) != 1 )
  {
    if ( *((_DWORD *)this + 144) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v2;
    }
    if ( *((_DWORD *)this + 144) != 3 )
    {
      if ( *((_DWORD *)this + 144) != 4 )
      {
        v6 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 144) - 3), a2);
        *(_QWORD *)(v6 + 24) = 10183LL;
        WdLogEvent5_WdAssertion(v6);
        *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
        return (unsigned int)-1073741823;
      }
LABEL_32:
      *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
      return v2;
    }
LABEL_22:
    *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
    return v2;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    v7 = *(unsigned int *)(*((_QWORD *)this + 56) + 16LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL)
                                                           + 192LL))(
           *((_QWORD *)this + 96),
           &v13);
    v7 = v13;
    v2 = v8;
  }
  v9 = v7;
  LODWORD(v7) = v7 & 0x7FFFFFFF;
  v10 = v9 & 0x80000000;
  v13 = v7;
  if ( (v2 & 0x80000000) == 0 )
  {
    if ( (unsigned int)v7 > 0xE )
    {
      if ( (unsigned int)v7 <= 0x13 )
        goto LABEL_33;
      if ( (_DWORD)v7 == 22 )
        goto LABEL_32;
      if ( (_DWORD)v7 == 24 )
        goto LABEL_33;
      if ( (_DWORD)v7 == 25 || (_DWORD)v7 == 27 && (unsigned int)Feature_3895685435__private_IsEnabledDeviceUsage() )
        goto LABEL_32;
    }
    else
    {
      switch ( (_DWORD)v7 )
      {
        case 0xE:
          goto LABEL_32;
        case 0:
          *a2 = (v10 != 0) + 1;
          return v2;
        case 2:
LABEL_21:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          return v2;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          return v2;
        case 7:
          goto LABEL_22;
      }
      if ( (unsigned int)v7 > 8 )
      {
        if ( (unsigned int)v7 > 0xA )
          goto LABEL_21;
LABEL_33:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
        return v2;
      }
    }
    v11 = WdLogNewEntry5_WdAssertion(v7, a2);
    *(_QWORD *)(v11 + 24) = 10170LL;
    WdLogEvent5_WdAssertion(v11);
    v2 = -1073741823;
    goto LABEL_21;
  }
  return v2;
}

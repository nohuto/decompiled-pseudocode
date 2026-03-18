/*
 * XREFs of ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C013EFAC
 * Callers:
 *     ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C013EF74 (-IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::GetDeviceExecutionState(DXGDEVICE *this, enum _D3DKMT_DEVICEEXECUTION_STATE *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v13 = 0;
  if ( !a2 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v10 + 24) = 9962LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 144) != 1 )
  {
    if ( *((_DWORD *)this + 144) == 2 )
    {
      *a2 = D3DKMT_DEVICEEXECUTION_RESET;
      return v2;
    }
    if ( *((_DWORD *)this + 144) == 3 )
      goto LABEL_25;
    if ( *((_DWORD *)this + 144) != 4 )
    {
      v11 = WdLogNewEntry5_WdAssertion((unsigned int)(*((_DWORD *)this + 144) - 3), a2);
      *(_QWORD *)(v11 + 24) = 10058LL;
      WdLogEvent5_WdAssertion(v11);
      v2 = -1073741823;
    }
    goto LABEL_16;
  }
  if ( (*((_BYTE *)this + 1869) & 1) != 0 )
  {
    v6 = *(unsigned int *)(*((_QWORD *)this + 56) + 16LL);
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 616LL) + 8LL)
                                                           + 192LL))(
           *((_QWORD *)this + 96),
           &v13);
    v6 = v13;
    v2 = v5;
  }
  v7 = v6;
  LODWORD(v6) = v6 & 0x7FFFFFFF;
  v8 = v7 & 0x80000000;
  v13 = v6;
  if ( (v2 & 0x80000000) == 0 )
  {
    if ( (unsigned int)v6 <= 0xD )
    {
      if ( (unsigned int)v6 >= 0xB )
        goto LABEL_24;
      switch ( (_DWORD)v6 )
      {
        case 0:
          *a2 = (v8 != 0) + 1;
          return v2;
        case 2:
LABEL_24:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY;
          return v2;
        case 6:
          *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT;
          return v2;
      }
      if ( (_DWORD)v6 != 7 )
      {
        if ( (unsigned int)v6 <= 8 )
        {
LABEL_23:
          v12 = WdLogNewEntry5_WdAssertion(v6, a2);
          *(_QWORD *)(v12 + 24) = 10045LL;
          WdLogEvent5_WdAssertion(v12);
          v2 = -1073741823;
          goto LABEL_24;
        }
LABEL_33:
        *a2 = D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT;
        return v2;
      }
LABEL_25:
      *a2 = D3DKMT_DEVICEEXECUTION_HUNG;
      return v2;
    }
    if ( (_DWORD)v6 != 14 )
    {
      if ( (unsigned int)v6 <= 0x13 )
        goto LABEL_33;
      if ( (_DWORD)v6 != 22 )
      {
        if ( (_DWORD)v6 == 24 )
          goto LABEL_33;
        if ( (_DWORD)v6 != 25 )
          goto LABEL_23;
      }
    }
LABEL_16:
    *a2 = D3DKMT_DEVICEEXECUTION_STOPPED;
  }
  return v2;
}

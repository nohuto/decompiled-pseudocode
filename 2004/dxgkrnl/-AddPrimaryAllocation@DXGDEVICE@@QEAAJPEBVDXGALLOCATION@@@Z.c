/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0166F14
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C00F28E0 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0004298 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0019CC0 (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(DXGADAPTER **this, const struct DXGALLOCATION *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  DXGADAPTER *v12; // rdx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  int v19; // [rsp+50h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v14 + 24) = 3603LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this[2] + 2)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v5, v4);
    *(_QWORD *)(v15 + 24) = 3604LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v6 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[231]) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v16 + 24) = 3608LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( v6 >= *((_DWORD *)this + 464) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v17 + 24) = 3609LL;
    WdLogEvent5_WdAssertion(v17);
  }
  v19 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation(this, v6, a2, &v19) )
  {
    v12 = this[2];
    if ( !v19 )
      return 0LL;
    if ( this[231] != *((DXGADAPTER **)v12 + 2) )
      return 0LL;
    if ( *((_DWORD *)this + 108) != 1 )
      return 0LL;
    if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)v12 + 80) + 8LL)
                                                                                       + 232LL))(
               *((_QWORD *)v12 + 81),
               *((_QWORD *)a2 + 3),
               0LL,
               0LL,
               0LL,
               0LL);
    if ( (int)result >= 0 )
      return 0LL;
  }
  else
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
    v18[3] = this;
    v18[5] = -1073741801LL;
    v18[4] = a2;
    WdLogEvent5_WdWarning(v18);
    return 3221225495LL;
  }
  return result;
}

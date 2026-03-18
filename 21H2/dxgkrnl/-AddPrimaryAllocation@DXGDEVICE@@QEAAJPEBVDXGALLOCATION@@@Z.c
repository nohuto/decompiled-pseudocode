/*
 * XREFs of ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C01C5F88
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x1C0191710 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C001417C (-InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXGDEVICE::AddPrimaryAllocation(DXGDEVICE *this, const struct DXGALLOCATION *a2)
{
  unsigned int v4; // esi
  _QWORD *v5; // r8
  __int64 result; // rax
  int v7; // [rsp+70h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) & 1) == 0 )
  {
    WdLogSingleEntry1(1LL, 3655LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pAllocation->m_pAllocation->m_Primary",
      3655LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 3656LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      3656LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v4 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)this + 231)) )
  {
    WdLogSingleEntry1(1LL, 3660LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDisplayAdapter(VidPnSourceId)->IsCoreResourceSharedOwner()",
      3660LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( v4 >= *((_DWORD *)this + 464) )
  {
    WdLogSingleEntry1(1LL, 3661LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"VidPnSourceId < GetNumVidPnSources()",
      3661LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = 0;
  if ( DXGDEVICE::InsertPrimaryAllocation((struct _KTHREAD **)this, v4, a2, &v7) )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 2);
    if ( !v7 )
      return 0LL;
    if ( *((_QWORD *)this + 231) != v5[2] )
      return 0LL;
    if ( *((_DWORD *)this + 108) != 1 )
      return 0LL;
    if ( (*((_DWORD *)a2 + 18) & 0x800) != 0 )
      return 0LL;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(v5[81] + 8LL)
                                                                                       + 232LL))(
               v5[82],
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
    WdLogSingleEntry3(3LL, this, a2, -1073741801LL);
    return 3221225495LL;
  }
  return result;
}

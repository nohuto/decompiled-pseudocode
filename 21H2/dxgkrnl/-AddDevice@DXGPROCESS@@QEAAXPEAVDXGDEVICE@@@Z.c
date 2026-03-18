/*
 * XREFs of ?AddDevice@DXGPROCESS@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C0168834
 * Callers:
 *     ?CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIENT_TYPE@@PEAVDXGADAPTER@@EEEPEAUDXGK_VIRTUAL_GPU_PARAV@@PEAPEAUDXG_SET_GUEST_DATA@@E@Z @ 0x1C0168698 (-CreateDevice@ADAPTER_RENDER@@QEAAJPEAPEAVDXGDEVICE@@U_D3DKMT_CREATEDEVICEFLAGS@@W4DXGDEVICECLIE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGPROCESS::AddDevice(DXGPROCESS *this, struct DXGDEVICE *a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax

  if ( (*((_DWORD *)this + 106) & 1) != 0 )
  {
    if ( *((_DWORD *)a2 + 108) == 2 )
      goto LABEL_3;
  }
  else if ( *((_DWORD *)a2 + 108) != 2 )
  {
    goto LABEL_3;
  }
  WdLogSingleEntry1(1LL, 6231LL);
  DxgkLogInternalTriageEvent(
    0LL,
    262146,
    -1,
    (__int64)L"(m_bCsrssProcess && pDevice->IsCddDevice()) || (!m_bCsrssProcess && !pDevice->IsCddDevice())",
    6231LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_3:
  v4 = (_QWORD *)((char *)this + 320);
  v5 = *((_QWORD *)this + 40);
  v6 = (_QWORD *)((char *)a2 + 24);
  if ( *(DXGPROCESS **)(v5 + 8) != (DXGPROCESS *)((char *)this + 320) )
    __fastfail(3u);
  *v6 = v5;
  *((_QWORD *)a2 + 4) = v4;
  *(_QWORD *)(v5 + 8) = v6;
  *v4 = v6;
  *((_BYTE *)this + 336) = 1;
}

/*
 * XREFs of ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBUD3DKMT_HASH@@@Z @ 0x1C013AB20
 * Callers:
 *     ?CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z @ 0x1C0139F3C (-CommitTo@CDS_JOURNAL@@QEBAJPEAVCCD_TOPOLOGY@@_NPEAG@Z.c)
 *     ?VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C013AA9C (-VerifyConnectivityHash@CCD_TOPOLOGY@@QEBAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C013CCF0 (-Augment@CDS_JOURNAL@@QEAAJPEAUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C0008E58 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::VerifyConnectivityHash(CCD_TOPOLOGY *this, const struct D3DKMT_HASH *a2, __int64 a3)
{
  _DWORD *v5; // rdx
  unsigned __int16 v6; // bx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *(_DWORD *)a2 != 1 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v10);
  }
  v5 = (_DWORD *)*((_QWORD *)this + 8);
  v6 = 0;
  if ( v5 && *v5 == 1 )
    return RtlCompareMemory(a2, v5, 0x14uLL) != 20 ? 0xC000022E : 0;
  v8 = WdLogNewEntry5_WdWarning(this, v5, a3);
  *(_QWORD *)(v8 + 24) = this;
  *(_QWORD *)(v8 + 32) = *((_QWORD *)this + 8);
  WdLogEvent5_WdWarning(v8);
  v9 = *((_QWORD *)this + 8);
  if ( v9 )
    v6 = *(_WORD *)(v9 + 20);
  DxgkLogCodePointPacket(0x40u, v6, 0, 0, 0LL);
  return 0LL;
}

/*
 * XREFs of ndisInvokeDirectOidRequestComplete @ 0x1C00AF594
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDqd @ 0x1C000B140 (WPP_RECORDER_SF_qDqd.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E000 (WPP_RECORDER_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ndisInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 24);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xCu,
      (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
      a1,
      *(_DWORD *)(a2 + 32),
      a2,
      a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 776))(*(_QWORD *)(a1 + 32), a2, a3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             0xBu,
             0xDu,
             (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
             a1,
             a2);
  return result;
}

/*
 * XREFs of ndisFInvokeDirectOidRequestComplete @ 0x1C00AF4B4
 * Callers:
 *     ?ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C000B2C0 (-ndisOidRequestComplete@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C000B200 (WPP_RECORDER_SF_qDq.c)
 *     _guard_dispatch_icall_nop @ 0x1C003F3E0 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_qDqD @ 0x1C00AF290 (WPP_RECORDER_SF_qDqD_ea_1C00AF290.c)
 */

__int64 __fastcall ndisFInvokeDirectOidRequestComplete(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r14
  int v5; // esi
  __int64 result; // rax
  int v9; // r8d

  v3 = *(_QWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a2 + 32);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDqD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      a3,
      0xEu,
      (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
      a1,
      v5,
      a2,
      a3);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 304))(*(_QWORD *)(a1 + 24), a2, a3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    return WPP_RECORDER_SF_qDq(
             *((_QWORD *)WPP_GLOBAL_Control + 8),
             4u,
             v9,
             0xFu,
             (struct _GUID *)&WPP_0e2ec831e88c31193e413b6f3daa2a3f_Traceguids,
             a1,
             v5,
             a2);
  return result;
}

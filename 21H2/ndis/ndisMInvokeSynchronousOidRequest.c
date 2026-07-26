/*
 * XREFs of ndisMInvokeSynchronousOidRequest @ 0x1C00B020C
 * Callers:
 *     ?ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00B0308 (-ndisSynchronousOidRequestInternal@@YAHPEAU_NDIS_OBJECT_HEADER@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_N.c)
 * Callees:
 *     WPP_RECORDER_SF_qDq @ 0x1C000B2F0 (WPP_RECORDER_SF_qDq.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00400D0 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005EE00 (-ndisBugCheckEx@@YAX_K000@Z.c)
 */

__int64 __fastcall ndisMInvokeSynchronousOidRequest(ULONG_PTR a1, ULONG_PTR BugCheckParameter3, int a3)
{
  __int64 v3; // rsi
  unsigned int v6; // eax
  unsigned int v7; // esi
  __int64 v9; // [rsp+30h] [rbp-18h]

  v3 = *(_QWORD *)(a1 + 3760);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      a3,
      0xAu,
      (struct _GUID *)&WPP_0a532a69b4f93cf89502f53ea8ed50ba_Traceguids,
      a1,
      *(_DWORD *)(BugCheckParameter3 + 32),
      BugCheckParameter3);
  v6 = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(v3 + 264))(*(_QWORD *)(a1 + 24), BugCheckParameter3);
  v7 = v6;
  if ( ((v6 - 255) & 0xFFFFFFFB) == 0 )
    ndisBugCheckEx(0x26uLL, a1, BugCheckParameter3, 0x103uLL);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_0a532a69b4f93cf89502f53ea8ed50ba_Traceguids,
      a1,
      v9);
  }
  return v7;
}

/*
 * XREFs of NdisMSetVirtualFunctionBusData @ 0x1C007C890
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DC70 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DD50 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C003FB60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NdisMSetVirtualFunctionBusData(__int64 a1, unsigned __int16 a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned int v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, _QWORD, int); // r10
  __int64 v11; // rcx
  char v13[4]; // [rsp+30h] [rbp-28h]

  v9 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x71u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int))(a1 + 4776);
  if ( v10 )
  {
    v11 = *(_QWORD *)(a1 + 4816);
    if ( v11 )
      v9 = v10(v11, a2, a3, a4, a5);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v9;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x72u,
      (struct _GUID *)&WPP_0f98fe4372f03ccdb8622e820a1a6bac_Traceguids,
      a1,
      *(_DWORD *)v13);
  }
  return v9;
}

/*
 * XREFs of HUBUCX_GetControllerInfo @ 0x1C0025C44
 * Callers:
 *     HUBHSM_Configuring @ 0x1C0008040 (HUBHSM_Configuring.c)
 *     HUBHSM_GettingRootHubInfo @ 0x1C00094F0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1)
{
  _DWORD *v1; // rbx
  __int64 result; // rax
  bool v4; // zf

  v1 = (_DWORD *)(a1 + 168);
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(a1 + 576))(*(_QWORD *)(a1 + 248), a1 + 168);
  v4 = *v1 == 3;
  *(_BYTE *)(a1 + 200) = 0;
  if ( v4 )
    *(_BYTE *)(a1 + 200) = 1;
  return result;
}

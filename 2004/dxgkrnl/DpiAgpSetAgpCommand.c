/*
 * XREFs of DpiAgpSetAgpCommand @ 0x1C02D6970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpSetAgpCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int (__fastcall *v3)(_QWORD); // rax
  unsigned int v4; // ebx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( v2
    && *(_DWORD *)(v2 + 16) == 1953656900
    && *(_DWORD *)(v2 + 20) == 2
    && (v3 = *(unsigned int (__fastcall **)(_QWORD))(v2 + 752)) != 0LL )
  {
    return v3(*(_QWORD *)(v2 + 680));
  }
  else
  {
    v4 = -1073741811;
    v5 = WdLogNewEntry5_WdError(v2, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
  }
  return v4;
}

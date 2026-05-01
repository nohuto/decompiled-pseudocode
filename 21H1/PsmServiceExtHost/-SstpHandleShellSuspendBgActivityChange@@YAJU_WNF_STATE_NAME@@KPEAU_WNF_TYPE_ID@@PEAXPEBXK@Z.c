/*
 * XREFs of ?SstpHandleShellSuspendBgActivityChange@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180085470
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SstpHandleShellSuspendBgActivityChange(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        _DWORD *a4,
        _DWORD *a5)
{
  unsigned int v5; // edx
  __int64 result; // rax

  v5 = a4[5] | 0x20;
  if ( *a5 != -1 )
    v5 = a4[5] & 0xFFFFFFDF;
  result = 0LL;
  a4[5] = v5;
  return result;
}

/*
 * XREFs of ndisBuildMonitoringLwfBindings @ 0x1C0124960
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C012476C (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C01028A8 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ndisIsLwfBindable @ 0x1C0124D14 (ndisIsLwfBindable.c)
 *     ndisIsLwfBindingEnabled @ 0x1C0124D60 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0124E04 (ndisIsLwfBindingEnabled_0.c)
 */

__int64 __fastcall ndisBuildMonitoringLwfBindings(struct _GUID *a1, __int64 a2, struct _GUID *a3)
{
  _QWORD *v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 v7; // rsi
  __int64 v8; // r12
  struct _GUID *v9; // rdi
  __int64 result; // rax

  v3 = qword_1C00E45D8;
  v4 = 0LL;
  v7 = 0LL;
  v8 = *((unsigned int *)qword_1C00E45D8 + 15);
  while ( v4 != v8 )
  {
    if ( v4 >= *((unsigned int *)v3 + 15) )
      __fastfail(5u);
    v9 = (struct _GUID *)(v7 + v3[8]);
    if ( (unsigned __int8)ndisIsLwfBindable(a1, v9) )
    {
      result = a3 ? ndisIsLwfBindingEnabled(a1, a3, v9) : ndisIsLwfBindingEnabled_0(a1, v9);
      if ( (_DWORD)result )
        return result;
    }
    ++v4;
    v7 += 64LL;
  }
  return 0LL;
}

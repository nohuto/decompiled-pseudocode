/*
 * XREFs of sub_180016AF0 @ 0x180016AF0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__m128 __fastcall sub_180016AF0(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  DWORD v4; // ebx
  struct _RTL_CRITICAL_SECTION *v5; // rdi
  __int128 v6; // xmm6
  __int64 v8; // [rsp+40h] [rbp+8h]

  v4 = *(_DWORD *)(a1 + 180);
  v5 = (struct _RTL_CRITICAL_SECTION *)(qword_18004FE78 + 32);
  v6 = 0x3F800000u;
  EnterCriticalSection((LPCRITICAL_SECTION)(qword_18004FE78 + 32));
  if ( !(unsigned int)sub_18002880C(v4) )
  {
    *(double *)&v2 = (*(double (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(v8 + 256) + 24LL))(
                       *(_QWORD *)(v8 + 256),
                       a2);
    v6 = v2;
  }
  if ( v5 )
    LeaveCriticalSection(v5);
  return (__m128)v6;
}

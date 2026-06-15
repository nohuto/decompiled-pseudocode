/*
 * XREFs of sub_1800E6290 @ 0x1800E6290
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800E6290(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // rdi
  __int64 v3; // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v3 = *(_QWORD *)(a1 + 88);
  if ( !v3 )
  {
    v4 = -2005139437;
LABEL_7:
    sub_18005E8F8((__int64)"CBaseStreamGroupProxy::ResetEndpoint", 768, v4);
    goto LABEL_8;
  }
  sub_1800461B8(&v6);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL))(v3, &v6);
  if ( v4 < 0 )
    goto LABEL_7;
  if ( v6 )
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 104LL))(v6);
  if ( v4 < 0 )
    goto LABEL_7;
LABEL_8:
  if ( v1 )
    LeaveCriticalSection(v1);
  sub_1800461B8(&v6);
  return (unsigned int)v4;
}

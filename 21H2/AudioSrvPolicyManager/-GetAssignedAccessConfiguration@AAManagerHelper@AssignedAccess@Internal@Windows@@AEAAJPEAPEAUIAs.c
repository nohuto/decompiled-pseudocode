/*
 * XREFs of ?GetAssignedAccessConfiguration@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEAPEAUIAssignedAccessConfiguration@234@@Z @ 0x1800384A4
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x180037338 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003AB0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessConfiguration(
        Windows::Internal::AssignedAccess::AAManagerHelper *this,
        struct Windows::Internal::AssignedAccess::IAssignedAccessConfiguration **a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = *((_DWORD *)this + 2);
  if ( v2 )
  {
    if ( v2 != -2147221164 )
    {
      if ( v2 >= 0 )
        return (unsigned int)v2;
      v3 = 163LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\aamanagerhelper.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this);
    if ( v2 < 0 )
    {
      v3 = 165LL;
      goto LABEL_5;
    }
  }
  return 0LL;
}

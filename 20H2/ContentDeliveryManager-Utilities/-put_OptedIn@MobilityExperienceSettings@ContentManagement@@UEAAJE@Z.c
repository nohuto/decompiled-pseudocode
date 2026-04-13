/*
 * XREFs of ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x180011E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000E698 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_OptedIn(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  char v2; // di
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  void *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char)a2;
  v10 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v10);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 709LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  LOBYTE(v4) = v2;
  v3 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v10 + 24LL))(v10, v4);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 710LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  v7 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v5;
}

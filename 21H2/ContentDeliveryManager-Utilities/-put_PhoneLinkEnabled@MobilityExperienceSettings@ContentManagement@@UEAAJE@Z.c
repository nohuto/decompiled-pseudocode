/*
 * XREFs of ?put_PhoneLinkEnabled@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x1800125D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x18000E898 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_PhoneLinkEnabled(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  char v2; // di
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void *v9; // [rsp+50h] [rbp+18h] BYREF

  v2 = (char)a2;
  v9 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v9);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 776LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_7;
  }
  LOBYTE(v4) = v2;
  v3 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v9 + 48LL))(v9, v4);
  v5 = v3;
  if ( v3 < 0 )
  {
    v6 = 777LL;
    goto LABEL_5;
  }
  v5 = 0;
LABEL_7:
  if ( v9 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  return v5;
}

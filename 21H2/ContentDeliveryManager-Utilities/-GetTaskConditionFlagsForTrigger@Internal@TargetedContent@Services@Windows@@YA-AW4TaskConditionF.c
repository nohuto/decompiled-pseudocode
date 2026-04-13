/*
 * XREFs of ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180072EC4
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180072FE0 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800733E0 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F58 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D0BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(__int64 a1)
{
  int v2; // eax
  const char *v3; // rax
  unsigned int v4; // ebx
  int v5; // eax
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 272LL))(a1, &v8);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1A0,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = (const char *)&unk_180113820;
  v4 = 0;
  do
  {
    if ( (v8 & *((_DWORD *)v3 + 1)) != 0 )
      v4 |= *(_DWORD *)v3;
    v3 += 8;
  }
  while ( v3 != "stoi argument out of range" );
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 256LL))(a1, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x180072F7ALL);
  }
  result = v4 | 0x10;
  if ( (v9 & 2) == 0 )
    return v4;
  return result;
}

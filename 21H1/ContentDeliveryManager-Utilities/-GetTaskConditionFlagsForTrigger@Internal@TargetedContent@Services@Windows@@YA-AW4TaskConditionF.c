/*
 * XREFs of ?GetTaskConditionFlagsForTrigger@Internal@TargetedContent@Services@Windows@@YA?AW4TaskConditionFlags@CommonHelper@CreativeFramework@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x180070244
 * Callers:
 *     ?RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180070360 (-RegisterWnfTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInt.c)
 *     ?RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180070760 (-RegisterTimerTrigger@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerI.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::GetTaskConditionFlagsForTrigger(__int64 a1)
{
  int v2; // eax
  const wchar_t *v3; // rax
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
  v3 = (const wchar_t *)&unk_18010D600;
  v4 = 0;
  do
  {
    if ( (v8 & *((_DWORD *)v3 + 1)) != 0 )
      v4 |= *(_DWORD *)v3;
    v3 += 4;
  }
  while ( v3 != L"Trigger Registration" );
  v5 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 256LL))(a1, &v9);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1B3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x1800702FALL);
  }
  result = v4 | 0x10;
  if ( (v9 & 2) == 0 )
    return v4;
  return result;
}

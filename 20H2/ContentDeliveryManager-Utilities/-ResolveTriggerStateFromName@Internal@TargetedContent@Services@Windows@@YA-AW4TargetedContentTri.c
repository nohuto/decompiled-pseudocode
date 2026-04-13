/*
 * XREFs of ?ResolveTriggerStateFromName@Internal@TargetedContent@Services@Windows@@YA?AW4TargetedContentTriggerState@1234@PEB_W@Z @ 0x180073A5C
 * Callers:
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180076184 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 *     std::_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0_::_ApplyX_bool_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&_ @ 0x18007BA80 (std--_Callable_obj__lambda_d0dd6ff31bf1dd0b66c34fd287ac5fb9__0_--_ApplyX_bool_std--shared_ptr_Cr.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180006484 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::ResolveTriggerStateFromName(const WCHAR *a1)
{
  LPCWCH *v2; // rbx
  unsigned int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (LPCWCH *)&unk_180197850;
  while ( CompareStringOrdinal(v2[1], -1, a1, -1, 1) != 2 )
  {
    v2 += 2;
    if ( v2 == (LPCWCH *)&off_180197890 )
    {
      v4 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2B2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
        (const char *)v4);
      JUMPOUT(0x180073ADALL);
    }
  }
  return *(unsigned int *)v2;
}

/*
 * XREFs of ?DecodeBase64String@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUHSTRING__@@@Z @ 0x180072140
 * Callers:
 *     ?EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV?$function@$$A6A_NPEAUHSTRING__@@W4TargetedContentTriggerState@Internal@TargetedContent@Services@Windows@@1@Z@std@@@Z @ 0x180076184 (-EnumerateTriggerStateTransitions@Internal@TargetedContent@Services@Windows@@YAXPEB_WV-$function.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@@wil@@PEAI@Z @ 0x180071E20 (-DecodeBase64ToBtyeArray@Internal@TargetedContent@Services@Windows@@YAXPEAUHSTRING__@@AEAV-$uniq.c)
 */

// Hidden C++ exception states: #wind=2
HSTRING *__fastcall Windows::Services::TargetedContent::Internal::DecodeBase64String(HSTRING *a1, __int64 a2)
{
  UINT32 v3; // ebx
  UINT32 v4; // edx
  WCHAR *v5; // rbx
  HRESULT String; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+18h] BYREF
  PCNZWCH sourceString; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  sourceString = 0LL;
  Windows::Services::TargetedContent::Internal::DecodeBase64ToBtyeArray(a2, (void **)&sourceString, &v9);
  v3 = v9 >> 1;
  *a1 = 0LL;
  WindowsDeleteString(0LL);
  *a1 = 0LL;
  v4 = v3;
  v5 = (WCHAR *)sourceString;
  String = WindowsCreateString(sourceString, v4, a1);
  if ( String < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagerutils.cpp",
      (const char *)(unsigned int)String);
    JUMPOUT(0x1800721FALL);
  }
  if ( v5 )
    CoTaskMemFree(v5);
  return a1;
}

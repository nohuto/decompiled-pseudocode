/*
 * XREFs of SleepstudyHelper_RegisterComponentEx @ 0x1C00BFA90
 * Callers:
 *     ?SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ @ 0x1C0089F00 (-SleepStudyRegisterBlockingComponents@FxPkgPnp@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SleepstudyHelper_RegisterComponentEx(
        SS_LIBRARY__ *InitializeHandle,
        _GUID *ParentGuid,
        _GUID *ComponentGuid,
        _UNICODE_STRING *FriendlyName,
        SS_COMPONENT__ **Handle)
{
  __int128 v5; // xmm1
  __int64 result; // rax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF

  if ( !unk_1C00AB320
    || (v5 = (__int128)*ParentGuid,
        v7 = (__int128)*ComponentGuid,
        v8 = v5,
        result = unk_1C00AB320(InitializeHandle, &v8, &v7, FriendlyName, Handle),
        (_DWORD)result == -1073741637) )
  {
    *Handle = (SS_COMPONENT__ *)&SleepstudyHelperUnsupportedHandle;
    return 0LL;
  }
  return result;
}

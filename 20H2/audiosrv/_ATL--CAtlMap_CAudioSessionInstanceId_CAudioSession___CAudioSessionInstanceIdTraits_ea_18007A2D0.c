/*
 * XREFs of _ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession___CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____::NewNode_::_1_::catch$14 @ 0x18007A2D0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180074177 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_CAudioSessionInstanceId_CAudioSession___CAudioSessionInstanceIdTraits_ATL::CElementTraits_CAudioSession_____::NewNode_::_1_::catch_14(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 128);
  v4 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(v4 + 88) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}

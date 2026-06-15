/*
 * XREFs of _ATL::CAtlMap_IAudioStreamInfo___Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo____ATL::CElementTraits_Sarm::CStreamResource___::NewNode_::_1_::catch$1 @ 0x1801080FE
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180074B37 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn ATL::CAtlMap_IAudioStreamInfo___Sarm::CStreamResource_ATL::CElementTraits_IAudioStreamInfo____ATL::CElementTraits_Sarm::CStreamResource___::NewNode_::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx

  v3 = *(_QWORD *)(a2 + 80);
  v4 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(v4 + 104) = *(_QWORD *)(v3 + 64);
  *(_QWORD *)(v3 + 64) = v4;
  throw;
}

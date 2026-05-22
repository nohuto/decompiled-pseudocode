/*
 * XREFs of ??0SpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@QEAA@KKW4InputType@@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@623@@Z @ 0x1800D57B0
 * Callers:
 *     ??0SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@QEAA@PEB_WPEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DB190 (--0SpatialInteractionEyeGazeSourceObject@SpatialInteractions@Internal@Windows@@QEAA@PEB_WPEAUISp.c)
 *     ??0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDevice@Holographic@23@PEAUISpatialObject@523@@Z @ 0x1800DE36C (--0SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@QEAA@PEAUISpatialObjectDev.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::SpatialInteractionSourceObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int128 v8; // xmm0
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF

  v10 = a1;
  v8 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a6 + 48LL))(a6, &v10);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)a1 = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice::`vftable';
  *(_OWORD *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 40) = 0LL;
  InitializeSRWLock((PSRWLOCK)(a1 + 48));
  *(_OWORD *)(a1 + 56) = 0LL;
  *(_DWORD *)(a1 + 72) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 80));
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_WORD *)(a1 + 108) = 0;
  *(_QWORD *)a1 = &Windows::Internal::SpatialInteractions::SpatialInteractionSourceObject::`vftable';
  *(_QWORD *)(a1 + 112) = a5;
  if ( a5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a5 + 8LL))(a5);
  *(_QWORD *)(a1 + 120) = a6;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a6 + 8LL))(a6);
  *(_QWORD *)(a1 + 128) = 0LL;
  result = a1;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  return result;
}

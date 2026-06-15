/*
 * XREFs of XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_42bf887d55349554e7487a5227c11c37___lambda_cbaeb64f083810d120532be23c3dcd0f___ @ 0x14001F514
 * Callers:
 *     ?GetAt@?$SimpleVectorView@UEventRegistrationToken@@V?$Vector@UEventRegistrationToken@@UEventRegistrationTokenEqual@Internal@Devices@Media@Windows@@UPodLifetimeTraits@XWinRT@@U?$DefaultVectorOptions@UEventRegistrationToken@@@3Collections@Foundation@6@@Internal@Collections@Foundation@Windows@@UPodLifetimeTraits@XWinRT@@UIntVersionTag@8@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUEventRegistrationToken@@@Z @ 0x140022AE0 (-GetAt@-$SimpleVectorView@UEventRegistrationToken@@V-$Vector@UEventRegistrationToken@@UEventRegi.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029E50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_EventRegistrationToken_Windows::Media::Devices::Internal::EventRegistrationTokenEqual_XWinRT::PodLifetimeTraits_Windows::Foundation::Collections::Internal::DefaultVectorOptions_EventRegistrationToken____XWinRT::IntVersionTag_::Do__lambda_42bf887d55349554e7487a5227c11c37___lambda_cbaeb64f083810d120532be23c3dcd0f___(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        _QWORD ***a4)
{
  unsigned int v4; // ebx
  int v8; // eax

  v4 = *a1;
  if ( (*a1 & 0x80000000) == 0 )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)a3 + 40LL) + 48LL))(
           *(_QWORD *)(*(_QWORD *)a3 + 40LL),
           **(unsigned int **)(a3 + 8),
           **(_QWORD **)(a3 + 16));
    v4 = v8;
    if ( a1[1] != *(_DWORD *)(a2 + 88) )
    {
      *a1 = -2147483636;
      if ( v8 < 0 )
      {
        RoTransformError((unsigned int)v8, 2147483660LL, 0LL);
      }
      else
      {
        RoOriginateError(2147483660LL, 0LL);
        ***a4 = 0LL;
      }
      return (unsigned int)-2147483636;
    }
  }
  else
  {
    RoOriginateError(v4, 0LL);
  }
  return v4;
}

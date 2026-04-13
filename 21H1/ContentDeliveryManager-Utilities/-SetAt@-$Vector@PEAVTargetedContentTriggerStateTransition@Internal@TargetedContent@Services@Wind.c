/*
 * XREFs of ?SetAt@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180061190
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18001A3B4 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A3D4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005D714 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180062FE4 (--$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::SetAt(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int64 v3; // r15
  int v5; // esi
  _DWORD *v6; // r14
  __int128 v7; // xmm6
  __int128 v9; // [rsp+40h] [rbp-40h] BYREF
  __int128 Destination; // [rsp+50h] [rbp-30h] BYREF
  __int128 v11; // [rsp+60h] [rbp-20h] BYREF
  char v12; // [rsp+C8h] [rbp+48h] BYREF

  v3 = a2;
  *(_QWORD *)&v11 = 0LL;
  BYTE8(v11) = 0;
  *(_QWORD *)&v9 = 0LL;
  BYTE8(v9) = 0;
  v5 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
         &v9,
         a3);
  if ( v5 < 0 )
  {
    *(_QWORD *)&v9 = 0LL;
    BYTE8(v9) = 0;
    goto LABEL_20;
  }
  v6 = (_DWORD *)(a1 + 112);
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    if ( !*v6 )
      *v6 = -268435456;
  }
  else
  {
    AcquireSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 72) )
  {
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v12);
    v5 = 0;
    *(_QWORD *)&Destination = 0LL;
    BYTE8(Destination) = 0;
    if ( !memmove_s(&Destination, 0x10uLL, (const void *const)(16 * v3 + *(_QWORD *)(a1 + 88)), 0x10uLL) )
    {
      *(_OWORD *)(*(_QWORD *)(a1 + 88) + 16 * v3) = v9;
      *(_QWORD *)&v9 = 0LL;
      BYTE8(v9) = 0;
      ++*(_DWORD *)(a1 + 120);
      v7 = Destination;
      XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v11);
      v11 = v7;
      if ( *(_BYTE *)(*(_QWORD *)(a1 + 88) + 16 * v3 + 8) )
        ++*(_DWORD *)(a1 + 80);
      if ( BYTE8(Destination) )
        --*(_DWORD *)(a1 + 80);
      goto LABEL_16;
    }
    v5 = -2147418113;
  }
  else
  {
    v5 = -2147483637;
  }
  RoOriginateError((unsigned int)v5, 0LL);
LABEL_16:
  if ( a1 != -104 )
  {
    if ( *(_DWORD *)(a1 + 104) == 1 )
      *v6 += 0x10000000;
    else
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 112));
  }
LABEL_20:
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v9);
  XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>((__int64)&v11);
  if ( v5 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v5;
}

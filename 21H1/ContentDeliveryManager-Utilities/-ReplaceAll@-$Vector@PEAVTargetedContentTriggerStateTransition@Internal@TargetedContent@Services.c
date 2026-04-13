/*
 * XREFs of ?ReplaceAll@?$Vector@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUITargetedContentTriggerStateTransition@2TargetedContent@Services@5@@Z @ 0x180061720
 * Callers:
 *     <none>
 * Callees:
 *     ?RaiseEvent@?$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@$0A@$0A@$0A@@Internal@Collections@Foundation@Windows@@SAJZZ @ 0x18001A3B4 (-RaiseEvent@-$VectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Wi.c)
 *     ??0?$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ @ 0x18001A3D4 (--0-$ReentrancyGuard@$0A@@detail@XWinRT@@QEAA@ZZ.c)
 *     ??$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAXPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@@Z @ 0x18005D714 (--$Destroy@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@I.c)
 *     ??$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@InterfaceLifetimeTraits@XWinRT@@SAJPEAV?$GitStorageType@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@detail@1@PEAUITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@@Z @ 0x180062FE4 (--$Construct@UITargetedContentTriggerStateTransition@Internal@TargetedContent@Services@Windows@@.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransition *,0,1,0>>::ReplaceAll(
        __int64 a1,
        unsigned int a2,
        _QWORD *a3)
{
  char *v3; // rdi
  unsigned int v5; // r15d
  int v6; // r13d
  int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // r14
  char *v12; // rax
  int v13; // ecx
  RTL_SRWLOCK *v14; // rcx
  unsigned int v15; // eax
  char *v16; // rax
  RTL_SRWLOCK *v17; // rcx
  __int64 v18; // r14
  char v20; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0LL;
  v5 = 0;
  v6 = 0;
  if ( a2 )
  {
    v3 = (char *)malloc(16LL * a2);
    if ( !v3 )
      return (unsigned int)-2147024882;
    v5 = a2;
  }
  v10 = 0LL;
  if ( v5 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      v9 = XWinRT::InterfaceLifetimeTraits::Construct<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(
             &v3[16 * (unsigned int)v10],
             *a3);
      if ( v9 < 0 )
        break;
      v12 = &v3[v11];
      v10 = (unsigned int)(v10 + 1);
      v11 += 16LL;
      v13 = v6 + 1;
      ++a3;
      if ( !v12[8] )
        v13 = v6;
      v6 = v13;
      if ( (unsigned int)v10 >= v5 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    v14 = (RTL_SRWLOCK *)(a1 + 112);
    if ( *(_DWORD *)(a1 + 104) == 1 )
    {
      if ( !LODWORD(v14->Ptr) )
        LODWORD(v14->Ptr) = -268435456;
    }
    else
    {
      AcquireSRWLockExclusive(v14);
    }
    XWinRT::detail::ReentrancyGuard<0>::ReentrancyGuard<0>((__int64)&v20);
    v15 = *(_DWORD *)(a1 + 72);
    v9 = 0;
    ++*(_DWORD *)(a1 + 120);
    *(_DWORD *)(a1 + 72) = v10;
    v10 = v15;
    v16 = *(char **)(a1 + 88);
    *(_QWORD *)(a1 + 88) = v3;
    v3 = v16;
    *(_DWORD *)(a1 + 76) = v5;
    *(_DWORD *)(a1 + 80) = v6;
    if ( a1 != -104 )
    {
      v17 = (RTL_SRWLOCK *)(a1 + 112);
      if ( *(_DWORD *)(a1 + 104) == 1 )
        LODWORD(v17->Ptr) += 0x10000000;
      else
        ReleaseSRWLockExclusive(v17);
    }
  }
  if ( v3 )
  {
    if ( (_DWORD)v10 )
    {
      v18 = (__int64)v3;
      do
      {
        XWinRT::InterfaceLifetimeTraits::Destroy<Windows::Services::TargetedContent::Internal::ITargetedContentTriggerStateTransition>(v18);
        v18 += 16LL;
        --v10;
      }
      while ( v10 );
    }
    free(v3);
  }
  if ( v9 >= 0 )
    return (unsigned int)Windows::Foundation::Collections::Internal::VectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,0,0,0>::RaiseEvent();
  return (unsigned int)v9;
}

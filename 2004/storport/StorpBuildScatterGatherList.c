/*
 * XREFs of StorpBuildScatterGatherList @ 0x1C003A1E4
 * Callers:
 *     StorBuildScatterGatherListProxy @ 0x1C003736C (StorBuildScatterGatherListProxy.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1C001B06C (RaidNtStatusToStorStatus.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D730 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1C00323CC (WPP_SF_.c)
 */

__int64 __fastcall StorpBuildScatterGatherList(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  int v12; // eax

  if ( a1 )
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      v10 = *(_QWORD *)(a1 - 16);
      v11 = *(_QWORD *)(*(_QWORD *)v10 + 712LL);
      if ( v11 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, int, __int64, __int64, char, __int64, int))(*(_QWORD *)(v11 + 8) + 112LL))(
                v11,
                *(_QWORD *)(*(_QWORD *)v10 + 8LL),
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                a9);
        return RaidNtStatusToStorStatus(v12);
      }
      else
      {
        if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        {
          WPP_SF_(
            (__int64)WPP_GLOBAL_Control->AttachedDevice,
            0x33u,
            (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
        }
        return 3238002695LL;
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
        && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      {
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0x32u,
          (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
      }
      return 3238002696LL;
    }
  }
  else
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x31u,
        (__int64)&WPP_0339ead6ae7834b95301b0e1e35a0c26_Traceguids);
    }
    return 3238002694LL;
  }
}

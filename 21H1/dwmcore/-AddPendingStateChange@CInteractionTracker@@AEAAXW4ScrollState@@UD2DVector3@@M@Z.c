/*
 * XREFs of ?AddPendingStateChange@CInteractionTracker@@AEAAXW4ScrollState@@UD2DVector3@@M@Z @ 0x1801CBAEC
 * Callers:
 *     ?AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateType@1@@Z @ 0x1801CB944 (-AddOrUpdatePendingInertiaStateChange@CInteractionTracker@@QEAAXW4ScrollAxis@@MW4TrackerUpdateTy.c)
 *     ?ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACTIONTRACKER_DWMRESTARTCOMPLETED@@@Z @ 0x1801CE200 (-ProcessDwmRestartCompleted@CInteractionTracker@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_INTERACT.c)
 *     ?SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z @ 0x1801D06C0 (-SetState@CInteractionTracker@@AEAAXW4ScrollState@@W4TrackerUpdateType@1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800A9948 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::AddPendingStateChange(__int64 a1, int a2, __int64 *a3, float a4)
{
  __int64 v4; // r10
  __int64 v5; // xmm0_8
  __int64 v6; // rax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = a1;
  if ( !*(_DWORD *)(a1 + 496)
    || (a1 = 3LL * (unsigned int)(*(_DWORD *)(a1 + 496) - 1), *(_DWORD *)(*(_QWORD *)(v4 + 472) + 8 * a1) != a2) )
  {
    v5 = *a3;
    HIDWORD(v12) = *((_DWORD *)a3 + 2);
    v6 = *(unsigned int *)(v4 + 496);
    LODWORD(v12) = a2;
    *(float *)&v13 = a4;
    *(_QWORD *)((char *)&v12 + 4) = v5;
    v7 = v6 + 1;
    BYTE4(v13) = 0;
    if ( (int)v6 + 1 < (unsigned int)v6 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else if ( v7 > *(_DWORD *)(v4 + 492) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet(v4 + 472, 24, 1, &v12);
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0xC0u, 0LL);
    }
    else
    {
      v8 = 3 * v6;
      v9 = *(_QWORD *)(v4 + 472);
      *(_OWORD *)(v9 + 8 * v8) = v12;
      *(_QWORD *)(v9 + 8 * v8 + 16) = v13;
      *(_DWORD *)(v4 + 496) = v7;
    }
  }
}

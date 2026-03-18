/*
 * XREFs of RIMConfigurePointerDevice @ 0x1C0169CCC
 * Callers:
 *     RIMUpdateDeviceForInputMode @ 0x1C0048660 (RIMUpdateDeviceForInputMode.c)
 *     RIMAllocateHidDesc @ 0x1C009E724 (RIMAllocateHidDesc.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0187E38 (RIMApplyPTPConfigRemedy.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     ?Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ @ 0x1C00D0940 (-Feature_Servicing_2102c_30001498__private_IsEnabled@@YAHXZ.c)
 *     WPP_RECORDER_SF_s @ 0x1C015BD8C (WPP_RECORDER_SF_s.c)
 *     RIMDeliverConfigRequest @ 0x1C0169E24 (RIMDeliverConfigRequest.c)
 *     RIMFindConfigDeviceForInput @ 0x1C016A2A0 (RIMFindConfigDeviceForInput.c)
 */

__int16 __fastcall RIMConfigurePointerDevice(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // edx
  __int64 v7; // rax
  int v8; // edx
  int v9; // ebp
  const char *v10; // rcx
  struct RIMDEV *v11; // rcx
  struct RIMDEV *v13; // [rsp+78h] [rbp+20h] BYREF

  v13 = 0LL;
  if ( !(unsigned int)Feature_Servicing_2102c_30001498__private_IsEnabled()
    || (LOWORD(v7) = *(_WORD *)(a3 + 40) - 4, (unsigned __int16)v7 <= 1u) )
  {
    if ( (*(_DWORD *)(a2 + 184) & 0x80u) == 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v6, 1, 63, (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids);
    }
    v9 = RIMFindConfigDeviceForInput(a1, a3, a2, &v13);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = "found config device";
      if ( !v9 )
        v10 = "NO config device found";
      WPP_RECORDER_SF_s(
        (_DWORD)gRimLog,
        v8,
        1,
        64,
        (__int64)&WPP_b4bdd17c87fb31482968a882731fa2c6_Traceguids,
        (__int64)v10);
    }
    if ( !v9
      || ((v11 = v13, *(_WORD *)(a3 + 40) != 4) ? (*((_DWORD *)v13 + 46) |= 0x1000u) : (*((_DWORD *)v13 + 46) |= 0x800u),
          LODWORD(v7) = RIMDeliverConfigRequest(v11),
          *(_DWORD *)(*(_QWORD *)(a2 + 480) + 312LL) &= ~0x1000u,
          (int)v7 < 0) )
    {
      v7 = *(_QWORD *)(a2 + 480);
      *(_DWORD *)(v7 + 312) |= 0x1000u;
    }
  }
  return v7;
}

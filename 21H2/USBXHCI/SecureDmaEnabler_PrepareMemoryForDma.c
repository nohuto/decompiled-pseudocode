/*
 * XREFs of SecureDmaEnabler_PrepareMemoryForDma @ 0x1C004FE30
 * Callers:
 *     Control_Transfer_Map @ 0x1C0006150 (Control_Transfer_Map.c)
 *     Isoch_MapStage @ 0x1C0008740 (Isoch_MapStage.c)
 *     Bulk_MapStage @ 0x1C000F118 (Bulk_MapStage.c)
 * Callees:
 *     Controller_RaiseAndTrackIrql @ 0x1C0005C20 (Controller_RaiseAndTrackIrql.c)
 *     Controller_LowerAndTrackIrql @ 0x1C0005CB4 (Controller_LowerAndTrackIrql.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall SecureDmaEnabler_PrepareMemoryForDma(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        int a4,
        int a5,
        _OWORD *a6,
        __int64 a7)
{
  char v7; // bp
  _QWORD *v9; // rsi
  int v11; // ebx
  int v12; // edx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // [rsp+58h] [rbp+10h] BYREF

  v16 = 0LL;
  v7 = 0;
  v9 = a2;
  if ( *a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        (_DWORD)a2,
        18,
        16,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids);
    }
    return (unsigned int)-1073741637;
  }
  else
  {
    if ( KeGetCurrentIrql() == 2 )
    {
      Controller_LowerAndTrackIrql(*(_QWORD **)(a1 + 8));
      v7 = 1;
    }
    v11 = VslCreateSecureSection(&v16, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 576LL), v9, 4LL, 1);
    if ( v7 )
      Controller_RaiseAndTrackIrql(*(_QWORD *)(a1 + 8));
    if ( v11 >= 0 )
    {
      v13 = (__int64)a6;
      v14 = a7;
      *a6 = 0LL;
      *(_OWORD *)(v13 + 16) = 0LL;
      *(_DWORD *)(v13 + 8) = a4;
      *(_DWORD *)v14 = 1;
      *(_QWORD *)(v14 + 16) = *((unsigned int *)v9 + 11);
      *(_DWORD *)(v14 + 24) = *(_DWORD *)(v13 + 8);
      *(_DWORD *)(v13 + 12) = a5;
      *(_QWORD *)(v13 + 16) = v16;
      *(_DWORD *)v13 = 1;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        v12,
        18,
        17,
        (__int64)&WPP_bc1ad2459c543d2ca8270d8dd36787fb_Traceguids,
        v11);
    }
  }
  return (unsigned int)v11;
}

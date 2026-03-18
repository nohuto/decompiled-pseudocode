/*
 * XREFs of Control_ProcessTransferEventPointer @ 0x1C0017FAC
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x1C0017E20 (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Control_FindTrbMatch @ 0x1C0018098 (Control_FindTrbMatch.c)
 */

char __fastcall Control_ProcessTransferEventPointer(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v10; // rcx
  int v11; // r15d
  char TrbMatch; // si
  __int64 v13; // rcx
  unsigned int v14; // r14d
  unsigned int v15; // edi
  int v16; // r9d
  __int64 v17; // rbp
  int v18; // eax
  _DWORD *v19; // rcx
  int v21; // edx
  int v22; // edx
  int v23; // [rsp+70h] [rbp+8h] BYREF
  int v24; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  v8 = *a3;
  v10 = 16LL * *(unsigned int *)(a1 + 192);
  v11 = (int)a3;
  v23 = 0;
  TrbMatch = 0;
  v24 = 0;
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 176) + 24LL) + v10;
  if ( v8 )
  {
    if ( v8 == v13 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v22 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
        LOBYTE(v22) = 4;
        WPP_RECORDER_SF_dd(
          *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
          v22,
          14,
          16,
          (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
          *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
          *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
      }
      v6 = *(_DWORD *)(a2 + 128);
      TrbMatch = 1;
    }
    else
    {
      v14 = *(_DWORD *)(a2 + 144);
      v15 = *(_DWORD *)(a2 + 160);
      if ( v14 > v15 )
        v16 = *(_DWORD *)(a1 + 196);
      else
        v16 = *(_DWORD *)(a2 + 160);
      v17 = *(_QWORD *)(a2 + 136);
      TrbMatch = Control_FindTrbMatch((_DWORD)a3, v17, v14, v16, (__int64)&v23, (__int64)&v24);
      if ( !TrbMatch && v14 > v15 )
        TrbMatch = Control_FindTrbMatch(v11, v17, 0, v15, (__int64)&v23, (__int64)&v24);
      v6 = v23;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v21 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 135LL);
    LOBYTE(v21) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL),
      v21,
      14,
      15,
      (__int64)&WPP_d233b597c96c378d294c2d5b80e0f0a8_Traceguids,
      *(_BYTE *)(*(_QWORD *)(a1 + 48) + 135LL),
      *(_DWORD *)(*(_QWORD *)(a1 + 56) + 144LL));
  }
  v18 = v24;
  v19 = a5;
  *a4 = v6;
  *v19 = v18;
  return TrbMatch;
}

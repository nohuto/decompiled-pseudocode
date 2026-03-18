/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x1C000F604
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000ED88 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiRewindPacket @ 0x1C000F224 (VidSchiRewindPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000F448 (VidSchiSubmitWaitCommand.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0006940 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C000F844 (VidSchiSetNextRunPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  int v4; // r15d
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // r8
  _QWORD *v12; // rax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  void (__fastcall *v17)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v4 = a2;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 184) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 184) &= ~4u;
    v7 = WdLogNewEntry5_WdEvent(a1, a2);
    *(_QWORD *)(v7 + 24) = a1;
    *(_QWORD *)(v7 + 32) = *(_QWORD *)(a1 + 648);
    *(_QWORD *)(v7 + 40) = *(_QWORD *)(a1 + 656);
    *(_OWORD *)(v7 + 48) = 0LL;
    WdLogEvent5_WdEvent(v7);
    v10 = *(_QWORD *)(a1 + 656);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 648);
      if ( v11 )
      {
        v9 = *(_QWORD *)(a1 + 656);
        while ( 1 )
        {
          v8 = *(_QWORD *)(v9 + 32);
          v9 = v8 - 32;
          if ( v8 - 32 == v11 )
            break;
          if ( v8 == a1 + 664 )
            goto LABEL_12;
        }
      }
      do
      {
        v12 = (_QWORD *)WdLogNewEntry5_WdEvent(v9, v8);
        v12[3] = v10;
        v12[4] = *(int *)(v10 + 52);
        v12[5] = *(_QWORD *)(a1 + 648);
        v12[6] = *(unsigned int *)(a1 + 780);
        WdLogEvent5_WdEvent(v12);
        v13 = *(_DWORD *)(v10 + 80);
        if ( (v13 & 0x10) != 0 )
        {
          *(_DWORD *)(v10 + 80) = v13 & 0xFFFFFFEF;
          v8 = *(unsigned int *)(v2 + 11224);
          if ( (_DWORD)v8 != -1 )
          {
            v17 = *(void (__fastcall **)(_QWORD))(v6 + 2992);
            if ( v17 )
              v17(*(_QWORD *)(v6 + 3024));
          }
        }
        ++*(_DWORD *)(a1 + 780);
        ++*(_DWORD *)(v2 + 2872);
        ++*(_DWORD *)(v6 + 712);
        if ( v4 )
        {
          v14 = *(_DWORD *)(v10 + 48);
          if ( v14 )
          {
            if ( v14 == 5 || v14 == 7 )
              *(_DWORD *)(v10 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v10 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 2864));
            RtlSetBitEx(v6 + 480);
          }
        }
        v9 = *(_QWORD *)(v10 + 32);
        v10 = v9 - 32;
      }
      while ( v9 - 32 != *(_QWORD *)(a1 + 648) && v9 != a1 + 664 );
      VidSchiSetNextRunPacket(a1, *(_QWORD *)(a1 + 656));
    }
LABEL_12:
    v15 = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 656) = 0LL;
    if ( (v15 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 184) >> 9) | *(_BYTE *)(a1 + 184)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, 0xAuLL, 14712LL);
    }
    else if ( *(_DWORD *)(a1 + 780)
           && (*(_DWORD *)(a1 + 184) & 1) == 0
           && (*(_DWORD *)(a1 + 184) & 0x10) == 0
           && (*(_DWORD *)(a1 + 184) & 0x40) == 0
           && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, 5uLL, 14725LL);
    }
  }
  return v3;
}

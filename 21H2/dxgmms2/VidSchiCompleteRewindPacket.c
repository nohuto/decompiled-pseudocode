/*
 * XREFs of VidSchiCompleteRewindPacket @ 0x1C000E658
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0007C30 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiSubmitWaitCommand @ 0x1C000EC78 (VidSchiSubmitWaitCommand.c)
 *     VidSchiProcessDpcPreemptedPacket @ 0x1C000F070 (VidSchiProcessDpcPreemptedPacket.c)
 *     VidSchiRewindPacket @ 0x1C003A240 (VidSchiRewindPacket.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     VidSchiSetNextRunPacket @ 0x1C000E8A8 (VidSchiSetNextRunPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiCompleteRewindPacket(__int64 a1, int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // edi
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  void (__fastcall *v16)(_QWORD); // rax

  v2 = *(_QWORD *)(a1 + 96);
  v3 = 0;
  v6 = *(_QWORD *)(v2 + 24);
  if ( (*(_DWORD *)(a1 + 184) & 8) == 0 )
  {
    *(_DWORD *)(a1 + 184) &= ~4u;
    WdLogSingleEntry5(
      4LL,
      a1,
      *(_QWORD *)(a1 + 648),
      *(_QWORD *)(a1 + 656),
      0LL,
      _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0]);
    v7 = *(_QWORD *)(a1 + 656);
    if ( v7 )
    {
      v8 = *(_QWORD *)(a1 + 648);
      if ( v8 )
      {
        v9 = *(_QWORD *)(a1 + 656);
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 32);
          v9 = v10 - 32;
          if ( v10 - 32 == v8 )
            break;
          if ( v10 == a1 + 664 )
            goto LABEL_16;
        }
      }
      do
      {
        WdLogSingleEntry4(4LL, v7, *(int *)(v7 + 52), v8, *(unsigned int *)(a1 + 780));
        v11 = *(_DWORD *)(v7 + 80);
        if ( (v11 & 0x10) != 0 )
        {
          *(_DWORD *)(v7 + 80) = v11 & 0xFFFFFFEF;
          if ( *(_DWORD *)(v2 + 11240) != -1 )
          {
            v16 = *(void (__fastcall **)(_QWORD))(v6 + 3088);
            if ( v16 )
              v16(*(_QWORD *)(v6 + 3120));
          }
        }
        ++*(_DWORD *)(a1 + 780);
        ++*(_DWORD *)(v2 + 2888);
        ++*(_DWORD *)(v6 + 720);
        if ( a2 )
        {
          v12 = *(_DWORD *)(v7 + 48);
          if ( v12 )
          {
            if ( v12 == 5 || v12 == 7 )
              *(_DWORD *)(v7 + 80) &= ~1u;
          }
          else if ( (*(_DWORD *)(v7 + 64) & 4) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v2 + 2880));
            RtlSetBitEx(v6 + 488, *(unsigned __int16 *)(v2 + 4));
          }
        }
        v13 = *(_QWORD *)(v7 + 32);
        v8 = *(_QWORD *)(a1 + 648);
        v7 = v13 - 32;
      }
      while ( v13 - 32 != v8 && v13 != a1 + 664 );
      VidSchiSetNextRunPacket(a1, *(_QWORD *)(a1 + 656));
    }
LABEL_16:
    v14 = *(_DWORD *)(a1 + 184);
    *(_QWORD *)(a1 + 656) = 0LL;
    if ( (v14 & 0x200) != 0 )
    {
      if ( (((unsigned __int8)(*(_DWORD *)(a1 + 184) >> 9) | *(_BYTE *)(a1 + 184)) & 2) == 0 )
        VidSchiUpdateContextStatus(a1, 10LL, 15494LL);
    }
    else if ( *(_DWORD *)(a1 + 780)
           && (*(_DWORD *)(a1 + 184) & 1) == 0
           && (*(_DWORD *)(a1 + 184) & 0x10) == 0
           && (*(_DWORD *)(a1 + 184) & 0x40) == 0
           && (*(_DWORD *)(a1 + 184) & 0x20) == 0 )
    {
      return (unsigned int)VidSchiUpdateContextStatus(a1, 5LL, 15507LL);
    }
  }
  return v3;
}

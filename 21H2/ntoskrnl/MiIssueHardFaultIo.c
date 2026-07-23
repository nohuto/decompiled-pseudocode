/*
 * XREFs of MiIssueHardFaultIo @ 0x14022DB84
 * Callers:
 *     MiPfCoalesceAndIssueIOs @ 0x140240BA4 (MiPfCoalesceAndIssueIOs.c)
 *     MiIssueHardFault @ 0x140319700 (MiIssueHardFault.c)
 *     MiPfIssueCoalesceCandidates @ 0x140539410 (MiPfIssueCoalesceCandidates.c)
 * Callees:
 *     SmPageRead @ 0x14022DCBC (SmPageRead.c)
 *     IoPageReadEx @ 0x140326E80 (IoPageReadEx.c)
 *     KeSetEvent @ 0x14034E2F0 (KeSetEvent.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 */

__int64 __fastcall MiIssueHardFaultIo(__int64 a1, int a2, __int64 a3)
{
  unsigned int v4; // ecx
  int v5; // ebp
  int v6; // esi
  int v7; // ebx
  _KPROCESS *Process; // rdx
  signed __int32 v9; // eax
  struct _KEVENT *v10; // rbp
  int *v11; // rsi
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rcx
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  signed __int32 v18; // ett

  v4 = *(_DWORD *)(a1 + 192);
  v5 = v4 & 8;
  if ( (v4 & 0x100) != 0 )
  {
    v15 = (a1 + 272) | 1;
    if ( !v5 )
      v15 = a1 + 272;
    v16 = v15;
    if ( (a3 & 1) != 0 )
    {
      v17 = a3 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *(_BYTE *)v17 == 1 && (*(_DWORD *)(v17 + 80) & 0x800) != 0 )
        v16 = v15 | 2;
    }
    v11 = (int *)(a1 + 80);
    v10 = (struct _KEVENT *)(a1 + 32);
    v12 = SmPageRead(a1 + 96, v16, a1 + 32, a1 + 80);
  }
  else
  {
    v6 = (v4 >> 1) & 4 | 1;
    if ( (v4 & 0x40000) == 0 )
      v6 = (v4 >> 1) & 4;
    if ( (v4 & 8) != 0 )
    {
      v7 = v6 | 2;
    }
    else
    {
      v7 = v6;
      if ( !a2 && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 224)) == 8 )
        v7 = v6 | 2;
    }
    if ( !v5 )
    {
      Process = KeGetCurrentThread()->Process;
      v9 = Process[2].Affinity.Bitmap[3];
      while ( v9 )
      {
        v18 = v9;
        v9 = _InterlockedCompareExchange((volatile signed __int32 *)&Process[2].Affinity.Bitmap[3], v9 - 1, v9);
        if ( v18 == v9 )
        {
          v7 |= 8u;
          break;
        }
      }
    }
    v10 = (struct _KEVENT *)(a1 + 32);
    v11 = (int *)(a1 + 80);
    v12 = IoPageReadEx(*(PFILE_OBJECT *)(a1 + 200), a1 + 80, v7, 0LL);
  }
  v13 = v12;
  if ( v12 < 0 )
  {
    *(_QWORD *)(a1 + 88) = 0LL;
    *v11 = v12;
    KeSetEvent(v10, 0, 0);
  }
  return v13;
}

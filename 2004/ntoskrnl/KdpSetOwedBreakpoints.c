/*
 * XREFs of KdpSetOwedBreakpoints @ 0x1409B75E0
 * Callers:
 *     KdSetOwedBreakpoints @ 0x14050CA80 (KdSetOwedBreakpoints.c)
 * Callees:
 *     KdEnterDebugger @ 0x1409B4028 (KdEnterDebugger.c)
 *     KdExitDebugger @ 0x1409B4190 (KdExitDebugger.c)
 *     KdpCopyCodeStream @ 0x1409B6A9C (KdpCopyCodeStream.c)
 *     KdpInsertBreakpoint @ 0x1409B7334 (KdpInsertBreakpoint.c)
 *     KdpRemoveBreakpoint @ 0x1409B7520 (KdpRemoveBreakpoint.c)
 */

void __fastcall KdpSetOwedBreakpoints(__int64 a1)
{
  int *v1; // rdx
  unsigned __int64 v2; // rcx
  _KPROCESS *Process; // rbp
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  char v8; // si
  unsigned __int8 *v9; // rbx
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  int inserted; // eax
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = 0LL;
  if ( KdpOweBreakpoint )
  {
    v1 = (int *)&unk_140C32FE8;
    v2 = a1 & 0xFFFFFFFFFFFFF000uLL;
    Process = KeGetCurrentThread()->ApcState.Process;
    while ( 1 )
    {
      if ( (v1[6] & 0xA) != 0 )
      {
        v4 = *((_QWORD *)v1 - 1);
        if ( v4 >= 0xFFFF800000000000uLL || *(_KPROCESS **)v1 == Process )
        {
          v5 = v2 + 4096;
          v6 = v4 & ~(unsigned __int64)*((unsigned __int8 *)v1 + 29);
          if ( v6 >= v2 && v6 < v5 )
            break;
          v7 = v6 + *((unsigned __int8 *)v1 + 28);
          if ( v7 >= v6 && v7 > v2 && v7 <= v5 )
            break;
        }
      }
      v1 += 10;
      if ( (__int64)v1 >= (__int64)&KdPrintBufferChanges )
        return;
    }
    v8 = KdEnterDebugger(0LL);
    KdpOweBreakpoint = 0;
    v9 = (unsigned __int8 *)&unk_140C33005;
    do
    {
      if ( (*(_DWORD *)(v9 - 5) & 0xA) != 0 )
      {
        v10 = *(_QWORD *)(v9 - 37);
        if ( v10 >= 0xFFFF800000000000uLL || *(_KPROCESS **)(v9 - 29) == Process )
        {
          if ( (int)KdpCopyCodeStream((PVOID)(v10 & ~(unsigned __int64)*v9), (__int64)&v13, *(v9 - 1), 4) >= 0 )
          {
            v11 = (__int64)(v9 - 37);
            if ( (*(_DWORD *)(v9 - 5) & 2) != 0 )
            {
              *(_QWORD *)(v9 - 13) = v13;
              inserted = KdpInsertBreakpoint(v11, &v13);
              if ( inserted )
                *(_DWORD *)(v9 - 5) = inserted;
            }
            else
            {
              KdpRemoveBreakpoint(v11, &v13);
            }
          }
        }
        else
        {
          KdpOweBreakpoint = 1;
        }
      }
      v9 += 40;
    }
    while ( (__int64)v9 < (__int64)byte_140C33505 );
    KdExitDebugger(v8);
  }
}

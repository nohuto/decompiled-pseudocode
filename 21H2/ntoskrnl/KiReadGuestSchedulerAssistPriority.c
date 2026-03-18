/*
 * XREFs of KiReadGuestSchedulerAssistPriority @ 0x140577654
 * Callers:
 *     KiDirectSwitchThread @ 0x14020F360 (KiDirectSwitchThread.c)
 *     KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion @ 0x140210BE8 (KiUpdateVpBackingThreadPriorityOnReadyQueueInsertion.c)
 *     KiNormalPriorityReadyScan @ 0x1402447EC (KiNormalPriorityReadyScan.c)
 *     KiQuantumEnd @ 0x14028FFD0 (KiQuantumEnd.c)
 *     KiQueueReadyThread @ 0x1402B9970 (KiQueueReadyThread.c)
 *     KiUpdateVPBackingThreadPriority @ 0x1402B9FC0 (KiUpdateVPBackingThreadPriority.c)
 *     KiDeferredReadySingleThread @ 0x1403405E0 (KiDeferredReadySingleThread.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiReadGuestSchedulerAssistPriority(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  signed int v4; // r8d
  char v5; // dl
  int v6; // esi
  char v7; // al
  int v8; // edi
  int v9; // r9d
  __int64 v11; // [rsp+10h] [rbp+8h]

  v11 = 0LL;
  v3 = *(_QWORD *)(a1 + 968);
  if ( v3 )
  {
    v5 = 0;
    v6 = *(_DWORD *)v3 & 0x20000;
    v7 = 1;
    if ( v6 )
      v7 = 3;
    v8 = *(_DWORD *)v3 >> 8;
    BYTE1(v11) = v7;
    BYTE2(v11) = BYTE1(*(_DWORD *)v3);
    if ( *(_DWORD *)(v3 + 28) )
    {
      v5 = 1;
      LOBYTE(v11) = 1;
    }
    if ( *(_DWORD *)(v3 + 32) )
    {
      v5 |= 2u;
      LOBYTE(v11) = v5;
    }
    if ( (KiVelocityFlags & 0x20) != 0 && *(_DWORD *)(v3 + 24) )
    {
      v5 |= 4u;
      LOBYTE(v11) = v5;
    }
    if ( (KiVelocityFlags & 0x200) != 0 )
    {
      v9 = *(_DWORD *)(v3 + 20);
      HIDWORD(v11) = v9;
    }
    else
    {
      v9 = 0;
    }
    if ( (KiVelocityFlags & 0x40) != 0 && (*(_DWORD *)v3 & 0x80000) != 0 )
    {
      v5 |= 8u;
      LOBYTE(v11) = v5;
    }
    if ( *(_QWORD *)(v3 + 40) != *(_QWORD *)(v3 + 48) )
    {
      v5 |= 0x10u;
      LOBYTE(v11) = v5;
    }
    v4 = (char)v8;
    if ( (unsigned int)((char)v8 - 1) > 0x1E )
      v4 = 1;
    if ( v4 >= *(char *)(a1 + 563) )
    {
      if ( (unsigned int)v4 >= 0x10 && (KiVelocityFlags & 0x80u) == 0 )
        v4 = 15;
    }
    else
    {
      v4 = *(char *)(a1 + 563);
    }
    if ( v4 > KiVpThreadSystemWorkPriority )
      v4 = KiVpThreadSystemWorkPriority;
    if ( v6 )
    {
      v4 = 7;
    }
    else if ( (v5 || v9) && v4 < KiVpThreadSystemWorkPriority )
    {
      v4 = KiVpThreadSystemWorkPriority;
    }
  }
  else
  {
    v4 = *(char *)(a1 + 195);
  }
  if ( a2 )
    *a2 = v11;
  return (unsigned int)v4;
}

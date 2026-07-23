/*
 * XREFs of KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x140520F00
 * Callers:
 *     KeSetThreadSchedulerAssist @ 0x14051E808 (KeSetThreadSchedulerAssist.c)
 *     KiUpdateVpBackingThreadPriorityDpcRoutine @ 0x140520D60 (KiUpdateVpBackingThreadPriorityDpcRoutine.c)
 * Callees:
 *     KiSetBasePriorityAndClearDecrement @ 0x14029B01C (KiSetBasePriorityAndClearDecrement.c)
 *     KiSetPriorityThread @ 0x1402D4AF0 (KiSetPriorityThread.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KiReadGuestSchedulerAssistPriority @ 0x14051FE88 (KiReadGuestSchedulerAssistPriority.c)
 */

char __fastcall KiUpdateVpBackingThreadPriorityFromTopLevel(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  volatile signed __int32 *v4; // rax
  int v5; // edi
  int v6; // esi
  int v7; // r14d
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char v11; // dl
  unsigned __int8 v12; // cl
  signed __int8 v13; // cl

  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    _InterlockedOr(*(volatile signed __int32 **)(BugCheckParameter1 + 968), 0x100000u);
  LODWORD(v4) = KiReadGuestSchedulerAssistPriority(BugCheckParameter1);
  v5 = (int)v4;
  v6 = 32;
  if ( (int)v4 >= 16 )
  {
    v6 = (int)v4;
    v5 = 15;
  }
  v7 = *(_DWORD *)(BugCheckParameter1 + 1024);
  if ( v5 != v7 )
  {
    v8 = *(_BYTE *)((char)v5 + BugCheckParameter1 + 824);
    if ( v8 == -1 )
      KeBugCheckEx(0x157u, BugCheckParameter1, (char)v5, 1uLL, 0LL);
    *(_BYTE *)((char)v5 + BugCheckParameter1 + 824) = v8 + 1;
    LODWORD(v4) = *(_DWORD *)(BugCheckParameter1 + 856) | (1 << v5);
    *(_DWORD *)(BugCheckParameter1 + 856) = (_DWORD)v4;
    if ( *(char *)(BugCheckParameter1 + 195) < (char)v5 )
      LOBYTE(v4) = KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, a2, v5);
    if ( v7 != 32 )
    {
      LOBYTE(v4) = v7;
      v9 = *(_BYTE *)((char)v7 + BugCheckParameter1 + 824);
      if ( !v9 )
        KeBugCheckEx(0x157u, BugCheckParameter1, (char)v7, 2uLL, 0LL);
      v10 = v9 - 1;
      *(_BYTE *)((char)v7 + BugCheckParameter1 + 824) = v10;
      if ( !v10 )
      {
        LODWORD(v4) = *(_DWORD *)(BugCheckParameter1 + 856) ^ (1 << v7);
        *(_DWORD *)(BugCheckParameter1 + 856) = (_DWORD)v4;
        if ( (unsigned int)v4 < 1 << v7 )
        {
          v11 = *(_BYTE *)(BugCheckParameter1 + 195);
          if ( v11 < 16 )
          {
            v12 = *(_BYTE *)(BugCheckParameter1 + 564);
            LOBYTE(v4) = v12 & 0xF;
            v13 = *(_BYTE *)(BugCheckParameter1 + 563) + (v12 & 0xF) + (v12 >> 4);
            if ( v13 < v11 )
              LOBYTE(v4) = KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, a2, v13);
          }
        }
      }
    }
    *(_DWORD *)(BugCheckParameter1 + 1024) = v5;
  }
  if ( v6 != 32 )
  {
    LODWORD(v4) = *(char *)(BugCheckParameter1 + 195);
    if ( v6 != (_DWORD)v4 )
    {
      KiSetBasePriorityAndClearDecrement(BugCheckParameter1, 0LL, 0);
      LOBYTE(v4) = KiSetPriorityThread((_KTHREAD *)BugCheckParameter1, a2, v6);
    }
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
  {
    v4 = *(volatile signed __int32 **)(BugCheckParameter1 + 968);
    _InterlockedAnd(v4, 0xFFEFFFFF);
  }
  return (char)v4;
}

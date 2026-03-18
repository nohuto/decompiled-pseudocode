/*
 * XREFs of rimFindReferencedRimObj @ 0x1C0155B8C
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C016A2F4 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C016A5C0 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00AEC8C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(unsigned int a1, __int16 a2, __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v13; // rcx
  struct _LIST_ENTRY *v14; // rbx
  int v15; // eax
  int v16; // ebp
  NTSTATUS v17; // ebx

  v8 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v13 = &gObRimList;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_22;
  while ( 1 )
  {
    v14 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v14[5].Flink) && !BYTE2(v14->Blink) && (a1 & HIDWORD(v14[5].Flink)) != 0 )
    {
      if ( a1 <= 0x10 )
      {
        v15 = 65814;
        if ( _bittest(&v15, a1) )
        {
          if ( LODWORD(v14[54].Flink) )
            goto LABEL_18;
          goto LABEL_17;
        }
      }
      if ( a1 == 32 )
        break;
    }
LABEL_12:
    Flink = Flink->Flink;
    if ( Flink == &gObRimList )
      goto LABEL_19;
  }
  v16 = (int)v14[54].Flink;
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)&Flink[-1], a2, a3) )
  {
    v13 = &gObRimList;
    if ( v16 )
      v8 = v14;
    goto LABEL_12;
  }
  if ( !v16 )
    goto LABEL_18;
LABEL_17:
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v13, v9, v10, v11);
LABEL_18:
  v8 = v14;
LABEL_19:
  if ( !v8 )
  {
LABEL_22:
    v17 = -1073741637;
    goto LABEL_23;
  }
  v17 = ObReferenceObjectByPointer(v8, 3u, ExRawInputManagerObjectType, 1);
  if ( v17 >= 0 )
    *a4 = v8;
LABEL_23:
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v17;
}

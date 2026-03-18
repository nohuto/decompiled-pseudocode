/*
 * XREFs of rimFindReferencedRimObj @ 0x1C015BEDC
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C0170644 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C0170910 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     rimIsExplicitRimUsagesMatchingUsages @ 0x1C00A2D3C (rimIsExplicitRimUsagesMatchingUsages.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimFindReferencedRimObj(unsigned int a1, __int16 a2, __int16 a3, struct _LIST_ENTRY **a4)
{
  struct _LIST_ENTRY *v8; // rdi
  struct _LIST_ENTRY *Flink; // r11
  struct _LIST_ENTRY *v10; // rcx
  struct _LIST_ENTRY *v11; // rbx
  int v12; // eax
  int v13; // ebp
  NTSTATUS v14; // ebx

  v8 = 0LL;
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimList.Flink;
  v10 = &gObRimList;
  if ( gObRimList.Flink == &gObRimList )
    goto LABEL_22;
  while ( 1 )
  {
    v11 = Flink - 1;
    if ( !LOBYTE(Flink[4].Flink) && !BYTE1(v11[5].Flink) && !BYTE2(v11->Blink) && (a1 & HIDWORD(v11[5].Flink)) != 0 )
    {
      if ( a1 <= 0x10 )
      {
        v12 = 65814;
        if ( _bittest(&v12, a1) )
        {
          if ( LODWORD(v11[54].Flink) )
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
  v13 = (int)v11[54].Flink;
  if ( !(unsigned int)rimIsExplicitRimUsagesMatchingUsages((__int64)&Flink[-1], a2, a3) )
  {
    v10 = &gObRimList;
    if ( v13 )
      v8 = v11;
    goto LABEL_12;
  }
  if ( !v13 )
    goto LABEL_18;
LABEL_17:
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v10);
LABEL_18:
  v8 = v11;
LABEL_19:
  if ( !v8 )
  {
LABEL_22:
    v14 = -1073741637;
    goto LABEL_23;
  }
  v14 = ObReferenceObjectByPointer(v8, 3u, ExRawInputManagerObjectType, 1);
  if ( v14 >= 0 )
    *a4 = v8;
LABEL_23:
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)v14;
}

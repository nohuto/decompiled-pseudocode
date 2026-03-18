/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1C01FCE10
 * Callers:
 *     NtUserRemoveVisualIdentifier @ 0x1C013D9D0 (NtUserRemoveVisualIdentifier.c)
 *     ?SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z @ 0x1C01BD5B0 (-SetDesktopVisualInputSink@CDesktopInputTransform@@SA_NPEAXAEBU_LUID@@@Z.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C002EC24 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1C01FCBF0 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x1C01FCFC4 (-RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID *a1, struct _EX_PUSH_LOCK *a2)
{
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct InputObjectMapEntry *Entry; // rbx
  unsigned int v7; // ebx
  struct InputObjectMapEntry *i; // rdx
  __int64 v10; // [rsp+50h] [rbp+18h]
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = (int)a2;
  CAutoPushLockEx::CAutoPushLockEx((CAutoPushLockEx *)&v11, a2);
  Entry = InputObjectMap::FindEntry(a1);
  if ( !Entry )
  {
    v7 = -1073741275;
    goto LABEL_12;
  }
  if ( v3 != 1 && *(_QWORD *)(*((_QWORD *)Entry + 3) + 64LL) != PsGetCurrentProcess(v5, v4) )
  {
    v7 = -1073741790;
LABEL_12:
    ExReleasePushLockExclusiveEx(v11, 0LL);
    KeLeaveCriticalRegion();
    return v7;
  }
  v10 = *((_QWORD *)Entry + 1) & (-1LL << (dword_1C02563EC & 0x1F));
  for ( i = (struct InputObjectMapEntry *)((char *)Buffer
                                         + 8
                                         * ((37
                                           * (BYTE6(v10)
                                            + 37
                                            * (BYTE5(v10)
                                             + 37
                                             * (BYTE4(v10)
                                              + 37
                                              * (BYTE3(v10)
                                               + 37
                                               * (BYTE2(v10) + 37
                                                             * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
                                           + HIBYTE(v10)) & (((unsigned int)dword_1C02563EC >> 5) - 1)));
        (*(_QWORD *)i & 1) == 0;
        i = *(struct InputObjectMapEntry **)i )
  {
    if ( *(struct InputObjectMapEntry **)i == Entry )
    {
      *(_QWORD *)i = *(_QWORD *)Entry;
      --InputObjectMap::s_hashTable;
      *(_QWORD *)Entry |= 0x8000000000000002uLL;
      break;
    }
  }
  ExReleasePushLockExclusiveEx(v11, 0LL);
  KeLeaveCriticalRegion();
  InputTraceLogging::InputSink::RemoveMapping(*((const struct CompositionInputObject **)Entry + 3), *a1);
  ObfDereferenceObject(*((PVOID *)Entry + 3));
  ExFreePoolWithTag(Entry, 0);
  return 0LL;
}

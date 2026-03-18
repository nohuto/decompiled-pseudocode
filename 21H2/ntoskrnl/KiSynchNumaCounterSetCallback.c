/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x140960E60
 * Callers:
 *     <none>
 * Callees:
 *     KiQuerySubNodeActiveAffinity @ 0x14026428C (KiQuerySubNodeActiveAffinity.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     RtlStringCbPrintfW @ 0x1402E1280 (RtlStringCbPrintfW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     KeEnumerateNextSchedulerSubNodeInNode @ 0x140354698 (KeEnumerateNextSchedulerSubNodeInNode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInitializeSchedulerSubNodeEnumerationContext @ 0x14056D75C (KeInitializeSchedulerSubNodeEnumerationContext.c)
 *     PcwAddInstance @ 0x1407E18E0 (PcwAddInstance.c)
 *     KiAddSynchCounters @ 0x140960D10 (KiAddSynchCounters.c)
 *     EtwDereferenceSpinLockCounters @ 0x1409E93FC (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1409E9458 (EtwReferenceSpinLockCounters.c)
 */

int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v4; // ebx
  unsigned int v5; // edi
  struct _PCW_BUFFER *v6; // r14
  int v7; // esi
  const void *v8; // rbx
  __int64 v9; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13; // [rsp+38h] [rbp-C8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  struct _PCW_DATA v15; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v16; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+70h] [rbp-90h] BYREF
  __int128 v18; // [rsp+80h] [rbp-80h] BYREF
  __int64 v19; // [rsp+90h] [rbp-70h]
  struct _PCW_DATA v20; // [rsp+98h] [rbp-68h] BYREF
  _DWORD v21[48]; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v22[48]; // [rsp+170h] [rbp+70h] BYREF
  wchar_t pszDest[12]; // [rsp+230h] [rbp+130h] BYREF

  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  memset(v21, 0, 0xB8uLL);
  memset(v22, 0, 0xB8uLL);
  Id = 0;
  v13 = 0LL;
  DestinationString = 0LL;
  if ( !a1 )
  {
    EtwReferenceSpinLockCounters();
    return 0;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    EtwDereferenceSpinLockCounters();
    return 0;
  }
  if ( (unsigned int)(v4 - 1) > 1 )
    return 0;
  v5 = 0;
  v6 = *(struct _PCW_BUFFER **)(a2 + 24);
  v16 = 0LL;
  if ( KeNumberNodes )
  {
    while ( 1 )
    {
      memset(v21, 0, 0xB8uLL);
      v7 = 0;
      KeInitializeSchedulerSubNodeEnumerationContext(&v17, KeNodeBlock[v5]);
      if ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v17, &v13) )
      {
        do
        {
          KiQuerySubNodeActiveAffinity(v13, (__int64)&v16, 0LL);
          *((_QWORD *)&v18 + 1) = v16;
          LOWORD(v19) = WORD4(v16);
          *(_QWORD *)&v18 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&Id, (unsigned __int16 **)&v18) )
          {
            v8 = (const void *)(KiProcessorBlock[Id] + 35008);
            KiAddSynchCounters(v21, (__int64)v8);
            KiAddSynchCounters(v22, v9);
            LODWORD(Data) = v7;
            RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v5, Data);
            RtlInitUnicodeString(&DestinationString, pszDest);
            v20.Data = v8;
            v20.Size = 184;
            result = PcwAddInstance(v6, &DestinationString, Id, 1u, &v20);
            if ( result < 0 )
              return result;
            ++v7;
          }
        }
        while ( !(unsigned int)KeEnumerateNextSchedulerSubNodeInNode((__int64)&v17, &v13) );
        if ( v7 )
        {
          RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v5);
          RtlInitUnicodeString(&DestinationString, pszDest);
          v15.Data = v21;
          v15.Size = 184;
          result = PcwAddInstance(v6, &DestinationString, v5 + KeMaximumProcessors, 1u, &v15);
          if ( result < 0 )
            break;
        }
      }
      if ( ++v5 >= (unsigned __int16)KeNumberNodes )
        goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
    RtlInitUnicodeString(&DestinationString, pszDest);
    v15.Data = v22;
    v15.Size = 184;
    return PcwAddInstance(v6, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v15);
  }
  return result;
}

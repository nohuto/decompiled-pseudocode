/*
 * XREFs of KiSynchNumaCounterSetCallback @ 0x1408BB110
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14026CAF0 (RtlStringCbPrintfW.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     PcwAddInstance @ 0x1405E7060 (PcwAddInstance.c)
 *     KiAddSynchCounters @ 0x1408BAFC0 (KiAddSynchCounters.c)
 *     EtwDereferenceSpinLockCounters @ 0x14093D024 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x14093D080 (EtwReferenceSpinLockCounters.c)
 */

int __fastcall KiSynchNumaCounterSetCallback(int a1, __int64 a2)
{
  int v4; // ebx
  struct _PCW_BUFFER *v5; // r15
  unsigned int v6; // edi
  bool i; // cf
  __int64 v8; // rcx
  __int64 v9; // r14
  __int16 v10; // bx
  int v11; // esi
  const void *v12; // rbx
  __int64 v13; // rdx
  int result; // eax
  PPCW_DATA Data; // [rsp+20h] [rbp-E0h]
  ULONG Id; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-C8h] BYREF
  struct _PCW_DATA v18; // [rsp+48h] [rbp-B8h] BYREF
  __int128 v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+68h] [rbp-98h]
  struct _PCW_DATA v21; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v22[48]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v23[48]; // [rsp+140h] [rbp+40h] BYREF
  wchar_t pszDest[12]; // [rsp+200h] [rbp+100h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  memset(v22, 0, 0xB8uLL);
  memset(v23, 0, 0xB8uLL);
  Id = 0;
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
  v5 = *(struct _PCW_BUFFER **)(a2 + 24);
  v6 = 0;
  for ( i = KeNumberNodes != 0; i; i = v6 < (unsigned __int16)KeNumberNodes )
  {
    v8 = KeNodeBlock[v6];
    v9 = *(_QWORD *)(v8 + 136);
    if ( v9 )
    {
      v10 = *(_WORD *)(v8 + 144);
      memset(v22, 0, 0xB8uLL);
      *((_QWORD *)&v19 + 1) = v9;
      v11 = 0;
      LOWORD(v20) = v10;
      *(_QWORD *)&v19 = 0LL;
      while ( !(unsigned int)KeEnumerateNextProcessor(&Id, (unsigned __int16 **)&v19) )
      {
        v12 = (const void *)(KiProcessorBlock[Id] + 33984);
        KiAddSynchCounters(v22, (__int64)v12);
        KiAddSynchCounters(v23, v13);
        LODWORD(Data) = v11;
        RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,%u", v6, Data);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v21.Data = v12;
        v21.Size = 184;
        result = PcwAddInstance(v5, &DestinationString, Id, 1u, &v21);
        if ( result < 0 )
          return result;
        ++v11;
      }
      RtlStringCbPrintfW(pszDest, 0x16uLL, L"%u,_Total", v6);
      RtlInitUnicodeString(&DestinationString, pszDest);
      v18.Data = v22;
      v18.Size = 184;
      result = PcwAddInstance(v5, &DestinationString, v6 + KeMaximumProcessors, 1u, &v18);
      if ( result < 0 )
        return result;
    }
    ++v6;
  }
  RtlStringCbPrintfW(pszDest, 0x16uLL, L"_Total");
  RtlInitUnicodeString(&DestinationString, pszDest);
  v18.Data = v23;
  v18.Size = 184;
  return PcwAddInstance(v5, &DestinationString, KeMaximumProcessors + (unsigned __int16)KeNumberNodes, 1u, &v18);
}

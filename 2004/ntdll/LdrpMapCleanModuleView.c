/*
 * XREFs of LdrpMapCleanModuleView @ 0x1800D516C
 * Callers:
 *     LdrpGetImportDescriptorForSnap @ 0x1800142DC (LdrpGetImportDescriptorForSnap.c)
 * Callees:
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x18009D130 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x18009D310 (ZwMapViewOfSection.c)
 */

__int64 __fastcall LdrpMapCleanModuleView(__int64 a1)
{
  int v2; // ebx
  HANDLE ProcessInformation; // [rsp+60h] [rbp+8h] BYREF
  __int64 v5; // [rsp+68h] [rbp+10h]
  __int64 v6; // [rsp+70h] [rbp+18h]

  ProcessInformation = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( *(_QWORD *)(a1 + 56) == LdrpImageEntry )
  {
    v2 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)89, &ProcessInformation, 8u, 0LL);
    if ( v2 >= 0 )
    {
      v2 = ZwMapViewOfSection();
      if ( v2 >= 0 )
        *(_QWORD *)(a1 + 184) = v5;
      NtClose(ProcessInformation);
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}

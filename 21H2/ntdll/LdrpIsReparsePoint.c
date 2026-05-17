/*
 * XREFs of LdrpIsReparsePoint @ 0x180053670
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x1800356C0 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x180055BD4 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80 (RtlDosPathNameToRelativeNtPathName_U.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     LdrpGetLoadAsEntry @ 0x180053918 (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x1800539E0 (LdrFindEntryForAddress.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     ZwQueryAttributesFile @ 0x18009DDE0 (ZwQueryAttributesFile.c)
 */

__int64 __fastcall LdrpIsReparsePoint(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v6; // [rsp+28h] [rbp-79h] BYREF
  __int128 v7; // [rsp+30h] [rbp-71h] BYREF
  __int128 v8; // [rsp+40h] [rbp-61h] BYREF
  __int64 v9; // [rsp+50h] [rbp-51h]
  int v10; // [rsp+60h] [rbp-41h] BYREF
  __int64 v11; // [rsp+68h] [rbp-39h]
  __int128 *v12; // [rsp+70h] [rbp-31h]
  int v13; // [rsp+78h] [rbp-29h]
  __int128 v14; // [rsp+80h] [rbp-21h]
  _OWORD v15[3]; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v16[32]; // [rsp+C0h] [rbp+1Fh] BYREF
  int v17; // [rsp+E0h] [rbp+3Fh]

  v6 = 0LL;
  v1 = -1073741823;
  memset(v15, 0, sizeof(v15));
  if ( (a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, v15) < 0 )
      return v1;
    LODWORD(v2) = DWORD2(v15[0]);
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, &v6) < 0 )
      return v1;
    v2 = *(_QWORD *)(v6 + 80);
  }
  if ( RtlDosPathNameToRelativeNtPathName_U(v2, (int)&v7, 0, (__int64)&v8) )
  {
    v3 = *((_QWORD *)&v7 + 1);
    if ( (_WORD)v8 )
    {
      v4 = v9;
      v7 = v8;
    }
    else
    {
      v4 = 0LL;
    }
    v10 = 48;
    v13 = 64;
    v12 = &v7;
    v11 = v4 & -(__int64)(v3 != 0);
    v14 = 0LL;
    if ( (int)ZwQueryAttributesFile(&v10, v16) >= 0 && (v17 & 0x400) != 0 )
      v1 = 0;
    if ( v3 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  return v1;
}

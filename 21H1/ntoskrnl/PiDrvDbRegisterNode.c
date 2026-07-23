/*
 * XREFs of PiDrvDbRegisterNode @ 0x14078AD48
 * Callers:
 *     PiDrvDbInit @ 0x14078A9DC (PiDrvDbInit.c)
 *     PiDrvDbRegisterNodeCallback @ 0x1407BE930 (PiDrvDbRegisterNodeCallback.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlStringCchPrintfW @ 0x1402E2030 (RtlStringCchPrintfW.c)
 *     RtlFreeAnsiString @ 0x1405D8770 (RtlFreeAnsiString.c)
 *     RtlFindUnicodeSubstring @ 0x14061B360 (RtlFindUnicodeSubstring.c)
 *     _PnpSetObjectProperty @ 0x14072B2B4 (_PnpSetObjectProperty.c)
 *     PiDrvDbCreateNode @ 0x14078AE9C (PiDrvDbCreateNode.c)
 *     DrvDbRegisterDatabase @ 0x14078B6A0 (DrvDbRegisterDatabase.c)
 *     PiDrvDbDestroyNode @ 0x1408B18D4 (PiDrvDbDestroyNode.c)
 *     PiDrvDbQuerySystemPathWin32 @ 0x1408B2948 (PiDrvDbQuerySystemPathWin32.c)
 *     DrvDbUnregisterDatabase @ 0x140979F80 (DrvDbUnregisterDatabase.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDrvDbRegisterNode(PCWSTR Source, char a2)
{
  wchar_t *PoolWithTag; // r14
  char v5; // r12
  int Node; // eax
  char *v7; // rbx
  int v8; // edi
  SIZE_T v9; // rdi
  int v10; // ecx
  int v11; // r8d
  int v12; // esi
  __int64 v13; // rcx
  wchar_t *v15; // rdi
  PWCHAR UnicodeSubstring; // rax
  unsigned __int16 i; // cx
  UNICODE_STRING String2; // [rsp+50h] [rbp-30h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING SearchString; // [rsp+70h] [rbp-10h] BYREF
  PVOID P; // [rsp+C0h] [rbp+40h] BYREF

  P = 0LL;
  String2 = 0LL;
  PoolWithTag = 0LL;
  v5 = 0;
  DestinationString = 0LL;
  SearchString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Node = PiDrvDbCreateNode(Source, (__int64)&P);
  v7 = (char *)P;
  v8 = Node;
  if ( Node < 0 )
    goto LABEL_9;
  if ( (*((_DWORD *)P + 16) & 1) != 0 )
  {
    v12 = a2 & 8;
  }
  else
  {
    v9 = *((unsigned __int16 *)P + 16) + 32LL;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v9, 0x62647050u);
    if ( !PoolWithTag )
    {
      v8 = -1073741670;
      goto LABEL_9;
    }
    v8 = RtlStringCchPrintfW(PoolWithTag, v9 >> 1, L"%wZ\\%ws", v7 + 32, L"DriverDatabase");
    if ( v8 < 0 )
      goto LABEL_9;
    v12 = a2 & 8;
    v8 = DrvDbRegisterDatabase(v10, (_DWORD)Source, v11, (_DWORD)PoolWithTag, v12 != 0);
    if ( v8 < 0 )
      goto LABEL_9;
    v5 = 1;
  }
  if ( !v12 )
  {
LABEL_8:
    v7 = 0LL;
    goto LABEL_9;
  }
  v8 = PnpSetObjectProperty(
         *(__int64 *)&PiPnpRtlCtx,
         *((_QWORD *)v7 + 3),
         7u,
         *((_QWORD *)v7 + 9),
         0LL,
         (__int64)DEVPKEY_DriverDatabase_FilePath,
         18,
         *((_QWORD *)v7 + 7),
         (unsigned int)*((unsigned __int16 *)v7 + 24) + 2,
         0);
  if ( v8 >= 0 )
  {
    v15 = (wchar_t *)*((_QWORD *)v7 + 7);
    String2.Buffer = v15;
    RtlInitUnicodeString(&SearchString, L"\\System32\\config\\");
    UnicodeSubstring = RtlFindUnicodeSubstring((PUNICODE_STRING)v7 + 3, &SearchString, 1u);
    if ( UnicodeSubstring )
    {
      i = 2 * ((__int64)(unsigned int)((_DWORD)UnicodeSubstring - *((_DWORD *)v7 + 14)) >> 1);
    }
    else
    {
      String2.Length = *((_WORD *)v7 + 24);
      for ( i = String2.Length; i > 2u; String2.Length = i )
      {
        if ( v15[((unsigned __int64)i >> 1) - 1] == 92 )
          break;
        i -= 2;
      }
      if ( i <= 2u || v15[((unsigned __int64)i >> 1) - 1] != 92 )
        goto LABEL_25;
      i -= 2;
    }
    String2.Length = i;
LABEL_25:
    String2.MaximumLength = i;
    if ( (int)PiDrvDbQuerySystemPathWin32(&String2, &DestinationString) < 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    v8 = PnpSetObjectProperty(
           *(__int64 *)&PiPnpRtlCtx,
           *((_QWORD *)v7 + 3),
           7u,
           *((_QWORD *)v7 + 9),
           0LL,
           (__int64)DEVPKEY_DriverDatabase_SystemPath,
           18,
           (__int64)DestinationString.Buffer,
           (unsigned int)DestinationString.Length + 2,
           0);
    if ( v8 >= 0 )
      goto LABEL_8;
  }
LABEL_9:
  RtlFreeAnsiString(&DestinationString);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v7 )
  {
    if ( v5 )
      DrvDbUnregisterDatabase(v13, Source);
    PiDrvDbDestroyNode(v7);
  }
  return (unsigned int)v8;
}

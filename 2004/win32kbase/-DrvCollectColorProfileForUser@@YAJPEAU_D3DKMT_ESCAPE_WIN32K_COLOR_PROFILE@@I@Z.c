/*
 * XREFs of ?DrvCollectColorProfileForUser@@YAJPEAU_D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE@@I@Z @ 0x1C004EF9C
 * Callers:
 *     ?DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z @ 0x1C004EE78 (-DrvProcessWin32kEscape@@YAJPEAU_D3DKMT_ESCAPE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00D3980 (memmove.c)
 */

NTSTATUS __fastcall DrvCollectColorProfileForUser(char *Sid, int a2)
{
  int v4; // eax
  __int16 v5; // ax
  _WORD *v6; // rcx
  NTSTATUS result; // eax
  NTSTATUS v8; // edi
  int v9; // eax
  NTSTATUS v10; // esi
  int v11; // ecx
  char *v12; // rdi
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING v18; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING Source; // [rsp+80h] [rbp-80h] BYREF
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+90h] [rbp-70h] BYREF
  __int64 v23; // [rsp+C8h] [rbp-38h]
  int v24; // [rsp+D0h] [rbp-30h]
  __int128 v25; // [rsp+D8h] [rbp-28h]
  __int128 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F8h] [rbp-8h]
  struct _RTL_QUERY_REGISTRY_TABLE v28; // [rsp+100h] [rbp+0h] BYREF
  __int64 v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+140h] [rbp+40h]
  __int128 v31; // [rsp+148h] [rbp+48h]
  __int128 v32; // [rsp+158h] [rbp+58h]
  __int64 v33; // [rsp+168h] [rbp+68h]
  struct _RTL_QUERY_REGISTRY_TABLE v34; // [rsp+170h] [rbp+70h] BYREF
  __int64 v35; // [rsp+1A8h] [rbp+A8h]
  int v36; // [rsp+1B0h] [rbp+B0h]
  __int128 v37; // [rsp+1B8h] [rbp+B8h]
  __int128 v38; // [rsp+1C8h] [rbp+C8h]
  __int64 v39; // [rsp+1D8h] [rbp+D8h]
  int v40; // [rsp+210h] [rbp+110h] BYREF
  int v41; // [rsp+218h] [rbp+118h] BYREF

  if ( qword_1C02510B8 )
    v4 = qword_1C02510B8();
  else
    v4 = 0;
  if ( !v4 && !gbOSTestSigningEnabled )
    return -1073741790;
  if ( *((_DWORD *)Sid + 23) + *((_DWORD *)Sid + 22) > (unsigned int)(a2 - 96) || *((_WORD *)Sid + 41) )
    return -1073741811;
  v5 = *((_WORD *)Sid + 34);
  v6 = Sid + 68;
  while ( v5 )
  {
    if ( (unsigned __int16)(v5 - 48) > 9u )
      return -1073741811;
    v5 = *++v6;
  }
  UnicodeString = 0LL;
  result = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( result >= 0 )
  {
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, L"\\REGISTRY\\USER\\");
    Source = 0LL;
    RtlInitUnicodeString(
      &Source,
      L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\ICM\\ProfileAssociations\\Display\\{4d36e96e-e325-11ce-bfc1-08002be10318}\\");
    *(_QWORD *)&Destination.Length = 0LL;
    *(_DWORD *)&Destination.MaximumLength = (unsigned __int16)(DestinationString.Length
                                                             + Source.Length
                                                             + UnicodeString.Length
                                                             + 16);
    Destination.Buffer = (PWSTR)ExAllocatePoolWithTag(
                                  PagedPool,
                                  (unsigned __int16)(DestinationString.Length + Source.Length
                                                                              + UnicodeString.Length
                                                                              + 16),
                                  0x73726447u);
    if ( !Destination.Buffer )
    {
      RtlFreeUnicodeString(&UnicodeString);
      return -1073741801;
    }
    RtlAppendUnicodeStringToString(&Destination, &DestinationString);
    RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, (PCWSTR)Sid + 34);
    RtlFreeUnicodeString(&UnicodeString);
    QueryTable.Name = L"UsePerUserProfiles";
    v40 = 0;
    v41 = 0;
    QueryTable.EntryContext = &v40;
    QueryTable.QueryRoutine = 0LL;
    QueryTable.DefaultData = &v41;
    QueryTable.Flags = 288;
    v27 = 0LL;
    *(_OWORD *)Src = 0LL;
    QueryTable.DefaultType = 67108868;
    v18 = 0LL;
    QueryTable.DefaultLength = 4;
    v23 = 0LL;
    v24 = 0;
    v25 = 0LL;
    v26 = 0LL;
    v8 = RtlQueryRegistryValues(0, Destination.Buffer, &QueryTable, 0LL, 0LL);
    if ( v8 < 0 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      return v8;
    }
    v9 = v40;
    *((_DWORD *)Sid + 21) = v40;
    if ( !v9 )
    {
      ExFreePoolWithTag(Destination.Buffer, 0);
      if ( !*((_DWORD *)Sid + 22) && !*((_DWORD *)Sid + 23) )
        return 0;
      return -1073741811;
    }
    v28.Name = L"ICMProfile";
    v28.QueryRoutine = 0LL;
    v28.Flags = 304;
    v28.EntryContext = Src;
    v28.DefaultType = 117440519;
    v33 = 0LL;
    v28.DefaultData = 0LL;
    v28.DefaultLength = 0;
    v29 = 0LL;
    v30 = 0;
    v31 = 0LL;
    v32 = 0LL;
    v8 = RtlQueryRegistryValues(0, Destination.Buffer, &v28, 0LL, 0LL);
    v34.QueryRoutine = 0LL;
    v34.Flags = 304;
    v34.DefaultType = 117440519;
    v34.Name = L"ICMProfileAC";
    v34.DefaultData = 0LL;
    v34.EntryContext = &v18;
    v34.DefaultLength = 0;
    v39 = 0LL;
    v35 = 0LL;
    v36 = 0;
    v37 = 0LL;
    v38 = 0LL;
    v10 = RtlQueryRegistryValues(0, Destination.Buffer, &v34, 0LL, 0LL);
    ExFreePoolWithTag(Destination.Buffer, 0);
    if ( v8 < 0 && v10 < 0 )
    {
      *((_DWORD *)Sid + 21) = 0;
      return v8;
    }
    v11 = *((_DWORD *)Sid + 22);
    v12 = Sid + 96;
    if ( v11 )
    {
      if ( v11 != (LOWORD(Src[0]) >> 1) + 1 )
      {
LABEL_34:
        if ( Src[1] )
          RtlFreeUnicodeString((PUNICODE_STRING)Src);
        if ( v18.Buffer )
          RtlFreeUnicodeString(&v18);
        return -1073741811;
      }
      memmove(Sid + 96, Src[1], LOWORD(Src[0]));
      v12 += 2 * *((unsigned int *)Sid + 22);
      *((_WORD *)v12 - 1) = 0;
    }
    else
    {
      if ( LOWORD(Src[0]) )
        v13 = (LOWORD(Src[0]) >> 1) + 1;
      else
        v13 = 0;
      *((_DWORD *)Sid + 22) = v13;
    }
    v14 = *((_DWORD *)Sid + 23);
    if ( !v14 )
    {
      if ( v18.Length )
        v15 = (v18.Length >> 1) + 1;
      else
        v15 = 0;
      *((_DWORD *)Sid + 23) = v15;
LABEL_43:
      if ( Src[1] )
        RtlFreeUnicodeString((PUNICODE_STRING)Src);
      if ( v18.Buffer )
        RtlFreeUnicodeString(&v18);
      return 0;
    }
    if ( v14 == (v18.Length >> 1) + 1 )
    {
      memmove(v12, v18.Buffer, v18.Length);
      *(_WORD *)&v12[2 * *((unsigned int *)Sid + 23) - 2] = 0;
      goto LABEL_43;
    }
    goto LABEL_34;
  }
  return result;
}

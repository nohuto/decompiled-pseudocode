/*
 * XREFs of ?DeleteRegistryKeys@DXGADAPTER@@QEAAXXZ @ 0x1C020BC48
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020BED8 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C000C680 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1C000C748 (RtlUnicodeStringValidateDestWorker.c)
 *     DpiGetRegistryPathFromPDO @ 0x1C0021F78 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z @ 0x1C020B958 (-DeleteRegistryKey@DXGADAPTER@@QEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

void __fastcall DXGADAPTER::DeleteRegistryKeys(DXGADAPTER *this)
{
  struct _DEVICE_OBJECT *v2; // rcx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  __int64 RegistryPathFromPDO; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdi
  const wchar_t *v9; // r8
  __int16 v10; // r11
  __int64 v11; // r9
  __int16 v12; // dx
  size_t v13; // r10
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rax
  const wchar_t *v21; // r8
  __int16 v22; // r10
  __int16 v23; // dx
  char *v24; // r9
  size_t v25; // r11
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rbx
  __int64 v31; // rax
  size_t v32; // [rsp+20h] [rbp-E0h]
  size_t v33; // [rsp+20h] [rbp-E0h]
  ULONG v34; // [rsp+28h] [rbp-D8h]
  ULONG v35; // [rsp+28h] [rbp-D8h]
  size_t pcchDest; // [rsp+30h] [rbp-D0h] BYREF
  size_t pcchDestLength; // [rsp+38h] [rbp-C8h] BYREF
  wchar_t *ppszDest; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  char v41; // [rsp+70h] [rbp-90h] BYREF

  v2 = (struct _DEVICE_OBJECT *)*((_QWORD *)this + 27);
  if ( v2 )
  {
    *(_QWORD *)&DestinationString.Length = 34078720LL;
    UnicodeString = 0LL;
    DestinationString.Buffer = (wchar_t *)&v41;
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(v2);
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &UnicodeString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO >= 0 )
    {
      RtlUnicodeStringCopy(&DestinationString, &UnicodeString);
      ppszDest = 0LL;
      pcchDest = 0LL;
      pcchDestLength = 0LL;
      v8 = 0x7FFFLL;
      if ( RtlUnicodeStringValidateDestWorker(&DestinationString, &ppszDest, &pcchDest, &pcchDestLength, v32, v34) >= 0 )
      {
        v9 = L"\\Classes";
        v10 = pcchDestLength;
        v11 = 0x7FFFLL;
        v12 = 0;
        v13 = pcchDest - pcchDestLength;
        if ( pcchDest != pcchDestLength )
        {
          v14 = (char *)ppszDest + 2 * pcchDestLength - (_QWORD)L"\\Classes";
          do
          {
            if ( !v11 )
              break;
            if ( !*v9 )
              break;
            *(const wchar_t *)((char *)v9 + (_QWORD)v14) = *v9;
            --v11;
            ++v9;
            ++v12;
          }
          while ( v11 + v13 - 0x7FFF );
        }
        DestinationString.Length = 2 * (v10 + v12);
      }
      v15 = DXGADAPTER::DeleteRegistryKey(this, &DestinationString);
      v19 = v15;
      if ( v15 < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17, v16, v18);
        *(_QWORD *)(v20 + 24) = v19;
        WdLogEvent5_WdWarning(v20);
      }
      RtlUnicodeStringCopy(&DestinationString, &UnicodeString);
      pcchDest = 0LL;
      ppszDest = 0LL;
      pcchDestLength = 0LL;
      if ( RtlUnicodeStringValidateDestWorker(
             &DestinationString,
             (wchar_t **)&pcchDest,
             (size_t *)&ppszDest,
             &pcchDestLength,
             v33,
             v35) >= 0 )
      {
        v21 = L"\\MediaFoundation";
        v22 = pcchDestLength;
        v23 = 0;
        v24 = (char *)ppszDest - pcchDestLength;
        if ( ppszDest != (wchar_t *)pcchDestLength )
        {
          v25 = pcchDest + 2 * pcchDestLength - (_QWORD)L"\\MediaFoundation";
          do
          {
            if ( !v8 )
              break;
            if ( !*v21 )
              break;
            *(const wchar_t *)((char *)v21 + v25) = *v21;
            --v8;
            ++v21;
            ++v23;
          }
          while ( &v24[v8 - 0x7FFF] );
        }
        DestinationString.Length = 2 * (v22 + v23);
      }
      v26 = DXGADAPTER::DeleteRegistryKey(this, &DestinationString);
      v30 = v26;
      if ( v26 < 0 )
      {
        v31 = WdLogNewEntry5_WdWarning(v28, v27, v29);
        *(_QWORD *)(v31 + 24) = v30;
        WdLogEvent5_WdWarning(v31);
      }
      RtlFreeUnicodeString(&UnicodeString);
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v6, v5);
      *(_QWORD *)(v7 + 24) = RegistryPathFromPDO;
      WdLogEvent5_WdError(v7);
    }
  }
}

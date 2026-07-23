/*
 * XREFs of _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006
 * Callers:
 *     _LdrLoadAlternateResourceModuleEx@20 @ 0x4B2BBDA0 (_LdrLoadAlternateResourceModuleEx@20.c)
 * Callees:
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     _RtlLcidToLocaleName@16 @ 0x4B2D5A10 (_RtlLcidToLocaleName@16.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __SEH_prolog4_GS @ 0x4B307B20 (__SEH_prolog4_GS.c)
 */

int __fastcall LdrpQuerySxSMUIFile(_UNICODE_STRING *a1, int a2, _UNICODE_STRING *a3, wchar_t *a4, PUNICODE_STRING *a5)
{
  _UNICODE_STRING *Buffer; // edi
  NTSTATUS ActivationContextSectionString; // esi
  int v9; // eax
  int v10; // eax
  _UNICODE_STRING *v11; // edi
  _UNICODE_STRING *v12; // [esp-14h] [ebp-188h]
  size_t v13; // [esp-4h] [ebp-178h]
  _DWORD v14[9]; // [esp+10h] [ebp-164h] BYREF
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [esp+34h] [ebp-140h] BYREF
  PUNICODE_STRING StringToFind; // [esp+78h] [ebp-FCh]
  PUNICODE_STRING StaticString; // [esp+7Ch] [ebp-F8h]
  PUNICODE_STRING *NewName; // [esp+80h] [ebp-F4h]
  int v19; // [esp+84h] [ebp-F0h]
  _UNICODE_STRING LocaleName; // [esp+88h] [ebp-ECh] BYREF
  int v21; // [esp+90h] [ebp-E4h] BYREF
  ULONG NewFlags; // [esp+94h] [ebp-E0h] BYREF
  _UNICODE_STRING String1; // [esp+98h] [ebp-DCh] BYREF
  int v24; // [esp+A0h] [ebp-D4h]
  char v25; // [esp+A4h] [ebp-D0h] BYREF
  CPPEH_RECORD ms_exc; // [esp+15Ch] [ebp-18h]

  v19 = a2;
  StringToFind = a1;
  StaticString = a3;
  LocaleName.Buffer = a4;
  NewName = a5;
  v21 = 0;
  String1.MaximumLength = 0;
  NewFlags = 0;
  ReturnedData.cbSize = 64;
  LODWORD(v13) = 60;
  memset(&ReturnedData.ulDataFormatVersion, 0, v13);
  v14[0] = 36;
  v14[1] = 1;
  memset(&v14[2], 0, 0x1Cu);
  Buffer = (_UNICODE_STRING *)LocaleName.Buffer;
  ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                     1u,
                                     a1,
                                     0,
                                     StaticString,
                                     (PUNICODE_STRING)LocaleName.Buffer,
                                     NewName,
                                     &NewFlags,
                                     0,
                                     0);
  if ( ActivationContextSectionString >= 0 )
  {
    if ( LdrpCreateActCtxLanguageW )
    {
      if ( (NewFlags & 1) == 0 )
      {
        ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0, 2u, StringToFind, &ReturnedData);
        if ( ActivationContextSectionString >= 0 )
        {
          if ( ReturnedData.ulDataFormatVersion != 1 )
            return -1072365563;
          if ( (ReturnedData.ulFlags & 1) != 0 )
          {
            ReturnedData.hActCtx = 0;
          }
          else if ( (ReturnedData.ulFlags & 2) != 0 )
          {
            ReturnedData.hActCtx = (HANDLE)-4;
          }
          String1.MaximumLength = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
          String1.Length = String1.MaximumLength;
          String1.Buffer = (wchar_t *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                     + *((_DWORD *)ReturnedData.AssemblyMetadata.lpInformation + 24));
          LocaleName.Buffer = (wchar_t *)&v25;
          LocaleName.MaximumLength = 170;
          ActivationContextSectionString = RtlLcidToLocaleName((unsigned __int16)v19, &LocaleName, 2u, 0);
          if ( ActivationContextSectionString >= 0 )
          {
            if ( RtlCompareUnicodeString(&String1, &LocaleName, 1u) )
            {
              v9 = LdrpCreateActCtxLanguageW(LdrpCreateActCtxLanguageW, ReturnedData.hActCtx, v19, &v21);
              ActivationContextSectionString = v9;
              v24 = v9;
              if ( v9 >= 0 )
              {
                v10 = v21;
                if ( v21 == -1 )
                {
LABEL_27:
                  ms_exc.registration.TryLevel = 1;
                  if ( LdrpReleaseActCtxW )
                    LdrpReleaseActCtxW(LdrpReleaseActCtxW, v10);
                  ms_exc.registration.TryLevel = -2;
                  return ActivationContextSectionString;
                }
                RtlActivateActivationContextUnsafeFast(v14, v21);
                ms_exc.registration.TryLevel = 0;
                if ( Buffer->Buffer )
                  RtlFreeAnsiString(Buffer);
                v12 = Buffer;
                v11 = StringToFind;
                ActivationContextSectionString = RtlDosApplyFileIsolationRedirection_Ustr(
                                                   0,
                                                   StringToFind,
                                                   0,
                                                   StaticString,
                                                   v12,
                                                   NewName,
                                                   &NewFlags,
                                                   0,
                                                   0);
                v24 = ActivationContextSectionString;
                if ( ActivationContextSectionString >= 0 )
                {
                  ActivationContextSectionString = RtlFindActivationContextSectionString(7u, 0, 2u, v11, &ReturnedData);
                  v24 = ActivationContextSectionString;
                  if ( ActivationContextSectionString >= 0 )
                  {
                    if ( ReturnedData.ulDataFormatVersion != 1 )
                    {
                      ActivationContextSectionString = -1072365563;
LABEL_25:
                      v24 = ActivationContextSectionString;
                      goto LABEL_26;
                    }
                    String1.MaximumLength = *((_WORD *)ReturnedData.AssemblyMetadata.lpInformation + 46);
                    String1.Length = String1.MaximumLength;
                    String1.Buffer = (wchar_t *)((char *)ReturnedData.AssemblyMetadata.lpSectionBase
                                               + *((_DWORD *)ReturnedData.AssemblyMetadata.lpInformation + 24));
                    if ( RtlCompareUnicodeString(&String1, &LocaleName, 1u) )
                    {
                      ActivationContextSectionString = -1072365564;
                      goto LABEL_25;
                    }
                  }
                }
LABEL_26:
                ms_exc.registration.TryLevel = -2;
                RtlDeactivateActivationContextUnsafeFast(v14, 1261511480);
                v10 = v21;
                goto LABEL_27;
              }
            }
          }
        }
      }
    }
  }
  return ActivationContextSectionString;
}

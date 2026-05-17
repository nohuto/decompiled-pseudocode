/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x4B38B10C
 * Callers:
 *     _OpenGlobalizationUserSettingsKey@12 @ 0x4B2AD6F6 (_OpenGlobalizationUserSettingsKey@12.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x4B38B3AF (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

NTSTATUS __thiscall OpenGlobalizationUserSettingsKey_ForMua(void *this, int a2, _DWORD *a3)
{
  int v3; // edi
  int *Heap; // ebx
  NTSTATUS InformationToken; // esi
  unsigned __int8 v6; // al
  unsigned __int16 v7; // si
  int v8; // edi
  char v10[4]; // [esp+Ch] [ebp-254h] BYREF
  _DWORD v11[6]; // [esp+10h] [ebp-250h] BYREF
  UNICODE_STRING UnicodeString; // [esp+28h] [ebp-238h] BYREF
  HANDLE Handle; // [esp+30h] [ebp-230h] BYREF
  int v14; // [esp+34h] [ebp-22Ch]
  int v15; // [esp+38h] [ebp-228h]
  int v16; // [esp+3Ch] [ebp-224h] BYREF
  int v17; // [esp+40h] [ebp-220h] BYREF
  int v18; // [esp+44h] [ebp-21Ch]
  int v19; // [esp+48h] [ebp-218h]
  _DWORD *v20; // [esp+4Ch] [ebp-214h]
  unsigned __int16 Src[262]; // [esp+50h] [ebp-210h] BYREF

  v15 = a2;
  v3 = 0;
  v19 = 0;
  v20 = a3;
  v14 = (int)this;
  Heap = (int *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 76);
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken(-6, 1, (int)Heap, 76, (int)v10);
    if ( InformationToken < 0 )
      goto LABEL_26;
    v3 = *Heap;
  }
  else
  {
    InformationToken = -1073741801;
  }
  if ( InformationToken >= 0 )
  {
    v6 = *(_BYTE *)(v3 + 1);
    if ( v6 < 2u || v6 == 5 && *(_DWORD *)(v3 + 8) == 21 && *(_DWORD *)(v3 + 24) == 503 )
    {
      InformationToken = -1073741514;
      v19 = 1;
      *v20 = 0;
    }
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v3, 1u);
      if ( InformationToken >= 0 )
      {
        v16 = 0;
        InformationToken = RtlGetPersistedStateLocation(
                             L"GlobalizationUserSettings",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                             0,
                             Src,
                             0x208u,
                             (size_t *)&v16);
        if ( InformationToken >= 0 )
        {
          v7 = v16 + 4 + UnicodeString.Length;
          v8 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, v7);
          if ( v8 )
          {
            LOWORD(v17) = 0;
            HIWORD(v17) = v7;
            v18 = v8;
            InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)&v17, Src);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)&v17, L"\\");
              if ( InformationToken >= 0 )
              {
                InformationToken = RtlAppendUnicodeStringToString(
                                     (unsigned __int16 *)&v17,
                                     (const void **)&UnicodeString);
                if ( InformationToken >= 0 )
                {
                  v11[0] = 24;
                  v11[2] = &v17;
                  v11[1] = 0;
                  v11[3] = 576;
                  v11[4] = 0;
                  v11[5] = 0;
                  if ( ZwOpenKey((int)&Handle, 131097, (int)v11) < 0 )
                  {
                    v19 = 1;
                    *v20 = 1;
                  }
                  else
                  {
                    ZwClose(Handle);
                    *v20 = 2;
                    InformationToken = ZwOpenKey(v15, v14, (int)v11);
                  }
                }
              }
            }
            RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v19 )
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v14, v15);
  }
LABEL_26:
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)Heap);
  return InformationToken;
}

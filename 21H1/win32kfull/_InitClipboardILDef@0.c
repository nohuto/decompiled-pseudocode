/*
 * XREFs of _InitClipboardILDef@0 @ 0xEB65C
 * Callers:
 *     <none>
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     ?GetClipILIndexFromName@@YGIPAGI@Z @ 0x181AD3 (-GetClipILIndexFromName@@YGIPAGI@Z.c)
 */

signed int __stdcall InitClipboardILDef()
{
  signed int v0; // esi
  _DWORD *v1; // edi
  signed int result; // eax
  ULONG v3; // ebx
  unsigned __int16 *v4; // [esp+0h] [ebp-38h]
  unsigned int v5; // [esp+4h] [ebp-34h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-14h] BYREF
  ULONG Length; // [esp+2Ch] [ebp-Ch]
  ULONG ResultLength; // [esp+30h] [ebp-8h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-4h] BYREF

  ResultLength = 0;
  KeyHandle = 0;
  v0 = 0;
  v1 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\IntegrityLevelDef");
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 576;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryKey(KeyHandle, KeyFullInformation, 0, 0, &ResultLength);
    if ( result == -2147483643 || result == -1073741789 )
    {
      result = Win32AllocPool(ResultLength, 1650684757);
      v0 = result;
      if ( result )
      {
        result = ZwQueryKey(KeyHandle, KeyFullInformation, (PVOID)result, ResultLength, &ResultLength);
        if ( result >= 0 )
        {
          result = *(_DWORD *)(v0 + 32);
          if ( result )
          {
            if ( (unsigned int)result <= 5 )
            {
              result = *(_DWORD *)(v0 + 36) + 16;
              Length = result;
              if ( (unsigned int)result >= 0x10 )
              {
                result = Win32AllocPool(result, 1650684757);
                v1 = (_DWORD *)result;
                if ( result )
                {
                  v3 = 0;
                  if ( !*(_DWORD *)(v0 + 32) )
                    goto LABEL_5;
                  while ( 1 )
                  {
                    result = ZwEnumerateValueKey(KeyHandle, v3, KeyValueBasicInformation, v1, Length, &ResultLength);
                    if ( result < 0 )
                      break;
                    if ( v1[1] == 1 )
                    {
                      result = GetClipILIndexFromName(v4, v5);
                      if ( result != -1 )
                      {
                        result *= 20;
                        *(int *)((char *)&dword_266040 + result) = 1;
                      }
                    }
                    if ( ++v3 >= *(_DWORD *)(v0 + 32) )
                      goto LABEL_5;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = WPP_RECORDER_SF_(17, 10, &WPP_163528e29d493e69e95520b3b68f976c_Traceguids);
  dword_26607C = 0;
  dword_266068 = 0;
  dword_266040 = 0;
  dword_266090 = 1;
  dword_266054 = 1;
LABEL_5:
  dword_2660A4 = 1;
  if ( v1 )
    result = Win32FreePool(v1);
  if ( v0 )
    result = Win32FreePool(v0);
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}

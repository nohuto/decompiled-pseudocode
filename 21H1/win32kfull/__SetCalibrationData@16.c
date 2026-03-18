/*
 * XREFs of __SetCalibrationData@16 @ 0x1448D3
 * Callers:
 *     _NtUserSetCalibrationData@16 @ 0x1688E9 (_NtUserSetCalibrationData@16.c)
 * Callees:
 *     _UpdateTiltCalData@20 @ 0x13F052 (_UpdateTiltCalData@20.c)
 *     _ValidateCalibrationData@12 @ 0x13F15C (_ValidateCalibrationData@12.c)
 *     _WriteTiltCalibrationData@20 @ 0x13F29A (_WriteTiltCalibrationData@20.c)
 *     _GetPointerDeviceKey@12 @ 0x1442BA (_GetPointerDeviceKey@12.c)
 */

int __fastcall _SetCalibrationData(int a1, ULONG a2, PVOID Data, int a4)
{
  int updated; // esi
  const WCHAR *v6; // eax
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-18h] BYREF
  size_t v9; // [esp+14h] [ebp-10h] BYREF
  HANDLE KeyHandle; // [esp+18h] [ebp-Ch] BYREF
  ULONG DataSize; // [esp+1Ch] [ebp-8h]
  PCWSTR SourceString; // [esp+20h] [ebp-4h]

  DataSize = a2;
  updated = 0;
  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  SourceString = 0;
  v9 = 0;
  if ( !Data )
    return UpdateTiltCalData(*(_DWORD *)(a1 + 284), a2, 0, a4, &v9);
  if ( ValidateCalibrationData(DataSize, (int)Data, a4) )
  {
    switch ( a4 )
    {
      case 1:
        v6 = L"LinearityData";
        break;
      case 2:
        v6 = L"UserLinearityData";
        break;
      case 3:
        v6 = L"Default";
        break;
      default:
LABEL_10:
        updated = UpdateTiltCalData(*(_DWORD *)(a1 + 284), DataSize, (int)Data, a4, &v9);
        if ( SourceString && updated )
        {
          if ( a4 == 1 || a4 == 2 )
          {
            RtlInitUnicodeString(&DestinationString, SourceString);
            if ( GetPointerDeviceKey(&KeyHandle, *(struct _UNICODE_STRING *)(a1 + 128)) )
            {
              if ( ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize) >= 0 )
                updated = 1;
              ZwClose(KeyHandle);
            }
          }
          else if ( a4 == 3 )
          {
            WriteTiltCalibrationData(v9, DataSize, Data, *(struct _UNICODE_STRING *)(a1 + 128));
          }
        }
        return updated;
    }
    SourceString = v6;
    goto LABEL_10;
  }
  return updated;
}

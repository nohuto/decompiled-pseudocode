/*
 * XREFs of ?ReadLinearityDataImp@@YGHPAXU_UNICODE_STRING@@W4tagCALIBRATION_TYPE@@PAKPAPAE@Z @ 0x13E720
 * Callers:
 *     ?ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z @ 0x13E409 (-ReadLinearityData@@YGHPAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PAX@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _ValidateCalibrationData@12 @ 0x13F15C (_ValidateCalibrationData@12.c)
 */

int __fastcall ReadLinearityDataImp(
        void *a1,
        int a2,
        PULONG ResultLength,
        _DWORD *a4,
        struct _UNICODE_STRING ValueName)
{
  int v5; // edi
  ULONG v6; // ecx
  _DWORD *v7; // esi
  int v8; // eax
  void *v9; // eax
  int v14; // [esp+1Ch] [ebp+Ch]

  v5 = 0;
  if ( ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, 0, 0, ResultLength) != -1073741772 )
  {
    v6 = *ResultLength;
    if ( *ResultLength >= 0x28 && v6 - 12 <= 0xCA0 )
    {
      if ( *a4 )
      {
        Win32FreePool(*a4);
        *a4 = 0;
        v6 = *ResultLength;
      }
      v7 = (_DWORD *)Win32AllocPool(v6, 2020635477);
      if ( v7 )
      {
        if ( ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, v7, *ResultLength, ResultLength) >= 0
          && v7[1] == 3 )
        {
          v8 = v7[2];
          if ( v7[3] == v8 || v7[4] == 2 )
          {
            v9 = (void *)Win32AllocPool(v8, 2020635477);
            *a4 = v9;
            if ( v9 )
            {
              memcpy(v9, v7 + 3, v7[2]);
              *ResultLength = v7[2];
              v14 = *a4;
              if ( ValidateCalibrationData(a2) )
              {
                v5 = 1;
              }
              else
              {
                Win32FreePool(v14);
                *a4 = 0;
              }
            }
          }
        }
        Win32FreePool(v7);
      }
    }
  }
  return v5;
}

/*
 * XREFs of ?RegQueryValueCal@@YGJPAXU_UNICODE_STRING@@KPAEKPAK@Z @ 0x13E820
 * Callers:
 *     ?ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z @ 0x13E304 (-ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z.c)
 * Callees:
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

NTSTATUS __userpurge RegQueryValueCal@<eax>(
        void *a1@<ecx>,
        void *a2,
        struct _UNICODE_STRING a3,
        struct _UNICODE_STRING ValueName,
        unsigned int a5,
        unsigned int *a6)
{
  NTSTATUS v7; // esi
  _DWORD *v8; // edi
  ULONG ResultLength; // [esp+Ch] [ebp-4h] BYREF

  ResultLength = 0;
  if ( a2 || !a3.Buffer )
  {
    if ( (unsigned int)(*(_DWORD *)&a3.Length - 12) > 0xCA0 )
    {
      return -1073741811;
    }
    else
    {
      ResultLength = *(_DWORD *)&a3.Length + 12;
      v8 = (_DWORD *)Win32AllocPool(*(_DWORD *)&a3.Length + 12, 2020635477);
      if ( v8 )
      {
        v7 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, v8, ResultLength, &ResultLength);
        if ( v7 >= 0 )
        {
          if ( v8[1] == 3 )
          {
            if ( a2 )
            {
              if ( v8[2] > *(_DWORD *)&a3.Length )
                v7 = -1073741789;
              else
                memcpy(a2, v8 + 3, v8[2]);
            }
          }
          else
          {
            v7 = -1073741788;
          }
        }
        if ( a3.Buffer && (!v7 || v7 == -1073741789) )
          *(_DWORD *)a3.Buffer = v8[2];
        Win32FreePool(v8);
      }
      else
      {
        return -1073741670;
      }
    }
  }
  else
  {
    v7 = ZwQueryValueKey(a1, &ValueName, KeyValuePartialInformation, 0, 0, &ResultLength);
    if ( v7 != -1073741772 && ResultLength )
    {
      *(_DWORD *)a3.Buffer = ResultLength;
      return -1073741789;
    }
  }
  return v7;
}

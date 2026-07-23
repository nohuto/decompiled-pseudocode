/*
 * XREFs of _AVrfOpenCurrentUserImageFileOptionsKey@12 @ 0x4B3388F7
 * Callers:
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 * Callees:
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _AVrfpFormatCurrentUserKeyPath@4 @ 0x4B339025 (_AVrfpFormatCurrentUserKeyPath@4.c)
 */

int __thiscall AVrfOpenCurrentUserImageFileOptionsKey(_DWORD *this, PHANDLE KeyHandle)
{
  int result; // eax
  int v4; // ecx
  wchar_t *v5; // eax
  int v6; // edx
  _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-2Ch] BYREF
  _UNICODE_STRING Destination; // [esp+20h] [ebp-14h] BYREF
  UNICODE_STRING Source; // [esp+28h] [ebp-Ch] BYREF

  result = AVrfpFormatCurrentUserKeyPath(&Destination);
  if ( result >= 0 )
  {
    v4 = *(unsigned __int16 *)this;
    v5 = (wchar_t *)(v4 + this[1]);
    if ( *(_WORD *)this )
    {
      do
      {
        if ( *(v5 - 1) == 92 )
          break;
        --v5;
        v4 -= 2;
      }
      while ( v4 );
    }
    v6 = *(unsigned __int16 *)this - v4;
    Source.Buffer = v5;
    Source.Length = v6;
    if ( (unsigned __int16)v6 == v6 )
    {
      result = RtlAppendUnicodeStringToString(&Destination, &Source);
      if ( result >= 0 )
      {
        ObjectAttributes.Length = 24;
        ObjectAttributes.ObjectName = &Destination;
        ObjectAttributes.RootDirectory = 0;
        ObjectAttributes.Attributes = 64;
        ObjectAttributes.SecurityDescriptor = 0;
        ObjectAttributes.SecurityQualityOfService = 0;
        return ZwOpenKey(KeyHandle, 9u, &ObjectAttributes);
      }
    }
    else
    {
      return -1073741789;
    }
  }
  return result;
}

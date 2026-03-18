/*
 * XREFs of ?GetGreRegKey@@YGJPAPAXKPBG@Z @ 0xDF7D8
 * Callers:
 *     _InitFNTCache@0 @ 0xDF48C (_InitFNTCache@0.c)
 *     QueryFontReg @ 0xDF742 (QueryFontReg.c)
 *     _vGetJpn98FixPitch@0 @ 0xDF832 (_vGetJpn98FixPitch@0.c)
 *     _InitializeDefaultFamilyFonts@0 @ 0x2926EC (_InitializeDefaultFamilyFonts@0.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge GetGreRegKey@<eax>(
        ACCESS_MASK a1@<edx>,
        void **a2@<ecx>,
        PCWSTR SourceString,
        unsigned int a4,
        const unsigned __int16 *a5)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-24h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-Ch] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  return ZwOpenKey(a2, a1, &ObjectAttributes);
}

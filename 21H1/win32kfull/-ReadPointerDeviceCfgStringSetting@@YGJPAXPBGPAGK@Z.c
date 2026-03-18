/*
 * XREFs of ?ReadPointerDeviceCfgStringSetting@@YGJPAXPBGPAGK@Z @ 0x9CF2E
 * Callers:
 *     ?GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z @ 0x9CC9E (-GetFlickMap@@YGHPAUtagFLICK_MAP@@@Z.c)
 *     ?GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z @ 0x16F6E7 (-GetCustomFlick@@YGHPAUtagCUSTOM_FLICK@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 */

NTSTATUS __userpurge ReadPointerDeviceCfgStringSetting@<eax>(
        const WCHAR *a1@<edx>,
        void *a2@<ecx>,
        char *a3,
        ULONG Length,
        unsigned __int16 *a5,
        unsigned int a6)
{
  const unsigned __int16 *v6; // ebx
  NTSTATUS v7; // esi
  int v8; // edi
  const unsigned __int16 *v9; // eax
  unsigned int v11; // [esp+0h] [ebp-1Ch]
  const unsigned __int16 *v12; // [esp+4h] [ebp-18h]
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-10h] BYREF
  HANDLE KeyHandle; // [esp+14h] [ebp-8h]
  PCWSTR SourceString; // [esp+18h] [ebp-4h]

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v6 = (const unsigned __int16 *)Length;
  SourceString = a1;
  KeyHandle = a2;
  v7 = -1073741595;
  Length = 2 * Length + 12;
  v8 = Win32AllocPoolWithQuota(Length, 2020635477);
  if ( v8 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v7 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, (PVOID)v8, Length, &Length);
    if ( v7 >= 0 )
    {
      v9 = (const unsigned __int16 *)(*(_DWORD *)(v8 + 8) >> 1);
      if ( v9 >= v6 )
        v9 = v6;
      if ( *(_DWORD *)(v8 + 8) < 2u )
      {
        v7 = -1073741595;
      }
      else
      {
        *(_WORD *)(v8 + 2 * (_DWORD)v9 + 10) = 0;
        v7 = RtlStringCchCopyW((int)v6, a3, (unsigned __int16 *)(v8 + 12), v11, v12);
      }
    }
    Win32FreePool(v8);
  }
  return v7;
}

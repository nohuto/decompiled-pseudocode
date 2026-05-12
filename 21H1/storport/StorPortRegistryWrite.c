/*
 * XREFs of StorPortRegistryWrite @ 0x1C0038890
 * Callers:
 *     <none>
 * Callees:
 *     StorpPortRegistryValidate @ 0x1C003B980 (StorpPortRegistryValidate.c)
 *     PortBuildRegKeyName @ 0x1C00578B4 (PortBuildRegKeyName.c)
 *     PortMiniportRegistryWrite @ 0x1C0057C40 (PortMiniportRegistryWrite.c)
 */

bool __fastcall StorPortRegistryWrite(__int64 a1, const char *a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  bool v8; // bl
  __int64 v9; // rax
  __int64 v10; // rsi
  _DWORD *v11; // rdi
  int v12; // edx
  int v13; // eax
  struct _UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-30h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  struct _STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  Destination = 0LL;
  UnicodeString = 0LL;
  v8 = 0;
  if ( KeGetCurrentIrql() )
    return 0;
  v9 = *(_QWORD *)(a1 - 16);
  v10 = *(_QWORD *)(*(_QWORD *)v9 + 16LL);
  v11 = (_DWORD *)(*(_QWORD *)v9 + 2152LL);
  if ( !(unsigned __int8)StorpPortRegistryValidate(v11, a5, &a6) )
    return 0;
  v13 = a6;
  v11[13] = v12 - v11[8];
  v11[11] = v13;
  if ( (int)PortBuildRegKeyName((PCUNICODE_STRING)(v10 + 40), &Destination) >= 0 )
  {
    DestinationString = 0LL;
    RtlInitAnsiString(&DestinationString, a2);
    if ( RtlAnsiStringToUnicodeString(&UnicodeString, &DestinationString, 1u) >= 0 )
      v8 = (int)((__int64 (__fastcall *)(struct _UNICODE_STRING *, struct _UNICODE_STRING *, _QWORD, _DWORD *))PortMiniportRegistryWrite)(
                  &Destination,
                  &UnicodeString,
                  a4,
                  v11) >= 0;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Destination.Buffer )
    RtlFreeUnicodeString(&Destination);
  return v8;
}

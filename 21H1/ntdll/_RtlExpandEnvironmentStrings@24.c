/*
 * XREFs of _RtlExpandEnvironmentStrings@24 @ 0x4B2DC3A0
 * Callers:
 *     _RtlExpandEnvironmentStrings_U@16 @ 0x4B2DC330 (_RtlExpandEnvironmentStrings_U@16.c)
 *     _RtlGetPersistedStateLocation@28 @ 0x4B2E5BB0 (_RtlGetPersistedStateLocation@28.c)
 * Callees:
 *     _RtlQueryEnvironmentVariable@24 @ 0x4B2BF830 (_RtlQueryEnvironmentVariable@24.c)
 */

NTSTATUS __cdecl RtlExpandEnvironmentStrings(
        PVOID Environment,
        PCWSTR Source,
        SIZE_T SourceLength,
        PWSTR Destination,
        SIZE_T DestinationLength,
        PSIZE_T ReturnLength)
{
  int v6; // ebx
  int v7; // edx
  NTSTATUS v8; // esi
  WCHAR *v10; // ecx
  WCHAR *v12; // eax
  NTSTATUS result; // eax
  PCWSTR v14; // eax
  const WCHAR *EnvironmentVariable; // eax
  SIZE_T v16; // [esp-4h] [ebp-34h]
  ULONG_PTR *v17; // [esp+4h] [ebp-2Ch]
  int ValueLength; // [esp+10h] [ebp-20h] BYREF
  PCWSTR ValueLength_4; // [esp+14h] [ebp-1Ch]
  unsigned int v20; // [esp+18h] [ebp-18h]
  PCWSTR v21; // [esp+1Ch] [ebp-14h]
  int v22; // [esp+20h] [ebp-10h]
  unsigned int NameLength; // [esp+24h] [ebp-Ch]
  int NameLength_4; // [esp+28h] [ebp-8h]
  WCHAR *i; // [esp+2Ch] [ebp-4h]

  v6 = SourceLength;
  v7 = 0;
  v8 = 0;
  NameLength_4 = 0;
  v22 = 0;
  if ( !(_DWORD)SourceLength )
  {
    v12 = (WCHAR *)HIDWORD(SourceLength);
    goto LABEL_12;
  }
  v10 = (WCHAR *)HIDWORD(SourceLength);
  for ( i = (WCHAR *)HIDWORD(SourceLength); ; v10 = i )
  {
    if ( *Source != 37 )
      goto LABEL_5;
    NameLength = 0;
    v14 = Source + 1;
    v20 = v6 - 1;
    ValueLength_4 = Source + 1;
    v7 = NameLength_4;
    if ( v6 == 1 )
      goto LABEL_5;
    do
    {
      if ( *v14 == 37 )
        break;
      ++NameLength;
      ++v14;
    }
    while ( NameLength < v6 - 1 );
    v10 = i;
    v21 = v14;
    if ( !NameLength || NameLength >= v20 )
      goto LABEL_5;
    LODWORD(v16) = &ValueLength;
    EnvironmentVariable = (const WCHAR *)RtlQueryEnvironmentVariable(
                                           Environment,
                                           ValueLength_4,
                                           __PAIR64__((unsigned int)i, NameLength),
                                           Destination,
                                           v16,
                                           v17);
    ValueLength_4 = EnvironmentVariable;
    if ( (int)EnvironmentVariable < 0 && EnvironmentVariable != (const WCHAR *)-1073741789 )
    {
      v10 = i;
      v7 = NameLength_4;
LABEL_5:
      if ( v22 >= 0 )
      {
        if ( (unsigned int)Destination <= 1 )
        {
          v22 = -1073741789;
        }
        else
        {
          Destination = (PWSTR)((char *)Destination - 1);
          *v10 = *Source;
          i = v10 + 1;
        }
      }
      ++v7;
      v21 = Source;
      NameLength_4 = v7;
      --v6;
LABEL_9:
      v12 = i;
      goto LABEL_10;
    }
    v7 = ValueLength + NameLength_4;
    NameLength_4 += ValueLength;
    if ( EnvironmentVariable == (const WCHAR *)-1073741789 )
      NameLength_4 = --v7;
    v6 += -2 - NameLength;
    if ( (int)ValueLength_4 < 0 )
    {
      v22 = (int)ValueLength_4;
      goto LABEL_9;
    }
    Destination = (PWSTR)((char *)Destination - ValueLength);
    v12 = &i[ValueLength];
    i = v12;
LABEL_10:
    Source = v21 + 1;
    if ( !v6 )
      break;
  }
  v8 = v22;
  if ( v22 >= 0 )
  {
LABEL_12:
    if ( Destination )
      *v12 = 0;
    else
      v8 = -1073741789;
  }
  result = v8;
  if ( (_DWORD)DestinationLength )
    *(_DWORD *)DestinationLength = v7 + 1;
  return result;
}

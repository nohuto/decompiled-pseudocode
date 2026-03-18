/*
 * XREFs of ?bGetRegString@@YG_NPAXPBGPAGK@Z @ 0xDBEA6
 * Callers:
 *     ?FinishStockFontInitInternal@@YGXPBGH@Z @ 0xDBCEC (-FinishStockFontInitInternal@@YGXPBGH@Z.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

char __userpurge bGetRegString@<al>(
        const WCHAR *a1@<edx>,
        void *a2@<ecx>,
        size_t *KeyValueInformation,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        unsigned int a6)
{
  unsigned int v7; // edx
  struct _UNICODE_STRING DestinationString; // [esp+Ch] [ebp-Ch] BYREF
  ULONG Length; // [esp+14h] [ebp-4h] BYREF

  Length = 260;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, a1);
  if ( ZwQueryValueKey(a2, &DestinationString, KeyValuePartialInformation, KeyValueInformation, Length, &Length) < 0 )
    return 0;
  if ( KeyValueInformation[1] != 1 )
    return 0;
  v7 = KeyValueInformation[2];
  if ( (v7 & 1) != 0 || v7 < 2 || *((_WORD *)KeyValueInformation + (v7 >> 1) + 5) )
    return 0;
  memmove(KeyValueInformation, KeyValueInformation + 3, KeyValueInformation[2]);
  return 1;
}

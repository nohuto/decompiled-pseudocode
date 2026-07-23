/*
 * XREFs of _RtlpWin32NtNameToNtPathName@24 @ 0x4B2E7E41
 * Callers:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 */

int __fastcall RtlpWin32NtNameToNtPathName(
        _DWORD *a1,
        _UNICODE_STRING *a2,
        PUNICODE_STRING Destination,
        PUNICODE_STRING *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  PUNICODE_STRING v7; // esi
  unsigned int v8; // edi
  wchar_t *Heap; // eax
  int v10; // eax
  wchar_t *Buffer; // edx
  wchar_t *i; // eax
  _WORD *v14; // eax
  SIZE_T v15; // [esp-4h] [ebp-1Ch]
  UNICODE_STRING Source; // [esp+10h] [ebp-8h] BYREF

  v7 = a2;
  v8 = *(unsigned __int16 *)a1 + 2;
  if ( v8 > 0xFFFE )
    return -1073741562;
  if ( !a2 )
  {
    v7 = Destination;
    if ( !Destination )
      return -1073741811;
    goto LABEL_4;
  }
  if ( v8 > a2->MaximumLength )
  {
    v7 = Destination;
    if ( Destination )
    {
LABEL_4:
      LODWORD(v15) = *(unsigned __int16 *)a1 + 2;
      Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v15);
      v7->Buffer = Heap;
      if ( !Heap )
        return -1073741801;
      v7->MaximumLength = v8;
      v7->Length = 0;
      goto LABEL_6;
    }
    return -1073741562;
  }
LABEL_6:
  RtlAppendUnicodeStringToString(v7, &RtlpDosDevicesPrefix);
  *(_DWORD *)&Source.Length = *a1;
  v10 = a1[1];
  Source.Length -= 8;
  Source.Buffer = (wchar_t *)(v10 + 8);
  RtlAppendUnicodeStringToString(v7, &Source);
  if ( a4 )
    *a4 = v7;
  v7->Buffer[v7->Length >> 1] = 0;
  if ( a5 )
  {
    Buffer = v7->Buffer;
    for ( i = &Buffer[(v7->Length >> 1) - 1]; i >= Buffer; --i )
    {
      if ( *i == 92 )
      {
        v14 = i + 1;
        if ( v14 && *v14 )
        {
          *a5 = v14;
          goto LABEL_9;
        }
        break;
      }
    }
    *a5 = 0;
  }
LABEL_9:
  if ( a6 )
  {
    *a6 = 0;
    a6[1] = 0;
    a6[2] = 0;
    a6[3] = 0;
  }
  return 0;
}

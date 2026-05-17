/*
 * XREFs of _RtlpWin32NtNameToNtPathName@24 @ 0x4B2E7E41
 * Callers:
 *     _RtlpDosPathNameToRelativeNtPathName@28 @ 0x4B2C5860 (_RtlpDosPathNameToRelativeNtPathName@28.c)
 * Callees:
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 */

int __fastcall RtlpWin32NtNameToNtPathName(
        unsigned __int16 *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6)
{
  unsigned __int16 *v7; // esi
  unsigned int v8; // edi
  int Heap; // eax
  int v10; // eax
  unsigned int v12; // edx
  _WORD *i; // eax
  _WORD *v14; // eax
  const void *v15[2]; // [esp+10h] [ebp-8h] BYREF

  v7 = a2;
  v8 = *a1 + 2;
  if ( v8 > 0xFFFE )
    return -1073741562;
  if ( !a2 )
  {
    v7 = a3;
    if ( !a3 )
      return -1073741811;
    goto LABEL_4;
  }
  if ( v8 > a2[1] )
  {
    v7 = a3;
    if ( a3 )
    {
LABEL_4:
      Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v8);
      *((_DWORD *)v7 + 1) = Heap;
      if ( !Heap )
        return -1073741801;
      v7[1] = v8;
      *v7 = 0;
      goto LABEL_6;
    }
    return -1073741562;
  }
LABEL_6:
  RtlAppendUnicodeStringToString(v7, (const void **)&RtlpDosDevicesPrefix);
  v15[0] = *(const void **)a1;
  v10 = *((_DWORD *)a1 + 1);
  LOWORD(v15[0]) -= 8;
  v15[1] = (const void *)(v10 + 8);
  RtlAppendUnicodeStringToString(v7, v15);
  if ( a4 )
    *a4 = v7;
  *(_WORD *)(*((_DWORD *)v7 + 1) + 2 * (*v7 >> 1)) = 0;
  if ( a5 )
  {
    v12 = *((_DWORD *)v7 + 1);
    for ( i = (_WORD *)(v12 + 2 * ((*v7 >> 1) - 1)); (unsigned int)i >= v12; --i )
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

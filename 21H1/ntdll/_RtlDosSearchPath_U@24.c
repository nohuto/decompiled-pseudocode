/*
 * XREFs of _RtlDosSearchPath_U@24 @ 0x4B32D140
 * Callers:
 *     <none>
 * Callees:
 *     _RtlDetermineDosPathNameType_U@4 @ 0x4B2B3480 (_RtlDetermineDosPathNameType_U@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     _RtlDoesFileExists_UEx@8 @ 0x4B2E3164 (_RtlDoesFileExists_UEx@8.c)
 *     _RtlGetFullPathName_U@16 @ 0x4B2ECAC0 (_RtlGetFullPathName_U@16.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __stdcall RtlDosSearchPath_U(__int16 *a1, __int16 *Src, _WORD *a3, size_t a4, _WORD *a5, _DWORD *a6)
{
  int v6; // eax
  __int16 *v7; // ecx
  void *v8; // ecx
  __int16 v10; // dx
  int v11; // edi
  __int16 *v12; // ebx
  _WORD *Heap; // edi
  __int16 v14; // cx
  void *v15; // ecx
  int FullPathName_U; // esi
  int v17; // [esp+Ch] [ebp-14h]
  size_t Size; // [esp+10h] [ebp-10h]
  int v19; // [esp+14h] [ebp-Ch]
  _WORD *v20; // [esp+14h] [ebp-Ch]
  _WORD v21[4]; // [esp+18h] [ebp-8h] BYREF

  v6 = RtlDetermineDosPathNameType_U(Src);
  v7 = Src;
  if ( v6 != 5 )
  {
    if ( RtlDoesFileExists_UEx(Src, 1) )
      return RtlGetFullPathName_U(v8, Src, a4, a5, a6);
    return 0;
  }
  if ( *Src )
  {
    v10 = *Src;
    while ( v10 != 46 )
    {
      v10 = *++v7;
      if ( !*v7 )
        goto LABEL_8;
    }
    v11 = 0;
  }
  else
  {
LABEL_8:
    if ( !a3 )
    {
      v11 = 0;
      v17 = 0;
      goto LABEL_14;
    }
    if ( RtlInitUnicodeStringEx((int)v21, a3) < 0 )
      return 0;
    v11 = v21[0];
  }
  v17 = v11;
LABEL_14:
  v12 = a1;
  if ( RtlInitUnicodeStringEx((int)v21, a1) < 0 )
    return 0;
  v19 = v21[0];
  if ( RtlInitUnicodeStringEx((int)v21, Src) < 0 )
    return 0;
  Size = v21[0];
  Heap = (_WORD *)RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, v19 + 6 + v11 + v21[0]);
  v20 = Heap;
  if ( !Heap )
    return 0;
  while ( 1 )
  {
    if ( !*v12 )
      goto LABEL_25;
    v14 = *v12;
    do
    {
      ++v12;
      if ( v14 == 59 )
        break;
      *Heap++ = v14;
      v14 = *v12;
    }
    while ( *v12 );
    if ( Heap != v20 && *(Heap - 1) != 92 )
      *Heap++ = 92;
    if ( !*v12 )
LABEL_25:
      v12 = 0;
    memcpy(Heap, Src, Size);
    if ( v17 )
      memcpy((char *)Heap + Size, a3, v17 + 2);
    else
      *(_WORD *)((char *)Heap + Size) = 0;
    Heap = v20;
    if ( RtlDoesFileExists_UEx(v20, 0) )
      break;
    if ( !v12 )
    {
      FullPathName_U = 0;
      goto LABEL_33;
    }
  }
  FullPathName_U = RtlGetFullPathName_U(v15, v20, a4, a5, a6);
LABEL_33:
  RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v20);
  return FullPathName_U;
}

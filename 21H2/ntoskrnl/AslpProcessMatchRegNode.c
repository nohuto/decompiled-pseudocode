/*
 * XREFs of AslpProcessMatchRegNode @ 0x14096A354
 * Callers:
 *     AslRegWildcardFindNext @ 0x140969C90 (AslRegWildcardFindNext.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     AslRegistryGetKey @ 0x1407C229C (AslRegistryGetKey.c)
 *     AslRegistryEnumKey @ 0x140967E8C (AslRegistryEnumKey.c)
 *     AslRegistryOpenSubKey @ 0x1409680B0 (AslRegistryOpenSubKey.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslpProcessMatchRegNode(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rbx
  void *v4; // rcx
  int Key; // ebx
  wchar_t *Buffer; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  void *v12; // rbp
  __int16 *v13; // rax
  __int16 v14; // bx
  int v15; // eax
  __int64 v16; // rax
  const WCHAR *v17; // rdx
  void *v18; // rcx
  UNICODE_STRING Destination; // [rsp+30h] [rbp-18h] BYREF

  Destination = 0LL;
  if ( *(_QWORD *)(a1 + 8) == a2 )
  {
    v3 = (_QWORD *)(a1 + 32);
    v4 = *(void **)(a1 + 32);
    if ( v4 )
    {
      ZwClose(v4);
      *v3 = 0LL;
      Key = -2147483622;
    }
    else
    {
      Key = AslRegistryGetKey(v3, *(const WCHAR **)(a1 + 24), 0x20019u, 1);
    }
    Buffer = Destination.Buffer;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 24);
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(v7 + 2 * v8) );
    Destination.MaximumLength = 2 * (v8 + 261);
    v9 = (wchar_t *)AslAlloc(261LL, Destination.MaximumLength);
    v11 = *(_QWORD *)(a1 + 8);
    Buffer = v9;
    Destination.Buffer = v9;
    v12 = *(void **)(v11 + 32);
    while ( 1 )
    {
      *Buffer = 0;
      Key = AslRegistryEnumKey(Buffer, v10, v12, *(_DWORD *)(a1 + 40));
      if ( Key < 0 )
        break;
      v13 = *(__int16 **)(a1 + 24);
      ++*(_DWORD *)(a1 + 40);
      v14 = *v13;
      *v13 = 0;
      v15 = AslStringPatternMatchW(*(unsigned __int16 **)(a1 + 16), Buffer);
      **(_WORD **)(a1 + 24) = v14;
      if ( v15 )
      {
        v16 = -1LL;
        do
          ++v16;
        while ( Buffer[v16] );
        v17 = *(const WCHAR **)(a1 + 24);
        Destination.Length = 2 * v16;
        RtlAppendUnicodeToString(&Destination, v17);
        v18 = *(void **)(a1 + 32);
        if ( v18 )
        {
          ZwClose(v18);
          *(_QWORD *)(a1 + 32) = 0LL;
        }
        Buffer = Destination.Buffer;
        Key = AslRegistryOpenSubKey((PHANDLE)(a1 + 32), v12, Destination.Buffer);
        if ( Key >= 0 )
          goto LABEL_18;
      }
    }
    *(_DWORD *)(a1 + 40) = 0;
  }
LABEL_18:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0x74705041u);
  return (unsigned int)Key;
}

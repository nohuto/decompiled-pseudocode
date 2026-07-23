/*
 * XREFs of _LdrpLogEtwDllSearchResults@8 @ 0x4B32FECC
 * Callers:
 *     _LdrpMapDllSearchPath@4 @ 0x4B2DE148 (_LdrpMapDllSearchPath@4.c)
 * Callees:
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _NtTraceEvent@16 @ 0x4B2F2F60 (_NtTraceEvent@16.c)
 *     _LdrpEventAddUnicodeString@16 @ 0x4B32FC55 (_LdrpEventAddUnicodeString@16.c)
 *     _LdrpMakeUnicodeStringFromPathElement@12 @ 0x4B330CBB (_LdrpMakeUnicodeStringFromPathElement@12.c)
 */

void __fastcall LdrpLogEtwDllSearchResults(void *a1, _DWORD *a2)
{
  PVOID Heap; // eax
  void *v5; // esi
  int v6; // ebx
  char *v7; // eax
  PVOID v8; // esi
  int v9; // edi
  char *v10; // eax
  char *v11; // esi
  unsigned int v12; // edi
  char *v13; // esi
  unsigned int v14; // edi
  char *v15; // esi
  ULONG v16; // edi
  PVOID v17; // esi
  SIZE_T v18; // [esp-4h] [ebp-4Ch]
  SIZE_T v19; // [esp-4h] [ebp-4Ch]
  _UNICODE_STRING v20; // [esp+10h] [ebp-38h] BYREF
  _UNICODE_STRING v21; // [esp+18h] [ebp-30h] BYREF
  _UNICODE_STRING v22; // [esp+20h] [ebp-28h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+28h] [ebp-20h] BYREF
  int v24; // [esp+30h] [ebp-18h]
  int UnicodeStringFromPathElement; // [esp+34h] [ebp-14h]
  int v26; // [esp+38h] [ebp-10h]
  PVOID Fields; // [esp+3Ch] [ebp-Ch]
  ULONG FieldSize; // [esp+40h] [ebp-8h]
  unsigned int v29; // [esp+44h] [ebp-4h] BYREF

  LODWORD(v18) = 584;
  *(_DWORD *)&v22.Length = 0;
  v22.Buffer = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  *(_DWORD *)&v20.Length = 0;
  v20.Buffer = 0;
  *(_DWORD *)&v21.Length = 0;
  v21.Buffer = 0;
  Fields = a1;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v18);
  v5 = Heap;
  if ( Heap )
  {
    *((_WORD *)Heap + 3) = 5332;
    *((_DWORD *)Heap + 8) = a2[4];
    *((_DWORD *)Heap + 9) = *(_DWORD *)(a2[2] + 12);
    *((_DWORD *)Heap + 10) = a1;
    *((_DWORD *)Heap + 11) = a2[5];
    LdrpEventAddUnicodeString((int)a2, (_WORD *)Heap + 24, 0x214u, (int *)&v29);
    FieldSize = v29 + 16;
    v6 = 2147353476;
    v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    NtTraceEvent((HANDLE)(unsigned __int8)*v7, 0x402u, FieldSize, v5);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
    v8 = Fields;
    if ( ((unsigned __int16)Fields & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(&UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(&v22);
      v24 = LdrpMakeUnicodeStringFromPathElement(&v20);
      v9 = LdrpMakeUnicodeStringFromPathElement(&v21);
      LODWORD(v19) = 3232;
      v26 = v9;
      v10 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
      Fields = v10;
      if ( v10 )
      {
        v29 = 0;
        *((_DWORD *)v10 + 8) = v8;
        *((_WORD *)v10 + 3) = 5333;
        v11 = v10 + 36;
        LdrpEventAddUnicodeString((int)&UnicodeString, (_WORD *)v10 + 18, 0xC78u, (int *)&v29);
        v12 = 3192 - v29;
        v13 = &v11[2 * (v29 >> 1)];
        FieldSize = v29 + 4;
        LdrpEventAddUnicodeString((int)&v22, v13, 3192 - v29, (int *)&v29);
        v14 = v12 - v29;
        FieldSize += v29;
        v15 = &v13[2 * (v29 >> 1)];
        LdrpEventAddUnicodeString((int)&v20, v15, v14, (int *)&v29);
        FieldSize += v29;
        LdrpEventAddUnicodeString((int)&v21, &v15[2 * (v29 >> 1)], v14 - v29, (int *)&v29);
        v16 = v29 + FieldSize;
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (int)NtCurrentPeb()->SharedData + 554;
        v17 = Fields;
        NtTraceEvent((HANDLE)*(unsigned __int8 *)v6, 0x402u, v16, Fields);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v17);
        v9 = v26;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( UnicodeStringFromPathElement >= 0 )
        RtlFreeAnsiString(&v22);
      if ( v9 >= 0 )
        RtlFreeAnsiString(&v21);
      if ( v24 >= 0 )
        RtlFreeAnsiString(&v20);
    }
  }
}

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

void __fastcall LdrpLogEtwDllSearchResults(int a1, _DWORD *a2)
{
  int Heap; // eax
  int v5; // esi
  int v6; // ebx
  char *v7; // eax
  int v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // esi
  unsigned int v12; // edi
  _WORD *v13; // esi
  unsigned int v14; // edi
  _WORD *v15; // esi
  int v16; // edi
  int v17; // esi
  UNICODE_STRING v18; // [esp+10h] [ebp-38h] BYREF
  UNICODE_STRING v19; // [esp+18h] [ebp-30h] BYREF
  UNICODE_STRING v20; // [esp+20h] [ebp-28h] BYREF
  UNICODE_STRING UnicodeString; // [esp+28h] [ebp-20h] BYREF
  int v22; // [esp+30h] [ebp-18h]
  int UnicodeStringFromPathElement; // [esp+34h] [ebp-14h]
  int v24; // [esp+38h] [ebp-10h]
  int v25; // [esp+3Ch] [ebp-Ch]
  int v26; // [esp+40h] [ebp-8h]
  unsigned int v27; // [esp+44h] [ebp-4h] BYREF

  *(_DWORD *)&v20.Length = 0;
  v20.Buffer = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  *(_DWORD *)&v18.Length = 0;
  v18.Buffer = 0;
  *(_DWORD *)&v19.Length = 0;
  v19.Buffer = 0;
  v25 = a1;
  Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 584);
  v5 = Heap;
  if ( Heap )
  {
    *(_WORD *)(Heap + 6) = 5332;
    *(_DWORD *)(Heap + 32) = a2[4];
    *(_DWORD *)(Heap + 36) = *(_DWORD *)(a2[2] + 12);
    *(_DWORD *)(Heap + 40) = a1;
    *(_DWORD *)(Heap + 44) = a2[5];
    LdrpEventAddUnicodeString((int)a2, (_WORD *)(Heap + 48), 0x214u, (int *)&v27);
    v26 = v27 + 16;
    v6 = 2147353476;
    v7 = RtlGetCurrentServiceSessionId() ? (char *)NtCurrentPeb()->SharedData + 554 : (char *)2147353476;
    NtTraceEvent((unsigned __int8)*v7, 1026, v26, v5);
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v5);
    v8 = v25;
    if ( (v25 & 0x100) != 0 && (int)LdrpMakeUnicodeStringFromPathElement(&UnicodeString) >= 0 )
    {
      UnicodeStringFromPathElement = LdrpMakeUnicodeStringFromPathElement(&v20);
      v22 = LdrpMakeUnicodeStringFromPathElement(&v18);
      v9 = LdrpMakeUnicodeStringFromPathElement(&v19);
      v24 = v9;
      v10 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 0, 3232);
      v25 = v10;
      if ( v10 )
      {
        v27 = 0;
        *(_DWORD *)(v10 + 32) = v8;
        *(_WORD *)(v10 + 6) = 5333;
        v11 = v10 + 36;
        LdrpEventAddUnicodeString((int)&UnicodeString, (_WORD *)(v10 + 36), 0xC78u, (int *)&v27);
        v12 = 3192 - v27;
        v13 = (_WORD *)(v11 + 2 * (v27 >> 1));
        v26 = v27 + 4;
        LdrpEventAddUnicodeString((int)&v20, v13, 3192 - v27, (int *)&v27);
        v14 = v12 - v27;
        v26 += v27;
        v15 = &v13[v27 >> 1];
        LdrpEventAddUnicodeString((int)&v18, v15, v14, (int *)&v27);
        v26 += v27;
        LdrpEventAddUnicodeString((int)&v19, &v15[v27 >> 1], v14 - v27, (int *)&v27);
        v16 = v27 + v26;
        if ( RtlGetCurrentServiceSessionId() )
          v6 = (int)NtCurrentPeb()->SharedData + 554;
        v17 = v25;
        NtTraceEvent(*(unsigned __int8 *)v6, 1026, v16, v25);
        RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v17);
        v9 = v24;
      }
      RtlFreeAnsiString(&UnicodeString);
      if ( UnicodeStringFromPathElement >= 0 )
        RtlFreeAnsiString(&v20);
      if ( v9 >= 0 )
        RtlFreeAnsiString(&v19);
      if ( v22 >= 0 )
        RtlFreeAnsiString(&v18);
    }
  }
}

/*
 * XREFs of _EtwpReceiveReplyDataBlock@36 @ 0x4B382527
 * Callers:
 *     _EtwSendNotification@20 @ 0x4B382440 (_EtwSendNotification@20.c)
 * Callees:
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlAllocateHeap@12 @ 0x4B2C5D40 (_RtlAllocateHeap@12.c)
 *     _RtlNtStatusToDosError@4 @ 0x4B2DAB70 (_RtlNtStatusToDosError@4.c)
 *     _ZwTraceControl@24 @ 0x4B2F45B0 (_ZwTraceControl@24.c)
 */

NTSTATUS __fastcall EtwpReceiveReplyDataBlock(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        char *OutputBuffer,
        SIZE_T Size,
        _DWORD *a7,
        int a8)
{
  NTSTATUS v8; // esi
  char *v9; // ebx
  unsigned __int64 v10; // kr10_8
  ULONG v11; // ecx
  ULONG v12; // eax
  int v13; // edx
  _WORD *v14; // ecx
  char *v15; // edi
  unsigned int v16; // edx
  SIZE_T v18; // [esp-4h] [ebp-60h]
  SIZE_T v19; // [esp-4h] [ebp-60h]
  int v20; // [esp-4h] [ebp-60h]
  _DWORD InputBuffer[2]; // [esp+Ch] [ebp-50h] BYREF
  ULONG v22; // [esp+14h] [ebp-48h] BYREF
  NTSTATUS Status; // [esp+18h] [ebp-44h]
  unsigned int v24; // [esp+1Ch] [ebp-40h]
  unsigned int v25; // [esp+20h] [ebp-3Ch]
  _DWORD *v26; // [esp+24h] [ebp-38h]
  char *v27; // [esp+28h] [ebp-34h]
  char *v28; // [esp+2Ch] [ebp-30h]
  unsigned int v29; // [esp+30h] [ebp-2Ch]
  PVOID BaseAddress; // [esp+34h] [ebp-28h]
  unsigned int v31; // [esp+38h] [ebp-24h]
  PVOID Heap; // [esp+3Ch] [ebp-20h]
  unsigned int v33; // [esp+40h] [ebp-1Ch]
  int v34; // [esp+44h] [ebp-18h]
  unsigned int v35; // [esp+48h] [ebp-14h]
  int v36; // [esp+4Ch] [ebp-10h]
  ULONG ReturnLength; // [esp+50h] [ebp-Ch] BYREF
  _WORD v38[3]; // [esp+54h] [ebp-8h] BYREF
  char v39; // [esp+5Bh] [ebp-1h]

  v35 = a2;
  v8 = 0;
  v27 = 0;
  v28 = 0;
  v39 = 0;
  v26 = 0;
  v33 = 0;
  v36 = 0;
  v34 = 0;
  BaseAddress = 0;
  Heap = 0;
  InputBuffer[0] = a1;
  if ( a8 == 4 || a8 == 11 )
  {
    LODWORD(v18) = Size;
    BaseAddress = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
    if ( !BaseAddress )
      return 8;
    LODWORD(v19) = 8 * a4;
    v27 = OutputBuffer;
    v28 = OutputBuffer + 72;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v19);
    if ( !Heap )
    {
      v20 = 8;
      goto LABEL_45;
    }
  }
  if ( !a4 )
    goto LABEL_40;
  do
  {
    InputBuffer[1] = v35;
    v29 = MEMORY[0x7FFE0004];
    while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
      _mm_pause();
    v31 = (((v29 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24) + ((v29 * (unsigned __int64)MEMORY[0x7FFE0324]) << 8)) >> 32;
    v24 = ((v29 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24) + ((v29 * MEMORY[0x7FFE0324]) << 8);
    Status = ZwTraceControl(EtwReceiveReplyDataBlock, InputBuffer, 8u, OutputBuffer, Size, &ReturnLength);
    v29 = MEMORY[0x7FFE0004];
    while ( 1 )
    {
      v25 = MEMORY[0x7FFE0320];
      if ( MEMORY[0x7FFE0324] == MEMORY[0x7FFE0328] )
        break;
      _mm_pause();
    }
    v9 = v28;
    v10 = ((v29 * (unsigned __int64)v25) >> 24)
        + ((v29 * (unsigned __int64)MEMORY[0x7FFE0324]) << 8)
        - __PAIR64__(v31, v24);
    if ( v35 <= v10 )
    {
      v8 = 1460;
      goto LABEL_46;
    }
    v35 -= v10;
    v11 = (ReturnLength + 7) & 0xFFFFFFF8;
    ReturnLength = v11;
    if ( !Status )
    {
      v8 = 0;
      goto LABEL_19;
    }
    v12 = RtlNtStatusToDosError(Status);
    v8 = v12;
    if ( !v12 )
    {
      v11 = ReturnLength;
LABEL_19:
      if ( !a3 )
      {
        if ( !v27 )
        {
          *((_DWORD *)OutputBuffer + 2) = v11;
          v11 = ReturnLength;
          v15 = &OutputBuffer[ReturnLength];
          LODWORD(Size) = Size - ReturnLength;
          v26 = OutputBuffer + 8;
LABEL_29:
          OutputBuffer = v15;
          goto LABEL_30;
        }
        if ( *((_DWORD *)OutputBuffer + 1) >= 0xF8u )
        {
          v13 = v34;
          if ( *((_DWORD *)OutputBuffer + 19) == 1 )
          {
            v14 = Heap;
            *((_DWORD *)Heap + 2 * v34) = *((_DWORD *)OutputBuffer + 8);
            v14[4 * v13 + 2] = *((_WORD *)OutputBuffer + 40);
            v14[4 * v13 + 3] = *((_WORD *)OutputBuffer + 118);
            v11 = ReturnLength;
          }
          v34 = v13 + 1;
          if ( v13 )
          {
            if ( *((_DWORD *)OutputBuffer + 19) != 1 )
            {
              *((_DWORD *)v9 + 26) += *((_DWORD *)OutputBuffer + 44);
              *((_DWORD *)v9 + 27) += *((_DWORD *)OutputBuffer + 45);
              *((_DWORD *)v9 + 28) += *((_DWORD *)OutputBuffer + 46);
              *((_DWORD *)v9 + 29) += *((_DWORD *)OutputBuffer + 47);
            }
            goto LABEL_30;
          }
          v15 = (char *)BaseAddress;
          goto LABEL_29;
        }
      }
LABEL_30:
      v36 += v11;
      goto LABEL_33;
    }
    if ( v12 != 122 )
      goto LABEL_35;
    v39 = 1;
    v36 += ReturnLength;
LABEL_33:
    v16 = v33 + 1;
    v33 = v16;
  }
  while ( v16 < a4 );
  v33 = v16;
LABEL_35:
  if ( v34 )
  {
    if ( *((_DWORD *)v9 + 1) == 1 )
    {
      v8 = ZwTraceControl(EtwGetPrivateSessionTraceHandle, Heap, 8 * v34, v38, 2u, &v22);
      if ( !v8 && v22 == 2 )
        *((_WORD *)v9 + 4) = v38[0];
    }
  }
LABEL_40:
  *(_DWORD *)HIDWORD(Size) = v33;
  *a7 = v36;
  if ( v26 )
    *v26 = 0;
  if ( !v8 && v39 )
  {
    v20 = 122;
LABEL_45:
    v8 = v20;
  }
LABEL_46:
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v8;
}

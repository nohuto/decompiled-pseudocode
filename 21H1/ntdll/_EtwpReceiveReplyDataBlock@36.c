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

int __fastcall EtwpReceiveReplyDataBlock(
        int a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int *a7,
        _DWORD *a8,
        int a9)
{
  int v9; // esi
  int v10; // ebx
  unsigned __int64 v11; // kr10_8
  unsigned int v12; // ecx
  ULONG v13; // eax
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  unsigned int v17; // edx
  int v19; // [esp-4h] [ebp-60h]
  _DWORD v20[2]; // [esp+Ch] [ebp-50h] BYREF
  int v21; // [esp+14h] [ebp-48h] BYREF
  NTSTATUS Status; // [esp+18h] [ebp-44h]
  unsigned int v23; // [esp+1Ch] [ebp-40h]
  unsigned int v24; // [esp+20h] [ebp-3Ch]
  _DWORD *v25; // [esp+24h] [ebp-38h]
  int v26; // [esp+28h] [ebp-34h]
  int v27; // [esp+2Ch] [ebp-30h]
  unsigned int v28; // [esp+30h] [ebp-2Ch]
  int Heap; // [esp+34h] [ebp-28h]
  unsigned int v30; // [esp+38h] [ebp-24h]
  int v31; // [esp+3Ch] [ebp-20h]
  unsigned int v32; // [esp+40h] [ebp-1Ch]
  int v33; // [esp+44h] [ebp-18h]
  unsigned int v34; // [esp+48h] [ebp-14h]
  int v35; // [esp+4Ch] [ebp-10h]
  unsigned int v36; // [esp+50h] [ebp-Ch] BYREF
  __int16 v37[3]; // [esp+54h] [ebp-8h] BYREF
  char v38; // [esp+5Bh] [ebp-1h]

  v34 = a2;
  v9 = 0;
  v26 = 0;
  v27 = 0;
  v38 = 0;
  v25 = 0;
  v32 = 0;
  v35 = 0;
  v33 = 0;
  Heap = 0;
  v31 = 0;
  v20[0] = a1;
  if ( a9 == 4 || a9 == 11 )
  {
    Heap = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, a6);
    if ( !Heap )
      return 8;
    v26 = a5;
    v27 = a5 + 72;
    v31 = RtlAllocateHeap((int)NtCurrentPeb()->ProcessHeap, 8, 8 * a4);
    if ( !v31 )
    {
      v19 = 8;
      goto LABEL_45;
    }
  }
  if ( !a4 )
    goto LABEL_40;
  do
  {
    v20[1] = v34;
    v28 = MEMORY[0x7FFE0004];
    while ( MEMORY[0x7FFE0324] != MEMORY[0x7FFE0328] )
      _mm_pause();
    v30 = (((v28 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24) + ((v28 * (unsigned __int64)MEMORY[0x7FFE0324]) << 8)) >> 32;
    v23 = ((v28 * (unsigned __int64)MEMORY[0x7FFE0320]) >> 24) + ((v28 * MEMORY[0x7FFE0324]) << 8);
    Status = ZwTraceControl(19, (int)v20, 8, a5, a6, (int)&v36);
    v28 = MEMORY[0x7FFE0004];
    while ( 1 )
    {
      v24 = MEMORY[0x7FFE0320];
      if ( MEMORY[0x7FFE0324] == MEMORY[0x7FFE0328] )
        break;
      _mm_pause();
    }
    v10 = v27;
    v11 = ((v28 * (unsigned __int64)v24) >> 24)
        + ((v28 * (unsigned __int64)MEMORY[0x7FFE0324]) << 8)
        - __PAIR64__(v30, v23);
    if ( v34 <= v11 )
    {
      v9 = 1460;
      goto LABEL_46;
    }
    v34 -= v11;
    v12 = (v36 + 7) & 0xFFFFFFF8;
    v36 = v12;
    if ( !Status )
    {
      v9 = 0;
      goto LABEL_19;
    }
    v13 = RtlNtStatusToDosError(Status);
    v9 = v13;
    if ( !v13 )
    {
      v12 = v36;
LABEL_19:
      if ( !a3 )
      {
        if ( !v26 )
        {
          *(_DWORD *)(a5 + 8) = v12;
          v12 = v36;
          v16 = v36 + a5;
          a6 -= v36;
          v25 = (_DWORD *)(a5 + 8);
LABEL_29:
          a5 = v16;
          goto LABEL_30;
        }
        if ( *(_DWORD *)(a5 + 4) >= 0xF8u )
        {
          v14 = v33;
          if ( *(_DWORD *)(a5 + 76) == 1 )
          {
            v15 = v31;
            *(_DWORD *)(v31 + 8 * v33) = *(_DWORD *)(a5 + 32);
            *(_WORD *)(v15 + 8 * v14 + 4) = *(_WORD *)(a5 + 80);
            *(_WORD *)(v15 + 8 * v14 + 6) = *(_WORD *)(a5 + 236);
            v12 = v36;
          }
          v33 = v14 + 1;
          if ( v14 )
          {
            if ( *(_DWORD *)(a5 + 76) != 1 )
            {
              *(_DWORD *)(v10 + 104) += *(_DWORD *)(a5 + 176);
              *(_DWORD *)(v10 + 108) += *(_DWORD *)(a5 + 180);
              *(_DWORD *)(v10 + 112) += *(_DWORD *)(a5 + 184);
              *(_DWORD *)(v10 + 116) += *(_DWORD *)(a5 + 188);
            }
            goto LABEL_30;
          }
          v16 = Heap;
          goto LABEL_29;
        }
      }
LABEL_30:
      v35 += v12;
      goto LABEL_33;
    }
    if ( v13 != 122 )
      goto LABEL_35;
    v38 = 1;
    v35 += v36;
LABEL_33:
    v17 = v32 + 1;
    v32 = v17;
  }
  while ( v17 < a4 );
  v32 = v17;
LABEL_35:
  if ( v33 )
  {
    if ( *(_DWORD *)(v10 + 4) == 1 )
    {
      v9 = ZwTraceControl(38, v31, 8 * v33, (int)v37, 2, (int)&v21);
      if ( !v9 && v21 == 2 )
        *(_WORD *)(v10 + 8) = v37[0];
    }
  }
LABEL_40:
  *a7 = v32;
  *a8 = v35;
  if ( v25 )
    *v25 = 0;
  if ( !v9 && v38 )
  {
    v19 = 122;
LABEL_45:
    v9 = v19;
  }
LABEL_46:
  if ( Heap )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, Heap);
  if ( v31 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, v31);
  return v9;
}

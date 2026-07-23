/*
 * XREFs of MiScanPagefileSpace @ 0x1408D0930
 * Callers:
 *     <none>
 * Callees:
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiReleasePageFileInfo @ 0x140255C50 (MiReleasePageFileInfo.c)
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     MiReferencePageRuns @ 0x1402D43E0 (MiReferencePageRuns.c)
 *     MiCaptureDirtyBitToPfn @ 0x14031A860 (MiCaptureDirtyBitToPfn.c)
 *     MiDereferencePageRuns @ 0x14037EB10 (MiDereferencePageRuns.c)
 *     MiLockPage @ 0x14054FB44 (MiLockPage.c)
 */

void __fastcall MiScanPagefileSpace(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int16 v4; // r12
  int v5; // ebp
  _DWORD *v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // r13
  __int64 v10; // rdi
  unsigned __int64 v11; // rbx
  char v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r8
  _DWORD *v15; // r9
  unsigned __int64 v16; // rbx
  unsigned __int8 v17; // al
  char v18; // r12
  __int64 v19; // rcx
  unsigned __int8 v20; // [rsp+70h] [rbp+8h]
  __int16 v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h]
  _DWORD *v23; // [rsp+88h] [rbp+20h]

  v4 = *(_WORD *)a1;
  v21 = *(_WORD *)a1;
  v5 = 0;
  v22 = 0;
  v7 = (_DWORD *)MiReferencePageRuns(a1, 0, a3, a4);
  v23 = v7;
  do
  {
    v8 = 48LL * *(_QWORD *)&v7[4 * v5 + 4] - 0x58000000000LL;
    v9 = v8 + 48LL * *(_QWORD *)&v7[4 * v5 + 6];
    if ( v8 < v9 )
    {
      v10 = v8 + 16;
      do
      {
        v11 = *(_QWORD *)(v10 + 24);
        if ( ((v11 >> 39) & 0x3FF) == v4 )
        {
          v12 = *(_BYTE *)(v10 + 18);
          if ( (((v12 & 7) - 2) & 0xFA) == 0
            && (v12 & 7) != 6
            && (*(_DWORD *)v10 & 0x400LL) == 0
            && (unsigned int)MiGetPagingFileOffset(v10)
            && (v11 & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
            && *(_WORD *)(v10 + 16)
            && (v12 & 0x28) == 0
            && (*(_BYTE *)(v10 + 19) & 0x10) == 0 )
          {
            v16 = 0LL;
            v17 = MiLockPage(v8, v13, v14, v15);
            v18 = *(_BYTE *)(v10 + 18);
            v20 = v17;
            if ( (((v18 & 7) - 2) & 0xFA) == 0
              && (v18 & 7) != 6
              && (*(_DWORD *)v10 & 0x400LL) == 0
              && (unsigned int)MiGetPagingFileOffset(v10)
              && (*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFLL) != 0xFFFFFFFFDLL
              && *(_WORD *)(v10 + 16)
              && (((v18 & 0x28) == 0) & (unsigned __int8)~(*(_BYTE *)(v10 + 19) >> 4)) != 0 )
            {
              v16 = MiCaptureDirtyBitToPfn(v8);
            }
            MiUnlockPage(v8, v20);
            if ( v16 )
              MiReleasePageFileInfo(a1, v16, 0);
          }
          v4 = v21;
        }
        v8 += 48LL;
        v10 += 48LL;
      }
      while ( v8 < v9 );
      v5 = v22;
      v7 = v23;
    }
    v22 = ++v5;
  }
  while ( v5 != *v7 );
  MiDereferencePageRuns((__int64)v7);
  v19 = *(_QWORD *)(a1 + 176);
  *(_QWORD *)(a1 + 984) = 0LL;
  PsDereferencePartition(v19);
}

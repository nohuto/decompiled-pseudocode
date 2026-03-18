/*
 * XREFs of IopLiveDumpBufferDumpData @ 0x140A6581C
 * Callers:
 *     IopLiveDumpProcessCorralStateChange @ 0x140A677B8 (IopLiveDumpProcessCorralStateChange.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140211E00 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x14021D070 (KxReleaseSpinLock.c)
 *     MmMapMemoryDumpMdlEx @ 0x14038C0F0 (MmMapMemoryDumpMdlEx.c)
 *     IopLiveDumpGetCapturePagesNoLock @ 0x140A66CEC (IopLiveDumpGetCapturePagesNoLock.c)
 */

void __fastcall IopLiveDumpBufferDumpData(__int64 *a1, unsigned int *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // eax
  __int64 v4; // r13
  _QWORD *v5; // rbx
  __int64 *v6; // r14
  __int64 v7; // rsi
  int v8; // edi
  unsigned int v9; // r15d
  unsigned int v10; // edi
  unsigned int v11; // ebp
  _QWORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  _DWORD *v16; // rsi
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  _DWORD *v19; // rdi
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  _QWORD *v22; // [rsp+40h] [rbp-58h]
  unsigned int v23; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+10h] BYREF
  _DWORD *v25; // [rsp+B0h] [rbp+18h]
  __int64 v26; // [rsp+B8h] [rbp+20h]

  v2 = *a1;
  v24 = 0LL;
  v23 = 0;
  v3 = *a2;
  v4 = v2 + 680;
  v21 = v2 + 680;
  if ( *a2 < *(_DWORD *)(v2 + 880) && v3 < *(_DWORD *)(v2 + 1104) )
  {
    v5 = *(_QWORD **)(*(_QWORD *)(v2 + 1112) + 8LL * v3);
    v6 = (__int64 *)(*(_QWORD *)(v2 + 888) + 16LL * v3);
    v22 = v5;
    v26 = v2 + 544;
    v7 = v6[1] + 48;
    v20 = v7;
    while ( 1 )
    {
      v8 = BufferChunkSizeInPages;
      KxAcquireSpinLock((PKSPIN_LOCK)(v4 + 32));
      IopLiveDumpGetCapturePagesNoLock(v26, v4, (_DWORD)v5, v8, (__int64)&v23, (__int64)&v24);
      KxReleaseSpinLock((PKSPIN_LOCK)(v4 + 32));
      v9 = v23;
      if ( !v23 )
        break;
      v10 = 0;
      v11 = 0;
      v25 = *(_DWORD **)(*(_QWORD *)(v4 + 72) + 8 * v24);
      v12 = v5;
      do
      {
        v13 = v10++;
        *(_QWORD *)(v7 + 8 * v13) = *v12;
        if ( v10 == 16 || v10 && v11 == v9 - 1 )
        {
          v14 = v6[1];
          *(_DWORD *)(v14 + 40) = v10 << 12;
          *(_QWORD *)v14 = 0LL;
          *(_WORD *)(v14 + 10) = 0;
          *(_QWORD *)(v14 + 32) = 0LL;
          *(_DWORD *)(v14 + 44) = 0;
          *(_WORD *)(v14 + 8) = 8 * (((unsigned __int64)(v10 << 12) >> 12) + 6);
          v15 = v10 << 12;
          MmMapMemoryDumpMdlEx(*v6, v10, v6[1], 0);
          v16 = *(_DWORD **)(v6[1] + 24);
          v17 = v25;
          v18 = (unsigned __int64)(unsigned int)v15 >> 2;
          v19 = v25;
          while ( v18 )
          {
            *v19++ = *v16++;
            --v18;
          }
          v7 = v20;
          v25 = (_DWORD *)((char *)v17 + v15);
          v10 = 0;
        }
        ++v11;
        ++v12;
      }
      while ( v11 < v9 );
      v4 = v21;
      v5 = v22;
    }
  }
}

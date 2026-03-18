/*
 * XREFs of IopLiveDumpGenerateIptSecondaryData @ 0x140A66B0C
 * Callers:
 *     IopLiveDumpEndMirroringCallback @ 0x140A66300 (IopLiveDumpEndMirroringCallback.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     IopLiveDumpGetMillisecondCounter @ 0x14055A628 (IopLiveDumpGetMillisecondCounter.c)
 *     IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration @ 0x14055AD48 (IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration.c)
 */

char IopLiveDumpGenerateIptSecondaryData()
{
  __int64 v0; // rdi
  __int64 MillisecondCounter; // rsi
  int v2; // eax
  void **v3; // rbx
  __int64 v4; // rcx
  unsigned int v5; // eax
  void *v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // eax
  unsigned int *v9; // rbx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int128 v14; // [rsp+30h] [rbp-40h] BYREF
  __int128 v15; // [rsp+40h] [rbp-30h]
  __int128 v16; // [rsp+50h] [rbp-20h]
  __int64 v17; // [rsp+60h] [rbp-10h]

  v0 = IopLiveDumpContext;
  v17 = 0LL;
  MillisecondCounter = 0LL;
  v14 = 0LL;
  v2 = *(_DWORD *)(IopLiveDumpContext + 80);
  v15 = 0LL;
  v16 = 0LL;
  if ( (v2 & 0x80u) != 0 )
    MillisecondCounter = IopLiveDumpGetMillisecondCounter(0);
  v3 = (void **)(v0 + 1040);
  v4 = *(_QWORD *)(v0 + 1040);
  if ( v4 )
  {
    *(_DWORD *)(v0 + 1080) = 0;
    *(_QWORD *)(v0 + 1072) = v4;
    (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64))(IptInterface + 40))(2LL, 0LL, v0 + 1040, 48LL);
    v5 = *(_DWORD *)(v0 + 1080);
    if ( v5 && *(_DWORD *)(v0 + 1048) >= v5 )
    {
      v6 = *(void **)(v0 + 1072);
      if ( *v3 != v6 )
      {
        memmove(*v3, v6, v5);
        *(_QWORD *)(v0 + 1072) = *v3;
        v5 = *(_DWORD *)(v0 + 1080);
      }
      if ( v5 )
      {
        if ( *(_QWORD *)(v0 + 992) )
        {
          LODWORD(v15) = *(_DWORD *)v0;
          *((_QWORD *)&v15 + 1) = *(_QWORD *)(v0 + 8);
          v16 = *(_OWORD *)(v0 + 16);
          v17 = *(_QWORD *)(v0 + 32);
          HIDWORD(v14) = 0x2000000;
          (*(void (__fastcall **)(__int64, _QWORD, __int128 *, __int64))(IptInterface + 32))(7LL, 0LL, &v14, 56LL);
          v7 = v14;
          if ( (_QWORD)v14 )
          {
            v8 = 16 * *(_DWORD *)(v14 + 16) + 12;
            if ( v8 <= *(_DWORD *)(v0 + 1000) )
            {
              v9 = *(unsigned int **)(v0 + 992);
              *(_DWORD *)(v0 + 1032) = v8;
              *(_QWORD *)(v0 + 1024) = v9;
              *(GUID *)(v0 + 1008) = GUID_TRIAGEDUMP_DATA;
              v10 = *(_DWORD *)(v7 + 16);
              *v9 = v10;
              v9[1] = 4;
              memmove(v9 + 2, (const void *)(v14 + 48), 16LL * v10);
              v9[4 * *v9 + 2] = 5525577;
            }
          }
        }
      }
    }
    else
    {
      *(_QWORD *)(v0 + 1072) = 0LL;
      *(_DWORD *)(v0 + 1080) = 0;
    }
  }
  v11 = *(_DWORD *)(v0 + 80);
  if ( (v11 & 0x80u) != 0 )
  {
    v12 = IopLiveDumpGetMillisecondCounter(0);
    LOBYTE(v11) = IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration((const GUID *)v0, v12 - MillisecondCounter);
  }
  return v11;
}

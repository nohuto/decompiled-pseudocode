/*
 * XREFs of PfpPrefetchDirectoryStream @ 0x140675E40
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x140675A94 (PfpVolumePrefetchMetadata.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140272EDC (PfpCheckPrefetchAbort.c)
 *     MmQueryMemoryListInformation @ 0x140272F20 (MmQueryMemoryListInformation.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PfpOpenHandleCreate @ 0x140677DE8 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140677F80 (PfpOpenHandleClose.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14067856C (PfpUpdateRepurposedByPrefetch.c)
 *     PfpGetPageListCount @ 0x140678688 (PfpGetPageListCount.c)
 *     IopXxxControlFile @ 0x1407153F0 (IopXxxControlFile.c)
 */

__int64 PfpPrefetchDirectoryStream(_QWORD *a1, __int64 a2, __int64 a3, ...)
{
  __int64 v3; // rsi
  unsigned int *Src; // r15
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int16 v9; // r8
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r9
  unsigned int v16; // esi
  unsigned int v17; // r8d
  unsigned int v18; // r10d
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r9
  int v23; // r10d
  size_t Size; // [rsp+38h] [rbp-51h]
  SIZE_T Length; // [rsp+48h] [rbp-41h]
  __int64 v27; // [rsp+60h] [rbp-29h]
  __int64 v28[2]; // [rsp+70h] [rbp-19h] BYREF
  int v29[2]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v30; // [rsp+88h] [rbp-1h]
  __int64 v31; // [rsp+98h] [rbp+Fh]
  __int64 v32; // [rsp+F8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F8h] [rbp+6Fh]
  __int64 v34; // [rsp+100h] [rbp+77h]
  __int64 v35; // [rsp+108h] [rbp+7Fh]
  va_list va1; // [rsp+110h] [rbp+87h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v32 = va_arg(va1, _QWORD);
  v34 = va_arg(va1, _QWORD);
  v35 = va_arg(va1, _QWORD);
  v3 = a1[5];
  Src = (unsigned int *)a1[3];
  *(_OWORD *)v28 = 0LL;
  v31 = 0x200000000LL;
  v7 = *a1;
  v8 = 0LL;
  LODWORD(v32) = 0;
  v27 = v3;
  *(_QWORD *)v29 = 0LL;
  v9 = *(_WORD *)(v7 + 30);
  *Src = 4;
  v10 = *a1;
  v30 = 0LL;
  v11 = *(_DWORD *)(v10 + 28);
  LOBYTE(v10) = v9;
  v12 = v34;
  v13 = (8 * (unsigned int)(v10 & 7)) | (unsigned __int64)(v11 & 7);
  LODWORD(v10) = v35;
  *((_QWORD *)Src + 1) = v13;
  v14 = PfpOpenHandleCreate((unsigned int)v29, v3, *(_QWORD *)(v12 + 16), *(_QWORD *)(v12 + 8), 1048577, v10, 0, a2);
  if ( v14 >= 0 )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
      MmQueryMemoryListInformation((ULONG_PTR **)0xFFFFFFFFFFFFFFFFLL, (_OWORD *)a1 + 3, 0xB0u, v15, (__int64 *)va);
    v16 = 0;
    while ( v16 < *(_DWORD *)(a3 + 16) )
    {
      Src[1] = 0;
      if ( v16 >= *(_DWORD *)(a3 + 16) )
        break;
      v17 = *((_DWORD *)a1 + 8);
      v18 = 0;
      do
      {
        v19 = *(_QWORD *)(a3 + 24);
        v20 = *(_QWORD *)(v19 + 16LL * v16);
        v21 = v8;
        v22 = v20 + *(unsigned int *)(v19 + 16LL * v16 + 8);
        if ( v20 >= v8 )
          v21 = *(_QWORD *)(v19 + 16LL * v16);
        while ( v21 < v22 )
        {
          *(_QWORD *)&Src[2 * Src[1] + 4] = v21;
          v21 += 4096LL;
          v18 = Src[1] + 1;
          Src[1] = v18;
          v17 = *((_DWORD *)a1 + 8);
          if ( v18 >= v17 )
          {
            v8 = v21;
            break;
          }
        }
        if ( v18 >= v17 )
          break;
        ++v16;
      }
      while ( v16 < *(_DWORD *)(a3 + 16) );
      if ( !v18 )
        break;
      if ( PfpCheckPrefetchAbort(a1)
        || (*(_DWORD *)(*a1 + 80LL) & 4) != 0
        && (unsigned __int64)(a1[6] + a1[7] + PfpGetPageListCount(a1 + 11, 0LL)) < 0x80 )
      {
        v14 = -1073741248;
        goto LABEL_24;
      }
      LODWORD(Length) = 0;
      LODWORD(Size) = 8 * v23 + 16;
      v14 = IopXxxControlFile(v29[0], (__int64)v28, 590112, Src, Size, 0LL, Length, 0);
      if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
        PfpUpdateRepurposedByPrefetch(a1 + 6, Src[1]);
      if ( v14 < 0 )
      {
        if ( v14 == -1073741807 )
          break;
        goto LABEL_24;
      }
      if ( v14 == 259 )
        KeBugCheckEx(0x191u, 0x14BCuLL, 0LL, 0LL, 0LL);
    }
    v14 = 0;
LABEL_24:
    v3 = v27;
  }
  if ( (v31 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v29, v3);
  return (unsigned int)v14;
}

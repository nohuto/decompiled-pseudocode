/*
 * XREFs of BgkSetVirtualFrameBuffer @ 0x1403CCE70
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     BgSetFrameBufferAccess @ 0x1409F2008 (BgSetFrameBufferAccess.c)
 *     BgGetDisplayContext @ 0x1409F2028 (BgGetDisplayContext.c)
 *     BgReleaseSpinLock @ 0x1409F5B28 (BgReleaseSpinLock.c)
 *     BgAcquireSpinLock @ 0x1409F5B40 (BgAcquireSpinLock.c)
 *     BgGetIsColorOverridden @ 0x1409F5B58 (BgGetIsColorOverridden.c)
 *     BgConvertResources @ 0x1409F7550 (BgConvertResources.c)
 */

__int64 __fastcall BgkSetVirtualFrameBuffer(__int64 a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  char v2; // di
  __int64 DisplayContext; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  int v9; // eax
  size_t v10; // rsi
  _DWORD *v11; // r9
  __int64 v12; // rax
  size_t v14; // rsi
  __int64 v15; // r8
  unsigned int v16; // [rsp+48h] [rbp+10h] BYREF

  v16 = 0;
  v2 = 0;
  if ( a2 )
  {
    qword_140C50BE0 = a2;
  }
  else if ( !qword_140C50BE0 )
  {
    return 3221225712LL;
  }
  if ( !a1 )
    return 0LL;
  DisplayContext = BgGetDisplayContext();
  LOBYTE(v5) = BgGetIsColorOverridden(&v16);
  if ( !*(_BYTE *)DisplayContext || !*(_BYTE *)(DisplayContext + 1) )
    return 3221225474LL;
  v6 = *(unsigned int *)(DisplayContext + 16);
  v7 = 24;
  if ( (_DWORD)v6 == 4 )
  {
    v8 = 24;
  }
  else
  {
    v8 = 1;
    if ( (_DWORD)v6 == 5 )
      v8 = 32;
  }
  v9 = *(_DWORD *)(a1 + 36);
  if ( v9 == 4 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    v7 = 1;
    if ( v9 == 5 )
      v7 = 32;
  }
  v10 = *(_DWORD *)(DisplayContext + 4) * (v8 >> 3) * *(_DWORD *)(DisplayContext + 12);
  if ( v10 == *(_QWORD *)(a1 + 8) )
  {
    if ( !*(_BYTE *)(a1 + 40) )
    {
      BgAcquireSpinLock(v6, v5);
      memmove(*(void **)a1, *(const void **)(DisplayContext + 32), v10);
      v2 = 1;
      goto LABEL_17;
    }
    v11 = *(_DWORD **)a1;
    if ( !(_BYTE)v5 )
    {
      memset(*(void **)a1, 0, (unsigned int)v10);
LABEL_16:
      BgAcquireSpinLock(v6, v5);
LABEL_17:
      v12 = *(_QWORD *)(a1 + 16);
      if ( v2 )
      {
        *(_DWORD *)(v12 + 4) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = *(_DWORD *)(DisplayContext + 8);
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = *(_DWORD *)(DisplayContext + 4);
      }
      else
      {
        *(_DWORD *)(v12 + 4) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 12LL) = -1;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0;
        *(_DWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0;
      }
      **(_DWORD **)(a1 + 16) = 0;
      if ( v8 != v7 )
        BgConvertResources(v7);
      *(_QWORD *)(DisplayContext + 32) = *(_QWORD *)a1;
      *(_OWORD *)(DisplayContext + 4) = *(_OWORD *)(a1 + 24);
      BgSetFrameBufferAccess(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 16) + 4LL, *(_QWORD *)(a1 + 16) + 24LL);
      byte_140C50BDC = 1;
      BgReleaseSpinLock();
      return 0LL;
    }
    v14 = v10 >> 2;
    if ( v14 )
    {
      v15 = v16;
      if ( ((unsigned __int8)v11 & 4) == 0 )
        goto LABEL_32;
      *v11 = v16;
      if ( --v14 )
      {
        ++v11;
LABEL_32:
        memset64(v11, v15 | (v15 << 32), v14 >> 1);
        v6 = 0LL;
        if ( (v14 & 1) != 0 )
          v11[v14 - 1] = v15;
      }
    }
    v2 = 1;
    goto LABEL_16;
  }
  return 3221225473LL;
}

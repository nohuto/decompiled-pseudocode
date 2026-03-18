/*
 * XREFs of ?ReadPresentHistory@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJEPEAIPEAUPRESENTHISTORYBUFFERENTRY@@PEAUPRESENTHISTORYBITS@@@Z @ 0x1C000B550
 * Callers:
 *     DxgkGetPresentHistoryInternal @ 0x1C0178B20 (DxgkGetPresentHistoryInternal.c)
 * Callees:
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x1C0046D24 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGPRESENTHISTORYTOKENQUEUE::ReadPresentHistory(
        KSPIN_LOCK *this,
        __int64 a2,
        unsigned int *a3,
        struct PRESENTHISTORYBUFFERENTRY *a4,
        struct PRESENTHISTORYBITS *a5)
{
  __int64 v8; // r12
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // eax
  unsigned int v12; // edx
  __int64 v13; // r15
  size_t v14; // r14
  unsigned int v16; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  int v26; // edx
  int v27; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-58h] BYREF
  unsigned int v29; // [rsp+C8h] [rbp+10h]
  unsigned int Size; // [rsp+D0h] [rbp+18h]

  if ( a3 && a4 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock(this, &LockHandle);
    Size = 0;
    if ( *((_DWORD *)this + 2) >= 0x800u )
    {
      WdLogSingleEntry1(1LL, 237LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v18,
            v17,
            v19,
            0,
            2,
            -1,
            (__int64)L"m_PresentHistoryHead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
            237,
            0,
            0,
            0,
            0);
      }
    }
    if ( *((_DWORD *)this + 3) >= 0x800u )
    {
      WdLogSingleEntry1(1LL, 238LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v21,
            v20,
            v22,
            0,
            2,
            -1,
            (__int64)L"m_PresentHistoryTail < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
            238,
            0,
            0,
            0,
            0);
      }
    }
    if ( *((_DWORD *)this + 4) >= 0x800u )
    {
      WdLogSingleEntry1(1LL, 239LL);
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            v24,
            v23,
            v25,
            0,
            2,
            -1,
            (__int64)L"m_PresentHistoryRead < D3DKMT_GETPRESENTHISTORY_MAXTOKENS",
            239,
            0,
            0,
            0,
            0);
      }
    }
    v8 = *((unsigned int *)this + 4);
    v9 = *((_DWORD *)this + 2);
    v10 = *a3;
    if ( v9 < (unsigned int)v8 )
    {
      v12 = *a3;
      if ( 2048 - (int)v8 < v10 )
        v12 = 2048 - v8;
      v16 = v10 - v12;
      v29 = v12;
      if ( v9 < v16 )
        v16 = *((_DWORD *)this + 2);
      Size = v16;
    }
    else
    {
      v11 = v9 - v8;
      if ( v11 < v10 )
        v10 = v11;
      v12 = v10;
      v29 = v10;
    }
    v13 = v12;
    v14 = 8LL * v12;
    memmove(a4, &this[v8 + 10], v14);
    memmove(a5, (char *)this + v8 + 16464, (unsigned int)v13);
    memmove((char *)a4 + v14, this + 10, 8LL * Size);
    memmove((char *)a5 + v13, this + 2058, Size);
    *((_DWORD *)this + 4) = ((_WORD)v29 + (_WORD)v8 + (_WORD)Size) & 0x7FF;
    *a3 = Size + v29;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        (unsigned int)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
        v26,
        v27,
        0,
        0,
        -1,
        (__int64)L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
        -1073741811LL,
        0LL,
        0LL,
        0LL,
        0LL);
    return 3221225485LL;
  }
}

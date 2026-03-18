/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x140398E44
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x1403988F4 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x140398840 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x140398D88 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140398DD8 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x140399064 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // eax
  int v7; // ecx
  PVOID v8; // r14
  size_t v9; // rbp
  void *Memory; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v12; // r12

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140C133B0;
      *(_OWORD *)(a2 + 16) = xmmword_140C133C0;
      *(_OWORD *)(a2 + 32) = xmmword_140C133D0;
      *(_OWORD *)(a2 + 48) = xmmword_140C133E0;
      *(_OWORD *)(a2 + 64) = xmmword_140C133F0;
      *(_OWORD *)(a2 + 80) = xmmword_140C13400;
      *(_OWORD *)(a2 + 96) = xmmword_140C13410;
      *(_OWORD *)(a2 + 112) = xmmword_140C13420;
    }
    else if ( qword_140C13318 || qword_140C13320 )
    {
      v8 = qword_140C13320;
      v9 = (unsigned int)Size;
      if ( !qword_140C13320 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v8 = Memory;
        memmove(Memory, qword_140C13318, v9);
      }
      if ( (int)v9 + 8 < (unsigned int)v9 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock();
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v9 + 8), 0x4B494742u);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = ((unsigned int)dword_140C132D0 >> 23) & 1;
          PoolWithTag[1] = 8;
          memmove(PoolWithTag + 2, v8, v9);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v12;
        }
        else
        {
          BgpFwAcquireLock();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        BgpFwFreeMemory(v3);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140C132B0;
    *(_OWORD *)(a2 + 16) = xmmword_140C132C0;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_140C132D0 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v7;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(BgInternal);
  }
  return v2;
}

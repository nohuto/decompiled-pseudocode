/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x14039C364
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x14039BE14 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039C2A8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039C2F8 (BgpFwAcquireLock.c)
 *     BgpFwAllocateMemory @ 0x14039C584 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140413F40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BgpFwQueryBootGraphicsInformation(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  int v7; // eax
  int v9; // ecx
  PVOID v10; // r14
  size_t v11; // rbp
  void *Memory; // rax
  _DWORD *PoolWithTag; // rax
  _DWORD *v14; // r12

  v4 = 0;
  v5 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = Size + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140C135D0;
      *(_OWORD *)(a2 + 16) = xmmword_140C135E0;
      *(_OWORD *)(a2 + 32) = xmmword_140C135F0;
      *(_OWORD *)(a2 + 48) = xmmword_140C13600;
      *(_OWORD *)(a2 + 64) = xmmword_140C13610;
      *(_OWORD *)(a2 + 80) = xmmword_140C13620;
      *(_OWORD *)(a2 + 96) = xmmword_140C13630;
      *(_OWORD *)(a2 + 112) = xmmword_140C13640;
    }
    else if ( qword_140C13538 || qword_140C13540 )
    {
      v10 = qword_140C13540;
      v11 = (unsigned int)Size;
      if ( !qword_140C13540 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)Size);
        v5 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v10 = Memory;
        memmove(Memory, qword_140C13538, v11);
      }
      if ( (int)v11 + 8 < (unsigned int)v11 )
      {
        v4 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock();
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v11 + 8), 0x4B494742u);
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          *PoolWithTag = ((unsigned int)dword_140C134F0 >> 23) & 1;
          PoolWithTag[1] = 8;
          memmove(PoolWithTag + 2, v10, v11);
          BgpFwAcquireLock();
          *(_QWORD *)a2 = v14;
        }
        else
        {
          BgpFwAcquireLock();
          v4 = -1073741801;
        }
      }
      if ( v5 )
        BgpFwFreeMemory(v5, a2, a3, a4);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140C134D0;
    *(_OWORD *)(a2 + 16) = xmmword_140C134E0;
    *(_DWORD *)(a2 + 20) = 0;
    v7 = *(_DWORD *)(a2 + 20);
    if ( (dword_140C134F0 & 2) != 0 )
      v7 = 1;
    *(_DWORD *)(a2 + 20) = v7;
    if ( ((BYTE2(BgInternal) - 1) & 0xFD) == 0 )
    {
      v9 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v9;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(BgInternal);
  }
  return v4;
}

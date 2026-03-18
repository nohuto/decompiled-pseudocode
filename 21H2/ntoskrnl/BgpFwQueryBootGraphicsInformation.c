/*
 * XREFs of BgpFwQueryBootGraphicsInformation @ 0x1403AA7E0
 * Callers:
 *     BgQueryBootGraphicsInformation @ 0x1403A7B10 (BgQueryBootGraphicsInformation.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x1403A7BF0 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403A7C40 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403A8CB4 (BgpFwFreeMemory.c)
 *     BgpFwAllocateMemory @ 0x1403AA2B8 (BgpFwAllocateMemory.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  _DWORD *Pool2; // rax
  _DWORD *v12; // r15

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = dword_140C0DFE8 + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140C0E070;
      *(_OWORD *)(a2 + 16) = xmmword_140C0E080;
      *(_OWORD *)(a2 + 32) = xmmword_140C0E090;
      *(_OWORD *)(a2 + 48) = xmmword_140C0E0A0;
      *(_OWORD *)(a2 + 64) = xmmword_140C0E0B0;
      *(_OWORD *)(a2 + 80) = xmmword_140C0E0C0;
      *(_OWORD *)(a2 + 96) = xmmword_140C0E0D0;
      *(_OWORD *)(a2 + 112) = xmmword_140C0E0E0;
    }
    else if ( qword_140C0DFD8 || qword_140C0DFE0 )
    {
      v8 = qword_140C0DFE0;
      v9 = (unsigned int)dword_140C0DFE8;
      if ( !qword_140C0DFE0 )
      {
        Memory = (void *)BgpFwAllocateMemory((unsigned int)dword_140C0DFE8);
        v3 = (__int64)Memory;
        if ( !Memory )
          return (unsigned int)-1073741801;
        v8 = Memory;
        memmove(Memory, qword_140C0DFD8, v9);
      }
      if ( (int)v9 + 8 < (unsigned int)v9 )
      {
        v2 = -1073741675;
      }
      else
      {
        BgpFwReleaseLock();
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v9 + 8), 1263093570LL);
        v12 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = ((unsigned int)dword_140C0DF90 >> 23) & 1;
          Pool2[1] = 8;
          memmove(Pool2 + 2, v8, v9);
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
    *(_OWORD *)a2 = xmmword_140C0DF70;
    *(_OWORD *)(a2 + 16) = xmmword_140C0DF80;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_140C0DF90 & 2) != 0 )
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

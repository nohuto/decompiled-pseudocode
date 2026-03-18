/*
 * XREFs of PpmUpdateIdleVeto @ 0x140566500
 * Callers:
 *     PpmUpdatePlatformIdleVeto @ 0x140566760 (PpmUpdatePlatformIdleVeto.c)
 *     PpmUpdateProcessorIdleVeto @ 0x1405669D0 (PpmUpdateProcessorIdleVeto.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140288C20 (RtlGetInterruptTimePrecise.c)
 *     memset @ 0x140411300 (memset.c)
 *     PopUpdateNonAttributedCpuTimeReference @ 0x140574E48 (PopUpdateNonAttributedCpuTimeReference.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmUpdateIdleVeto(char a1, unsigned int a2, __int64 a3, _BYTE *a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  _DWORD *v10; // rdi
  __int64 v12; // rax
  _QWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *PoolWithTag; // rax
  _QWORD *v17; // rdi
  int v18; // eax
  __int64 InterruptTimePrecise; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rax
  LARGE_INTEGER v23; // [rsp+58h] [rbp+20h] BYREF

  v4 = 0;
  *a4 = 0;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)(a3 + 32);
  v9 = (_QWORD *)(a3 + 8);
  v10 = *(_DWORD **)(a3 + 8);
  if ( a1 )
  {
    while ( v10 != (_DWORD *)v9 )
    {
      if ( v10[4] == a2 )
      {
        v18 = v10[5];
        if ( v18 == -1 )
          return (unsigned int)-1073741675;
        else
          v10[5] = v18 + 1;
        return v4;
      }
      v10 = *(_DWORD **)v10;
    }
    if ( v8 )
    {
      if ( a2 > *(_DWORD *)(a3 + 28) )
        return (unsigned int)-1073741811;
      v17 = (_QWORD *)(v8 + ((unsigned __int64)(a2 - 1) << 6));
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v23);
      v17[4] = InterruptTimePrecise;
      if ( !*(_BYTE *)(a3 + 24) )
        v17[6] = InterruptTimePrecise;
      if ( *(_BYTE *)(a3 + 25) )
      {
        LOBYTE(v20) = 1;
        PopUpdateNonAttributedCpuTimeReference(v20);
      }
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40uLL, 0x694D5050u);
      v17 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      memset(PoolWithTag, 0, 0x40uLL);
    }
    *((_DWORD *)v17 + 4) = a2;
    *((_DWORD *)v17 + 5) = 1;
    if ( (_QWORD *)*v9 == v9 )
    {
      _InterlockedOr((volatile signed __int32 *)a3, 1u);
      *a4 = 1;
    }
    v21 = (_QWORD *)v9[1];
    if ( (_QWORD *)*v21 == v9 )
    {
      *v17 = v9;
      v17[1] = v21;
      *v21 = v17;
      v9[1] = v17;
      return v4;
    }
    goto LABEL_38;
  }
  while ( 1 )
  {
    if ( v10 == (_DWORD *)v9 )
      return (unsigned int)-1073741811;
    if ( v10[4] == a2 )
      break;
    v10 = *(_DWORD **)v10;
  }
  if ( v10[5]-- == 1 )
  {
    v12 = *(_QWORD *)v10;
    if ( *(_DWORD **)(*(_QWORD *)v10 + 8LL) == v10 )
    {
      v13 = (_QWORD *)*((_QWORD *)v10 + 1);
      if ( (_DWORD *)*v13 == v10 )
      {
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        if ( v8 )
        {
          *(_OWORD *)v10 = 0LL;
          v14 = RtlGetInterruptTimePrecise(&v23);
          *((_QWORD *)v10 + 5) += v14 - *((_QWORD *)v10 + 4);
          v15 = *((_QWORD *)v10 + 6);
          *((_QWORD *)v10 + 4) = 0LL;
          if ( v15 )
          {
            *((_QWORD *)v10 + 6) = 0LL;
            *((_QWORD *)v10 + 7) += v14 - v15;
          }
          if ( *(_BYTE *)(a3 + 25) )
            PopUpdateNonAttributedCpuTimeReference(0LL);
        }
        else
        {
          ExFreePoolWithTag(v10, 0x694D5050u);
        }
        if ( (_QWORD *)*v9 == v9 )
        {
          _InterlockedAnd((volatile signed __int32 *)a3, 0xFFFFFFFE);
          *a4 = 1;
        }
        return v4;
      }
    }
LABEL_38:
    __fastfail(3u);
  }
  return v4;
}

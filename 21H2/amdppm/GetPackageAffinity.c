/*
 * XREFs of GetPackageAffinity @ 0x1C002DCDC
 * Callers:
 *     InitCpcStatesInternal @ 0x1C002DEF8 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetPackageAffinity(__int64 a1, __int64 a2)
{
  int v4; // ebx
  _QWORD *PoolWithTag; // rsi
  unsigned int v6; // eax
  unsigned int v7; // ebp
  _QWORD *v8; // rdi
  unsigned __int16 i; // r14
  __int64 v10; // rax
  SIZE_T NumberOfBytes; // [rsp+80h] [rbp+18h] BYREF
  int v13; // [rsp+88h] [rbp+20h] BYREF

  KeInitializeAffinityEx(a2);
  LODWORD(NumberOfBytes) = 0;
  v13 = 3;
  v4 = NtQuerySystemInformationEx(107LL, &v13, 4LL, 0LL, 0, &NumberOfBytes);
  if ( v4 == -1073741820 && (_DWORD)NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x72637250u);
    if ( PoolWithTag )
    {
      v13 = 3;
      v4 = NtQuerySystemInformationEx(107LL, &v13, 4LL, PoolWithTag, NumberOfBytes, &NumberOfBytes);
      if ( v4 >= 0 )
      {
        v6 = NumberOfBytes;
        if ( (_DWORD)NumberOfBytes )
        {
          v7 = 0;
          v8 = PoolWithTag;
          v4 = -1073741275;
          while ( v7 < v6 )
          {
            for ( i = 0; i < *((_WORD *)v8 + 15); ++i )
              KeAddGroupAffinityEx(a2, LOWORD(v8[2 * i + 5]), v8[2 * i + 4]);
            if ( (unsigned int)KeCheckProcessorAffinityEx(a2, *(unsigned int *)(a1 + 56)) )
            {
              v4 = 0;
              break;
            }
            v10 = *((unsigned int *)v8 + 1);
            v7 += v10;
            v8 = (_QWORD *)((char *)v8 + v10);
            KeInitializeAffinityEx(a2);
            v6 = NumberOfBytes;
          }
        }
      }
      ExFreePoolWithTag(PoolWithTag, 0x72637250u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}

/*
 * XREFs of MiProcessVaRangesInfoClass @ 0x140700488
 * Callers:
 *     NtSetInformationVirtualMemory @ 0x140606910 (NtSetInformationVirtualMemory.c)
 *     MmSetPriorityVaRanges @ 0x1408C4F5C (MmSetPriorityVaRanges.c)
 * Callees:
 *     MiObtainReferencedVadEx @ 0x14020E520 (MiObtainReferencedVadEx.c)
 *     MiMoveDirtyBitsToPfns @ 0x140221080 (MiMoveDirtyBitsToPfns.c)
 *     MiIsVadLarge @ 0x140224350 (MiIsVadLarge.c)
 *     MiUnlockAndDereferenceVad @ 0x1402AD420 (MiUnlockAndDereferenceVad.c)
 *     MiVadSupportsPrivateCommit @ 0x1402AD6E0 (MiVadSupportsPrivateCommit.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 */

__int64 __fastcall MiProcessVaRangesInfoClass(unsigned __int64 a1, __int128 *a2, int a3, unsigned int a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  unsigned __int64 v10; // r14
  volatile signed __int32 *v11; // rax
  volatile signed __int32 *v12; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  __int64 v17; // r10
  unsigned int v18; // [rsp+30h] [rbp-58h] BYREF
  __int128 v19; // [rsp+38h] [rbp-50h]
  int v20; // [rsp+90h] [rbp+8h]

  v18 = 0;
  v4 = 0;
  v5 = 0;
  if ( a1 )
  {
    while ( 2 )
    {
      v19 = *a2;
      v8 = *((_QWORD *)&v19 + 1);
      v9 = v19;
      do
      {
        v10 = v9;
        v11 = MiObtainReferencedVadEx(v9, 0, (int *)&v18);
        v12 = v11;
        if ( !v11 )
          return v18;
        v20 = 0;
        v13 = *((unsigned int *)v11 + 7) | ((unsigned __int64)*((unsigned __int8 *)v11 + 33) << 32);
        if ( ((v9 + v8 - 1) | 0xFFF) >> 12 > v13 )
        {
          v20 = 1;
          v17 = (v13 << 12) | 0xFFF;
          v8 = v9 - v17 + v8 - 1;
          v9 = v17 + 1;
        }
        if ( !MiVadSupportsPrivateCommit((__int64)v11) || (unsigned int)MiIsVadLarge(v14) )
        {
          v4 = 1073741849;
        }
        else if ( a3 == 1 )
        {
          MiWalkVaRange(v10, v15, (__int64)v12, 2, a4);
        }
        else if ( (v12[12] & 0x5100000) == 0x4100000 )
        {
          v4 = -1073741637;
        }
        else
        {
          MiMoveDirtyBitsToPfns(v10, v15, 0LL, 2);
        }
        MiUnlockAndDereferenceVad((PVOID)v12);
      }
      while ( v20 == 1 );
      ++v5;
      ++a2;
      if ( v5 < a1 )
        continue;
      break;
    }
  }
  return v4;
}

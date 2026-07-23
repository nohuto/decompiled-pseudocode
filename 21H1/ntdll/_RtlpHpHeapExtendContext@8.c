/*
 * XREFs of _RtlpHpHeapExtendContext@8 @ 0x4B378E8C
 * Callers:
 *     _RtlpHpSegLfhExtendContext@8 @ 0x4B37BCF0 (_RtlpHpSegLfhExtendContext@8.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlAcquireReleaseSRWLockExclusive@4 @ 0x4B34A390 (_RtlAcquireReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAllocVA@28 @ 0x4B377E59 (_RtlpHpAllocVA@28.c)
 *     _RtlpHpMetadataCommit@24 @ 0x4B3793EF (_RtlpHpMetadataCommit@24.c)
 */

signed __int32 __fastcall RtlpHpHeapExtendContext(int a1, int a2)
{
  _RTL_SRWLOCK *v3; // ebx
  int v4; // edx
  signed __int32 v5; // edi
  int v6; // ecx
  unsigned int v7; // edx
  unsigned int v8; // edi
  bool v9; // zf
  NTSTATUS v10; // eax
  unsigned int v12; // [esp-8h] [ebp-20h]
  unsigned int v13; // [esp-4h] [ebp-1Ch]
  PVOID v14; // [esp+Ch] [ebp-Ch] BYREF
  unsigned int v15; // [esp+10h] [ebp-8h] BYREF
  int v16; // [esp+14h] [ebp-4h]

  v16 = a2;
  v3 = (_RTL_SRWLOCK *)(a1 + 180);
  RtlAcquireReleaseSRWLockExclusive((PRTL_SRWLOCK)(a1 + 180));
  while ( 1 )
  {
    v4 = v16;
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 + 184);
      if ( (unsigned int)(v5 + v4) > *(_DWORD *)(a1 + 188) )
        break;
      v3 = (_RTL_SRWLOCK *)(a1 + 180);
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 184), v5 + v4, v5) == v5 )
        return v5;
    }
    RtlAcquireSRWLockExclusive(v3);
    v6 = *(_DWORD *)(a1 + 184);
    v7 = *(_DWORD *)(a1 + 188);
    if ( v6 + v16 > v7 )
      break;
LABEL_7:
    RtlReleaseSRWLockExclusive(v3);
  }
  v13 = *(_DWORD *)(a1 + 4);
  v14 = *(PVOID *)(a1 + 188);
  v12 = *(_DWORD *)a1;
  v8 = (v6 - v7 + v16 + 4095) & 0xFFFFF000;
  v9 = (*(_BYTE *)(a1 + 22) & 1) == 0;
  v15 = v8;
  if ( v9 )
  {
    v10 = RtlpHpAllocVA(&v14, (int *)&v15, 0, 4096, 4u, v12, v13);
    v8 = v15;
  }
  else
  {
    v10 = RtlpHpMetadataCommit(v8, 1, v12, v13);
  }
  if ( v10 >= 0 )
  {
    *(_DWORD *)(a1 + 188) += v8;
    goto LABEL_7;
  }
  v5 = 0;
  RtlReleaseSRWLockExclusive(v3);
  return v5;
}

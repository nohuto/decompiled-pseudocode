/*
 * XREFs of RtlpHpLfhSubsegmentCreate @ 0x18002F380
 * Callers:
 *     RtlpHpLfhSlotAllocate @ 0x18002C2B0 (RtlpHpLfhSlotAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180021760 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x180021920 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18002F690 (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpLfhBucketSubsegmentStatsUpdate @ 0x18008A1F8 (RtlpHpLfhBucketSubsegmentStatsUpdate.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0B90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RtlpHpLfhSubsegmentCreate(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  char v4; // r9
  __int64 v5; // r12
  int v9; // r13d
  int v10; // ebx
  unsigned int v11; // ecx
  __int16 v12; // r10
  unsigned int v13; // eax
  unsigned int v14; // r8d
  bool v15; // dl
  char v16; // cl
  char v17; // dl
  char v18; // cl
  unsigned int v19; // edx
  unsigned int v20; // r8d
  int v21; // edx
  unsigned int v22; // r10d
  int v23; // eax
  char v24; // dl
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ebp
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  int v30; // r15d
  __int64 v31; // r14
  unsigned int v32; // ebx
  unsigned int v33; // ecx
  char v35[4]; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v36; // [rsp+34h] [rbp-54h]
  char v37; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v38; // [rsp+98h] [rbp+10h]
  unsigned int v39; // [rsp+A0h] [rbp+18h]
  unsigned int v40; // [rsp+A8h] [rbp+20h]

  v39 = a3;
  v3 = *(unsigned __int8 *)(a2 + 1);
  v4 = RtlpHpLfhPerfFlags;
  v5 = 0LL;
  v9 = (unsigned __int16)RtlpBucketBlockSizes[v3];
  if ( (RtlpHpLfhPerfFlags & 1) != 0 )
  {
    LODWORD(v3) = RtlpHpLfhBucketSubsegmentStatsUpdate(a1 + 64, *(unsigned __int8 *)(a2 + 1));
    v4 = RtlpHpLfhPerfFlags;
    v10 = v3;
    LOBYTE(v3) = *(_BYTE *)(a2 + 1);
  }
  else
  {
    v10 = 0;
  }
  v11 = *(unsigned __int8 *)(a2 + 2);
  v12 = RtlpBucketBlockSizes[(unsigned __int8)v3];
  v13 = *(_DWORD *)(a2 + 56);
  if ( !v10 )
  {
    v13 >>= 3;
    if ( v11 != 1 )
      v13 /= v11;
  }
  v14 = v13;
  if ( v13 == 0xFFFFFFFFLL )
    v14 = -1;
  v15 = v11 > 1;
  v16 = (v11 > 1) - 1;
  if ( (unsigned __int16)v12 >= 0x100u )
    v16 = v15;
  v17 = v16;
  v18 = v16 - 1;
  if ( !*(_QWORD *)(a2 + 64) )
    v18 = v17;
  v19 = 1 << (3 - v18);
  if ( v14 >= v19 )
    v19 = v14;
  if ( v19 < 4 )
  {
    v19 = 4;
  }
  else if ( v19 > 0x400 )
  {
    v19 = 1024;
  }
  v20 = v9 * v19;
  v21 = (8 * (((unsigned __int64)(2 * v19) + 63) >> 6) + 63) & 0xFFFFFFF0;
  v22 = v21 + 2 * ((v21 + v20 + 4095) >> 12);
  v23 = v22 + v20;
  if ( v22 + v20 >= 0xF0000 )
    v23 = 983040;
  v24 = 18;
  _BitScanReverse(&v25, v23 - 1);
  v38 = v25;
  v26 = v25 + 1;
  if ( v26 <= 7 )
  {
    v26 = 7;
  }
  else if ( v26 >= 0x12 )
  {
    LOBYTE(v26) = 18;
    goto LABEL_23;
  }
  if ( v26 <= 0xC )
    LOBYTE(v26) = 12;
LABEL_23:
  v27 = 1 << v26;
  if ( (v4 & 8) == 0 || v22 > v20 >> 6 )
    goto LABEL_33;
  if ( v20 >= 0xF0000 )
    v20 = 983040;
  _BitScanReverse(&v28, v20 - 1);
  v40 = v28;
  v29 = v28 + 1;
  if ( v29 <= 7 )
  {
    v29 = 7;
LABEL_29:
    v24 = v29;
    if ( v29 <= 0xC )
      v24 = 12;
    goto LABEL_31;
  }
  if ( v29 < 0x12 )
    goto LABEL_29;
LABEL_31:
  if ( v27 > 1 << v24 )
    v27 = 1 << v24;
LABEL_33:
  v30 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
  v31 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, char *, char *))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 8)))(
          *(_QWORD *)a1,
          v27,
          a3,
          &v37,
          v35);
  if ( v31 )
  {
    if ( v10 && (RtlpHpLfhPerfFlags & 2) != 0 || (v37 & 1) != 0 )
    {
      v32 = v27;
    }
    else if ( (RtlpHpAppCompatFlags & 4) != 0 )
    {
      v32 = v27;
    }
    else
    {
      v32 = 2 * v9;
      if ( ((v32 - 1) & v32) != 0 )
      {
        _BitScanReverse(&v33, v32);
        v36 = v33;
        v32 = 1 << (v33 + 1);
      }
      if ( v32 <= 0x1000 )
        v32 = 4096;
      if ( v32 >= v27 )
        v32 = v27;
    }
    if ( ((int (__fastcall *)(_QWORD, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 24)))(
           *(_QWORD *)a1,
           v31,
           v32) < 0 )
    {
      ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 16)))(
        *(_QWORD *)a1,
        v31,
        v27,
        v39);
    }
    else
    {
      RtlpHpLfhSubsegmentInitialize(v31, v27, v32, v9, a1);
      _InterlockedIncrement64((volatile signed __int64 *)(a2 + 64));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 56), *(unsigned __int16 *)(v31 + 34));
      v5 = v31;
    }
  }
  if ( !v30 )
    RtlReleaseSRWLockShared((PRTL_SRWLOCK)(a1 + 72));
  return v5;
}

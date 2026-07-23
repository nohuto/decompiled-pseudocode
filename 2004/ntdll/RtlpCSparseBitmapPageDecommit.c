/*
 * XREFs of RtlpCSparseBitmapPageDecommit @ 0x180004F78
 * Callers:
 *     RtlCSparseBitmapBitsClear @ 0x180004C10 (RtlCSparseBitmapBitsClear.c)
 * Callees:
 *     RtlpCSparseBitmapUnlock @ 0x18000643C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapLock @ 0x180006534 (RtlpCSparseBitmapLock.c)
 *     RtlpWakeByAddress @ 0x18006311C (RtlpWakeByAddress.c)
 *     RtlpWaitOnAddress @ 0x1800635A4 (RtlpWaitOnAddress.c)
 *     ZwFreeVirtualMemory @ 0x18009D1D0 (ZwFreeVirtualMemory.c)
 */

char __fastcall RtlpCSparseBitmapPageDecommit(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v4; // r14
  __int64 v6; // r13
  const signed __int64 *v7; // rax
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  const signed __int64 *v10; // r9
  __int64 v11; // r8
  const signed __int64 *v12; // rax
  const signed __int64 *v13; // r8
  const signed __int64 *v14; // r9
  signed __int64 v15; // r10
  bool j; // zf
  bool v17; // zf
  signed __int32 v19[14]; // [rsp+0h] [rbp-D8h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-A0h]
  const signed __int64 *v21; // [rsp+40h] [rbp-98h]
  unsigned __int64 i; // [rsp+48h] [rbp-90h]
  __int64 v23; // [rsp+50h] [rbp-88h]
  unsigned __int64 v24; // [rsp+58h] [rbp-80h]
  unsigned __int64 v25; // [rsp+60h] [rbp-78h]
  __int64 v26; // [rsp+68h] [rbp-70h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v29[16]; // [rsp+80h] [rbp-58h] BYREF
  __int128 v30; // [rsp+90h] [rbp-48h]
  int v31; // [rsp+F0h] [rbp+18h]

  v4 = a2;
  v6 = a1;
  v23 = a1;
  v31 = 0;
  v7 = *(const signed __int64 **)(a1 + 8);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = v7;
  v8 = a2 << 15;
  v24 = a2 << 15;
  v9 = 0x8000LL;
  if ( v20 - (a2 << 15) <= 0x8000 )
    v9 = v20 - (a2 << 15);
  v25 = v9;
  v30 = 0LL;
  while ( 1 )
  {
    if ( a3 )
      goto LABEL_23;
    if ( v8 >= v20 )
    {
LABEL_14:
      LODWORD(v12) = 0;
      goto LABEL_20;
    }
    if ( v9 <= 1 )
    {
      if ( v9 != 1 )
        goto LABEL_14;
      LODWORD(v12) = !_bittest64(v21, v8);
    }
    else
    {
      if ( v20 - v8 < v9 )
        goto LABEL_14;
      a2 = (unsigned __int64)&v21[v8 >> 6];
      i = a2;
      v10 = &v21[(v9 + v8 - 1) >> 6];
      v11 = *(_QWORD *)a2;
      if ( (const signed __int64 *)a2 == v10 )
      {
        a2 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8;
      }
      else
      {
        if ( (v11 & (-1LL << v8)) != 0 )
          goto LABEL_14;
        a2 += 8LL;
        for ( i = a2; ; i = a2 )
        {
          v11 = *(_QWORD *)a2;
          if ( (const signed __int64 *)a2 == v10 )
            break;
          if ( v11 )
            goto LABEL_14;
          a2 += 8LL;
        }
        a2 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v8 - 1);
      }
      LODWORD(v12) = (v11 & a2) == 0;
    }
LABEL_20:
    v19[12] = (int)v12;
    if ( !(_DWORD)v12 )
      goto LABEL_21;
LABEL_23:
    a3 = 0;
    RtlpCSparseBitmapLock(a1, 1LL, v29);
    v26 = *(_QWORD *)(a1 + 32);
    if ( v26 == -1 )
      break;
    RtlpCSparseBitmapUnlock(v29);
    RtlpWaitOnAddress(v6 + 32, (unsigned int)&v26, 8, 0, RtlpWaitOnAddressSpinCycleCount);
    v12 = *(const signed __int64 **)a1;
    if ( !_bittest64(*(const signed __int64 **)a1, v4) )
      goto LABEL_21;
    v6 = v23;
  }
  *(_QWORD *)(v6 + 32) = v4;
  RtlpCSparseBitmapUnlock(v29);
  v31 = 1;
  v12 = *(const signed __int64 **)a1;
  if ( !_bittest64(*(const signed __int64 **)a1, v4) )
    goto LABEL_21;
  LOBYTE(v12) = v20;
  if ( v8 >= v20 )
    goto LABEL_21;
  if ( v9 <= 1 )
  {
    if ( v9 != 1 )
      goto LABEL_21;
    if ( !_bittest64(v21, v8) )
    {
LABEL_36:
      _interlockedbittestandreset64(*(volatile signed __int32 **)a1, v4);
      BaseAddress = (PVOID)(*(_QWORD *)(a1 + 8) + (v4 << 12));
      RegionSize = 4096LL;
      LOBYTE(v12) = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
      goto LABEL_21;
    }
    LOBYTE(v12) = 0;
LABEL_35:
    if ( !(_BYTE)v12 )
      goto LABEL_21;
    goto LABEL_36;
  }
  LOBYTE(v12) = v20 - v8;
  if ( v20 - v8 < v9 )
    goto LABEL_21;
  a2 = (unsigned __int64)v21;
  v13 = &v21[v8 >> 6];
  v14 = &v21[(v9 + v8 - 1) >> 6];
  v15 = *v13;
  if ( v13 == v14 )
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)v9) << v8;
    v17 = (v15 & a2) == 0;
LABEL_34:
    LOBYTE(v12) = v17;
    goto LABEL_35;
  }
  v12 = (const signed __int64 *)(-1LL << v8);
  for ( j = (v15 & (-1LL << v8)) == 0; j; j = *v13 == 0 )
  {
    if ( ++v13 == v14 )
    {
      a2 = 0xFFFFFFFFFFFFFFFFuLL >> ~((unsigned __int8)v9 + (unsigned __int8)v8 - 1);
      v17 = (a2 & *v13) == 0;
      goto LABEL_34;
    }
  }
LABEL_21:
  if ( v31 )
  {
    *(_QWORD *)(a1 + 32) = -1LL;
    _InterlockedOr(v19, 0);
    LOBYTE(a2) = 1;
    LOBYTE(v12) = RtlpWakeByAddress(a1 + 32, a2);
  }
  return (char)v12;
}

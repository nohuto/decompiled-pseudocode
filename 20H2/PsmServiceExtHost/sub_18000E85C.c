/*
 * XREFs of sub_18000E85C @ 0x18000E85C
 * Callers:
 *     sub_18000B858 @ 0x18000B858 (sub_18000B858.c)
 * Callees:
 *     sub_180009B2C @ 0x180009B2C (sub_180009B2C.c)
 *     sub_18000ECB0 @ 0x18000ECB0 (sub_18000ECB0.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_1800276D4 @ 0x1800276D4 (sub_1800276D4.c)
 *     sub_180032190 @ 0x180032190 (sub_180032190.c)
 *     sub_18003CE24 @ 0x18003CE24 (sub_18003CE24.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000E85C(__int64 a1, __int64 a2, _QWORD *a3)
{
  DWORD v3; // r15d
  _QWORD *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  _QWORD *Value; // r14
  __int64 v10; // r14
  unsigned __int8 IsDynamicKey; // al
  __int64 v12; // rdx
  int v13; // r12d
  __int64 v14; // rcx
  unsigned int v15; // ebx
  PVOID v17; // rax
  __int64 *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  _OWORD *v21; // rax
  _OWORD *v22; // rdx
  __int128 v23; // xmm1
  PVOID Heap; // rax
  PVOID v25; // rax
  __int64 v26; // [rsp+30h] [rbp-58h]
  __int64 v27; // [rsp+90h] [rbp+8h]
  __int64 v28; // [rsp+98h] [rbp+10h]
  _QWORD *v30; // [rsp+A8h] [rbp+20h]

  v3 = dwTlsIndex;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v3) & 0xFFFFFFFFFFFFF800uLL) != 0 )
      __int2c();
    *Value |= 0x800uLL;
    ++Value[12];
  }
  RtlAcquireSRWLockShared(a1);
  v10 = sub_18000ECB0(a1 + 56, *(unsigned int *)(a2 + 532), sub_180036330);
  if ( !v10 )
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x60uLL);
    v10 = (__int64)Heap;
    if ( !Heap )
      goto LABEL_38;
    memset(Heap, 0, 0x60uLL);
    sub_18003CE24(sub_180034B80, a1 + 16, v10);
    *(_DWORD *)(v10 + 88) = *(_DWORD *)(a2 + 532);
    sub_180032190(a1 + 56, *(_DWORD *)(a2 + 532), (unsigned int)sub_180036330, v10);
    if ( v27 != v10 )
    {
      sub_1800274E0(v10);
      v10 = v27;
    }
  }
  v6 = sub_18000ECB0(v10 + 40, a2 + 464, sub_1800346E0);
  if ( !v6 )
  {
    v25 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xA0uLL);
    v6 = (__int64)v25;
    if ( !v25 )
      goto LABEL_38;
    memset(v25, 0, 0xA0uLL);
    sub_180009B2C((__int64)sub_180034B80, v10, (_QWORD *)v6);
    *(_OWORD *)(v6 + 88) = *(_OWORD *)(a2 + 464);
    *(_OWORD *)(v6 + 104) = *(_OWORD *)(a2 + 480);
    *(_OWORD *)(v6 + 120) = *(_OWORD *)(a2 + 496);
    *(_OWORD *)(v6 + 136) = *(_OWORD *)(a2 + 512);
    *(_DWORD *)(v6 + 152) = *(_DWORD *)(a2 + 528);
    sub_180032190(v10 + 40, a2 + 464, (unsigned int)sub_1800346E0, v6);
    if ( v28 != v6 )
    {
      sub_1800274E0(v6);
      v6 = v28;
    }
  }
  IsDynamicKey = PsmIsDynamicKey(a2);
  v13 = IsDynamicKey;
  if ( !IsDynamicKey )
    v4 = (_QWORD *)sub_18000ECB0(v6 + 40, a2, sub_180035B70);
  if ( !v4 )
  {
    v19 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x228uLL);
    v4 = v19;
    if ( !v19 )
      goto LABEL_38;
    memset(v19, 0, 0x228uLL);
    sub_180009B2C((__int64)sub_180034B80, v6, v4);
    v20 = 3LL;
    v21 = v4 + 11;
    v22 = (_OWORD *)a2;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      v23 = v22[7];
      v22 += 8;
      *(v21 - 1) = v23;
      --v20;
    }
    while ( v20 );
    *v21 = *v22;
    v21[1] = v22[1];
    v21[2] = v22[2];
    v21[3] = v22[3];
    v21[4] = v22[4];
    sub_180032190(v6 + 40, a2, (unsigned int)sub_180035B70, (_DWORD)v4);
    if ( v30 != v4 )
    {
      sub_1800274E0(v4);
      v4 = v30;
    }
  }
  if ( !v13 )
    v5 = sub_18000ECB0(v4 + 5, a2, sub_180037580);
  if ( v5 )
  {
    v14 = *(_QWORD *)(v5 + 88);
LABEL_14:
    v15 = 0;
    *a3 = v14;
    goto LABEL_15;
  }
  v17 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x268uLL);
  v5 = (__int64)v17;
  if ( v17 )
  {
    sub_1800276D4(v4, a2, v17);
    sub_180032190((_DWORD)v4 + 40, a2, (unsigned int)sub_180037580, v5);
    if ( v26 == v5 )
    {
      v18 = (__int64 *)(v5 + 88);
      v5 = 0LL;
      v14 = *v18;
    }
    else
    {
      sub_1800274E0(v5);
      v14 = *(_QWORD *)(v26 + 88);
      v5 = v26;
    }
    goto LABEL_14;
  }
LABEL_38:
  v15 = -1073741801;
LABEL_15:
  sub_18001E830(v14, v12, 11LL);
  RtlReleaseSRWLockShared(a1);
  if ( v5 )
    sub_1800274E0(v5);
  if ( v4 )
    sub_1800274E0(v4);
  if ( v6 )
    sub_1800274E0(v6);
  if ( v10 )
    sub_1800274E0(v10);
  return v15;
}

/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019880
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x1C00044B4 (GetSrbExtension.c)
 *     NVMeFreeDmaBuffer @ 0x1C000451C (NVMeFreeDmaBuffer.c)
 *     memset @ 0x1C00054C0 (memset.c)
 *     GetLocalCommand @ 0x1C000A2E8 (GetLocalCommand.c)
 *     NVMeReenumerateCompareAndMerge @ 0x1C0019148 (NVMeReenumerateCompareAndMerge.c)
 *     NVMeReenumerateNameSpaceIdentify @ 0x1C001963C (NVMeReenumerateNameSpaceIdentify.c)
 *     NVMeVersionCheck @ 0x1C001B194 (NVMeVersionCheck.c)
 */

void __fastcall NVMeReenumerateNameSpaceIdentifyCompletion(__int64 a1, __int64 a2)
{
  __int64 v3; // r11
  __int64 SrbExtension; // rsi
  __int64 v5; // r8
  __int64 v6; // r10
  unsigned int *v7; // r12
  __int64 v8; // r13
  __int64 v9; // r14
  unsigned int v10; // edi
  void *v11; // r9
  unsigned int v12; // r15d
  __int64 v13; // r14
  __int64 *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // [rsp+28h] [rbp-48h]
  __int64 v17; // [rsp+30h] [rbp-40h]
  int v18; // [rsp+38h] [rbp-38h]
  int v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]
  __int64 v24; // [rsp+68h] [rbp-8h]
  __int64 savedregs; // [rsp+70h] [rbp+0h]
  __int64 savedregsa; // [rsp+70h] [rbp+0h]
  __int64 savedregs_8; // [rsp+78h] [rbp+8h]
  __int64 savedregs_8a; // [rsp+78h] [rbp+8h]
  __int64 savedregs_16; // [rsp+80h] [rbp+10h]
  __int64 savedregs_16a; // [rsp+80h] [rbp+10h]
  __int64 savedregs_24; // [rsp+88h] [rbp+18h]
  __int64 savedregs_24a; // [rsp+88h] [rbp+18h]
  void *v33; // [rsp+B0h] [rbp+40h] BYREF
  __int64 LocalCommand; // [rsp+C8h] [rbp+58h]

  LocalCommand = GetLocalCommand(a1, a2);
  SrbExtension = GetSrbExtension(v3);
  v6 = 1LL;
  v7 = *(unsigned int **)(*(_QWORD *)(v5 + 96) + 4232LL);
  v8 = 2LL;
  v9 = *(_QWORD *)(SrbExtension + 4200);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 1608) + 516LL);
  if ( v10 > 0xFF )
    v10 = 255;
  v11 = 0LL;
  if ( v7 )
  {
    v12 = *v7;
    if ( *(_BYTE *)(v5 + 11) == 1
      && (*(_BYTE *)(a1 + 16)
       || v10 <= 1
       || !(unsigned __int8)NVMeVersionCheck(a1)
       || *(_BYTE *)(v9 + 4LL * (*(_BYTE *)(v9 + 26) & 0xF) + 130) != (_BYTE)v11
       || *(void **)v9 != v11) )
    {
      v33 = v11;
      StorPortExtendedFunction(
        0LL,
        a1,
        104LL,
        1701672526LL,
        (unsigned int)&v33,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        savedregs,
        savedregs_8,
        savedregs_16,
        savedregs_24);
      if ( !v33 )
      {
        v13 = 1LL;
        v12 = v10;
        StorPortExtendedFunction(
          85LL,
          a1,
          0LL,
          1LL,
          10,
          L"Reenumeration Resource Fail",
          8LL,
          2,
          0,
          0LL,
          L"NSID",
          v10,
          0LL,
          0LL,
          savedregsa,
          savedregs_8a,
          savedregs_16a,
          savedregs_24a);
        v5 = LocalCommand;
        v11 = 0LL;
        goto LABEL_15;
      }
      memset(v33, 0, 0x68uLL);
      v6 = 1LL;
      v5 = LocalCommand;
      v11 = 0LL;
      *((_BYTE *)v33 + 64) = *(_BYTE *)(v9 + 26) & 0xF;
      *((_DWORD *)v33 + 12) = *(_DWORD *)(v9 + 4LL * (*(_BYTE *)(v9 + 26) & 0xF) + 128);
      *((_DWORD *)v33 + 13) = 1 << *((_BYTE *)v33 + 50);
      *((_QWORD *)v33 + 7) = *(_QWORD *)v9;
      *((_BYTE *)v33 + 65) = *(_BYTE *)(v9 + 24) & 1;
      *((_BYTE *)v33 + 66) = *(_BYTE *)(v9 + 29) & 7;
      *((_WORD *)v33 + 46) = *(_WORD *)(v9 + 46);
      *(_QWORD *)((char *)v33 + 84) = *(_QWORD *)(v9 + 120);
      *(_OWORD *)((char *)v33 + 68) = *(_OWORD *)(v9 + 104);
      *(_WORD *)v33 = 1;
      *((_DWORD *)v33 + 1) = 4;
      *((_WORD *)v33 + 1) = 0;
      *((_BYTE *)v33 + 8) = 0;
      *((_BYTE *)v33 + 9) = 0;
      *((_BYTE *)v33 + 10) = v12 - 1;
      *((_DWORD *)v33 + 4) = v12;
      *(_QWORD *)&v7[2 * v12] = v33;
      ++v7[1];
    }
  }
  else
  {
    v12 = v10;
  }
  v13 = v6;
LABEL_15:
  if ( *(void **)(SrbExtension + 4200) != v11 )
  {
    NVMeFreeDmaBuffer(
      a1,
      *(unsigned int *)(*(_QWORD *)(v5 + 96) + 4240LL),
      *(_QWORD *)(v5 + 96) + 4200LL,
      *(_QWORD *)(*(_QWORD *)(v5 + 96) + 4208LL));
    v11 = 0LL;
    *(_DWORD *)(SrbExtension + 4240) = 0;
  }
  *(_BYTE *)(SrbExtension + 4253) |= 8u;
  if ( v12 >= v10 )
  {
    v14 = (__int64 *)(a1 + 1480);
    do
    {
      v15 = *v14;
      v14 += 14;
      *(_QWORD *)(v15 + 4232) = v11;
      v8 -= v13;
    }
    while ( v8 );
    NVMeReenumerateCompareAndMerge(a1, (__int64)v7);
  }
  else
  {
    NVMeReenumerateNameSpaceIdentify(a1);
  }
}

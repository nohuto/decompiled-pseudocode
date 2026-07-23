/*
 * XREFs of HalpInterruptSetDestinationInternal @ 0x1403785BC
 * Callers:
 *     HalpInterruptSetDestination @ 0x1403784E0 (HalpInterruptSetDestination.c)
 * Callees:
 *     HalpInterruptSetLineStateInternal @ 0x1403786FC (HalpInterruptSetLineStateInternal.c)
 *     HalpInterruptFindBestRouting @ 0x140378770 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptFindLines @ 0x1403787F0 (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140378850 (HalpInterruptLookupController.c)
 *     HalpInterruptDestinationToTarget @ 0x140378880 (HalpInterruptDestinationToTarget.c)
 *     HalpInterruptApplyOverrides @ 0x140378974 (HalpInterruptApplyOverrides.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall HalpInterruptSetDestinationInternal(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v6; // rax
  ULONG_PTR v7; // rax
  ULONG_PTR v8; // rbx
  __int64 Lines; // rdi
  __int64 v10; // rcx
  char v11; // r12
  __int64 v12; // r15
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  _DWORD *v15; // r14
  int v16; // edx
  __int128 v18; // xmm1
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm0
  signed __int32 v22[8]; // [rsp+0h] [rbp-70h] BYREF
  __int128 v23; // [rsp+30h] [rbp-40h]
  __int128 v24; // [rsp+40h] [rbp-30h]
  __int128 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+60h] [rbp-10h]
  unsigned int v27; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF

  v3 = *a1;
  v27 = 0;
  v28 = v3;
  HalpInterruptApplyOverrides(&v28, 0LL, 0LL);
  LODWORD(v6) = v28;
  while ( 1 )
  {
    v7 = HalpInterruptLookupController((unsigned int)v6);
    v8 = v7;
    if ( !v7 )
    {
      HalpInterruptLastProblem = 17;
      return (unsigned int)-1073741275;
    }
    if ( (*(_DWORD *)(v7 + 224) & 2) != 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v7, 0x7931847uLL);
    Lines = HalpInterruptFindLines(&v28, &v27);
    if ( !Lines )
    {
      *(_DWORD *)(v8 + 296) = 0;
      HalpInterruptLastProblem = 18;
      *(_DWORD *)(v8 + 292) = 18;
      *(_QWORD *)(v8 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(v8 + 312) = 1067;
      return (unsigned int)-1073741275;
    }
    v10 = *(_QWORD *)(Lines + 48);
    if ( *(_BYTE *)(v10 + 16LL * v27) )
    {
      *(_DWORD *)(v8 + 296) = 0;
      HalpInterruptLastProblem = 19;
      v16 = -1073741811;
      *(_DWORD *)(v8 + 292) = 19;
      *(_QWORD *)(v8 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
      *(_DWORD *)(v8 + 312) = 1080;
      return (unsigned int)v16;
    }
    v11 = 1;
    v12 = *(_QWORD *)(Lines + 40) + 56LL * v27;
    v13 = *(_OWORD *)(v12 + 16);
    v23 = *(_OWORD *)v12;
    v14 = *(_OWORD *)(v12 + 32);
    v24 = v13;
    *(_QWORD *)&v13 = *(_QWORD *)(v12 + 48);
    v25 = v14;
    v26 = v13;
    HalpInterruptDestinationToTarget(v10, a2, v12 + 24);
    v15 = (_DWORD *)(v12 + 16);
    HalpInterruptFindBestRouting(&v28, *(_QWORD *)a3, v12 + 16);
    _InterlockedOr(v22, 0);
    v16 = HalpInterruptSetLineStateInternal(v8, &v28);
    if ( v16 < 0 )
      break;
    v11 = 0;
    if ( *(_DWORD *)(v12 + 20) == *(_DWORD *)(a3 + 4) && *v15 == *(_DWORD *)a3 )
      goto LABEL_9;
    v6 = *(_QWORD *)v15;
    v28 = *(_QWORD *)v15;
  }
  *(_DWORD *)(v8 + 296) = v16;
  HalpInterruptLastProblem = 7;
  *(_DWORD *)(v8 + 292) = 7;
  *(_QWORD *)(v8 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\connect.c";
  *(_DWORD *)(v8 + 312) = 1119;
LABEL_9:
  if ( v16 < 0 && v11 )
  {
    v18 = v24;
    v19 = 56LL * v27;
    v20 = *(_QWORD *)(Lines + 40);
    *(_OWORD *)(v19 + v20) = v23;
    v21 = v25;
    *(_OWORD *)(v19 + v20 + 16) = v18;
    *(_QWORD *)&v18 = v26;
    *(_OWORD *)(v19 + v20 + 32) = v21;
    *(_QWORD *)(v19 + v20 + 48) = v18;
  }
  return (unsigned int)v16;
}

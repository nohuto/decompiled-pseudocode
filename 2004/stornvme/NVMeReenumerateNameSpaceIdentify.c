/*
 * XREFs of NVMeReenumerateNameSpaceIdentify @ 0x1C00196DC
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyCompletion @ 0x1C0019920 (NVMeReenumerateNameSpaceIdentifyCompletion.c)
 *     NVMeReenumerateNameSpaceStart @ 0x1C0019C00 (NVMeReenumerateNameSpaceStart.c)
 * Callees:
 *     ProcessCommand @ 0x1C0002084 (ProcessCommand.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0004570 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005500 (memset.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentify(__int64 a1)
{
  int v2; // esi
  __int64 v3; // rax
  __int64 v4; // rbx
  int *v5; // rcx
  __int64 result; // rax
  __int64 v7; // r9
  void *v8; // rcx
  int v9; // edx
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-50h]
  __int64 v12; // [rsp+28h] [rbp-48h]
  __int64 v13; // [rsp+30h] [rbp-40h]
  int v14; // [rsp+38h] [rbp-38h]
  int v15; // [rsp+40h] [rbp-30h]
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int64 v20; // [rsp+68h] [rbp-8h]
  __int64 savedregs; // [rsp+70h] [rbp+0h]
  __int64 savedregs_8; // [rsp+78h] [rbp+8h]
  __int64 savedregs_16; // [rsp+80h] [rbp+10h]
  __int64 savedregs_24; // [rsp+88h] [rbp+18h]
  void *v25; // [rsp+A0h] [rbp+30h] BYREF
  void *v26; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+40h] BYREF

  v26 = 0LL;
  v2 = 0;
  v27 = 0LL;
  if ( *(_DWORD *)(a1 + 1384) )
  {
    v3 = *(_QWORD *)(a1 + 1480);
    v4 = a1 + 1496;
  }
  else
  {
    v4 = a1 + 1384;
    v3 = *(_QWORD *)(a1 + 1592);
  }
  v5 = *(int **)(v3 + 4232);
  v25 = v5;
  if ( v5 )
  {
    v2 = *v5;
  }
  else
  {
    StorPortExtendedFunction(
      0LL,
      a1,
      2048LL,
      1701672526LL,
      (unsigned int)&v25,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20,
      savedregs,
      savedregs_8,
      savedregs_16,
      savedregs_24);
    if ( !v25 )
      return StorPortExtendedFunction(
               85LL,
               a1,
               0LL,
               1LL,
               10,
               L"Context Resource Fail",
               8LL,
               2,
               0,
               0LL,
               0LL,
               0LL,
               0LL,
               0LL,
               savedregs,
               savedregs_8,
               savedregs_16,
               savedregs_24);
    memset(v25, 0, 0x800uLL);
  }
  result = NVMeAllocateDmaBuffer(a1, 4096LL, &v26, &v27);
  if ( v26 )
  {
    v8 = *(void **)(v4 + 96);
    *(_BYTE *)(v4 + 11) = 0;
    memset(v8, 0, 0x10A0uLL);
    v9 = 0;
    *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4232LL) = 0LL;
    *(_QWORD *)(v4 + 64) = *(_QWORD *)(v4 + 96);
    *(_DWORD *)v4 = 1;
    do
      *(_BYTE *)(*(_QWORD *)(v4 + 96) + 4253LL) |= ++v9;
    while ( v9 < 2 );
    *(_WORD *)(*(_QWORD *)(v4 + 96) + 4244LL) = 0;
    *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4224LL) = NVMeReenumerateNameSpaceIdentifyCompletion;
    memset(v26, 0, 0x1000uLL);
    *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4200LL) = v26;
    *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4208LL) = v27;
    *(_DWORD *)(*(_QWORD *)(v4 + 96) + 4240LL) = 4096;
    v10 = *(_QWORD *)(v4 + 96) + 4096LL;
    *(_QWORD *)(v10 + 24) = v27;
    *(_DWORD *)(v10 + 4) = v2 + 1;
    *(_BYTE *)(v10 + 40) = v2 == -1;
    *(_BYTE *)v10 = 6;
    *(_DWORD *)v25 = v2 + 1;
    *(_QWORD *)(*(_QWORD *)(v4 + 96) + 4232LL) = v25;
    return ProcessCommand(a1, v4 + 8);
  }
  else if ( v25 )
  {
    return StorPortExtendedFunction(
             1LL,
             a1,
             v25,
             v7,
             v11,
             v12,
             v13,
             v14,
             v15,
             v16,
             v17,
             v18,
             v19,
             v20,
             savedregs,
             savedregs_8,
             savedregs_16,
             savedregs_24);
  }
  return result;
}

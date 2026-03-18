/*
 * XREFs of MiCapturePartialVadSubsections @ 0x14097EB90
 * Callers:
 *     MiPerformVadSplitting @ 0x1402ED194 (MiPerformVadSplitting.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140319600 (MiGetProtoPteAddress.c)
 */

void __fastcall MiCapturePartialVadSubsections(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // [rsp+50h] [rbp+30h] BYREF
  __int64 v16; // [rsp+58h] [rbp+38h] BYREF
  __int64 v17; // [rsp+60h] [rbp+40h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v6 = a1[1];
  if ( a2 )
  {
    MiGetProtoPteAddress(
      a2,
      *(unsigned int *)(a2 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 32) << 32),
      0,
      &v15);
    v7 = *(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32);
    MiGetProtoPteAddress(a2, v7, 0, &v16);
    MiGetProtoPteAddress(v6, v7 + 1, 0, &v17);
    v8 = v16;
    if ( v16 == v17 )
    {
      if ( v16 == v15 )
        goto LABEL_10;
      v9 = *(_QWORD *)(v15 + 16);
      v8 = v15;
      while ( v9 != v17 )
      {
        v8 = v9;
        v9 = *(_QWORD *)(v9 + 16);
      }
    }
    if ( v15 && v15 != v8 )
    {
      a1[6] = v15;
      a1[7] = v8;
    }
  }
LABEL_10:
  if ( !a3 )
    return;
  v10 = *(unsigned __int8 *)(a3 + 32);
  v11 = *(unsigned int *)(a3 + 24);
  v16 = 0LL;
  v17 = 0LL;
  v15 = 0LL;
  v12 = v11 | (v10 << 32);
  MiGetProtoPteAddress(a3, v12, 0, &v17);
  MiGetProtoPteAddress(
    a3,
    *(unsigned int *)(a3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a3 + 33) << 32),
    0,
    &v15);
  MiGetProtoPteAddress(v6, v12 - 1, 0, &v16);
  v13 = v16;
  v14 = v15;
  if ( v16 == v17 )
  {
    if ( v16 == v15 )
      return;
    v13 = *(_QWORD *)(v16 + 16);
  }
  if ( v13 )
  {
    a1[8] = v13;
    a1[9] = v14;
  }
}

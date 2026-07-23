/*
 * XREFs of MiPerformFixups @ 0x1406EBD18
 * Callers:
 *     MiRevertRelocatedImagePfn @ 0x1405FB138 (MiRevertRelocatedImagePfn.c)
 *     MiRevertRelocations @ 0x1406C3F08 (MiRevertRelocations.c)
 *     MiRelocateImagePfn @ 0x1406EB9C0 (MiRelocateImagePfn.c)
 * Callees:
 *     MiApplyRetpolineFixups @ 0x140214824 (MiApplyRetpolineFixups.c)
 *     MiApplyStraddleFixups @ 0x14023881C (MiApplyStraddleFixups.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     MiApplyCompressedFixups @ 0x1406EBF20 (MiApplyCompressedFixups.c)
 *     MiApplyRawFixups @ 0x1408D7C2C (MiApplyRawFixups.c)
 */

__int64 __fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        _QWORD *BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 result; // rax
  __int64 v8; // rsi
  ULONG_PTR v9; // r10
  __int64 v11; // r15
  int v12; // edi
  _OWORD *v13; // r13
  unsigned __int64 v14; // rbp
  unsigned __int16 *v15; // r12
  bool v16; // zf
  char v17; // bp
  int v18; // ecx
  ULONG_PTR v19; // rcx
  __int64 v20; // r8
  unsigned __int64 v21; // rcx
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  int SystemRegionType; // eax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int128 v29; // [rsp+40h] [rbp-58h] BYREF
  __int64 v30; // [rsp+50h] [rbp-48h]
  __int64 v31; // [rsp+58h] [rbp-40h]
  __int128 v32; // [rsp+60h] [rbp-38h]

  result = BugCheckParameter2[12];
  v8 = a3;
  v9 = (ULONG_PTR)BugCheckParameter2;
  v11 = *(_QWORD *)(result + 32);
  if ( (unsigned __int64)a3 < *(_QWORD *)(v11 + 56) )
  {
    v12 = a3 << 12;
    while ( 1 )
    {
      result = *(_QWORD *)v11;
      v13 = *(_OWORD **)(v11 + 96);
      v14 = *(_QWORD *)(*(_QWORD *)v11 + 8 * v8);
      if ( v13 )
        v15 = (unsigned __int16 *)*((_QWORD *)v13 + v8 + 7);
      else
        v15 = 0LL;
      if ( v14 )
      {
        if ( v14 > 1 )
        {
          if ( *(_BYTE *)(v11 + 68) )
            MiApplyCompressedFixups(v9, BugCheckParameter3);
          else
            MiApplyRawFixups(v9);
        }
LABEL_9:
        v16 = (v14 & 1) == 0;
        v17 = a6;
        if ( !v16 )
          MiApplyStraddleFixups(v11, (char *)BugCheckParameter3, v12, a4, a5, a6);
        if ( v15 )
        {
          v20 = *(_QWORD *)(*BugCheckParameter2 + 32LL);
          if ( a5 )
          {
            v28 = a5;
            if ( (a6 & 1) == 0 )
              v28 = a4;
            v21 = v20 + v28;
          }
          else
          {
            v21 = v20 + a4;
            if ( (a6 & 1) == 0 )
              v21 = *(_QWORD *)(*BugCheckParameter2 + 32LL);
          }
          v22 = v13[1];
          v29 = *v13;
          v23 = v13[2];
          v24 = v22;
          if ( a5 )
            v24 = 0LL;
          v31 = *((_QWORD *)&v22 + 1);
          v30 = v24;
          v32 = v23;
          SystemRegionType = MiGetSystemRegionType(v21);
          if ( SystemRegionType != 12 && SystemRegionType != 1 )
            v17 = a6 | 1;
          MiApplyRetpolineFixups(BugCheckParameter3, v26, v27, v12, (__int64)&v29, v15, v17);
        }
        v18 = *(_DWORD *)(v11 + 64);
        result = v18 & 0xFFFFF000;
        if ( (_DWORD)result == v12 )
        {
          v19 = BugCheckParameter3 + (v18 & 0xFFF);
          if ( (v19 & 1) != 0 )
            *(_DWORD *)(v19 - 1) += a4;
          else
            *(_QWORD *)v19 += a4;
        }
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v9 = (ULONG_PTR)BugCheckParameter2;
        v8 = (unsigned int)(v8 + 1);
        v12 += 4096;
      }
      else
      {
        if ( v15 )
          goto LABEL_9;
        BugCheckParameter3 += 4096LL;
        if ( (BugCheckParameter3 & 0xFFF) == 0 )
          return result;
        v8 = (unsigned int)(v8 + 1);
        v12 += 4096;
      }
    }
  }
  return result;
}

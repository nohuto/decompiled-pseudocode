/*
 * XREFs of ?EmitSetKeyframeData@CKeyframeAnimationMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0078C6C
 * Callers:
 *     ?EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00789D0 (-EmitUpdateCommands@CKeyframeAnimationMarshaler@DirectComposition@@UEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C007C3E8 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

char __fastcall DirectComposition::CKeyframeAnimationMarshaler::EmitSetKeyframeData(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  char v3; // si
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // ecx
  _DWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v3 = 1;
  if ( (*((_DWORD *)this + 4) & 0x400) == 0 && *((_QWORD *)this + 16) && *((_QWORD *)this + 18) )
  {
    v10 = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x48uLL, (void **)&v10) )
    {
      v4 = v10;
      *v10 = 72;
      v5 = v4 + 1;
      memset(v4 + 1, 0, 0x44uLL);
      *v5 = 230;
      v5[1] = *((_DWORD *)this + 6);
      v5[2] = *((_DWORD *)this + 38);
      v5[3] = *(_DWORD *)(*((_QWORD *)this + 16) + 24LL);
      v5[4] = *((_DWORD *)this + 34);
      v5[5] = *((_DWORD *)this + 36);
      v5[6] = *((_DWORD *)this + 56);
      v5[7] = *((_DWORD *)this + 57);
      v5[8] = *((_DWORD *)this + 59);
      v5[16] = *((_DWORD *)this + 61);
      v5[9] = *((_DWORD *)this + 62);
      v5[10] = *((_DWORD *)this + 64);
      v6 = *((_QWORD *)this + 38);
      if ( v6 )
        LODWORD(v6) = *(_DWORD *)(v6 + 40);
      v5[11] = v6;
      v7 = *((_QWORD *)this + 20);
      if ( v7 )
        v8 = *(_DWORD *)(v7 + 24);
      else
        v8 = 0;
      v5[12] = v8;
      v5[13] = *((_DWORD *)this + 44);
      v5[14] = *((_DWORD *)this + 42);
      v5[15] = *((_DWORD *)this + 46);
      *((_DWORD *)this + 46) = 0;
      *((_DWORD *)this + 4) |= 0x400u;
    }
    else
    {
      return 0;
    }
  }
  return v3;
}

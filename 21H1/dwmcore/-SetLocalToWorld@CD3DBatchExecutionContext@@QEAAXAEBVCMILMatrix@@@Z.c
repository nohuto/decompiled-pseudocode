/*
 * XREFs of ?SetLocalToWorld@CD3DBatchExecutionContext@@QEAAXAEBVCMILMatrix@@@Z @ 0x1801AB360
 * Callers:
 *     ?AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawListPrimitive@@AEBV?$span@$$CBG$0?0@gsl@@AEBUVertexFormatDesc@@@Z @ 0x1801ADC70 (-AppendInstancedPrimitive@@YAJPEAVCD3DBatchExecutionContext@@PEBVCHWDrawListEntry@@PEBVCDrawList.c)
 * Callees:
 *     memcmp_0 @ 0x1800EBD5F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?transpose@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBU4123@@Z @ 0x1801AB6A0 (-transpose@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBU4123@@Z.c)
 */

void __fastcall CD3DBatchExecutionContext::SetLocalToWorld(
        CD3DBatchExecutionContext *this,
        const struct CMILMatrix *a2)
{
  __int64 v3; // rbx
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  _OWORD Buf2[4]; // [rsp+40h] [rbp-48h] BYREF

  v3 = *((_QWORD *)this + 4) + 160LL;
  Windows::Foundation::Numerics::transpose(Buf2, a2);
  if ( memcmp_0((const void *)(v3 + 48), Buf2, 0x40uLL) )
  {
    v4 = Buf2[0];
    v5 = Buf2[1];
    *(_BYTE *)(v3 + 8) = 1;
    *(_OWORD *)(v3 + 48) = v4;
    v6 = Buf2[2];
    *(_OWORD *)(v3 + 64) = v5;
    v7 = Buf2[3];
    *(_OWORD *)(v3 + 80) = v6;
    *(_OWORD *)(v3 + 96) = v7;
    if ( *(_BYTE *)(v3 + 8) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 600LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 600LL),
        *(_QWORD *)v3,
        0LL,
        0LL,
        v3 + 16,
        0,
        0);
      *(_BYTE *)(v3 + 8) = 0;
    }
  }
}

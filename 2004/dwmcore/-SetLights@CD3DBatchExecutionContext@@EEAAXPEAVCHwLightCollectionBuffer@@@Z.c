/*
 * XREFs of ?SetLights@CD3DBatchExecutionContext@@EEAAXPEAVCHwLightCollectionBuffer@@@Z @ 0x180017DC0
 * Callers:
 *     <none>
 * Callees:
 *     ?Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z @ 0x18008434C (-Flush@CD3DBatchExecutionContext@@QEAAXW4FlushReason@@@Z.c)
 *     memcmp_0 @ 0x1800EED0F (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DBatchExecutionContext::SetLights(
        CD3DBatchExecutionContext *this,
        struct CHwLightCollectionBuffer *a2)
{
  __int64 v4; // r14
  _OWORD *v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  _OWORD *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // xmm1

  if ( !a2 )
    goto LABEL_5;
  v4 = *((_QWORD *)this + 4);
  v5 = (_OWORD *)((char *)a2 + 20);
  if ( memcmp_0((const void *)(v4 + 432), (char *)a2 + 20, 0x104uLL) )
  {
    CD3DBatchExecutionContext::Flush(this, 128LL);
    v8 = (_OWORD *)(v4 + 432);
    *(_BYTE *)(v4 + 424) = 1;
    v9 = 2LL;
    do
    {
      *v8 = *v5;
      v8[1] = v5[1];
      v8[2] = v5[2];
      v8[3] = v5[3];
      v8[4] = v5[4];
      v8[5] = v5[5];
      v8[6] = v5[6];
      v8 += 8;
      v10 = v5[7];
      v5 += 8;
      *(v8 - 1) = v10;
      --v9;
    }
    while ( v9 );
    *(_DWORD *)v8 = *(_DWORD *)v5;
    if ( *(_BYTE *)(v4 + 424) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 600LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 600LL),
        *(_QWORD *)(v4 + 416),
        0LL,
        0LL,
        v4 + 432,
        0,
        0);
      *(_BYTE *)(v4 + 424) = 0;
    }
  }
  v6 = *((_QWORD *)this + 4);
  if ( memcmp_0((const void *)(v6 + 720), (char *)a2 + 280, 0xF0uLL) )
  {
    CD3DBatchExecutionContext::Flush(this, 256LL);
    *(_BYTE *)(v6 + 712) = 1;
    *(_OWORD *)(v6 + 720) = *(_OWORD *)((char *)a2 + 280);
    *(_OWORD *)(v6 + 736) = *(_OWORD *)((char *)a2 + 296);
    *(_OWORD *)(v6 + 752) = *(_OWORD *)((char *)a2 + 312);
    *(_OWORD *)(v6 + 768) = *(_OWORD *)((char *)a2 + 328);
    *(_OWORD *)(v6 + 784) = *(_OWORD *)((char *)a2 + 344);
    *(_OWORD *)(v6 + 800) = *(_OWORD *)((char *)a2 + 360);
    *(_OWORD *)(v6 + 816) = *(_OWORD *)((char *)a2 + 376);
    *(_OWORD *)(v6 + 832) = *(_OWORD *)((char *)a2 + 392);
    *(_OWORD *)(v6 + 848) = *(_OWORD *)((char *)a2 + 408);
    *(_OWORD *)(v6 + 864) = *(_OWORD *)((char *)a2 + 424);
    *(_OWORD *)(v6 + 880) = *(_OWORD *)((char *)a2 + 440);
    *(_OWORD *)(v6 + 896) = *(_OWORD *)((char *)a2 + 456);
    *(_OWORD *)(v6 + 912) = *(_OWORD *)((char *)a2 + 472);
    *(_OWORD *)(v6 + 928) = *(_OWORD *)((char *)a2 + 488);
    *(_OWORD *)(v6 + 944) = *(_OWORD *)((char *)a2 + 504);
    if ( *(_BYTE *)(v6 + 712) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 600LL)
                                                                                      + 384LL))(
        *(_QWORD *)(*((_QWORD *)this + 1) + 600LL),
        *(_QWORD *)(v6 + 704),
        0LL,
        0LL,
        v6 + 720,
        0,
        0);
      *(_BYTE *)(v6 + 712) = 0;
    }
  }
  v7 = *((_QWORD *)this + 6);
  if ( !v7 || *((_DWORD *)a2 + 4) != *(_DWORD *)(v7 + 16) )
LABEL_5:
    CD3DBatchExecutionContext::Flush(this, 2147483649LL);
  *((_QWORD *)this + 6) = a2;
}

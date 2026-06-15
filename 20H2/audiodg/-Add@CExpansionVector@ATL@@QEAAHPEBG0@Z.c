/*
 * XREFs of ?Add@CExpansionVector@ATL@@QEAAHPEBG0@Z @ 0x14005C0F0
 * Callers:
 *     ?AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z @ 0x14005C350 (-AddReplacement@CRegObject@ATL@@UEAAJPEBG0@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x14001CCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x14001CCD4 (--_U@YAPEAX_K@Z.c)
 *     memcpy_s @ 0x140029158 (memcpy_s.c)
 *     ?AtlCrtErrorCheck@ATL@@YAHH@Z @ 0x1400417C4 (-AtlCrtErrorCheck@ATL@@YAHH@Z.c)
 *     ?Add@?$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z @ 0x14005C03C (-Add@-$CSimpleMap@PEAGPEAGVCExpansionVectorEqualHelper@ATL@@@ATL@@QEAAHAEBQEAG0@Z.c)
 *     ?ocslen@@YAHPEBG@Z @ 0x14005F7E0 (-ocslen@@YAHPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=2
_BOOL8 __fastcall ATL::CExpansionVector::Add(
        ATL::CExpansionVector *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  const unsigned __int16 *v3; // r12
  const unsigned __int16 *v4; // r15
  int v5; // esi
  __int64 v6; // rax
  size_t v7; // rax
  void *v8; // r13
  errno_t v9; // ecx
  errno_t v10; // eax
  void *v11; // rdi
  void *v12; // rbx
  void *v14; // [rsp+20h] [rbp-68h] BYREF
  void *v15; // [rsp+28h] [rbp-60h] BYREF
  rsize_t DestinationSize; // [rsp+30h] [rbp-58h]
  void *v17; // [rsp+38h] [rbp-50h]
  rsize_t SourceSize; // [rsp+40h] [rbp-48h]

  v3 = a3;
  v4 = a2;
  if ( a2 && a3 )
  {
    v5 = 0;
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    SourceSize = 2 * v6 + 2;
    v14 = 0LL;
    v7 = 2 * SourceSize;
    if ( !is_mul_ok(SourceSize, 2uLL) )
      v7 = -1LL;
    try
    {
      v8 = operator new[](v7);
      v14 = v8;
    }
    catch ( ... )
    {
      v3 = a3;
      v4 = a2;
      v5 = 0;
      v8 = v14;
    }
    try
    {
      v11 = v8;
      v17 = v8;
      DestinationSize = 2LL * (int)(ocslen(v3) + 1);
      v12 = operator new[](saturated_mul(DestinationSize, 2uLL));
      v15 = v12;
    }
    catch ( ... )
    {
      v3 = a3;
      v4 = a2;
      v5 = 0;
      v8 = v14;
      v11 = v17;
      v12 = v15;
    }
    if ( v8 && v12 )
    {
      v9 = memcpy_s(v8, SourceSize, v4, SourceSize);
      ATL::AtlCrtErrorCheck(v9);
      v10 = memcpy_s(v12, DestinationSize, v3, DestinationSize);
      ATL::AtlCrtErrorCheck(v10);
      if ( !(unsigned int)ATL::CSimpleMap<unsigned short *,unsigned short *,ATL::CExpansionVectorEqualHelper>::Add(
                            (__int64)this,
                            &v14,
                            &v15) )
      {
        v5 = -2147024882;
LABEL_14:
        operator delete(v12);
        operator delete(v11);
        return v5 >= 0;
      }
    }
    else
    {
      v5 = -2147024882;
    }
    if ( v5 >= 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
    }
    goto LABEL_14;
  }
  return 0LL;
}

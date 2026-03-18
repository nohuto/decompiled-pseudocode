/*
 * XREFs of _DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter @ 0x1C021FA34
 * Callers:
 *     _lambda_85aa73a68ff66b421643f8c78198376d_::_lambda_invoker_cdecl_ @ 0x1C021F950 (_lambda_85aa73a68ff66b421643f8c78198376d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0019694 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z @ 0x1C003D700 (--_EDXGADAPTER_REFERENCE@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DxgkCheckAndUpdatePairingForNewAdapter_::_2_::AdapterArray::AddAdapter(
        unsigned int *a1,
        struct DXGADAPTER *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  unsigned int v6; // r14d
  unsigned __int64 v7; // rsi
  __int64 v8; // rax
  bool v9; // cf
  SIZE_T v10; // rax
  char *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char *v16; // rdi
  __int64 v17; // rax
  DXGADAPTER_REFERENCE *v19; // rcx
  unsigned int v20; // r8d
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  DXGADAPTER **v24; // rcx

  v4 = *a1;
  v5 = a1[1];
  if ( (unsigned int)v4 >= v5 )
  {
    v6 = v5 + 16;
    v7 = v5 + 16;
    v8 = 16 * v7;
    if ( !is_mul_ok(v7, 0x10uLL) )
      v8 = -1LL;
    v9 = __CFADD__(v8, 8LL);
    v10 = v8 + 8;
    if ( v9 )
      v10 = -1LL;
    v11 = (char *)operator new[](v10, 0x4B677844u, PagedPool);
    if ( v11 )
    {
      v16 = v11 + 8;
      *(_QWORD *)v11 = v7;
      `vector constructor iterator'(
        v11 + 8,
        16LL,
        (unsigned int)v7,
        (void (__fastcall *)(char *))CAutoRefCountedBuffer::CAutoRefCountedBuffer);
    }
    else
    {
      v16 = 0LL;
    }
    if ( !v16 )
    {
      v17 = WdLogNewEntry5_WdLowResource(v13, v12, v14, v15);
      *(_QWORD *)(v17 + 24) = 11699LL;
      WdLogEvent5_WdLowResource(v17);
      return 3221225495LL;
    }
    v19 = (DXGADAPTER_REFERENCE *)*((_QWORD *)a1 + 1);
    if ( v19 )
    {
      v20 = 0;
      if ( *a1 )
      {
        do
        {
          v21 = *((_QWORD *)a1 + 1);
          v22 = v20++;
          v22 *= 2LL;
          *(_QWORD *)&v16[8 * v22] = *(_QWORD *)(v21 + 8 * v22);
          *(_QWORD *)&v16[8 * v22 + 8] = *(_QWORD *)(v21 + 8 * v22 + 8);
          *(_QWORD *)(v21 + 8 * v22) = 0LL;
          *(_QWORD *)(v21 + 8 * v22 + 8) = 0LL;
        }
        while ( v20 < *a1 );
        v19 = (DXGADAPTER_REFERENCE *)*((_QWORD *)a1 + 1);
      }
      if ( v19 )
        DXGADAPTER_REFERENCE::`vector deleting destructor'(v19);
    }
    v4 = *a1;
    a1[1] = v6;
    *((_QWORD *)a1 + 1) = v16;
  }
  v23 = v4 + 1;
  v24 = (DXGADAPTER **)(*((_QWORD *)a1 + 1) + 16 * v4);
  *a1 = v23;
  DXGADAPTER_REFERENCE::Assign(v24, a2);
  return 0LL;
}

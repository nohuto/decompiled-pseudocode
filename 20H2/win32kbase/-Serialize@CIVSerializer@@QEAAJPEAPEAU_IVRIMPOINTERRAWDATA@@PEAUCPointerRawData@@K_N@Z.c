/*
 * XREFs of ?Serialize@CIVSerializer@@QEAAJPEAPEAU_IVRIMPOINTERRAWDATA@@PEAUCPointerRawData@@K_N@Z @ 0x1C01B1CA0
 * Callers:
 *     ?IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@AEAUCIVSerializer@@@Z @ 0x1C01AFD20 (-IVMeasureRimCompleteFrame@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@A.c)
 *     ?IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame@@U_UNICODE_STRING@@HAEAUCIVSerializer@@@Z @ 0x1C01B03AC (-IVSerializeRimCompleteFrameForTouchInputPacket@@YAJPEAURIMCOMPLETEFRAME@@PEAUCPointerInputFrame.c)
 * Callees:
 *     ?Ensure@CIVSerializer@@QEAA_N_K@Z @ 0x1C01AF434 (-Ensure@CIVSerializer@@QEAA_N_K@Z.c)
 *     ?Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z @ 0x1C01B1F64 (-Serialize@CIVSerializer@@QEAAJPEAPEAXPEAX_K_N@Z.c)
 */

__int64 __fastcall CIVSerializer::Serialize(
        CIVSerializer *this,
        struct _IVRIMPOINTERRAWDATA **a2,
        struct CPointerRawData *a3,
        unsigned int a4,
        bool a5)
{
  unsigned int v9; // ecx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r14
  struct _IVRIMPOINTERRAWDATA *v15; // rbx
  _QWORD *v16; // r13
  int v17; // eax

  if ( a5 )
  {
    v9 = 24 * a4;
    if ( a4 )
    {
      v10 = a4;
      do
      {
        v11 = *((_DWORD *)a3 + 2);
        a3 = (struct CPointerRawData *)*((_QWORD *)a3 + 3);
        v9 += (v11 + 7) & 0xFFFFFFF8;
        --v10;
      }
      while ( v10 );
    }
    *((_QWORD *)this + 4) += (v9 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
    return 0LL;
  }
  if ( CIVSerializer::Ensure(this, 24LL * a4) )
  {
    v14 = 0LL;
    v15 = (struct _IVRIMPOINTERRAWDATA *)(v13 + *(_QWORD *)(v12 + 16));
    *a2 = v15;
    if ( !a4 )
    {
LABEL_14:
      *a2 = (struct _IVRIMPOINTERRAWDATA *)(((unsigned __int64)v15 - *((_QWORD *)this + 2)) | 1);
      return 0LL;
    }
    v16 = (_QWORD *)((char *)v15 + 16);
    while ( 1 )
    {
      *((_DWORD *)v16 - 4) = *((_DWORD *)a3 + 1);
      v17 = *((_DWORD *)a3 + 2);
      *v16 = 0LL;
      *((_DWORD *)v16 - 3) = v17;
      if ( (int)CIVSerializer::Serialize(
                  this,
                  (void **)v15 + 3 * v14 + 1,
                  *((void **)a3 + 2),
                  *((unsigned int *)a3 + 2),
                  0) < 0 )
        break;
      if ( (_DWORD)v14 )
        *((_QWORD *)v15 + 3 * (unsigned int)(v14 - 1) + 2) = ((unsigned __int64)v15 + 24 * v14 - *((_QWORD *)this + 2)) | 1;
      a3 = (struct CPointerRawData *)*((_QWORD *)a3 + 3);
      v14 = (unsigned int)(v14 + 1);
      v16 += 3;
      if ( (unsigned int)v14 >= a4 )
      {
        v15 = *a2;
        goto LABEL_14;
      }
    }
  }
  return 3221225495LL;
}

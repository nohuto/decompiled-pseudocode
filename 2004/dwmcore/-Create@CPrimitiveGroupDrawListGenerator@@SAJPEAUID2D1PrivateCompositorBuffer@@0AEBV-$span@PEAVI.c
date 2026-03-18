/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18009A9D0
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800A22A8 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1801E47B0 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009AB34 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18009ABF0 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18009F68C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18026756C (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        struct ID2D1PrivateCompositorBuffer *a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        _QWORD *a6)
{
  CCommandBuffer *v10; // rax
  CCommandBuffer *v11; // r14
  CPrimitiveBuffer *v12; // rax
  __int64 v13; // rcx
  CPrimitiveBuffer *v14; // rsi
  int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rcx
  char *v20; // rax
  __int64 v21; // rcx
  void (__fastcall ***v22)(_QWORD); // rbx
  unsigned int v24; // edx

  v10 = (CCommandBuffer *)DefaultHeap::Alloc(0x10uLL);
  v11 = v10;
  if ( v10 )
  {
    *(_QWORD *)v10 = 0LL;
    *((_DWORD *)v10 + 2) = 0;
  }
  else
  {
    v11 = 0LL;
  }
  v12 = (CPrimitiveBuffer *)DefaultHeap::Alloc(0x10uLL);
  v14 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    *((_DWORD *)v12 + 2) = 0;
  }
  else
  {
    v14 = 0LL;
  }
  if ( v11 )
  {
    if ( v14 )
    {
      v15 = CCommandBuffer::Initialize(v11, a1);
      v17 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x86u, 0LL);
      }
      else
      {
        v18 = CPrimitiveBuffer::Initialize(v14, a2);
        v17 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x88u, 0LL);
        }
        else
        {
          v20 = (char *)DefaultHeap::Alloc(0x80uLL);
          v22 = (void (__fastcall ***)(_QWORD))v20;
          if ( v20 )
          {
            *((_DWORD *)v20 + 2) = 0;
            *((_DWORD *)v20 + 10) = 0;
            *(_QWORD *)v20 = &CPrimitiveGroupDrawListGenerator::`vftable';
            *((_QWORD *)v20 + 2) = v11;
            *((_QWORD *)v20 + 3) = v14;
            *(_OWORD *)(v20 + 56) = *a3;
            *(_OWORD *)(v20 + 72) = *a4;
            *(_OWORD *)(v20 + 88) = *a5;
            *((_QWORD *)v20 + 13) = 0LL;
            *((_QWORD *)v20 + 14) = 0LL;
            *((_QWORD *)v20 + 15) = 0LL;
            ++dword_18034534C;
            *((_OWORD *)v20 + 2) = 0LL;
            *((_QWORD *)v20 + 6) = 0LL;
          }
          else
          {
            v22 = 0LL;
          }
          if ( v22 )
          {
            (**v22)(v22);
            *a6 = v22;
            return v17;
          }
          v17 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, -2147024882, 0x8Fu, 0LL);
        }
      }
    }
    else
    {
      v17 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x84u, 0LL);
    }
  }
  else
  {
    v17 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024882, 0x83u, 0LL);
  }
  if ( v14 )
    CPrimitiveBuffer::`scalar deleting destructor'(v14, v24);
  if ( v11 )
    CPrimitiveBuffer::`scalar deleting destructor'(v11, v24);
  return v17;
}

/*
 * XREFs of ?Create@CPrimitiveGroupDrawListGenerator@@SAJPEAUID2D1PrivateCompositorBuffer@@0AEBV?$span@PEAVIBitmapResource@@$0?0@gsl@@1AEBV?$span@PEAVCPrimitiveColor@@$0?0@4@PEAPEAV1@@Z @ 0x18000C850
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x18000C41C (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180232098 (-CreateNewGeneratorForHeatMap@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x18000C9B4 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 *     ?Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18000CAD0 (-Initialize@CPrimitiveBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ?Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x18000CB84 (-Initialize@CCommandBuffer@@QEAAJPEAUID2D1PrivateCompositorBuffer@@@Z.c)
 *     ??_GCPrimitiveBuffer@@QEAAPEAXI@Z @ 0x18000CDF8 (--_GCPrimitiveBuffer@@QEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080A44 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListGenerator::Create(
        struct ID2D1PrivateCompositorBuffer *a1,
        struct ID2D1PrivateCompositorBuffer *a2,
        _OWORD *a3,
        _OWORD *a4,
        _OWORD *a5,
        CPrimitiveGroupDrawListGenerator **a6)
{
  CPrimitiveGroupDrawListGenerator *v10; // rbx
  CCommandBuffer *v11; // rax
  CCommandBuffer *v12; // r15
  CPrimitiveBuffer *v13; // rax
  unsigned int v14; // ecx
  CPrimitiveBuffer *v15; // r14
  int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // edi
  CPrimitiveGroupDrawListGenerator *v19; // rax
  unsigned int v20; // ecx
  unsigned int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // [rsp+20h] [rbp-38h]

  v10 = 0LL;
  v11 = (CCommandBuffer *)DefaultHeap::Alloc(0x10uLL);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = 0LL;
    *((_DWORD *)v11 + 2) = 0;
  }
  else
  {
    v12 = 0LL;
  }
  v13 = (CPrimitiveBuffer *)DefaultHeap::Alloc(0x10uLL);
  v15 = v13;
  if ( v13 )
  {
    *(_QWORD *)v13 = 0LL;
    *((_DWORD *)v13 + 2) = 0;
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v12 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0xACu, 0LL);
    v18 = -2147024882;
    if ( !v15 )
      return v18;
    goto LABEL_23;
  }
  if ( v15 )
  {
    v16 = CCommandBuffer::Initialize(v12, a1);
    v18 = v16;
    if ( v16 < 0 )
    {
      v24 = 175;
    }
    else
    {
      v16 = CPrimitiveBuffer::Initialize(v15, a2);
      v18 = v16;
      if ( v16 < 0 )
      {
        v24 = 177;
      }
      else
      {
        v19 = (CPrimitiveGroupDrawListGenerator *)DefaultHeap::Alloc(0x68uLL);
        v10 = v19;
        if ( !v19 )
        {
          v18 = -2147024882;
          v10 = 0LL;
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0xB8u, 0LL);
          goto LABEL_23;
        }
        *((_DWORD *)v19 + 2) = 0;
        *(_QWORD *)v19 = &CPrimitiveGroupDrawListGenerator::`vftable';
        *((_QWORD *)v19 + 2) = v12;
        *((_QWORD *)v19 + 3) = v15;
        *((_OWORD *)v19 + 2) = *a3;
        *((_OWORD *)v19 + 3) = *a4;
        *((_OWORD *)v19 + 4) = *a5;
        *((_QWORD *)v19 + 10) = 0LL;
        *((_QWORD *)v19 + 11) = 0LL;
        *((_QWORD *)v19 + 12) = 0LL;
        ++dword_1803D321C;
        (**(void (__fastcall ***)(void *))v19)(v19);
        v16 = CPrimitiveGroupDrawListGenerator::RealizeBitmaps(v10);
        v18 = v16;
        if ( v16 >= 0 )
        {
          *a6 = v10;
          return v18;
        }
        v24 = 185;
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, v24, 0LL);
LABEL_23:
    CPrimitiveBuffer::`scalar deleting destructor'(v15, v22);
    if ( !v12 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v18 = -2147024882;
  MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, -2147024882, 0xADu, 0LL);
LABEL_24:
  CPrimitiveBuffer::`scalar deleting destructor'(v12, v23);
LABEL_25:
  if ( v10 )
    (*(void (__fastcall **)(CPrimitiveGroupDrawListGenerator *))(*(_QWORD *)v10 + 8LL))(v10);
  return v18;
}

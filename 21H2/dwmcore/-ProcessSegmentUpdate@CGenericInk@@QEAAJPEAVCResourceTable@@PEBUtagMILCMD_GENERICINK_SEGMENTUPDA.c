/*
 * XREFs of ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x180216120
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z @ 0x18001501C (-TryAddRectangle@CRegion@@QEAAJAEBUtagRECT@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x1800EEFB8 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18010517F (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z @ 0x1801A7CA8 (-OnUpdatedInkReceived@CSuperWetInkManager@@QEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@E$0A@@@QEAAJPEFBEI@Z @ 0x1801C6584 (-AddMultipleAndSet@-$DynArray@E$0A@@@QEAAJPEFBEI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGenericInk::ProcessSegmentUpdate(
        CGenericInk *this,
        struct CResourceTable *a2,
        struct tagRECT *a3,
        const void *a4,
        unsigned int Size)
{
  LONG right; // eax
  void *v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r12d
  unsigned int v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned int v15; // ecx
  int v16; // r13d
  LONG v17; // r15d
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // eax
  int v21; // ecx
  __int64 v22; // rbp
  unsigned int v23; // ecx
  unsigned int v24; // r13d
  __int64 v25; // rcx
  struct tagRECT *v26; // rdx
  __int64 v27; // rcx
  int v28; // edi
  int v29; // eax
  unsigned int v31; // [rsp+20h] [rbp-A8h]
  unsigned int v32; // [rsp+40h] [rbp-88h]
  LONG v33; // [rsp+44h] [rbp-84h]
  __int64 v34; // [rsp+48h] [rbp-80h]
  struct tagRECT v35; // [rsp+50h] [rbp-78h] BYREF
  struct tagRECT v36; // [rsp+60h] [rbp-68h]
  __int64 v37; // [rsp+70h] [rbp-58h]
  void *retaddr; // [rsp+C8h] [rbp+0h]

  right = a3[1].right;
  v35 = *a3;
  v33 = right;
  v36 = v35;
  v37 = *(_QWORD *)&a3[1].left;
  v8 = operator new(Size);
  memcpy_0(v8, a4, Size);
  v10 = 0;
  v11 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v35, 12));
  if ( v11 )
  {
    v12 = Size / v11;
    if ( !(Size / v11) )
    {
      v31 = 536;
LABEL_7:
      v13 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0LL, -2147024809, v31);
      MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, -2147024809, 0x38u);
      goto LABEL_26;
    }
    v9 = *((unsigned int *)this + 64);
    if ( (_DWORD)v9 )
    {
      if ( v12 != (_DWORD)v9 )
      {
        v31 = 544;
        goto LABEL_7;
      }
    }
    else
    {
      *((_DWORD *)this + 64) = v12;
    }
  }
  v15 = *((_DWORD *)this + 64);
  if ( v15 )
    v16 = *((_DWORD *)this + 62) / v15;
  else
    v16 = 0;
  v17 = v36.right;
  *((_DWORD *)this + 62) = v36.right * v15;
  v18 = DynArray<unsigned char,0>::AddMultipleAndSet((unsigned __int64)this + 224, v8, Size);
  v13 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, v18, 0x40u);
  }
  else
  {
    v20 = v37;
    v21 = HIDWORD(v37);
    *((_DWORD *)this + 65) = v37;
    *((_DWORD *)this + 66) = v21;
    v22 = (__int64)(*((_QWORD *)this + 22) - *((_QWORD *)this + 21)) >> 3;
    if ( (_DWORD)v22 )
    {
      v23 = v17 + v11;
      if ( v20 > v11 )
        v17 = v11 + v17 - v20;
      v24 = v16 - v17;
      v32 = v23 - v17;
      v25 = 0LL;
      v34 = 0LL;
      v35 = 0LL;
      do
      {
        v26 = &v35;
        v27 = *(_QWORD *)(*(_QWORD *)(v25 + *((_QWORD *)this + 21)) + 80LL);
        if ( v10 )
          v26 = 0LL;
        v28 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, struct tagRECT *))(*(_QWORD *)v27 + 48LL))(
                v27,
                v24,
                *((_QWORD *)this + 28) + (unsigned int)(v17 * *((_DWORD *)this + 64)),
                v32,
                *((_DWORD *)this + 65),
                *((_DWORD *)this + 64),
                v26);
        if ( v28 < 0 )
        {
          MilWerRegisterMemoryBlock(
            *(const void **)(*((_QWORD *)this + 2) + 632LL),
            *(_DWORD *)(*((_QWORD *)this + 2) + 640LL));
          ModuleFailFastForHRESULT((unsigned int)v28, retaddr);
        }
        ++v10;
        v25 = v34 + 8;
        v34 += 8LL;
      }
      while ( v10 < (unsigned int)v22 );
      v29 = CRegion::TryAddRectangle((CGenericInk *)((char *)this + 272), &v35);
      if ( v29 < 0 )
        ModuleFailFastForHRESULT((unsigned int)v29, retaddr);
    }
    *((_DWORD *)this + 98) = v33;
    (*(void (__fastcall **)(CGenericInk *, __int64))(*(_QWORD *)this + 72LL))(this, 3LL);
    (*(void (__fastcall **)(CGenericInk *, __int64, CGenericInk *))(*(_QWORD *)this + 72LL))(this, 1LL, this);
    CSuperWetInkManager::OnUpdatedInkReceived(*(CSuperWetInkManager **)(*((_QWORD *)this + 2) + 256LL), this);
  }
LABEL_26:
  if ( v8 )
    DefaultHeap::Free(v8);
  return v13;
}

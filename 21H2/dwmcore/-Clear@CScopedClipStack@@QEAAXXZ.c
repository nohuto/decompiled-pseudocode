/*
 * XREFs of ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18008C388
 * Callers:
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x180049AE8 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008DF84 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?HrMalloc@@YAJ_K0PEAPEAX@Z @ 0x1800438FC (-HrMalloc@@YAJ_K0PEAPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800D0F68 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CScopedClipStack::Clear(CScopedClipStack *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  unsigned int i; // esi
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  void *v17; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 6) = 0;
  DynArrayImpl<0>::ShrinkToSize(this, 88LL);
  *((_DWORD *)this + 524) = 0;
  v3 = 8LL;
  v4 = *((_DWORD *)this + 526);
  if ( v4 == 8 )
  {
    v9 = *((_DWORD *)this + 530);
    v10 = 8LL;
    if ( v9 > 8 )
      v10 = v9;
    if ( (unsigned __int64)(3 * v10) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v10) <= *((_DWORD *)this + 525) )
    {
      v17 = 0LL;
      v12 = HrMalloc(0x10uLL, (unsigned int)v10, &v17);
      if ( v12 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 264));
        *((_QWORD *)this + 264) = v17;
        *((_DWORD *)this + 525) = v10;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x116u);
      }
    }
    *((_DWORD *)this + 530) = 0;
    v5 = 0;
  }
  else
  {
    v5 = v4 + 1;
  }
  *((_DWORD *)this + 526) = v5;
  *((_DWORD *)this + 516) = 0;
  v6 = *((_DWORD *)this + 518);
  if ( v6 == 8 )
  {
    v11 = *((_DWORD *)this + 522);
    if ( v11 > 8 )
      v3 = v11;
    if ( (unsigned __int64)(3 * v3) > 0xFFFFFFFF )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0LL, -2147024362, 0x106u);
    }
    else if ( (unsigned int)(3 * v3) <= *((_DWORD *)this + 517) )
    {
      v17 = 0LL;
      v14 = HrMalloc(0x10uLL, (unsigned int)v3, &v17);
      if ( v14 >= 0 )
      {
        DefaultHeap::Free(*((void **)this + 260));
        *((_QWORD *)this + 260) = v17;
        *((_DWORD *)this + 517) = v3;
      }
      else
      {
        MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0LL, v14, 0x116u);
      }
    }
    *((_DWORD *)this + 522) = 0;
    v7 = 0;
  }
  else
  {
    v7 = v6 + 1;
  }
  *((_DWORD *)this + 518) = v7;
  for ( i = 0; i < *((_DWORD *)this + 234); ++i )
  {
    v16 = *((_QWORD *)this + 114) + 112LL * i;
    CShapePtr::Release((CShapePtr *)v16);
    CShapePtr::Release((CShapePtr *)(v16 + 88));
  }
  *((_DWORD *)this + 234) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 912, 112LL);
}

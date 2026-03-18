/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x180205390
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180046EF0 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800BDA3C (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800D7C40 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x18020368C (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x1802036D4 (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x180204594 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x18020560C (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     ??0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z @ 0x180253620 (--0InternalFilterInput@@QEAA@IAEBUtagRECT@@PEAVCResource@@@Z.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x18025367C (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  struct CResource **v6; // rdi
  CResourceTable *v7; // r8
  int v10; // ebx
  int v11; // ebp
  struct CResource *ResourceWithoutType; // r15
  __int64 v13; // rdi
  _DWORD *v14; // rax
  unsigned int *v15; // rsi
  unsigned int v16; // edx
  __int64 v17; // rcx
  InternalFilterInput *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  InternalFilterInput *v26; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v10 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0LL, -2147024362, 0x2AAu);
LABEL_34:
    CFilterEffect::EmptyFilterInputMap(this);
    goto LABEL_35;
  }
  v10 = 0;
  if ( 28 * v5 != a5 )
  {
    v10 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(a5, 0LL, 0LL, -2003303421, 0x2AEu);
    goto LABEL_34;
  }
  if ( a4 )
  {
    v11 = 0;
    if ( (_DWORD)v5 )
    {
      while ( 1 )
      {
        ResourceWithoutType = 0LL;
        v13 = 0LL;
        if ( *((int *)this + 34) <= 0 )
        {
LABEL_10:
          v6 = 0LL;
        }
        else
        {
          v14 = (_DWORD *)*((_QWORD *)this + 15);
          while ( *v14 != a4[7 * v11] )
          {
            ++v13;
            ++v14;
            if ( v13 >= *((int *)this + 34) )
              goto LABEL_10;
          }
          v6 = *(struct CResource ***)(*((_QWORD *)this + 16) + 8 * v13);
        }
        v15 = &a4[7 * v11];
        if ( (v15[6] & 2) == 0 )
          break;
        if ( v6 )
        {
          CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
            (char *)this + 120,
            *v15,
            v7);
          InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
LABEL_24:
          v7 = a2;
        }
        v6 = 0LL;
        if ( (unsigned int)++v11 >= *((_DWORD *)a3 + 3) )
          goto LABEL_26;
      }
      v16 = v15[1];
      if ( v16 )
      {
        ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v16);
        if ( !ResourceWithoutType )
        {
          v10 = -2003303421;
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0LL, -2003303421, 0x2CBu);
          goto LABEL_34;
        }
      }
      if ( v6 )
      {
        CResource::UnRegisterNotifierInternal(this, v6[3]);
        InternalFilterInput::Update(
          (InternalFilterInput *)v6,
          v15[6],
          (const struct tagRECT *)(v15 + 2),
          ResourceWithoutType);
      }
      else
      {
        v18 = (InternalFilterInput *)operator new(0x20uLL);
        if ( !v18 )
        {
          v6 = 0LL;
LABEL_31:
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0LL, -2147024882, 0x2D2u);
          goto LABEL_34;
        }
        v26 = InternalFilterInput::InternalFilterInput(
                v18,
                v15[6],
                (const struct tagRECT *)(v15 + 2),
                ResourceWithoutType);
        v6 = (struct CResource **)v26;
        if ( !v26 )
          goto LABEL_31;
        if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                              (__int64)this + 120,
                              &a4[7 * v11],
                              &v26) )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, -2147024882, 0x2D5u);
          v6 = (struct CResource **)v26;
          goto LABEL_34;
        }
        v6 = (struct CResource **)v26;
      }
      v21 = CResource::RegisterNotifier(this, v6[3]);
      v10 = v21;
      if ( v21 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0LL, v21, 0x2E7u);
        goto LABEL_34;
      }
      goto LABEL_24;
    }
  }
LABEL_26:
  if ( v10 < 0 )
    goto LABEL_34;
LABEL_35:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
  return (unsigned int)v10;
}

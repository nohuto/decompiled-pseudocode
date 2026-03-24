/*
 * XREFs of ?ProcessUpdateInputs@CFilterEffect@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_FILTEREFFECT_UPDATEINPUTS@@PEBXI@Z @ 0x1801B2D70
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A325C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18009D530 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x1800A0B90 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??_GInternalFilterInput@@QEAAPEAXI@Z @ 0x1801B26B0 (--_GInternalFilterInput@@QEAAPEAXI@Z.c)
 *     ?Add@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBIAEBQEAVInternalFilterInput@@@Z @ 0x1801B26EC (-Add@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHAEBI.c)
 *     ?EmptyFilterInputMap@CFilterEffect@@AEAAXXZ @ 0x1801B28D4 (-EmptyFilterInputMap@CFilterEffect@@AEAAXXZ.c)
 *     ?RemoveRange@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAHHH@Z @ 0x1801B3014 (-RemoveRange@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@Q.c)
 *     ?Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z @ 0x18020301C (-Update@InternalFilterInput@@QEAAXIAEBUtagRECT@@PEAVCResource@@@Z.c)
 */

__int64 __fastcall CFilterEffect::ProcessUpdateInputs(
        CFilterEffect *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_FILTEREFFECT_UPDATEINPUTS *a3,
        _DWORD *a4,
        unsigned int a5)
{
  unsigned __int64 v5; // r10
  struct CResource **v6; // rbx
  CResourceTable *v7; // r8
  __int64 v10; // rcx
  int v11; // edi
  int v12; // r9d
  int v13; // ebp
  struct CResource *ResourceWithoutType; // r14
  __int64 v15; // rbx
  _DWORD *v16; // rax
  unsigned int *v17; // rsi
  unsigned int v18; // edx
  struct CResource **v19; // rax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-48h]
  struct CResource **v27; // [rsp+88h] [rbp+20h] BYREF

  v5 = *((unsigned int *)a3 + 3);
  v6 = 0LL;
  v7 = a2;
  if ( !is_mul_ok(v5, 0x1CuLL) )
  {
    v11 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147024362, 0x2AAu, 0LL);
    goto LABEL_39;
  }
  v10 = a5;
  v11 = 0;
  if ( 28 * v5 == a5 )
  {
    if ( a4 )
    {
      v13 = 0;
      if ( (_DWORD)v5 )
      {
        while ( 1 )
        {
          ResourceWithoutType = 0LL;
          v15 = 0LL;
          if ( *((int *)this + 32) <= 0 )
          {
LABEL_12:
            v15 = -1LL;
          }
          else
          {
            v16 = (_DWORD *)*((_QWORD *)this + 14);
            while ( *v16 != a4[7 * v13] )
            {
              ++v15;
              ++v16;
              if ( v15 >= *((int *)this + 32) )
                goto LABEL_12;
            }
          }
          v6 = v15 == -1 ? 0LL : *(struct CResource ***)(*((_QWORD *)this + 15) + 8 * v15);
          v17 = &a4[7 * v13];
          if ( (v17[6] & 2) == 0 )
            break;
          if ( v6 )
          {
            CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveRange(
              (char *)this + 112,
              *v17,
              v7);
            InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
LABEL_31:
            v7 = a2;
          }
          v6 = 0LL;
          if ( (unsigned int)++v13 >= *((_DWORD *)a3 + 3) )
            goto LABEL_39;
        }
        v18 = v17[1];
        if ( v18 )
        {
          ResourceWithoutType = CResourceTable::GetResourceWithoutType(v7, v18);
          if ( !ResourceWithoutType )
          {
            v24 = 715;
            goto LABEL_4;
          }
        }
        if ( v6 )
        {
          CResource::UnRegisterNotifierInternal(this, v6[3]);
          InternalFilterInput::Update(
            (InternalFilterInput *)v6,
            v17[6],
            (const struct tagRECT *)(v17 + 2),
            ResourceWithoutType);
        }
        else
        {
          v19 = (struct CResource **)operator new(0x20uLL);
          v6 = v19;
          if ( v19 )
          {
            *(_DWORD *)v19 = v17[6];
            *((_DWORD *)v19 + 1) = v17[2];
            *((_DWORD *)v19 + 2) = v17[3];
            *((_DWORD *)v19 + 3) = v17[4];
            *((_DWORD *)v19 + 4) = v17[5];
            v19[3] = ResourceWithoutType;
            if ( ResourceWithoutType )
              (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)ResourceWithoutType + 8LL))(ResourceWithoutType);
          }
          else
          {
            v6 = 0LL;
          }
          v27 = v6;
          if ( !v6 )
          {
            v12 = -2147024882;
            v24 = 722;
            goto LABEL_5;
          }
          if ( !(unsigned int)CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::Add(
                                (__int64)this + 112,
                                &a4[7 * v13],
                                &v27) )
          {
            v11 = -2147024882;
            MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, -2147024882, 0x2D5u, 0LL);
            v6 = v27;
            goto LABEL_40;
          }
          v6 = v27;
        }
        v21 = CResource::RegisterNotifier(this, v6[3]);
        v11 = v21;
        if ( v21 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v22, 0LL, 0, v21, 0x2E7u, 0LL);
          goto LABEL_39;
        }
        goto LABEL_31;
      }
    }
LABEL_39:
    if ( v11 >= 0 )
      goto LABEL_41;
    goto LABEL_40;
  }
  v24 = 686;
LABEL_4:
  v12 = -2003303421;
LABEL_5:
  v11 = v12;
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v12, v24, 0LL);
LABEL_40:
  CFilterEffect::EmptyFilterInputMap(this);
LABEL_41:
  if ( v6 )
    InternalFilterInput::`scalar deleting destructor'((InternalFilterInput *)v6);
  return (unsigned int)v11;
}

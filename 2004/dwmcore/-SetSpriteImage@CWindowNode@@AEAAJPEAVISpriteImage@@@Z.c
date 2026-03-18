/*
 * XREFs of ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x180035588
 * Callers:
 *     ?ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEIMAGE@@@Z @ 0x180035508 (-ProcessSetSpriteImage@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSPRITEI.c)
 * Callees:
 *     ??R?$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z @ 0x1800091A4 (--R-$default_delete@VCShape@@@std@@QEBAXPEAVCShape@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180034D4C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ @ 0x1800367AC (-GetDesktopTree@CVisual@@QEBAPEAVCDesktopTree@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18003E144 (--1-$com_ptr_t@VID2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x1800449CC (-ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180084B20 (--3@YAXPEAX_K@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A0618 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A28A8 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800AC2C0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800BC868 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0xxx_EventWriteTransfer @ 0x1801F515C (McTemplateU0xxx_EventWriteTransfer.c)
 */

__int64 __fastcall CWindowNode::SetSpriteImage(CWindowNode *this, struct ISpriteImage *a2)
{
  unsigned int v3; // ebp
  _QWORD **v4; // rdi
  unsigned int v5; // ecx
  struct ISpriteImage **v6; // rax
  struct CResource *v7; // rax
  int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 (__fastcall ***v15)(_QWORD); // rcx
  struct CResource *v16; // rbx
  int v17; // eax
  unsigned int v18; // r14d
  __int64 (__fastcall ***v19)(_QWORD); // rcx
  struct CResource *v20; // rbx
  __int64 v21; // rcx
  struct CDesktopTree *DesktopTree; // rax
  __int64 v23; // rcx
  _QWORD *v24; // rbx
  struct CResource *v25; // rbx
  int v26; // ecx
  __int64 v27; // r9
  unsigned int v28; // r8d
  __int64 v29; // rcx
  unsigned int v30; // ecx
  int v31; // eax
  __int64 (__fastcall ***v32)(_QWORD, __int64); // rdx
  __int64 (__fastcall ***v33)(_QWORD, __int64); // rdx
  unsigned int v34; // [rsp+20h] [rbp-28h]
  struct ISpriteImage *v35; // [rsp+58h] [rbp+10h] BYREF

  v35 = a2;
  v3 = 0;
  if ( !a2 )
    goto LABEL_17;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0xxx_EventWriteTransfer(
      (_DWORD)this,
      (unsigned int)&EVTDESC_WINDOWNODE_GDISPRITE_ASSOCIATION,
      *((_QWORD *)this + 77),
      *((_QWORD *)this + 78),
      (char)a2);
    a2 = v35;
  }
  if ( !a2 )
  {
LABEL_17:
    v15 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 90);
    if ( v15 )
    {
      v16 = (struct CResource *)(**v15)(v15);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 90) + 16LL))(*((_QWORD *)this + 90), this);
      CResource::UnRegisterNotifierInternal(this, v16);
      v17 = *((_DWORD *)this + 188);
      *((_QWORD *)this + 90) = 0LL;
    }
    else
    {
      v17 = *((_DWORD *)this + 188);
      if ( !v17 )
        return v3;
    }
    v18 = 0;
    if ( v17 )
    {
      do
      {
        v19 = *(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 91) + 8LL * v18);
        v20 = (struct CResource *)(**v19)(v19);
        v21 = *(_QWORD *)(*((_QWORD *)this + 91) + 8LL * v18);
        (*(void (__fastcall **)(__int64, CWindowNode *))(*(_QWORD *)v21 + 16LL))(v21, this);
        CResource::UnRegisterNotifierInternal(this, v20);
        ++v18;
      }
      while ( v18 < *((_DWORD *)this + 188) );
    }
    *((_DWORD *)this + 188) = 0;
    DynArrayImpl<0>::ShrinkToSize((char *)this + 728, 8LL);
    goto LABEL_14;
  }
  if ( a2 == *((struct ISpriteImage **)this + 90) )
    return v3;
  v4 = (_QWORD **)((char *)this + 728);
  v5 = 0;
  v6 = (struct ISpriteImage **)*((_QWORD *)this + 91);
  if ( !*((_DWORD *)this + 188) )
  {
LABEL_7:
    if ( *((_DWORD *)this + 188) > 0x10u )
    {
      do
      {
        v25 = (struct CResource *)(**(__int64 (__fastcall ***)(_QWORD))**v4)(**v4);
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(*(_QWORD *)**v4 + 16LL))(**v4, this);
        CResource::UnRegisterNotifierInternal(this, v25);
        v26 = *((_DWORD *)this + 188);
        if ( v26 )
        {
          v27 = (__int64)*v4;
          v28 = 0;
          if ( v26 != 1 )
          {
            do
            {
              v29 = v28++;
              *(_QWORD *)(v27 + 8 * v29) = *(_QWORD *)(v27 + 8LL * v28);
              v26 = *((_DWORD *)this + 188);
            }
            while ( v28 < v26 - 1 );
          }
          *((_DWORD *)this + 188) = v26 - 1;
        }
        else
        {
          MilInstrumentationCheckHR_MaybeFailFast(0, 0LL, 0, -2147024809, 0x19Cu, 0LL);
        }
      }
      while ( *((_DWORD *)this + 188) > 0x10u );
      a2 = v35;
    }
    v7 = (struct CResource *)(**(__int64 (__fastcall ***)(struct ISpriteImage *))a2)(a2);
    v8 = CResource::RegisterNotifier(this, v7);
    v3 = v8;
    if ( v8 < 0 )
    {
      v34 = 494;
      goto LABEL_45;
    }
    v10 = *((_DWORD *)this + 188);
    v11 = v10 + 1;
    if ( v10 + 1 < v10 )
    {
      v3 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024362, 0xB5u, 0LL);
    }
    else
    {
      if ( v11 <= *((_DWORD *)this + 187) )
      {
        (*v4)[v10] = v35;
        *((_DWORD *)this + 188) = v11;
LABEL_12:
        v8 = (*(__int64 (__fastcall **)(struct ISpriteImage *, CWindowNode *))(*(_QWORD *)v35 + 8LL))(v35, this);
        v3 = v8;
        if ( v8 >= 0 )
        {
          LOBYTE(v12) = *((_BYTE *)this + 913);
          (*(void (__fastcall **)(struct ISpriteImage *, __int64))(*(_QWORD *)v35 + 56LL))(v35, v12);
          v13 = *((_DWORD *)this + 209) >> 1;
          LOBYTE(v13) = (*((_DWORD *)this + 209) & 2) != 0;
          (*(void (__fastcall **)(struct ISpriteImage *, __int64, char *))(*(_QWORD *)v35 + 64LL))(
            v35,
            v13,
            (char *)this + 784);
          CWindowNode::ProcessReadyGdiSpriteBitmaps(this);
LABEL_14:
          if ( *((_BYTE *)this + 914) )
          {
            DesktopTree = CVisual::GetDesktopTree(this);
            if ( DesktopTree )
            {
              v24 = (_QWORD *)*((_QWORD *)DesktopTree + 739);
              *((_QWORD *)DesktopTree + 739) = 0LL;
              if ( v24 )
              {
                v32 = (__int64 (__fastcall ***)(_QWORD, __int64))v24[20];
                if ( v32 )
                  std::default_delete<CShape>::operator()(v23, v32);
                v33 = (__int64 (__fastcall ***)(_QWORD, __int64))v24[2];
                if ( v33 )
                  std::default_delete<CShape>::operator()(v23, v33);
                wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>(v24 + 1);
                operator delete(v24, 0xA8uLL);
              }
            }
          }
          *((_BYTE *)this + 912) = 0;
          CVisual::PropagateFlags(this, 5LL);
          return v3;
        }
        v34 = 497;
LABEL_45:
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, v34, 0LL);
        return v3;
      }
      v31 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 728, 8LL, 1LL, &v35);
      v3 = v31;
      if ( v31 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v31, 0xC0u, 0LL);
    }
    if ( (v3 & 0x80000000) != 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v3, 0x1EFu, 0LL);
      return v3;
    }
    goto LABEL_12;
  }
  while ( a2 != *v6 )
  {
    ++v5;
    ++v6;
    if ( v5 >= *((_DWORD *)this + 188) )
      goto LABEL_7;
  }
  return v3;
}

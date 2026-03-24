/*
 * XREFs of ?ProcessReadyGdiSpriteBitmaps@CWindowNode@@AEAA_NXZ @ 0x18009BF14
 * Callers:
 *     ?NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z @ 0x18009BA4C (-NotifyDirtySurface@CWindowNode@@QEAAXAEBVCRegion@@_N1@Z.c)
 *     ?SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z @ 0x1800D10C4 (-SetSpriteImage@CWindowNode@@AEAAJPEAVISpriteImage@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180045210 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x18009F678 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::ProcessReadyGdiSpriteBitmaps(CWindowNode *this)
{
  unsigned int v1; // esi
  char v2; // r14
  __int64 v5; // rbp
  __int64 v6; // rcx
  __int64 (__fastcall ***v7)(_QWORD); // rcx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  struct CResource *v11; // rbx
  __int64 v12; // r15
  struct CResource *v13; // rbx

  v1 = *((_DWORD *)this + 188);
  v2 = 0;
  if ( v1 )
  {
    while ( 1 )
    {
      v5 = v1 - 1;
      v6 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * v5);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 24LL))(v6) || *((_BYTE *)this + 914) )
        break;
      --v1;
      if ( !(_DWORD)v5 )
        return v2;
    }
    v7 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 90);
    if ( v7 )
    {
      v11 = (struct CResource *)(**v7)(v7);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 90) + 16LL))(*((_QWORD *)this + 90), this);
      CResource::UnRegisterNotifierInternal(this, v11);
    }
    v2 = 1;
    v8 = *(_QWORD *)(*((_QWORD *)this + 91) + 8 * v5);
    *((_QWORD *)this + 90) = v8;
    if ( v1 != 1 )
    {
      v12 = 0LL;
      do
      {
        v13 = (struct CResource *)(***(__int64 (__fastcall ****)(_QWORD))(v12 + *((_QWORD *)this + 91)))(*(_QWORD *)(v12 + *((_QWORD *)this + 91)));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(v12 + *((_QWORD *)this + 91)) + 16LL))(
          *(_QWORD *)(v12 + *((_QWORD *)this + 91)),
          this);
        CResource::UnRegisterNotifierInternal(this, v13);
        *(_QWORD *)(v12 + *((_QWORD *)this + 91)) = 0LL;
        v12 += 8LL;
        --v5;
      }
      while ( v5 );
    }
    if ( v1 )
    {
      v9 = *((_DWORD *)this + 188);
      if ( v1 > v9 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x23Du, 0LL);
      }
      else
      {
        v10 = v9 - v1;
        if ( v10 )
          memmove_0(*((void **)this + 91), (const void *)(*((_QWORD *)this + 91) + 8LL * v1), 8LL * v10);
        *((_DWORD *)this + 188) = v10;
      }
    }
    CVisual::PropagateFlags(this, 4LL);
  }
  return v2;
}

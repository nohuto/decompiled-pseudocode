/*
 * XREFs of ?AddPoolBuffer@CFlipManager@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C007C510
 * Callers:
 *     ?AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z @ 0x1C0079B10 (-AddPoolBuffer@FlipManagerObject@@QEAAJ_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAVCPoolBufferResourceState@@@Z @ 0x1C007F044 (-Create@CPoolBufferResource@@SAJPEAVCFlipManager@@_KPEAXAEBU_LUID@@PEAVCFlipPropertySet@@PEAPEAV.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C007F9EC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 */

__int64 __fastcall CFlipManager::AddPoolBuffer(
        CFlipManager *this,
        unsigned __int64 a2,
        void *a3,
        const struct _LUID *a4,
        struct CFlipPropertySet *a5)
{
  char *v5; // rdi
  unsigned __int64 v8; // rdx
  const struct _LUID *v9; // r11
  int v10; // ebx
  struct CPoolBufferResourceState *v11; // rsi
  char **v12; // rcx
  char *v13; // rax
  struct DXGGLOBAL *Global; // rax
  struct CPoolBufferResourceState *v16; // [rsp+40h] [rbp+8h] BYREF

  v16 = 0LL;
  v5 = (char *)this + 56;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 56)) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v10 = CPoolBufferResource::Create(this, v8, a3, v9, a5, &v16);
    if ( v10 >= 0 )
    {
      v11 = v16;
      v12 = (char **)*((_QWORD *)v5 + 1);
      v13 = (char *)(((unsigned __int64)v16 + 8) & -(__int64)(v16 != 0LL));
      if ( *v12 != v5 )
        __fastfail(3u);
      *(_QWORD *)v13 = v5;
      *((_QWORD *)v13 + 1) = v12;
      *v12 = v13;
      *((_QWORD *)v5 + 1) = v13;
      Global = DXGGLOBAL_GetGlobal();
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*((_QWORD *)Global + 38073) + 208LL))(
        *((unsigned int *)this + 82),
        *((_QWORD *)v11 + 3),
        *(_QWORD *)(*((_QWORD *)v11 + 3) + 56LL));
    }
  }
  return (unsigned int)v10;
}

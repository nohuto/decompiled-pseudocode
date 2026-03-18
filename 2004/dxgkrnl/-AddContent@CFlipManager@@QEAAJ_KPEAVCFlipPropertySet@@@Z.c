/*
 * XREFs of ?AddContent@CFlipManager@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0069CAC
 * Callers:
 *     ?AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z @ 0x1C0067610 (-AddContent@FlipManagerObject@@QEAAJ_KPEAVCFlipPropertySet@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@@@Z @ 0x1C006B8FC (-FindResourceState@CEndpointResourceStateManager@@AEAAPEAVCFlipResourceState@@_KPEAU_LIST_ENTRY@.c)
 *     ?Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z @ 0x1C006D1C4 (-Create@CContentResource@@SAJ_KPEAVCFlipPropertySet@@PEAPEAVCContentResourceState@@@Z.c)
 */

__int64 __fastcall CFlipManager::AddContent(CFlipManager *this, unsigned __int64 a2, struct CFlipPropertySet *a3)
{
  char *v3; // rdi
  unsigned __int64 v6; // r11
  int v7; // ebx
  int v8; // eax
  struct CContentResourceState *v9; // r8
  __int64 v10; // rax
  char **v11; // rax
  char *v12; // r8
  struct CContentResourceState *v14; // [rsp+30h] [rbp+8h] BYREF

  v14 = 0LL;
  v3 = (char *)this + 72;
  if ( CEndpointResourceStateManager::FindResourceState(this, a2, (struct _LIST_ENTRY *)((char *)this + 72)) )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = CContentResource::Create(v6, a3, &v14);
    v9 = v14;
    v7 = v8;
    if ( v8 >= 0 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v14 + 3) + 48LL) )
      {
        v10 = *((_QWORD *)this + 6);
        if ( v10 )
        {
          if ( v10 != 1 )
            v7 = -1073741790;
        }
        else
        {
          *((_QWORD *)this + 6) = 1LL;
        }
      }
      if ( v7 >= 0 )
      {
        v11 = (char **)*((_QWORD *)v3 + 1);
        v12 = (char *)v9 + 8;
        if ( *v11 != v3 )
          __fastfail(3u);
        *(_QWORD *)v12 = v3;
        *((_QWORD *)v12 + 1) = v11;
        *v11 = v12;
        *((_QWORD *)v3 + 1) = v12;
        v9 = 0LL;
      }
    }
    if ( v9 )
      (*(void (__fastcall **)(struct CContentResourceState *, __int64))(*(_QWORD *)v9 + 32LL))(v9, 1LL);
  }
  return (unsigned int)v7;
}

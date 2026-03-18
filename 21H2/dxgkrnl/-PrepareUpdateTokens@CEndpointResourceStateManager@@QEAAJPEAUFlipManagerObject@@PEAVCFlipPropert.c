/*
 * XREFs of ?PrepareUpdateTokens@CEndpointResourceStateManager@@QEAAJPEAUFlipManagerObject@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C00809E0
 * Callers:
 *     ?ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken@@PEAU_LIST_ENTRY@@@Z @ 0x1C007CD34 (-ConsumerDwmProcessUpdateTokens@CFlipManager@@QEAAJPEAVCFlipPresentUpdate@@PEAVCFlipManagerToken.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@AEAU_LIST_ENTRY@@@Z @ 0x1C00815B4 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 */

__int64 __fastcall CEndpointResourceStateManager::PrepareUpdateTokens(
        CEndpointResourceStateManager **this,
        struct FlipManagerObject *a2,
        struct CFlipPropertySet *a3,
        struct _LIST_ENTRY *a4)
{
  CEndpointResourceStateManager *v4; // rdx
  int v8; // edi
  __int64 v9; // rcx
  char v10; // al
  CEndpointResourceStateManager *v11; // r14
  __int64 v12; // rbx
  char v13; // al
  int UpdateTokens; // eax
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *Flink; // rax

  v4 = *this;
  v8 = 0;
  while ( v4 != (CEndpointResourceStateManager *)this )
  {
    v9 = (__int64)v4 + 24;
    if ( !v4 )
      v9 = 32LL;
    v10 = *(_BYTE *)v9;
    if ( (*(_BYTE *)v9 & 1) != 0 )
    {
      v10 |= 4u;
      *(_BYTE *)v9 = v10;
    }
    if ( (v10 & 2) != 0 )
      *(_BYTE *)v9 = v10 | 8;
    v4 = *(CEndpointResourceStateManager **)v4;
  }
  v11 = this[2];
  while ( v11 != (CEndpointResourceStateManager *)(this + 2) )
  {
    if ( *(_QWORD *)(*(_QWORD *)((((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)) + 0x18) + 48LL) )
    {
      v13 = *(_BYTE *)((((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)) + 0x20);
      if ( (v13 & 1) != 0 )
      {
        v13 |= 4u;
        *(_BYTE *)((((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)) + 0x20) = v13;
      }
      if ( (v13 & 2) != 0 )
        *(_BYTE *)((((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)) + 0x20) = v13 | 8;
      if ( (*(_BYTE *)((((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)) + 0x40) & 1) != 0 )
      {
        UpdateTokens = CContentResourceState::CreateUpdateTokens(
                         (CContentResourceState *)(((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL)),
                         (struct CEndpointResourceStateManager *)this,
                         a3,
                         a4);
        v12 = ((unsigned __int64)v11 - 8) & -(__int64)(v11 != 0LL);
        *(_BYTE *)(v12 + 64) |= 2u;
        v8 = UpdateTokens;
      }
    }
    v11 = *(CEndpointResourceStateManager **)v11;
    if ( v8 < 0 )
    {
      while ( 1 )
      {
        Flink = a4->Flink;
        if ( a4->Flink == a4 )
          break;
        v15 = Flink->Flink;
        if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
          __fastfail(3u);
        Blink->Flink = v15;
        v15->Blink = Blink;
        if ( Flink != (struct _LIST_ENTRY *)8 )
          ((void (__fastcall *)(struct _LIST_ENTRY **, __int64))Flink[-1].Blink->Flink)(&Flink[-1].Blink, 1LL);
      }
      return (unsigned int)v8;
    }
  }
  return (unsigned int)v8;
}

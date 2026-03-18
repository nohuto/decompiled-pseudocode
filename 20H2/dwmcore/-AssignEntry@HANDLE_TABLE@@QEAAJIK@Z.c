/*
 * XREFs of ?AssignEntry@HANDLE_TABLE@@QEAAJIK@Z @ 0x1800662F8
 * Callers:
 *     ?AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z @ 0x180034628 (-AssignChannelEntry@CChannelTable@@QEAAJIPEAPEAUCLIENT_CHANNEL_HANDLE_ENTRY@@@Z.c)
 *     ?AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z @ 0x1800662A8 (-AllocateEntryAtHandle@CResourceTable@@IEAAJIW4MIL_RESOURCE_TYPE@@PEAPEAUHANDLE_ENTRY@1@@Z.c)
 * Callees:
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x180052CF4 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall HANDLE_TABLE::AssignEntry(HANDLE_TABLE *this, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  HANDLE_TABLE *v6; // rsi
  __int64 v7; // rax
  int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  v3 = 0;
  v6 = this;
  if ( !a3 || !a2 )
  {
    v11 = 398;
    goto LABEL_11;
  }
  if ( a2 >= *((_DWORD *)this + 3) )
  {
    v9 = HANDLE_TABLE::ResizeToFit(this, a2);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x19Bu, 0LL);
      return v3;
    }
  }
  v7 = *((_QWORD *)v6 + 3);
  this = (HANDLE_TABLE *)(a2 * *((_DWORD *)v6 + 2));
  if ( *(_DWORD *)((char *)this + v7) )
  {
    v11 = 426;
LABEL_11:
    v3 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2147024809, v11, 0LL);
    return v3;
  }
  *(_DWORD *)((char *)this + v7) = a3;
  return v3;
}

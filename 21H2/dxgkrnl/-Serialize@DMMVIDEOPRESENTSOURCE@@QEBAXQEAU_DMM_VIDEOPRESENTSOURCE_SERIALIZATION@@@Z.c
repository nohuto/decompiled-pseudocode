/*
 * XREFs of ?Serialize@DMMVIDEOPRESENTSOURCE@@QEBAXQEAU_DMM_VIDEOPRESENTSOURCE_SERIALIZATION@@@Z @ 0x1C02EA128
 * Callers:
 *     ?Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZATION@@@DMM@@@Z @ 0x1C02EA270 (-Serialize@DMMVIDEOPRESENTSOURCESET@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDEOPRESENTSOURCESET_SERIALIZA.c)
 * Callees:
 *     ?IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A6CC (-IsVidPnSourceVisible@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000A708 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C000D018 (-IsPartOfDesktop@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 */

void __fastcall DMMVIDEOPRESENTSOURCE::Serialize(
        DMMVIDEOPRESENTSOURCE *this,
        struct _DMM_VIDEOPRESENTSOURCE_SERIALIZATION *const a2)
{
  unsigned __int8 IsVidPnSourceVisible; // bl
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rsi
  ADAPTER_DISPLAY *v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rax
  __int64 v12; // rdx
  ADAPTER_DISPLAY *v13; // rcx
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v16; // rdx
  ADAPTER_DISPLAY *v17; // rcx
  unsigned int v18; // ebp
  __int64 v19; // rax

  IsVidPnSourceVisible = 0;
  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v5);
  }
  *(_DWORD *)a2 = *((_DWORD *)this + 6);
  v6 = *((_QWORD *)this + 5);
  if ( !v6 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
    v6 = *((_QWORD *)this + 5);
  }
  v8 = *(_QWORD *)(v6 + 88);
  if ( v8 )
  {
    v9 = *(ADAPTER_DISPLAY **)(v8 + 8);
    v10 = *((_DWORD *)this + 6);
    if ( !v9 )
    {
      v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
      WdLogEvent5_WdAssertion(v11);
      v9 = *(ADAPTER_DISPLAY **)(v8 + 8);
    }
    *((_BYTE *)a2 + 4) = ADAPTER_DISPLAY::IsPartOfDesktop(v9, v10);
    v13 = *(ADAPTER_DISPLAY **)(v8 + 8);
    v14 = *((_DWORD *)this + 6);
    if ( !v13 )
    {
      v15 = WdLogNewEntry5_WdAssertion(0LL, v12);
      WdLogEvent5_WdAssertion(v15);
      v13 = *(ADAPTER_DISPLAY **)(v8 + 8);
    }
    *((_BYTE *)a2 + 5) = ADAPTER_DISPLAY::IsVidPnSourceActive(v13, v14);
    v17 = *(ADAPTER_DISPLAY **)(v8 + 8);
    v18 = *((_DWORD *)this + 6);
    if ( !v17 )
    {
      v19 = WdLogNewEntry5_WdAssertion(0LL, v16);
      WdLogEvent5_WdAssertion(v19);
      v17 = *(ADAPTER_DISPLAY **)(v8 + 8);
    }
    IsVidPnSourceVisible = ADAPTER_DISPLAY::IsVidPnSourceVisible(v17, v18);
  }
  else
  {
    *((_WORD *)a2 + 2) = 0;
  }
  *((_BYTE *)a2 + 6) = IsVidPnSourceVisible;
}

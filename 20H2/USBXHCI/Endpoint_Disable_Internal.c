/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C000ABD4
 * Callers:
 *     Endpoint_Enable @ 0x1C00083B0 (Endpoint_Enable.c)
 *     Endpoint_Disable @ 0x1C000AB88 (Endpoint_Disable.c)
 * Callees:
 *     TR_Disable_Internal @ 0x1C000A330 (TR_Disable_Internal.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C000AD54 (WPP_RECORDER_SF_ddql.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0038234 (XilEndpoint_FreeStreamContextArray.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 a1, char a2, int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // si
  _DWORD *v8; // rdi
  unsigned int i; // ebp
  __int64 v10; // rdx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddql(*(_QWORD *)(*(_QWORD *)a1 + 72LL), a2, a3, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL));
  if ( ((*(_DWORD *)(a1 + 120) - 3) & 0xFFFFFFFB) == 0 )
  {
    v5 = 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) - 1);
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 152LL) + 48LL);
    if ( *(_DWORD *)(v5 + v6 + 108) )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + v6 + 108));
  }
  v7 = !*(_BYTE *)(a1 + 36) && !*(_BYTE *)(a1 + 1336) || a2;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v8 = *(_DWORD **)(a1 + 136);
    if ( v8 )
    {
      for ( i = 1; i <= v8[2]; ++i )
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48), v7);
    }
  }
  else
  {
    v8 = 0LL;
    TR_Disable_Internal(*(_QWORD *)(a1 + 88), v7);
  }
  if ( v7 )
  {
    if ( v8 )
    {
      XilEndpoint_FreeStreamContextArray(v8);
      if ( v8 == *(_DWORD **)(a1 + 128) )
      {
        ExFreePoolWithTag(v8, 0x49434858u);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v10 = *(_QWORD *)(a1 + 80);
    if ( v10 )
    {
      if ( v10 != *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    }
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}

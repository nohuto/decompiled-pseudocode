/*
 * XREFs of Endpoint_Disable_Internal @ 0x1C0004DBC
 * Callers:
 *     Endpoint_Disable @ 0x1C0004D70 (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x1C0004FA0 (Endpoint_Enable.c)
 * Callees:
 *     TR_Disable_Internal @ 0x1C0001578 (TR_Disable_Internal.c)
 *     WPP_RECORDER_SF_ddql @ 0x1C0004EDC (WPP_RECORDER_SF_ddql.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C0037764 (XilEndpoint_FreeStreamContextArray.c)
 */

void __fastcall Endpoint_Disable_Internal(__int64 a1, char a2, int a3)
{
  char v5; // si
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int i; // ebp

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddql(*(_QWORD *)(*(_QWORD *)a1 + 72LL), a2, a3, *(unsigned __int8 *)(*(_QWORD *)(a1 + 16) + 135LL));
  if ( ((*(_DWORD *)(a1 + 120) - 3) & 0xFFFFFFFB) == 0 )
  {
    v8 = 112LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 16) + 44LL) - 1);
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 152LL) + 48LL);
    if ( *(_DWORD *)(v8 + v9 + 108) )
      _InterlockedDecrement((volatile signed __int32 *)(v8 + v9 + 108));
  }
  v5 = !*(_BYTE *)(a1 + 36) && !*(_BYTE *)(a1 + 1336) || a2;
  if ( *(_BYTE *)(a1 + 37) )
  {
    v6 = *(_DWORD **)(a1 + 136);
    if ( v6 )
    {
      for ( i = 1; i <= v6[2]; ++i )
        TR_Disable_Internal(*(_QWORD *)(104LL * (i - 1) + *(_QWORD *)(a1 + 136) + 48), v5);
    }
  }
  else
  {
    v6 = 0LL;
    TR_Disable_Internal(*(_QWORD *)(a1 + 88), v5);
  }
  if ( v5 )
  {
    if ( v6 )
    {
      XilEndpoint_FreeStreamContextArray(v6);
      if ( v6 == *(_DWORD **)(a1 + 128) )
      {
        ExFreePoolWithTag(v6, 0x49434858u);
        *(_QWORD *)(a1 + 128) = 0LL;
      }
      *(_QWORD *)(a1 + 136) = 0LL;
    }
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
    {
      if ( v7 != *(_QWORD *)(*(_QWORD *)a1 + 72LL) )
        imp_WppRecorderLogDelete(WPP_GLOBAL_Control);
    }
    *(_QWORD *)(a1 + 80) = 0LL;
  }
}

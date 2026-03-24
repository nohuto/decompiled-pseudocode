/*
 * XREFs of DpiLdaStartAdapterInChain @ 0x1C02D81F8
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x1C0199C54 (DpiFdoStartAdapterThreadImpl.c)
 * Callees:
 *     DpiFdoStartAdapter @ 0x1C018071C (DpiFdoStartAdapter.c)
 */

__int64 __fastcall DpiLdaStartAdapterInChain(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4,
        unsigned int a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v7; // rdi
  void *v9; // r13
  char v10; // r11
  __int64 v11; // rsi
  __int64 v12; // rdi
  int started; // ebx
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rbp
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // rbp
  struct _DEVICE_OBJECT *v20; // rcx
  char v22; // [rsp+78h] [rbp+10h]

  v22 = a2;
  v7 = *(_QWORD *)(a1 + 64);
  v9 = (void *)a3;
  v10 = a2;
  v11 = a1;
  if ( *(_BYTE *)(v7 + 508) != 1 )
  {
    v12 = *(_QWORD *)(v7 + 2728);
    if ( !v12 )
    {
LABEL_3:
      started = 1075708986;
      v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
      *(_QWORD *)(v14 + 24) = v11;
      goto LABEL_4;
    }
    v7 = *(_QWORD *)(v12 + 64);
  }
  a1 = *(unsigned int *)(v7 + 2736);
  if ( (_DWORD)a1 != *(_DWORD *)(v7 + 504) )
    goto LABEL_3;
  a3 = 0LL;
  *(_BYTE *)(v7 + 2740) = 0;
  if ( (_DWORD)a1 )
  {
    v15 = *(_QWORD *)(v7 + 2728);
    LOBYTE(a2) = 0;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v15 + 8 * a3);
      v17 = *(_QWORD *)(v16 + 64);
      if ( *(_BYTE *)(v17 + 232) == 1 )
        break;
      if ( (unsigned int)(*(_DWORD *)(v17 + 236) - 1) > 1 )
        goto LABEL_3;
      if ( (_BYTE)a2 || *(_DWORD *)(v7 + 1124) != *(_DWORD *)(v17 + 1124) )
        LOBYTE(a2) = 1;
      a3 = (unsigned int)(a3 + 1);
      *(_BYTE *)(v7 + 2740) = a2;
      if ( (unsigned int)a3 >= (unsigned int)a1 )
        goto LABEL_15;
    }
    started = -1071774669;
    v14 = WdLogNewEntry5_WdWarning(a1, a2, a3);
    *(_QWORD *)(v14 + 24) = v16;
LABEL_4:
    WdLogEvent5_WdWarning(v14);
    return (unsigned int)started;
  }
LABEL_15:
  v18 = 1;
  if ( (unsigned int)a1 > 1 )
  {
    do
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2728) + 8LL * v18) + 64LL);
      if ( *(_DWORD *)(v19 + 236) == 1 )
      {
        started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v19 + 24), v10, v9, a4, a5, a6, 0LL);
        if ( started < 0 )
        {
          v20 = *(struct _DEVICE_OBJECT **)(v19 + 152);
LABEL_22:
          IoInvalidateDeviceState(v20);
          return (unsigned int)started;
        }
        v10 = v22;
      }
      ++v18;
    }
    while ( v18 < *(_DWORD *)(v7 + 2736) );
  }
  started = DpiFdoStartAdapter(*(struct _DEVICE_OBJECT **)(v7 + 24), v10, v9, a4, a5, a6, a7);
  if ( started < 0 )
  {
    v20 = *(struct _DEVICE_OBJECT **)(v7 + 152);
    goto LABEL_22;
  }
  return (unsigned int)started;
}

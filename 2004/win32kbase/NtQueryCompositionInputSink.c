/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C0040450
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C002FA20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C004061C (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C009D410 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, ULONG64 a2)
{
  int v4; // esi
  __int64 v5; // r8
  int InputQueueTypes; // ebx
  int *v7; // rax
  ULONG64 v8; // rax
  ULONG64 v9; // rax
  __int128 v10; // xmm0
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v4 = 0;
  LODWORD(Object) = 0;
  InputQueueTypes = 0;
  if ( !(unsigned int)UserIsCurrentProcessDwm() )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes < 0 )
    goto LABEL_28;
  v7 = (int *)a2;
  if ( a2 >= MmUserProbeAddress )
    v7 = (int *)MmUserProbeAddress;
  v4 = *v7;
  LODWORD(Object) = v4;
  if ( v4 == 20 )
  {
    v9 = a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v12 = *(_OWORD *)v9;
    v13 = *(_OWORD *)v9;
    v14 = *(unsigned int *)(v9 + 16);
  }
  else if ( v4 == 24 )
  {
    v8 = a2;
    if ( a2 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    v12 = *(_OWORD *)v8;
    v13 = *(_OWORD *)v8;
    v14 = *(_QWORD *)(v8 + 16);
  }
  else
  {
    InputQueueTypes = -1073741811;
  }
  if ( InputQueueTypes < 0
    || (Object = 0LL,
        LOBYTE(v5) = 1,
        InputQueueTypes = CompositionInputObject::ResolveHandle(a1, 1LL, v5, (struct CompositionInputObject **)&Object),
        InputQueueTypes < 0) )
  {
LABEL_28:
    v10 = v12;
  }
  else
  {
    InputQueueTypes = CompositionInputObject::QueryInputQueueTypes(
                        (CompositionInputObject *)Object,
                        (struct COMPOSITION_INPUT_SINK_QUERY_V2 *)&v13);
    ObfDereferenceObject(Object);
    v10 = v13;
  }
  if ( InputQueueTypes >= 0 )
  {
    if ( v4 == 20 )
    {
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      *(_OWORD *)a2 = v10;
      *(_DWORD *)(a2 + 16) = v14;
    }
    else if ( v4 == 24 )
    {
      if ( a2 >= MmUserProbeAddress )
        a2 = MmUserProbeAddress;
      *(_OWORD *)a2 = v10;
      *(_QWORD *)(a2 + 16) = v14;
    }
  }
  return (unsigned int)InputQueueTypes;
}

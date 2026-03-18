/*
 * XREFs of NtQueryCompositionInputSink @ 0x1C00B53D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C001B7B0 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C002EAC0 (UserIsCurrentProcessDwm.c)
 *     ?QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z @ 0x1C00B6068 (-QueryInputQueueTypes@CompositionInputObject@@QEBAJPEAUCOMPOSITION_INPUT_SINK_QUERY_V2@@@Z.c)
 */

__int64 __fastcall NtQueryCompositionInputSink(void *a1, __int64 a2)
{
  ULONG64 v2; // rdi
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

  v2 = a2;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v4 = 0;
  LODWORD(Object) = 0;
  InputQueueTypes = 0;
  if ( !UserIsCurrentProcessDwm((__int64)a1, a2) )
    InputQueueTypes = -1073741790;
  if ( InputQueueTypes < 0 )
    goto LABEL_28;
  v7 = (int *)v2;
  if ( v2 >= MmUserProbeAddress )
    v7 = (int *)MmUserProbeAddress;
  v4 = *v7;
  LODWORD(Object) = v4;
  if ( v4 == 20 )
  {
    v9 = v2;
    if ( v2 >= MmUserProbeAddress )
      v9 = MmUserProbeAddress;
    v12 = *(_OWORD *)v9;
    v13 = *(_OWORD *)v9;
    v14 = *(unsigned int *)(v9 + 16);
  }
  else if ( v4 == 24 )
  {
    v8 = v2;
    if ( v2 >= MmUserProbeAddress )
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
      if ( v2 >= MmUserProbeAddress )
        v2 = MmUserProbeAddress;
      *(_OWORD *)v2 = v10;
      *(_DWORD *)(v2 + 16) = v14;
    }
    else if ( v4 == 24 )
    {
      if ( v2 >= MmUserProbeAddress )
        v2 = MmUserProbeAddress;
      *(_OWORD *)v2 = v10;
      *(_QWORD *)(v2 + 16) = v14;
    }
  }
  return (unsigned int)InputQueueTypes;
}

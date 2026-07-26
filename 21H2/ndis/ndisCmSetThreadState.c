/*
 * XREFs of ndisCmSetThreadState @ 0x1C0009150
 * Callers:
 *     ?ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C00B0D40 (-ndisNsiSetAllThreadInformation@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z.c)
 *     NdisSetThreadObjectCompartmentScope @ 0x1C00F89C0 (NdisSetThreadObjectCompartmentScope.c)
 *     NdisSetThreadObjectCompartmentId @ 0x1C00FF460 (NdisSetThreadObjectCompartmentId.c)
 * Callees:
 *     ?ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z @ 0x1C000932C (-ndisCmCreateStateObject@@YAJPEAPEAU_NDIS_CM_STATE@@@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001E0BC (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C001E1A4 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020974 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ndisCmGetThreadState @ 0x1C0035F5C (ndisCmGetThreadState.c)
 */

__int64 __fastcall ndisCmSetThreadState(PETHREAD Thread, unsigned int *a2, _DWORD *a3)
{
  _DWORD *v3; // r9
  void *v4; // r14
  char v5; // bl
  char v6; // r12
  _DWORD *ThreadProperty; // rax
  int StateObject; // ebx
  unsigned int v13; // r15d
  void *v14; // rax
  PVOID Object; // [rsp+20h] [rbp-10h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0;
  Object = 0LL;
  v6 = 0;
  if ( a2 )
  {
    v13 = *a2;
    if ( *a2 )
    {
      ndisCmGetThreadState(Thread);
      v14 = ndisCmValidateCompartmentChange(0, v13);
      v3 = Object;
      v4 = v14;
      if ( !v14 )
      {
        StateObject = -1073741275;
        goto LABEL_17;
      }
      v5 = 1;
    }
  }
  if ( a3 )
  {
    if ( *a3 == -1 )
    {
      v5 = 1;
    }
    else if ( *a3 )
    {
      StateObject = -1073741811;
      goto LABEL_15;
    }
  }
  ThreadProperty = PsGetThreadProperty(Thread, 0x6D43644EuLL, 1u);
  Object = ThreadProperty;
  v3 = ThreadProperty;
  if ( ThreadProperty )
  {
    if ( a2 )
    {
      *ThreadProperty = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
      v3 = Object;
    }
    if ( a3 )
    {
      v3[1] = *a3;
      v3 = Object;
    }
    if ( !*v3 && !v3[1] )
    {
      ObfDereferenceObject(v3);
      v3 = 0LL;
      v6 = 1;
      Object = 0LL;
    }
  }
  else if ( v5 )
  {
    StateObject = ndisCmCreateStateObject((struct _NDIS_CM_STATE **)&Object);
    if ( StateObject < 0 )
    {
LABEL_14:
      v3 = Object;
      goto LABEL_15;
    }
    if ( a2 )
    {
      *(_DWORD *)Object = *a2;
      ndisCmAssignCompartmentHandleToCmState((struct _NDIS_CM_STATE *)Object, v4);
    }
    if ( a3 )
      *((_DWORD *)Object + 1) = *a3;
    v3 = Object;
LABEL_13:
    StateObject = PsSetThreadProperty(Thread, 1833133134LL, v3);
    goto LABEL_14;
  }
  StateObject = 0;
  if ( v6 )
    goto LABEL_13;
LABEL_15:
  if ( v4 )
  {
    ndisIfDereferenceCompartmentForUser(v4);
    v3 = Object;
  }
LABEL_17:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)StateObject;
}

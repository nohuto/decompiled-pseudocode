/*
 * XREFs of ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C001DD90
 * Callers:
 *     ndisCmSetThreadState @ 0x1C0009060 (ndisCmSetThreadState.c)
 *     NdisSetSessionCompartmentId @ 0x1C00B09D0 (NdisSetSessionCompartmentId.c)
 *     ?NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z @ 0x1C01262CC (-NdisSetJobObjectCompartmentId@@YAJPEAU_EJOB@@I@Z.c)
 * Callees:
 *     NdisGetProcessObjectCompartmentId @ 0x1C001DE40 (NdisGetProcessObjectCompartmentId.c)
 *     ?ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z @ 0x1C0020654 (-ndisIfDereferenceCompartmentForUser@@YAJPEAX@Z.c)
 *     ?ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z @ 0x1C0020758 (-ndisIfReferenceCompartmentForUser@@YAJPEAU_GUID@@IPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C003D4C0 (__security_check_cookie.c)
 *     ?ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z @ 0x1C00B28BC (-ndisIfGetCompartmentNamespaceGuid@@YAJIPEAU_GUID@@@Z.c)
 */

void *__fastcall ndisCmValidateCompartmentChange(unsigned int a1, unsigned int a2)
{
  __int64 CurrentProcess; // rax
  unsigned int ProcessObjectCompartmentId; // eax
  unsigned int v6; // ebx
  void *v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // [rsp+20h] [rbp-30h] BYREF
  struct _GUID v12; // [rsp+28h] [rbp-28h] BYREF
  struct _GUID v13; // [rsp+38h] [rbp-18h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  CurrentProcess = PsGetCurrentProcess();
  ProcessObjectCompartmentId = NdisGetProcessObjectCompartmentId(CurrentProcess);
  v6 = ProcessObjectCompartmentId;
  if ( ProcessObjectCompartmentId != a1 && ProcessObjectCompartmentId != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(ProcessObjectCompartmentId, &v12) < 0
      || (int)ndisIfGetCompartmentNamespaceGuid(a1, &v13) < 0 )
    {
      return 0LL;
    }
    v9 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&v13.Data1 )
      v9 = *(_QWORD *)v12.Data4 - *(_QWORD *)v13.Data4;
    if ( v9 )
      return 0LL;
  }
  v11 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a2, &v11);
  v7 = v11;
  if ( v11 && v6 != a2 && v6 != 1 )
  {
    if ( (int)ndisIfGetCompartmentNamespaceGuid(v6, &v12) < 0 || (int)ndisIfGetCompartmentNamespaceGuid(a2, &v13) < 0 )
      goto LABEL_18;
    v10 = *(_QWORD *)&v12.Data1 - *(_QWORD *)&v13.Data1;
    if ( *(_QWORD *)&v12.Data1 == *(_QWORD *)&v13.Data1 )
      v10 = *(_QWORD *)v12.Data4 - *(_QWORD *)v13.Data4;
    if ( v10 )
    {
LABEL_18:
      ndisIfDereferenceCompartmentForUser(v7);
      return 0LL;
    }
  }
  return v7;
}

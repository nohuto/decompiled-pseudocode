/*
 * XREFs of ?ndisNsiGetAllJobInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C00B0A00
 * Callers:
 *     <none>
 * Callees:
 *     NdisGetJobObjectCompartmentId @ 0x1C00B0B70 (NdisGetJobObjectCompartmentId.c)
 */

NTSTATUS __fastcall ndisNsiGetAllJobInformation(struct _NM_REQUEST_GET_ALL_PARAMETERS *a1)
{
  int v1; // eax
  unsigned int v2; // ecx
  NTSTATUS result; // eax
  _DWORD *v4; // rbx
  PVOID v5; // rdi
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_DWORD *)a1 + 8);
  if ( v1 )
  {
    v2 = v1 - 1;
    result = -1073741811;
    if ( v2 <= 1 )
      return -1073741822;
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)a1 + 5);
    if ( v4 )
    {
      Object = 0LL;
      result = ObReferenceObjectByHandle(**((HANDLE **)a1 + 2), 4u, (POBJECT_TYPE)PsJobType, 1, &Object, 0LL);
      v5 = Object;
      if ( result < 0 )
        return result;
      *v4 = NdisGetJobObjectCompartmentId(Object);
      ObfDereferenceObject(v5);
    }
    return 0;
  }
  return result;
}

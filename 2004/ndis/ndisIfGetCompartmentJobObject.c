/*
 * XREFs of ndisIfGetCompartmentJobObject @ 0x1C00B07D4
 * Callers:
 *     NdisGetAndReferenceCompartmentJobObject @ 0x1C00B0B50 (NdisGetAndReferenceCompartmentJobObject.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z @ 0x1C0013C7C (-ndisIfFindCompartmentBlock@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@I@Z.c)
 */

__int64 __fastcall ndisIfGetCompartmentJobObject(unsigned int a1, unsigned int *a2, __int64 a3)
{
  KIRQL v6; // bp
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  unsigned int v8; // ebx
  unsigned int v9; // ecx
  char *v10; // r14
  char *i; // rsi

  v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(a1);
  v8 = 0;
  if ( CompartmentBlock )
  {
    v9 = *((_DWORD *)CompartmentBlock + 430);
    if ( v9 <= *a2 )
    {
      v10 = (char *)CompartmentBlock + 1728;
      *a2 = 0;
      for ( i = (char *)*((_QWORD *)CompartmentBlock + 216); i != v10; i = *(char **)i )
      {
        ObfReferenceObject(*((PVOID *)i + 2));
        *(_QWORD *)(a3 + 8LL * (*a2)++) = *((_QWORD *)i + 2);
      }
    }
    else
    {
      *a2 = v9;
      v8 = 261;
    }
  }
  else
  {
    *a2 = 0;
    v8 = -1073741275;
  }
  KeReleaseSpinLock(&ndisIfListLock, v6);
  return v8;
}

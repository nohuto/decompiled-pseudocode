/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x14062CB7C
 * Callers:
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200940 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x1402009F0 (PsAcquireSiloHardReference.c)
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     PsIsHostSilo @ 0x14020DC00 (PsIsHostSilo.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     IopSetFileObjectExtensionFlag @ 0x14023CDD0 (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x14023CE10 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     IopGetSetSpecificExtension @ 0x14029F8F4 (IopGetSetSpecificExtension.c)
 *     ObReferenceObjectByPointer @ 0x1402E15A0 (ObReferenceObjectByPointer.c)
 *     IopCheckStackForTransactionSupport @ 0x1403948C4 (IopCheckStackForTransactionSupport.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rbp
  __int64 v6; // rdi
  int SetSpecificExtension; // ebx
  int result; // eax
  int v11; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 Silo; // rax
  __int64 v16; // rdx
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rax
  struct _DMA_ADAPTER *v20; // rsi
  __int64 v21; // r9
  _QWORD *v22; // [rsp+60h] [rbp+18h] BYREF

  v5 = a4;
  v6 = a3;
  SetSpecificExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    LOBYTE(a3) = 1;
    result = IopSetFileObjectExtensionFlag(a1, 1, a3, a4);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
  }
  v11 = *(_DWORD *)(v6 + 152);
  if ( (v11 & 1) != 0 )
  {
    v22 = 0LL;
    LOBYTE(a4) = 1;
    result = IopGetSetSpecificExtension(a1, 1u, 32LL, a4, &v22, 0LL);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
    *v22 = *(_QWORD *)(v6 + 176);
    v11 = *(_DWORD *)(v6 + 152);
  }
  if ( (v11 & 4) != 0 )
  {
    v22 = 0LL;
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(v6 + 88) != 1 || (*(_BYTE *)(v6 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(v6 + 137) )
    {
      return -1072103361;
    }
    v19 = *(_QWORD *)(v6 + 184);
    if ( !v19 )
      return -1073741811;
    if ( *(_WORD *)v19 != 16 )
      return -1073741811;
    v20 = *(struct _DMA_ADAPTER **)(v19 + 8);
    if ( !v20 )
      return -1073741811;
    result = ObReferenceObjectByPointer(*(PVOID *)(v19 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    LOBYTE(v21) = 1;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 0, 16LL, v21, &v22, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      HalPutDmaAdapter(v20);
      return SetSpecificExtension;
    }
    *(_OWORD *)v22 = *(_OWORD *)*(_QWORD *)(v6 + 184);
    v11 = *(_DWORD *)(v6 + 152);
  }
  if ( (v11 & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(v5 + 8)) )
  {
    v14 = *(_QWORD *)(v6 + 40);
    if ( !v14 )
      return SetSpecificExtension;
    Silo = IoGetSilo(v14);
    if ( PsIsHostSilo(Silo) )
      return SetSpecificExtension;
  }
  v12 = *(_QWORD *)(v6 + 40);
  SetSpecificExtension = 0;
  v13 = *(_DWORD **)(v5 + 8);
  if ( v12 && PsIsServerSilo(*(_QWORD *)(v5 + 8)) )
    v13 = (_DWORD *)IoGetSilo(v16);
  if ( PsIsHostSilo((__int64)v13) )
    return SetSpecificExtension;
  v22 = 0LL;
  result = PsAcquireSiloHardReference(v13);
  if ( result >= 0 )
  {
    LOBYTE(v17) = 1;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 7u, 16LL, v17, &v22, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      PsReleaseSiloHardReference(v13);
    }
    else
    {
      v18 = v22;
      *(_DWORD *)v22 = 16;
      v18[1] = v13;
      *((_DWORD *)v18 + 1) |= 1u;
      ObfReferenceObjectWithTag(v13, 0x70536F49u);
    }
    return SetSpecificExtension;
  }
  return result;
}

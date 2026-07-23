/*
 * XREFs of IopAllocateFoExtensionsOnCreate @ 0x1406F68FC
 * Callers:
 *     IopAllocRealFileObject @ 0x14071A4C0 (IopAllocRealFileObject.c)
 * Callees:
 *     PsReleaseSiloHardReference @ 0x140200960 (PsReleaseSiloHardReference.c)
 *     PsAcquireSiloHardReference @ 0x140200A10 (PsAcquireSiloHardReference.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     ObReferenceObjectByPointer @ 0x1402A5010 (ObReferenceObjectByPointer.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     IopSetFileObjectExtensionFlag @ 0x1402F7040 (IopSetFileObjectExtensionFlag.c)
 *     IoGetSilo @ 0x1402F7080 (IoGetSilo.c)
 *     PsIsServerSilo @ 0x1402F70B0 (PsIsServerSilo.c)
 *     PsIsHostSilo @ 0x14035F7D0 (PsIsHostSilo.c)
 *     IopGetSetSpecificExtension @ 0x140361838 (IopGetSetSpecificExtension.c)
 *     IopCheckStackForTransactionSupport @ 0x140394E84 (IopCheckStackForTransactionSupport.c)
 */

int __fastcall IopAllocateFoExtensionsOnCreate(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  int SetSpecificExtension; // ebx
  int result; // eax
  int v11; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rdi
  __int64 v14; // rcx
  __int64 Silo; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rax
  struct _DMA_ADAPTER *v19; // rsi
  _QWORD *v20; // [rsp+60h] [rbp+18h] BYREF

  SetSpecificExtension = -1073741811;
  if ( (*(_DWORD *)(a3 + 152) & 2) != 0 )
  {
    result = IopSetFileObjectExtensionFlag(a1, 1, 1);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
  }
  v11 = *(_DWORD *)(a3 + 152);
  if ( (v11 & 1) != 0 )
  {
    v20 = 0LL;
    result = IopGetSetSpecificExtension(a1, 1u, 0x20u, 1, &v20, 0LL);
    SetSpecificExtension = result;
    if ( result < 0 )
      return result;
    *v20 = *(_QWORD *)(a3 + 176);
    v11 = *(_DWORD *)(a3 + 152);
  }
  if ( (v11 & 4) != 0 )
  {
    v20 = 0LL;
    if ( !IopCheckStackForTransactionSupport(a2)
      && (*(_DWORD *)(a3 + 88) != 1 || (*(_BYTE *)(a3 + 70) & 6) != 0 || (a5 & 0xFEEDFF56) != 0)
      && !*(_BYTE *)(a3 + 137) )
    {
      return -1072103361;
    }
    v18 = *(_QWORD *)(a3 + 184);
    if ( !v18 )
      return -1073741811;
    if ( *(_WORD *)v18 != 16 )
      return -1073741811;
    v19 = *(struct _DMA_ADAPTER **)(v18 + 8);
    if ( !v19 )
      return -1073741811;
    result = ObReferenceObjectByPointer(*(PVOID *)(v18 + 8), 0x120037u, (POBJECT_TYPE)TmTransactionObjectType, 0);
    if ( result < 0 )
      return result;
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 0, 0x10u, 1, &v20, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      HalPutDmaAdapter(v19);
      return SetSpecificExtension;
    }
    *(_OWORD *)v20 = *(_OWORD *)*(_QWORD *)(a3 + 184);
    v11 = *(_DWORD *)(a3 + 152);
  }
  if ( (v11 & 0x40) == 0 && PsIsHostSilo(*(_QWORD *)(a4 + 8)) )
  {
    v14 = *(_QWORD *)(a3 + 40);
    if ( !v14 )
      return SetSpecificExtension;
    Silo = IoGetSilo(v14);
    if ( PsIsHostSilo(Silo) )
      return SetSpecificExtension;
  }
  v12 = *(_QWORD *)(a3 + 40);
  SetSpecificExtension = 0;
  v13 = *(_DWORD **)(a4 + 8);
  if ( v12 && PsIsServerSilo(*(_QWORD *)(a4 + 8)) )
    v13 = (_DWORD *)IoGetSilo(v16);
  if ( PsIsHostSilo((__int64)v13) )
    return SetSpecificExtension;
  v20 = 0LL;
  result = PsAcquireSiloHardReference(v13);
  if ( result >= 0 )
  {
    SetSpecificExtension = IopGetSetSpecificExtension(a1, 7u, 0x10u, 1, &v20, 0LL);
    if ( SetSpecificExtension < 0 )
    {
      PsReleaseSiloHardReference(v13);
    }
    else
    {
      v17 = v20;
      *(_DWORD *)v20 = 16;
      v17[1] = v13;
      *((_DWORD *)v17 + 1) |= 1u;
      ObfReferenceObjectWithTag(v13, 0x70536F49u);
    }
    return SetSpecificExtension;
  }
  return result;
}

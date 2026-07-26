/*
 * XREFs of NdisGetRefCount @ 0x1C00BE990
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z @ 0x1C003FD08 (-ndisRefCountBlockFromRefCountHandle@@YAPEAU_NDIS_REFCOUNT_BLOCK@@PEAUNDIS_REFCOUNT_HANDLE__@@@Z.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall NdisGetRefCount(ULONG_PTR a1)
{
  ULONG v1; // edi
  struct _NDIS_REFCOUNT_BLOCK *result; // rax
  struct _NDIS_REFCOUNT_BLOCK *v3; // rbx
  unsigned int NumRefTags; // eax
  unsigned int *v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // ecx
  unsigned int v9; // eax
  __int64 NumOverflowTaggedEntries; // rdx
  unsigned __int8 *p_RefCount; // rax
  int v12; // ecx
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  result = ndisRefCountBlockFromRefCountHandle(a1);
  v3 = result;
  if ( result )
  {
    if ( result->Type )
    {
      if ( result->Type == 1 )
      {
        NumRefTags = result->NumRefTags;
        if ( (_BYTE)NumRefTags )
        {
          v5 = (unsigned int *)v3->RefWithStack + 14;
          v6 = NumRefTags;
          do
          {
            v7 = *v5;
            v8 = *v5 >> 1;
            v5 += 16;
            v1 += (v8 & 0x7FFF) - (v7 >> 17);
            --v6;
          }
          while ( v6 );
        }
      }
    }
    else
    {
      v9 = result->NumRefTags;
      *(&BitMapHeader.SizeOfBitMap + 1) = 0;
      BitMapHeader.SizeOfBitMap = v9;
      BitMapHeader.Buffer = v3->TaggedRefCounts.RefMask;
      v1 = RtlNumberOfSetBits(&BitMapHeader);
      if ( v3->NumOverflowTaggedEntries )
      {
        NumOverflowTaggedEntries = v3->NumOverflowTaggedEntries;
        p_RefCount = &v3->TaggedRefCounts.Tags->RefCount;
        do
        {
          v12 = *p_RefCount;
          p_RefCount += 2;
          v1 += v12;
          --NumOverflowTaggedEntries;
        }
        while ( NumOverflowTaggedEntries );
      }
    }
    result = (struct _NDIS_REFCOUNT_BLOCK *)(v1 + 1);
    if ( (v3->Flags & 2) == 0 )
      return (struct _NDIS_REFCOUNT_BLOCK *)v1;
  }
  return result;
}

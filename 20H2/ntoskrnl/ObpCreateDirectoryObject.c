/*
 * XREFs of ObpCreateDirectoryObject @ 0x1406C5B80
 * Callers:
 *     NtCreateDirectoryObjectEx @ 0x1406C5B40 (NtCreateDirectoryObjectEx.c)
 *     NtCreateDirectoryObject @ 0x1406C5B60 (NtCreateDirectoryObject.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlIsSandboxedToken @ 0x1405E80A0 (RtlIsSandboxedToken.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x1406118C0 (ObReferenceObjectByHandle.c)
 */

__int64 __fastcall ObpCreateDirectoryObject(__int64 *a1, ACCESS_MASK a2, int a3, void *a4, int a5)
{
  char PreviousMode; // si
  __int64 v9; // rcx
  int inserted; // edi
  PADAPTER_OBJECT v12; // rdi
  int v13; // r14d
  int v14; // edx
  int v15; // eax
  PVOID *Object; // [rsp+20h] [rbp-68h]
  struct _DMA_ADAPTER *DmaAdapter; // [rsp+50h] [rbp-38h]
  PADAPTER_OBJECT v18; // [rsp+58h] [rbp-30h] BYREF
  PVOID v19; // [rsp+60h] [rbp-28h] BYREF
  __int64 v20; // [rsp+68h] [rbp-20h] BYREF

  v20 = 0LL;
  v18 = 0LL;
  DmaAdapter = 0LL;
  if ( (a5 & 0xFFFFFFFC) != 0 )
    goto LABEL_25;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (a5 & 2) == 0 )
    {
      v9 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
        v9 = (__int64)a1;
      *(_QWORD *)v9 = *(_QWORD *)v9;
      goto LABEL_7;
    }
LABEL_25:
    inserted = -1073741581;
    goto LABEL_9;
  }
LABEL_7:
  if ( !a4
    || (v19 = 0LL,
        inserted = ObReferenceObjectByHandle(a4, 3u, ObpDirectoryObjectType, PreviousMode, &v19, 0LL),
        DmaAdapter = (struct _DMA_ADAPTER *)v19,
        inserted >= 0) )
  {
    inserted = ObCreateObjectEx(
                 PreviousMode,
                 ObpDirectoryObjectType,
                 a3,
                 PreviousMode,
                 (__int64)Object,
                 344,
                 0,
                 0,
                 &v18,
                 0LL);
    if ( inserted >= 0 )
    {
      v12 = v18;
      memset(v18, 0, 0x158uLL);
      v12[18].DmaOperations = 0LL;
      *(_DWORD *)(&v12[21].Size + 1) = -1;
      v13 = 0;
      if ( DmaAdapter )
      {
        v13 = 4;
        v12[19].DmaOperations = (_DMA_OPERATIONS *)DmaAdapter;
        DmaAdapter = 0LL;
        if ( RtlIsSandboxedToken(0LL, PreviousMode) )
          v13 = 20;
      }
      v14 = v13 | 8;
      if ( (a5 & 1) == 0 )
        v14 = v13;
      v15 = v14 | 0x20;
      if ( (a5 & 2) == 0 )
        v15 = v14;
      *(_DWORD *)&v12[21].Version |= v15;
      inserted = ObInsertObjectEx(v12, 0LL, a2, 0, 0, 0LL, &v20);
      v18 = 0LL;
      *a1 = v20;
    }
  }
LABEL_9:
  if ( DmaAdapter )
    HalPutDmaAdapter(DmaAdapter);
  if ( v18 )
    HalPutDmaAdapter(v18);
  return (unsigned int)inserted;
}

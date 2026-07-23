/*
 * XREFs of NtGetCachedSigningLevel @ 0x1406EF7B0
 * Callers:
 *     <none>
 * Callees:
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     memset @ 0x14040A280 (memset.c)
 *     ObReferenceObjectByHandle @ 0x1405F5C90 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1406929C0 (ProbeForWrite.c)
 *     SeGetCachedSigningLevel @ 0x1406EFA50 (SeGetCachedSigningLevel.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  struct _DMA_ADAPTER *v10; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  int v12; // ebx
  int CachedSigningLevel; // r14d
  _DWORD *v15; // rbx
  char v16; // cl
  ULONG v17; // r14d
  void *v18; // rbx
  _DWORD *v19; // r14
  char v20; // [rsp+30h] [rbp-D8h] BYREF
  int v21; // [rsp+34h] [rbp-D4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+40h] [rbp-C8h] BYREF
  int v24; // [rsp+48h] [rbp-C0h]
  volatile void *Address; // [rsp+50h] [rbp-B8h]
  volatile void *v26; // [rsp+58h] [rbp-B0h]
  HANDLE Handle; // [rsp+60h] [rbp-A8h]
  volatile void *v28; // [rsp+68h] [rbp-A0h]
  volatile void *v29; // [rsp+70h] [rbp-98h]
  PVOID v30; // [rsp+78h] [rbp-90h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v28 = Thumbprint;
  v26 = SigningLevel;
  Address = Flags;
  Handle = File;
  v29 = ThumbprintAlgorithm;
  v10 = 0LL;
  memset(Src, 0, sizeof(Src));
  Length = 64LL;
  v21 = 0;
  v20 = 0;
  if ( File && Flags && SigningLevel )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    Object = 0LL;
    v12 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v10 = (struct _DMA_ADAPTER *)Object;
    v30 = Object;
    if ( v12 >= 0 )
    {
      CachedSigningLevel = SeGetCachedSigningLevel(
                             (_DWORD)Object,
                             (unsigned int)&v21,
                             (unsigned int)&v20,
                             (unsigned __int64)Src & -(__int64)(Thumbprint != 0LL),
                             (unsigned __int64)&Length & -(__int64)(Thumbprint != 0LL),
                             ((unsigned __int64)&Length + 4) & ((unsigned __int128)-(__int128)(unsigned __int64)Thumbprint >> 64));
      LODWORD(Object) = CachedSigningLevel;
      v12 = CachedSigningLevel;
      if ( CachedSigningLevel >= 0 )
      {
        v15 = Address;
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(Address, 4uLL, 4u);
          ProbeForWrite(v26, 1uLL, 1u);
        }
        v16 = v21;
        *v15 = v21;
        *(_BYTE *)v26 = v20;
        v12 = CachedSigningLevel;
        if ( ThumbprintSize )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(ThumbprintSize, 4uLL, 4u);
            v16 = v21;
          }
          if ( (v16 & 2) != 0 )
          {
            v17 = Length;
            if ( *ThumbprintSize >= (unsigned int)Length && (v18 = (void *)v28) != 0LL )
            {
              if ( PreviousMode == 1 )
              {
                ProbeForWrite(v28, (unsigned int)Length, 1u);
                v17 = Length;
              }
              memmove(v18, Src, v17);
              v12 = (int)Object;
            }
            else
            {
              v12 = -1073741789;
              v24 = -1073741789;
            }
            *ThumbprintSize = v17;
            v19 = v29;
            if ( v29 )
            {
              if ( PreviousMode == 1 )
                ProbeForWrite(v29, 4uLL, 4u);
              *v19 = HIDWORD(Length);
            }
          }
          else
          {
            *ThumbprintSize = 0;
            v12 = CachedSigningLevel;
          }
        }
      }
    }
  }
  else
  {
    v12 = -1073741811;
  }
  if ( v10 )
    HalPutDmaAdapter(v10);
  return v12;
}

/*
 * XREFs of ACPIBusIrpQueryInstanceId @ 0x1C00A1CE0
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C008FBF0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     memmove @ 0x1C0031EC0 (memmove.c)
 *     memset @ 0x1C0032180 (memset.c)
 *     RtlStringCbPrintfW @ 0x1C004DEBC (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004E384 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C008F780 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryInstanceId(_QWORD *a1, SIZE_T *a2, __int64 *a3)
{
  PVOID v6; // rax
  size_t v7; // rdi
  void *v8; // r14
  int v9; // eax
  int v10; // ebx
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  PVOID PoolWithTag; // rax
  int v19; // [rsp+20h] [rbp-40h]
  int v20; // [rsp+28h] [rbp-38h]
  int v21; // [rsp+30h] [rbp-30h]
  void *Src; // [rsp+80h] [rbp+20h] BYREF
  size_t Size; // [rsp+88h] [rbp+28h] BYREF

  Src = 0LL;
  Size = 0LL;
  v6 = ACPIAllocateBuffer(a2, (__int64)a3, 0x294uLL);
  v7 = *a2;
  v8 = v6;
  *a1 = v6;
  if ( !v6 )
    goto LABEL_11;
  v9 = ACPIGet(a3, 1145656671, 268959894, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  v10 = v9;
  if ( v9 != -1073741661 )
  {
    if ( v9 < 0 )
      goto LABEL_9;
LABEL_4:
    if ( v7 >= Size )
    {
      memmove(v8, Src, Size);
      if ( v10 >= 0 )
        goto LABEL_6;
LABEL_9:
      if ( v10 == -1073741772 )
        goto LABEL_6;
      goto LABEL_12;
    }
    goto LABEL_11;
  }
  v16 = a3[72];
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v16 + v17) );
    Size = 2 * v17 + 2;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x53706341u);
    Src = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, Size);
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Src, Size, L"%S", a3[72]);
      v10 = 0;
      goto LABEL_4;
    }
LABEL_11:
    v10 = -1073741670;
  }
LABEL_12:
  v12 = 0LL;
  v13 = byte_1C00701BA;
  v14 = byte_1C00701BA;
  if ( a3 )
  {
    v15 = a3[1];
    v12 = (__int64)a3;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = (const char *)a3[71];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)a3[72];
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdLqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      (__int64)&WPP_RECORDER_INITIALIZED,
      0x27u,
      v19,
      v20,
      v21,
      v10,
      v12,
      v13,
      v14);
LABEL_6:
  if ( Src )
    ExFreePoolWithTag(Src, 0x53706341u);
  return (unsigned int)v10;
}

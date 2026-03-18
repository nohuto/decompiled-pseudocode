/*
 * XREFs of ACPIBusIrpQueryInstanceId @ 0x1C0092934
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0093F10 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     memmove @ 0x1C002FDC0 (memmove.c)
 *     RtlStringCbPrintfW @ 0x1C004CF8C (RtlStringCbPrintfW.c)
 *     WPP_RECORDER_SF_qdLqss @ 0x1C004D1E8 (WPP_RECORDER_SF_qdLqss.c)
 *     ACPIAllocateBuffer @ 0x1C0092FC8 (ACPIAllocateBuffer.c)
 */

__int64 __fastcall ACPIBusIrpQueryInstanceId(__int64 *a1, size_t *a2, _QWORD *a3)
{
  __int64 v6; // rax
  size_t v7; // rdi
  void *v8; // rbp
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdx
  const char *v13; // rax
  const char *v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  void *Pool2; // rax
  int v19; // [rsp+20h] [rbp-58h]
  int v20; // [rsp+28h] [rbp-50h]
  int v21; // [rsp+30h] [rbp-48h]
  void *Src; // [rsp+80h] [rbp+8h] BYREF
  size_t Size; // [rsp+88h] [rbp+10h] BYREF

  Src = 0LL;
  Size = 0LL;
  v6 = ACPIAllocateBuffer(a2, a3, 660LL);
  v7 = *a2;
  v8 = (void *)v6;
  *a1 = v6;
  if ( !v6 )
    goto LABEL_11;
  v9 = ACPIGet((__int64)a3, 1145656671, 268959894, 0LL, 0, 0LL, 0LL, (__int64)&Src, (__int64)&Size);
  v10 = v9;
  if ( v9 != -1073741661 )
  {
    if ( v9 < 0 )
    {
      if ( v9 == -1073741772 )
        goto LABEL_6;
      goto LABEL_12;
    }
    goto LABEL_4;
  }
  v16 = a3[77];
  if ( v16 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v16 + v17) );
    Size = 2 * v17 + 2;
    Pool2 = (void *)ExAllocatePool2(256LL, Size, 1399874369LL);
    Src = Pool2;
    if ( Pool2 )
    {
      RtlStringCbPrintfW((NTSTRSAFE_PWSTR)Pool2, Size, L"%S", a3[77]);
      v10 = 0;
LABEL_4:
      if ( v7 >= Size )
      {
        memmove(v8, Src, Size);
        goto LABEL_6;
      }
    }
LABEL_11:
    v10 = -1073741670;
  }
LABEL_12:
  v12 = 0LL;
  v13 = (const char *)&unk_1C006FB8B;
  v14 = (const char *)&unk_1C006FB8B;
  if ( a3 )
  {
    v15 = a3[1];
    v12 = (__int64)a3;
    if ( (v15 & 0x200000000000LL) != 0 )
    {
      v13 = (const char *)a3[76];
      if ( (v15 & 0x400000000000LL) != 0 )
        v14 = (const char *)a3[77];
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
  return v10;
}

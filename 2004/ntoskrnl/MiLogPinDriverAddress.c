/*
 * XREFs of MiLogPinDriverAddress @ 0x1407A22E4
 * Callers:
 *     MiLogPinDriverAddressesWorker @ 0x1407A21E0 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402090B0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     _tlgKeywordOn @ 0x14026C5B4 (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     MiLookupDataTableEntry @ 0x1402DFB98 (MiLookupDataTableEntry.c)
 *     _tlgWriteAgg @ 0x1403735C4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiLogPinDriverAddress(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // esi
  UNICODE_STRING *p_DestinationString_8; // rbx
  int v7; // r14d
  __int64 v9; // r8
  __int64 v10; // r10
  unsigned int v11; // ecx
  int v12; // [rsp+38h] [rbp-D0h] BYREF
  int v13; // [rsp+3Ch] [rbp-CCh] BYREF
  int v14; // [rsp+40h] [rbp-C8h] BYREF
  int v15; // [rsp+44h] [rbp-C4h] BYREF
  int v16; // [rsp+48h] [rbp-C0h] BYREF
  int v17; // [rsp+4Ch] [rbp-BCh] BYREF
  int v18; // [rsp+50h] [rbp-B8h] BYREF
  int v19; // [rsp+54h] [rbp-B4h] BYREF
  int v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v22; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  int *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  int *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  int *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  int *v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  int *v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  int *v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  int *v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  int *v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  _DWORD *v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  wchar_t *Buffer; // [rsp+148h] [rbp+40h]
  _DWORD v47[2]; // [rsp+150h] [rbp+48h] BYREF
  int *v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  int *v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]
  __int64 *p_DestinationString; // [rsp+178h] [rbp+70h]
  __int64 v53; // [rsp+180h] [rbp+78h]

  CurrentThread = KeGetCurrentThread();
  v3 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  DestinationString_8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v4 = MiLookupDataTableEntry(v3, 0);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 120);
    p_DestinationString_8 = (UNICODE_STRING *)(v4 + 88);
    v7 = *(_DWORD *)(v4 + 156);
  }
  else
  {
    v5 = 0;
    v7 = 0;
    p_DestinationString_8 = &DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, L"Image not found");
  }
  if ( **(_DWORD **)&qword_140C4ECE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4ECE0, 0x400000000000LL) )
  {
    v11 = *(_DWORD *)a1;
    v26 = &v22;
    v22 = 1LL;
    v12 = (v11 >> 1) & 1;
    v28 = &v12;
    v27 = 8LL;
    v13 = (v11 >> 2) & 1;
    v30 = &v13;
    v29 = 4LL;
    v14 = (v11 >> 3) & 1;
    v32 = &v14;
    v31 = 4LL;
    v15 = (v11 >> 4) & 1;
    v34 = &v15;
    v33 = 4LL;
    v16 = (v11 >> 5) & 1;
    v36 = &v16;
    v35 = 4LL;
    v17 = (unsigned __int8)v11 >> 6;
    v38 = &v17;
    v18 = (v11 >> 10) & 3;
    v37 = 4LL;
    v40 = &v18;
    v42 = &v19;
    v44 = v47;
    Buffer = p_DestinationString_8->Buffer;
    v47[0] = p_DestinationString_8->Length;
    v48 = &v20;
    v50 = &v21;
    DestinationString = 2164260864LL;
    p_DestinationString = &DestinationString;
    v39 = 4LL;
    v41 = 4LL;
    v19 = (v11 >> 8) & 3;
    v43 = 4LL;
    v45 = 2LL;
    v47[1] = 0;
    v20 = v5;
    v49 = 4LL;
    v21 = v7;
    v51 = 4LL;
    v53 = 8LL;
    tlgWriteAgg(v10, (unsigned __int8 *)&word_14002587A, v9, 0x10u, &v25);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

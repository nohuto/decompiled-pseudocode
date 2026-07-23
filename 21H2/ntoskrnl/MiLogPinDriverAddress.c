/*
 * XREFs of MiLogPinDriverAddress @ 0x1407B67A4
 * Callers:
 *     MiLogPinDriverAddressesWorker @ 0x1407B66A0 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     MiLookupDataTableEntry @ 0x140298ABC (MiLookupDataTableEntry.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiLogPinDriverAddress(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  int v5; // esi
  UNICODE_STRING *p_DestinationString_8; // rbx
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // r8
  __int64 v13; // r10
  unsigned int v14; // ecx
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  int v16; // [rsp+3Ch] [rbp-CCh] BYREF
  int v17; // [rsp+40h] [rbp-C8h] BYREF
  int v18; // [rsp+44h] [rbp-C4h] BYREF
  int v19; // [rsp+48h] [rbp-C0h] BYREF
  int v20; // [rsp+4Ch] [rbp-BCh] BYREF
  int v21; // [rsp+50h] [rbp-B8h] BYREF
  int v22; // [rsp+54h] [rbp-B4h] BYREF
  int v23; // [rsp+58h] [rbp-B0h] BYREF
  int v24; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v29; // [rsp+A8h] [rbp-60h]
  __int64 v30; // [rsp+B0h] [rbp-58h]
  int *v31; // [rsp+B8h] [rbp-50h]
  __int64 v32; // [rsp+C0h] [rbp-48h]
  int *v33; // [rsp+C8h] [rbp-40h]
  __int64 v34; // [rsp+D0h] [rbp-38h]
  int *v35; // [rsp+D8h] [rbp-30h]
  __int64 v36; // [rsp+E0h] [rbp-28h]
  int *v37; // [rsp+E8h] [rbp-20h]
  __int64 v38; // [rsp+F0h] [rbp-18h]
  int *v39; // [rsp+F8h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp-8h]
  int *v41; // [rsp+108h] [rbp+0h]
  __int64 v42; // [rsp+110h] [rbp+8h]
  int *v43; // [rsp+118h] [rbp+10h]
  __int64 v44; // [rsp+120h] [rbp+18h]
  int *v45; // [rsp+128h] [rbp+20h]
  __int64 v46; // [rsp+130h] [rbp+28h]
  _DWORD *v47; // [rsp+138h] [rbp+30h]
  __int64 v48; // [rsp+140h] [rbp+38h]
  wchar_t *Buffer; // [rsp+148h] [rbp+40h]
  _DWORD v50[2]; // [rsp+150h] [rbp+48h] BYREF
  int *v51; // [rsp+158h] [rbp+50h]
  __int64 v52; // [rsp+160h] [rbp+58h]
  int *v53; // [rsp+168h] [rbp+60h]
  __int64 v54; // [rsp+170h] [rbp+68h]
  __int64 *p_DestinationString; // [rsp+178h] [rbp+70h]
  __int64 v56; // [rsp+180h] [rbp+78h]

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
  if ( **(_DWORD **)&qword_140C4EF20 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EF20, 0x400000000000LL) )
  {
    v14 = *(_DWORD *)a1;
    v29 = &v25;
    v25 = 1LL;
    v15 = (v14 >> 1) & 1;
    v31 = &v15;
    v30 = 8LL;
    v16 = (v14 >> 2) & 1;
    v33 = &v16;
    v32 = 4LL;
    v17 = (v14 >> 3) & 1;
    v35 = &v17;
    v34 = 4LL;
    v18 = (v14 >> 4) & 1;
    v37 = &v18;
    v36 = 4LL;
    v19 = (v14 >> 5) & 1;
    v39 = &v19;
    v38 = 4LL;
    v20 = (unsigned __int8)v14 >> 6;
    v41 = &v20;
    v21 = (v14 >> 10) & 3;
    v40 = 4LL;
    v43 = &v21;
    v45 = &v22;
    v47 = v50;
    Buffer = p_DestinationString_8->Buffer;
    v50[0] = p_DestinationString_8->Length;
    v51 = &v23;
    v53 = &v24;
    DestinationString = 2164260864LL;
    p_DestinationString = &DestinationString;
    v42 = 4LL;
    v44 = 4LL;
    v22 = (v14 >> 8) & 3;
    v46 = 4LL;
    v48 = 2LL;
    v50[1] = 0;
    v23 = v5;
    v52 = 4LL;
    v24 = v7;
    v54 = 4LL;
    v56 = 8LL;
    tlgWriteAgg(v13, (unsigned __int8 *)&word_1400269EE, v12, 0x10u, &v28);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, v8, v9, v10);
}

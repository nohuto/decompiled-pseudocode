/*
 * XREFs of MiLogPinDriverAddress @ 0x1407B4E84
 * Callers:
 *     MiLogPinDriverAddressesWorker @ 0x1407B4D80 (MiLogPinDriverAddressesWorker.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     _tlgKeywordOn @ 0x1402605BC (_tlgKeywordOn.c)
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     _tlgWriteAgg @ 0x140375E94 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 */

_QWORD *__fastcall MiLogPinDriverAddress(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 v3; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  int v7; // esi
  UNICODE_STRING *p_DestinationString_8; // rbx
  int v9; // r14d
  __int64 v11; // r8
  __int64 v12; // r10
  unsigned int v13; // ecx
  int v14; // [rsp+38h] [rbp-D0h] BYREF
  int v15; // [rsp+3Ch] [rbp-CCh] BYREF
  int v16; // [rsp+40h] [rbp-C8h] BYREF
  int v17; // [rsp+44h] [rbp-C4h] BYREF
  int v18; // [rsp+48h] [rbp-C0h] BYREF
  int v19; // [rsp+4Ch] [rbp-BCh] BYREF
  int v20; // [rsp+50h] [rbp-B8h] BYREF
  int v21; // [rsp+54h] [rbp-B4h] BYREF
  int v22; // [rsp+58h] [rbp-B0h] BYREF
  int v23; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v24; // [rsp+60h] [rbp-A8h] BYREF
  __int64 DestinationString; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString_8; // [rsp+70h] [rbp-98h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v27; // [rsp+88h] [rbp-80h] BYREF
  __int64 *v28; // [rsp+A8h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-58h]
  int *v30; // [rsp+B8h] [rbp-50h]
  __int64 v31; // [rsp+C0h] [rbp-48h]
  int *v32; // [rsp+C8h] [rbp-40h]
  __int64 v33; // [rsp+D0h] [rbp-38h]
  int *v34; // [rsp+D8h] [rbp-30h]
  __int64 v35; // [rsp+E0h] [rbp-28h]
  int *v36; // [rsp+E8h] [rbp-20h]
  __int64 v37; // [rsp+F0h] [rbp-18h]
  int *v38; // [rsp+F8h] [rbp-10h]
  __int64 v39; // [rsp+100h] [rbp-8h]
  int *v40; // [rsp+108h] [rbp+0h]
  __int64 v41; // [rsp+110h] [rbp+8h]
  int *v42; // [rsp+118h] [rbp+10h]
  __int64 v43; // [rsp+120h] [rbp+18h]
  int *v44; // [rsp+128h] [rbp+20h]
  __int64 v45; // [rsp+130h] [rbp+28h]
  _DWORD *v46; // [rsp+138h] [rbp+30h]
  __int64 v47; // [rsp+140h] [rbp+38h]
  wchar_t *Buffer; // [rsp+148h] [rbp+40h]
  _DWORD v49[2]; // [rsp+150h] [rbp+48h] BYREF
  int *v50; // [rsp+158h] [rbp+50h]
  __int64 v51; // [rsp+160h] [rbp+58h]
  int *v52; // [rsp+168h] [rbp+60h]
  __int64 v53; // [rsp+170h] [rbp+68h]
  __int64 *p_DestinationString; // [rsp+178h] [rbp+70h]
  __int64 v55; // [rsp+180h] [rbp+78h]

  CurrentThread = KeGetCurrentThread();
  v3 = *a1 & 0xFFFFFFFFFFFFF000uLL;
  DestinationString_8 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PsLoadedModuleResource, 1u);
  v6 = MiLookupDataTableEntry(v3, 0LL, v4, v5);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 120);
    p_DestinationString_8 = (UNICODE_STRING *)(v6 + 88);
    v9 = *(_DWORD *)(v6 + 156);
  }
  else
  {
    v7 = 0;
    v9 = 0;
    p_DestinationString_8 = &DestinationString_8;
    RtlInitUnicodeString(&DestinationString_8, L"Image not found");
  }
  if ( **(_DWORD **)&qword_140C4EEE0 > 5u && tlgKeywordOn(*(__int64 *)&qword_140C4EEE0, 0x400000000000LL) )
  {
    v13 = *(_DWORD *)a1;
    v28 = &v24;
    v24 = 1LL;
    v14 = (v13 >> 1) & 1;
    v30 = &v14;
    v29 = 8LL;
    v15 = (v13 >> 2) & 1;
    v32 = &v15;
    v31 = 4LL;
    v16 = (v13 >> 3) & 1;
    v34 = &v16;
    v33 = 4LL;
    v17 = (v13 >> 4) & 1;
    v36 = &v17;
    v35 = 4LL;
    v18 = (v13 >> 5) & 1;
    v38 = &v18;
    v37 = 4LL;
    v19 = (unsigned __int8)v13 >> 6;
    v40 = &v19;
    v20 = (v13 >> 10) & 3;
    v39 = 4LL;
    v42 = &v20;
    v44 = &v21;
    v46 = v49;
    Buffer = p_DestinationString_8->Buffer;
    v49[0] = p_DestinationString_8->Length;
    v50 = &v22;
    v52 = &v23;
    DestinationString = 2164260864LL;
    p_DestinationString = &DestinationString;
    v41 = 4LL;
    v43 = 4LL;
    v21 = (v13 >> 8) & 3;
    v45 = 4LL;
    v47 = 2LL;
    v49[1] = 0;
    v22 = v7;
    v51 = 4LL;
    v23 = v9;
    v53 = 4LL;
    v55 = 8LL;
    tlgWriteAgg(v12, (unsigned __int8 *)&word_14002692E, v11, 0x10u, &v27);
  }
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}

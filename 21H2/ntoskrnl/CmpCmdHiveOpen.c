/*
 * XREFs of CmpCmdHiveOpen @ 0x1406F2CB8
 * Callers:
 *     CmLoadKey @ 0x140619944 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406663CC (CmLoadAppKey.c)
 *     CmReplaceKey @ 0x14086DB28 (CmReplaceKey.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14027E1A4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     IoSetThreadHardErrorMode @ 0x1402F4B10 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlImpersonateSelfEx @ 0x140610378 (RtlImpersonateSelfEx.c)
 *     PsReferenceImpersonationTokenEx @ 0x14064B780 (PsReferenceImpersonationTokenEx.c)
 *     PsImpersonateClient @ 0x14064FCC0 (PsImpersonateClient.c)
 *     CmpInitHiveFromFile @ 0x1406A3018 (CmpInitHiveFromFile.c)
 */

__int64 __fastcall CmpCmdHiveOpen(
        const UNICODE_STRING *a1,
        char a2,
        char *a3,
        ULONG_PTR *a4,
        unsigned int a5,
        char a6,
        __int64 a7,
        __int64 a8,
        void *a9)
{
  BOOLEAN v13; // al
  int v14; // edx
  int v15; // ecx
  int v16; // edx
  int v17; // r15d
  NTSTATUS inited; // eax
  NTSTATUS v19; // ebx
  unsigned int v20; // eax
  int v21; // ecx
  struct _DMA_ADAPTER *v22; // rdi
  NTSTATUS v23; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v26; // [rsp+30h] [rbp-89h]
  int v27; // [rsp+30h] [rbp-89h]
  int v28; // [rsp+38h] [rbp-81h]
  int v29; // [rsp+38h] [rbp-81h]
  BOOLEAN v30; // [rsp+50h] [rbp-69h] BYREF
  BOOLEAN v31; // [rsp+51h] [rbp-68h] BYREF
  BOOLEAN EnableHardErrors; // [rsp+52h] [rbp-67h]
  __int64 ImpersonationLevel; // [rsp+58h] [rbp-61h] BYREF
  void *v34; // [rsp+60h] [rbp-59h]
  __int64 v35; // [rsp+68h] [rbp-51h]
  ULONG_PTR *v36; // [rsp+70h] [rbp-49h]
  __int64 v37; // [rsp+78h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+80h] [rbp-39h] BYREF
  __int64 *v39; // [rsp+A0h] [rbp-19h]
  __int64 v40; // [rsp+A8h] [rbp-11h]

  ImpersonationLevel = a7;
  v35 = a8;
  v34 = a9;
  v36 = a4;
  v13 = IoSetThreadHardErrorMode(0);
  v14 = 0;
  EnableHardErrors = v13;
  if ( (a6 & 1) != 0 )
  {
    v14 = 0x8000;
    if ( (a6 & 2) == 0 )
      v14 = 294912;
  }
  v15 = v14 | 0x80000;
  if ( (a6 & 4) == 0 )
    v15 = v14;
  v16 = v15 | 0x108000;
  if ( (a6 & 8) == 0 )
    v16 = v15;
  v17 = v16 | 2;
  if ( (a5 & 0x20000000) == 0 )
    v17 = v16;
  inited = CmpInitHiveFromFile(a1, v17, a4, a3, a5, ImpersonationLevel, v26, v28, v35, v34);
  v19 = inited;
  if ( !ImpersonationLevel && a2 && (a6 & 0x20) == 0 )
  {
    if ( inited == -1073741790
      || (v20 = inited + 1073741724, v20 <= 0xE) && (v21 = 17473, _bittest(&v21, v20))
      || v19 == -1073741421 )
    {
      v31 = 0;
      v30 = 0;
      LODWORD(ImpersonationLevel) = 0;
      v22 = (struct _DMA_ADAPTER *)PsReferenceImpersonationTokenEx(
                                     (__int64)KeGetCurrentThread(),
                                     1,
                                     &v31,
                                     (bool *)&v30,
                                     (int *)&ImpersonationLevel,
                                     0LL);
      v19 = RtlImpersonateSelfEx(SecurityImpersonation, 0, 0LL);
      if ( v19 >= 0 )
      {
        v23 = CmpInitHiveFromFile(a1, v17, v36, a3, a5, 0LL, v27, v29, v35, v34);
        CurrentThread = KeGetCurrentThread();
        v19 = v23;
        if ( v22 )
          PsImpersonateClient(CurrentThread, v22, v31, v30, (SECURITY_IMPERSONATION_LEVEL)ImpersonationLevel);
        else
          PsImpersonateClient(CurrentThread, 0LL, 0, 0, SecurityImpersonation);
        if ( v19 >= 0
          && (a5 & 0x2000000) != 0
          && (unsigned int)dword_140C02130 > 5
          && tlgKeywordOn((__int64)&dword_140C02130, 0x400000000008LL) )
        {
          v37 = 0x1000000LL;
          v39 = &v37;
          v40 = 8LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C02130,
            (unsigned __int8 *)&unk_140023C60,
            0LL,
            0LL,
            3u,
            &v38);
        }
      }
      if ( v22 )
        HalPutDmaAdapter(v22);
    }
  }
  IoSetThreadHardErrorMode(EnableHardErrors);
  return (unsigned int)v19;
}

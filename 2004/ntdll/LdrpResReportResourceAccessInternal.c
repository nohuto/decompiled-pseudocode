/*
 * XREFs of LdrpResReportResourceAccessInternal @ 0x180042C94
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180033BCC (LdrpSearchResourceSection_U.c)
 *     LdrpResSearchResourceMappedFile @ 0x180048EFC (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     LdrpGetRcConfig @ 0x180034A90 (LdrpGetRcConfig.c)
 *     RtlRunOnceExecuteOnce @ 0x180043820 (RtlRunOnceExecuteOnce.c)
 *     LdrResGetRCConfig @ 0x18004B320 (LdrResGetRCConfig.c)
 *     _tlgKeywordOn @ 0x180084EF4 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18008A7EC (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1800D0348 (_tlgCreate1Sz_wchar_t.c)
 */

int __fastcall LdrpResReportResourceAccessInternal(PVOID BaseOfImage, __int64 a2, __int64 *a3, int a4)
{
  _DWORD *RcConfig; // rax
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r15d
  _DWORD *v12; // r9
  int v13; // r8d
  __int64 v14; // r9
  __int64 v15; // r10
  const int *v16; // rdx
  int v17; // r8d
  int v18; // r9d
  int v19; // r8d
  int v20; // r9d
  __int64 v21; // r10
  __int64 v22; // r10
  ULONG v24; // [rsp+20h] [rbp-E0h]
  __int16 v25; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v26; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  _EVENT_DATA_DESCRIPTOR v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v33; // [rsp+90h] [rbp-70h]
  __int64 v34; // [rsp+98h] [rbp-68h]
  __int64 *v35; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 *v37; // [rsp+B0h] [rbp-50h]
  __int64 v38; // [rsp+B8h] [rbp-48h]
  __int64 *v39; // [rsp+C0h] [rbp-40h]
  __int64 v40; // [rsp+C8h] [rbp-38h]
  __int64 *v41; // [rsp+D0h] [rbp-30h]
  __int64 v42; // [rsp+D8h] [rbp-28h]
  __int16 *v43; // [rsp+E0h] [rbp-20h]
  __int64 v44; // [rsp+E8h] [rbp-18h]
  __int16 *v45; // [rsp+F0h] [rbp-10h]
  __int64 v46; // [rsp+F8h] [rbp-8h]
  __int64 v47; // [rsp+100h] [rbp+0h]
  __int64 v48; // [rsp+108h] [rbp+8h]

  LODWORD(RcConfig) = RtlRunOnceExecuteOnce(&stru_18016B250, LdrpResReportResourceAccessInternalInitOnce, 0LL, 0LL);
  if ( (int)RcConfig >= 0 )
  {
    v10 = (unsigned __int16)dword_18016B190;
    LODWORD(RcConfig) = ++dword_18016B190;
    if ( !v10 )
    {
      v26 = 0LL;
      if ( a2 )
      {
        v11 = 1;
        LODWORD(RcConfig) = LdrResGetRCConfig((_DWORD)BaseOfImage, a2, (unsigned int)&v26, 4096, 0);
        if ( (int)RcConfig >= 0 )
          v12 = (_DWORD *)v26;
        else
          v12 = 0LL;
      }
      else
      {
        v11 = 0;
        RcConfig = LdrpGetRcConfig(BaseOfImage, v9, 0, 1);
        v12 = RcConfig;
      }
      if ( v12 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( (unsigned int)dword_180164450 <= 5 )
              return (int)RcConfig;
            LODWORD(RcConfig) = tlgKeywordOn(&dword_180164450, 0x400000000000LL);
            if ( !(_BYTE)RcConfig )
              return (int)RcConfig;
            v27 = *a3;
            v39 = &v29;
            v33 = &v27;
            v16 = (const int *)&unk_18013000B;
            v28 = a3[1];
            v35 = &v28;
            v37 = &v26;
            v38 = 4LL;
            v25 = 4;
            v41 = (__int64 *)&v25;
            v43 = (__int16 *)(v14 + 28);
            v24 = 8;
            v34 = 8LL;
            v36 = 8LL;
            v29 = 0x1000000LL;
            v40 = 8LL;
            v42 = v21;
            v44 = 16LL;
          }
          else
          {
            if ( a4 == 3 )
            {
              if ( (unsigned int)dword_180164450 <= 5 )
                return (int)RcConfig;
              LODWORD(RcConfig) = tlgKeywordOn(&dword_180164450, 0x400000000000LL);
              if ( !(_BYTE)RcConfig )
                return (int)RcConfig;
              v29 = *a3;
              v33 = &v29;
              v28 = a3[1];
              v35 = &v28;
              v27 = a3[2];
              v37 = &v27;
              v39 = &v26;
              v40 = 4LL;
              v25 = 4;
              v43 = &v25;
              v45 = (__int16 *)(v14 + 28);
              v41 = &v30;
              v16 = &dword_18012FD71;
              v24 = 9;
              v34 = 8LL;
              v30 = 0x1000000LL;
              v42 = 8LL;
              v44 = v15;
              v46 = 16LL;
            }
            else
            {
              if ( (unsigned int)dword_180164450 <= 5 )
                return (int)RcConfig;
              LODWORD(RcConfig) = tlgKeywordOn(&dword_180164450, 0x400000000000LL);
              if ( !(_BYTE)RcConfig )
                return (int)RcConfig;
              v30 = *a3;
              v33 = &v30;
              v29 = a3[1];
              v35 = &v29;
              v28 = a3[2];
              v37 = &v28;
              v27 = a3[3];
              v39 = &v27;
              v41 = &v26;
              v42 = 4LL;
              v25 = 4;
              v45 = &v25;
              v47 = v14 + 28;
              v43 = (__int16 *)&v31;
              v16 = (const int *)&unk_18012FEC7;
              v24 = 10;
              v34 = 8LL;
              v40 = 8LL;
              v31 = 0x1000000LL;
              v44 = 8LL;
              v46 = v22;
              v48 = 16LL;
            }
            v36 = 8LL;
            v38 = 8LL;
          }
          LODWORD(v26) = v11;
          LODWORD(RcConfig) = tlgWriteTransfer_EtwEventWriteTransfer(
                                (int)&dword_180164450,
                                (int)v16,
                                v13,
                                v14,
                                v24,
                                &v32);
          return (int)RcConfig;
        }
        if ( (unsigned int)dword_180164450 > 5 )
        {
          LODWORD(RcConfig) = tlgKeywordOn(&dword_180164450, 0x400000000000LL);
          if ( (_BYTE)RcConfig )
          {
            v26 = 0x1000000LL;
            v33 = &v26;
            v34 = 8LL;
            tlgCreate1Sz_wchar_t(&v35, L"ResIdCount less than 2.");
            LODWORD(RcConfig) = tlgWriteTransfer_EtwEventWriteTransfer(
                                  (int)&dword_180164450,
                                  (int)&unk_18013025F,
                                  v19,
                                  v20,
                                  4u,
                                  &v32);
          }
        }
      }
      else if ( (unsigned int)dword_180164450 > 5 )
      {
        LODWORD(RcConfig) = tlgKeywordOn(&dword_180164450, 0x400000000000LL);
        if ( (_BYTE)RcConfig )
        {
          v26 = 0x1000000LL;
          v33 = &v26;
          v34 = 8LL;
          tlgCreate1Sz_wchar_t(&v35, L"Failed to retrieve service checksum.");
          LODWORD(RcConfig) = tlgWriteTransfer_EtwEventWriteTransfer(
                                (int)&dword_180164450,
                                (int)&unk_18013019A,
                                v17,
                                v18,
                                4u,
                                &v32);
        }
      }
    }
  }
  return (int)RcConfig;
}

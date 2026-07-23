/*
 * XREFs of _LdrpResReportResourceAccessInternal@16 @ 0x4B2B0BD2
 * Callers:
 *     _LdrpResSearchResourceMappedFile@36 @ 0x4B2BACC0 (_LdrpResSearchResourceMappedFile@36.c)
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     __tlgKeywordOn@12 @ 0x4B2ADDDA (__tlgKeywordOn@12.c)
 *     _RtlRunOnceExecuteOnce@16 @ 0x4B2B0F70 (_RtlRunOnceExecuteOnce@16.c)
 *     _LdrpGetRcConfig@16 @ 0x4B2B8818 (_LdrpGetRcConfig@16.c)
 *     _LdrResGetRCConfig@20 @ 0x4B2BB5A0 (_LdrResGetRCConfig@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __tlgCreate1Sz_wchar_t@8 @ 0x4B330F0A (__tlgCreate1Sz_wchar_t@8.c)
 *     __tlgWriteTransfer_EtwEventWriteTransfer@24 @ 0x4B330F4C (__tlgWriteTransfer_EtwEventWriteTransfer@24.c)
 */

char __fastcall LdrpResReportResourceAccessInternal(PVOID BaseOfImage, int a2, int *a3, int a4)
{
  NTSTATUS RCConfig; // eax
  int v7; // ecx
  int v8; // ebx
  NTSTATUS v9; // edi
  int v10; // ecx
  int v11; // ecx
  int *v12; // ecx
  int v13; // eax
  int v14; // eax
  ULONG v16; // [esp-8h] [ebp-F0h]
  NTSTATUS v17; // [esp+Ch] [ebp-DCh] BYREF
  int v18; // [esp+10h] [ebp-D8h] BYREF
  int v19; // [esp+14h] [ebp-D4h]
  int v20; // [esp+18h] [ebp-D0h] BYREF
  int v21; // [esp+1Ch] [ebp-CCh]
  int v22; // [esp+20h] [ebp-C8h] BYREF
  int v23; // [esp+24h] [ebp-C4h]
  int v24; // [esp+28h] [ebp-C0h] BYREF
  int v25; // [esp+2Ch] [ebp-BCh]
  int v26; // [esp+30h] [ebp-B8h] BYREF
  int v27; // [esp+34h] [ebp-B4h]
  _DWORD v28[2]; // [esp+38h] [ebp-B0h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [esp+40h] [ebp-A8h] BYREF
  int *v30; // [esp+60h] [ebp-88h]
  int v31; // [esp+64h] [ebp-84h]
  int v32; // [esp+68h] [ebp-80h]
  int v33; // [esp+6Ch] [ebp-7Ch]
  int *v34; // [esp+70h] [ebp-78h] BYREF
  int v35; // [esp+74h] [ebp-74h]
  int v36; // [esp+78h] [ebp-70h]
  int v37; // [esp+7Ch] [ebp-6Ch]
  int *v38; // [esp+80h] [ebp-68h]
  int v39; // [esp+84h] [ebp-64h]
  int v40; // [esp+88h] [ebp-60h]
  int v41; // [esp+8Ch] [ebp-5Ch]
  int *v42; // [esp+90h] [ebp-58h]
  int v43; // [esp+94h] [ebp-54h]
  int v44; // [esp+98h] [ebp-50h]
  int v45; // [esp+9Ch] [ebp-4Ch]
  int *v46; // [esp+A0h] [ebp-48h]
  int v47; // [esp+A4h] [ebp-44h]
  int v48; // [esp+A8h] [ebp-40h]
  int v49; // [esp+ACh] [ebp-3Ch]
  NTSTATUS *v50; // [esp+B0h] [ebp-38h]
  int v51; // [esp+B4h] [ebp-34h]
  int v52; // [esp+B8h] [ebp-30h]
  int v53; // [esp+BCh] [ebp-2Ch]
  NTSTATUS *v54; // [esp+C0h] [ebp-28h]
  int v55; // [esp+C4h] [ebp-24h]
  int v56; // [esp+C8h] [ebp-20h]
  int v57; // [esp+CCh] [ebp-1Ch]
  NTSTATUS v58; // [esp+D0h] [ebp-18h]
  int v59; // [esp+D4h] [ebp-14h]
  int v60; // [esp+D8h] [ebp-10h]
  int v61; // [esp+DCh] [ebp-Ch]

  RCConfig = RtlRunOnceExecuteOnce(
               &stru_4B3A6670,
               (PRTL_RUN_ONCE_INIT_FN)LdrpResReportResourceAccessInternalInitOnce,
               0,
               0);
  if ( RCConfig >= 0 )
  {
    v7 = (unsigned __int16)dword_4B3A65EC;
    LOBYTE(RCConfig) = ++dword_4B3A65EC;
    if ( !v7 )
    {
      v17 = 0;
      v8 = 0;
      if ( a2 )
      {
        v8 = 1;
        RCConfig = LdrResGetRCConfig(BaseOfImage, a2, &v17, 4096, 0);
        if ( RCConfig >= 0 )
          v9 = v17;
        else
          v9 = 0;
      }
      else
      {
        RCConfig = LdrpGetRcConfig(BaseOfImage, 0, 1);
        v9 = RCConfig;
      }
      if ( v9 )
      {
        if ( a4 >= 2 )
        {
          if ( a4 == 2 )
          {
            if ( (unsigned int)dword_4B3A3318 <= 5 )
              return RCConfig;
            LOBYTE(RCConfig) = _tlgKeywordOn(&dword_4B3A3318, 0x400000000000LL);
            if ( !(_BYTE)RCConfig )
              return RCConfig;
            v21 = 0;
            v31 = 0;
            v33 = 0;
            v20 = *a3;
            v30 = &v20;
            v22 = a3[1];
            v34 = &v22;
            v38 = &v18;
            v40 = 4;
            LOWORD(v17) = 4;
            v46 = &v17;
            v50 = (NTSTATUS *)(v9 + 28);
            v23 = 0;
            v35 = 0;
            v37 = 0;
            v12 = &v24;
            v18 = v8;
            v32 = 8;
            v36 = 8;
            v44 = 8;
            v16 = 8;
            v39 = 0;
            v41 = 0;
            v24 = 0x1000000;
            v25 = 0;
            v42 = &v24;
            v43 = 0;
            v45 = 0;
            v48 = 2;
            v52 = 16;
          }
          else
          {
            if ( a4 == 3 )
            {
              if ( (unsigned int)dword_4B3A3318 <= 5 )
                return RCConfig;
              LOBYTE(RCConfig) = _tlgKeywordOn(&dword_4B3A3318, 0x400000000000LL);
              if ( !(_BYTE)RCConfig )
                return RCConfig;
              v25 = 0;
              v31 = 0;
              v33 = 0;
              v24 = *a3;
              v30 = &v24;
              v13 = a3[1];
              v23 = 0;
              v35 = 0;
              v37 = 0;
              v22 = v13;
              v34 = &v22;
              v20 = a3[2];
              v38 = &v20;
              v42 = &v18;
              v44 = 4;
              LOWORD(v17) = 4;
              v50 = &v17;
              v54 = (NTSTATUS *)(v9 + 28);
              v21 = 0;
              v39 = 0;
              v41 = 0;
              v12 = &v26;
              v18 = v8;
              v32 = 8;
              v36 = 8;
              v40 = 8;
              v48 = 8;
              v43 = 0;
              v45 = 0;
              v26 = 0x1000000;
              v27 = 0;
              v46 = &v26;
              v52 = 2;
              v56 = 16;
              v16 = 9;
            }
            else
            {
              if ( (unsigned int)dword_4B3A3318 <= 5 )
                return RCConfig;
              LOBYTE(RCConfig) = _tlgKeywordOn(&dword_4B3A3318, 0x400000000000LL);
              if ( !(_BYTE)RCConfig )
                return RCConfig;
              v27 = 0;
              v31 = 0;
              v33 = 0;
              v26 = *a3;
              v30 = &v26;
              v24 = a3[1];
              v25 = 0;
              v34 = &v24;
              v14 = a3[2];
              v35 = 0;
              v37 = 0;
              v23 = 0;
              v39 = 0;
              v41 = 0;
              v22 = v14;
              v38 = &v22;
              v20 = a3[3];
              v42 = &v20;
              v46 = &v18;
              v48 = 4;
              LOWORD(v17) = 4;
              v54 = &v17;
              v58 = v9 + 28;
              v21 = 0;
              v43 = 0;
              v45 = 0;
              v12 = v28;
              v18 = v8;
              v32 = 8;
              v36 = 8;
              v40 = 8;
              v44 = 8;
              v52 = 8;
              v28[0] = 0x1000000;
              v28[1] = 0;
              v50 = v28;
              v56 = 2;
              v59 = 0;
              v60 = 16;
              v61 = 0;
              v16 = 10;
            }
            v57 = 0;
            v55 = 0;
          }
          v47 = 0;
          v49 = 0;
          v51 = 0;
          v53 = 0;
          LOBYTE(RCConfig) = _tlgWriteTransfer_EtwEventWriteTransfer((int)v12, (int)v12, v16, &UserData);
          return RCConfig;
        }
        if ( (unsigned int)dword_4B3A3318 > 5 )
        {
          LOBYTE(RCConfig) = _tlgKeywordOn(&dword_4B3A3318, 0x400000000000LL);
          if ( (_BYTE)RCConfig )
          {
            v18 = 0x1000000;
            v31 = 0;
            v33 = 0;
            v19 = 0;
            v30 = &v18;
            v32 = 8;
            _tlgCreate1Sz_wchar_t(&v34, L"ResIdCount less than 2.");
            LOBYTE(RCConfig) = _tlgWriteTransfer_EtwEventWriteTransfer(v11, v11, 4u, &UserData);
          }
        }
      }
      else if ( (unsigned int)dword_4B3A3318 > 5 )
      {
        LOBYTE(RCConfig) = _tlgKeywordOn(&dword_4B3A3318, 0x400000000000LL);
        if ( (_BYTE)RCConfig )
        {
          v18 = 0x1000000;
          v31 = 0;
          v33 = 0;
          v19 = 0;
          v30 = &v18;
          v32 = 8;
          _tlgCreate1Sz_wchar_t(&v34, L"Failed to retrieve service checksum.");
          LOBYTE(RCConfig) = _tlgWriteTransfer_EtwEventWriteTransfer(v10, v10, 4u, &UserData);
        }
      }
    }
  }
  return RCConfig;
}

/*
 * XREFs of CmpFindControlSet @ 0x140793688
 * Callers:
 *     CmpAcquireSystemDriverHiveContext @ 0x140A58A28 (CmpAcquireSystemDriverHiveContext.c)
 *     CmpGetSystemControlValues @ 0x140A5A000 (CmpGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     sprintf_s @ 0x1403D37B0 (sprintf_s.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x140657CA0 (CmpFindValueByName.c)
 *     RtlAnsiStringToUnicodeString @ 0x14068A690 (RtlAnsiStringToUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1406CFC28 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpValueToData @ 0x140793A3C (CmpValueToData.c)
 */

__int64 __fastcall CmpFindControlSet(ULONG_PTR BugCheckParameter3, __int64 a2, int a3, _BYTE *a4)
{
  unsigned int v6; // r12d
  __int64 (__fastcall *v7)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  int v11; // edi
  unsigned int ValueByName; // edi
  __int64 v13; // rax
  unsigned int v14; // edi
  __int64 v15; // rax
  _DWORD *v16; // r14
  __int64 v17; // rax
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // edi
  __int64 v23; // rax
  _DWORD *v24; // rax
  _BYTE *v26; // rdi
  __int64 *v27; // rdx
  unsigned int v28; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v29[2]; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v31[3]; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v32; // [rsp+54h] [rbp-ACh] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+70h] [rbp-90h] BYREF
  ANSI_STRING SourceString; // [rsp+78h] [rbp-88h] BYREF
  char DstBuf[128]; // [rsp+90h] [rbp-70h] BYREF
  char v38; // [rsp+110h] [rbp+10h] BYREF

  v31[2] = 0;
  v31[1] = 0;
  v29[1] = 0;
  v6 = a2;
  v7 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  DestinationString = 0LL;
  v31[0] = -1;
  SourceString = 0LL;
  v30 = 0xFFFFFFFFLL;
  v35 = 0xFFFFFFFFLL;
  v29[0] = -1;
  v34 = 0xFFFFFFFFLL;
  v9 = v7(BugCheckParameter3, a2, v29);
  if ( !v9 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"select");
  v28 = 0;
  CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v9, &DestinationString.Length, &v28);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
  if ( v28 == -1 )
    return 0xFFFFFFFFLL;
  v10 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v28, v29);
  v11 = v10;
  if ( !v10 )
    return 0xFFFFFFFFLL;
  RtlInitUnicodeString(&DestinationString, L"AutoSelect");
  ValueByName = CmpFindValueByName(BugCheckParameter3, v11, (int)&DestinationString);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
  if ( ValueByName == -1 )
  {
    *a4 = 1;
  }
  else
  {
    if ( !(*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
            BugCheckParameter3,
            ValueByName,
            v31) )
      return 0xFFFFFFFFLL;
    v26 = (_BYTE *)CmpValueToData(BugCheckParameter3, (__int64)&v34);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
    if ( !v26 )
      return 0xFFFFFFFFLL;
    *a4 = *v26;
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v34);
  }
  v13 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(BugCheckParameter3, v28, v29);
  if ( v13 )
  {
    v14 = CmpFindValueByName(BugCheckParameter3, v13, a3);
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
    if ( v14 != -1 )
    {
      v15 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v14,
              v31);
      if ( v15 )
      {
        if ( *(_DWORD *)(v15 + 12) != 4 )
        {
          v27 = (__int64 *)v31;
          goto LABEL_30;
        }
        v16 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v30);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
        if ( v16 )
        {
          sprintf_s(DstBuf, 0x80uLL, "ControlSet%03d", *v16);
          v17 = -1LL;
          do
            ++v17;
          while ( DstBuf[v17] );
          SourceString.MaximumLength = v17;
          SourceString.Length = v17;
          *(_DWORD *)&DestinationString.Length = 0x1000000;
          SourceString.Buffer = DstBuf;
          DestinationString.Buffer = (wchar_t *)&v38;
          v18 = RtlAnsiStringToUnicodeString(&DestinationString, &SourceString, 0);
          v19 = BugCheckParameter3;
          if ( v18 < 0
            || (v20 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                        BugCheckParameter3,
                        v6,
                        v29),
                v19 = BugCheckParameter3,
                !v20)
            || (v32 = 0,
                CmpFindSubKeyByNameWithStatus(BugCheckParameter3, v20, &DestinationString.Length, &v32),
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29),
                v19 = BugCheckParameter3,
                v32 == -1) )
          {
            v27 = &v30;
            goto LABEL_32;
          }
          v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                  BugCheckParameter3,
                  v28,
                  v29);
          if ( v21 )
          {
            RtlInitUnicodeString(&DestinationString, L"Current");
            v22 = CmpFindValueByName(BugCheckParameter3, v21, (int)&DestinationString);
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v29);
            if ( v22 == -1 )
            {
LABEL_23:
              (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v30);
              return v32;
            }
            v23 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(BugCheckParameter3 + 8))(
                    BugCheckParameter3,
                    v22,
                    v31);
            if ( v23 )
            {
              if ( *(_DWORD *)(v23 + 12) != 4 )
              {
LABEL_22:
                (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v31);
                goto LABEL_23;
              }
              v24 = (_DWORD *)CmpValueToData(BugCheckParameter3, (__int64)&v35);
              if ( v24 )
              {
                *v24 = *v16;
                (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, &v35);
                goto LABEL_22;
              }
            }
          }
          v27 = &v30;
LABEL_30:
          v19 = BugCheckParameter3;
LABEL_32:
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(v19, v27);
        }
      }
    }
  }
  return 0xFFFFFFFFLL;
}

/*
 * XREFs of CmpIsLoadType @ 0x140A6212C
 * Callers:
 *     CmpFindDrivers @ 0x140A61F64 (CmpFindDrivers.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpFindSubKeyByName @ 0x1407ACAD4 (CmpFindSubKeyByName.c)
 *     CmpValueToData @ 0x1407AD0F4 (CmpValueToData.c)
 *     CmpGetNodeName @ 0x140A62278 (CmpGetNodeName.c)
 */

char CmpIsLoadType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        ...)
{
  char v8; // di
  unsigned int ValueByName; // r15d
  ULONG_PTR v10; // rbx
  __int64 (__fastcall *v11)(ULONG_PTR, __int64, _DWORD *); // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  ULONG_PTR v14; // rax
  _DWORD *v15; // rsi
  void (__fastcall *v16)(ULONG_PTR, __int64 *); // rax
  const WCHAR *NodeName; // rax
  const WCHAR *v18; // r12
  unsigned int SubKeyByName; // eax
  __int64 v20; // rax
  unsigned int v21; // ebx
  ULONG_PTR v22; // rax
  int *v23; // rbx
  int v24; // ebx
  __int64 *v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rax
  _DWORD v29[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v30[4]; // [rsp+38h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v32; // [rsp+A0h] [rbp+40h] BYREF
  int v33; // [rsp+A4h] [rbp+44h]
  int v34; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF
  __int64 v36; // [rsp+D8h] [rbp+78h] BYREF
  va_list va; // [rsp+D8h] [rbp+78h]
  __int64 v38; // [rsp+E0h] [rbp+80h] BYREF
  va_list va1; // [rsp+E0h] [rbp+80h]
  __int64 v40; // [rsp+E8h] [rbp+88h]
  va_list va2; // [rsp+F0h] [rbp+90h] BYREF

  va_start(va2, a7);
  va_start(va1, a7);
  va_start(va, a7);
  va_arg(va1, _QWORD);
  va_copy(va2, va1);
  va_arg(va2, _QWORD);
  v40 = va_arg(va2, _QWORD);
  v35 = a4;
  v34 = a3;
  v30[1] = 0;
  v8 = 0;
  a5 = 0xFFFFFFFFLL;
  v30[0] = -1;
  v30[2] = -1;
  ValueByName = -1;
  v30[3] = 0;
  v10 = 0LL;
  v32 = -1;
  v33 = 0;
  v38 = 0xFFFFFFFFLL;
  v36 = 0xFFFFFFFFLL;
  v29[0] = -1;
  v29[1] = 0;
  v11 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, _DWORD *))(BugCheckParameter3 + 8);
  LODWORD(v35) = 0;
  DestinationString = 0LL;
  LOWORD(v34) = 0;
  v12 = v11(BugCheckParameter3, a2, v30);
  v40 = v12;
  if ( v12 )
  {
    v13 = a6;
    if ( a6 && a7 )
    {
      NodeName = (const WCHAR *)CmpGetNodeName(BugCheckParameter3, v12, &v34);
      v18 = NodeName;
      if ( NodeName )
      {
        if ( RtlInitUnicodeStringEx(&DestinationString, NodeName) >= 0 )
        {
          SubKeyByName = CmpFindSubKeyByName(v13, a7, (__int64)&DestinationString);
          if ( SubKeyByName != -1 )
          {
            v20 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, SubKeyByName, &v32);
            if ( v20 )
            {
              v10 = v13;
              ValueByName = CmpFindValueByName(v13, v20, (__int64)&CmpStartString);
              (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v32);
            }
          }
        }
        (*(void (__fastcall **)(const WCHAR *, _QWORD))(BugCheckParameter3 + 32))(v18, (unsigned __int16)v34);
        if ( ValueByName != -1 )
          goto LABEL_4;
      }
      v21 = CmpFindValueByName(BugCheckParameter3, v40, (__int64)L"\b\n");
      if ( v21 == -1 )
        goto LABEL_8;
      v22 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, __int64 *))(BugCheckParameter3 + 8))(
              BugCheckParameter3,
              v21,
              (__int64 *)va);
      if ( !v22 )
        goto LABEL_8;
      v23 = (int *)CmpValueToData(BugCheckParameter3, v21, v22, (unsigned int *)&v35, (__int64)va1);
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, (__int64 *)va);
      if ( !v23 )
        goto LABEL_8;
      v24 = *v23;
      (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter3 + 16))(BugCheckParameter3, (__int64 *)va1);
      v25 = &CmpDriverWildcardString;
      if ( (v24 & 0xB) == 0 )
        v25 = &CmpServiceWildcardString;
      v26 = CmpFindSubKeyByName(v13, a7, (__int64)v25);
      if ( v26 != -1 )
      {
        v27 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(v13 + 8))(v13, v26, &v32);
        if ( v27 )
        {
          v10 = v13;
          ValueByName = CmpFindValueByName(v13, v27, (__int64)&CmpStartString);
          (*(void (__fastcall **)(__int64, int *))(v13 + 16))(v13, &v32);
          if ( ValueByName != -1 )
            goto LABEL_4;
        }
      }
    }
    v10 = BugCheckParameter3;
    ValueByName = CmpFindValueByName(BugCheckParameter3, v40, (__int64)&CmpStartString);
    if ( ValueByName != -1 )
    {
LABEL_4:
      v14 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v10 + 8))(v10, ValueByName, v29);
      if ( v14 )
      {
        v15 = CmpValueToData(v10, ValueByName, v14, (unsigned int *)&v35, (__int64)&a5);
        (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v10 + 16))(v10, v29);
        if ( v15 )
        {
          v16 = *(void (__fastcall **)(ULONG_PTR, __int64 *))(v10 + 16);
          if ( *v15 == 1 )
          {
            v16(v10, &a5);
            v8 = 1;
          }
          else
          {
            v16(v10, &a5);
          }
        }
      }
    }
LABEL_8:
    (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v30);
    LOBYTE(v12) = v8;
  }
  return v12;
}

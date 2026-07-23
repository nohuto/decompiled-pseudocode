/*
 * XREFs of CmpFindDrivers @ 0x140A61F64
 * Callers:
 *     CmGetSystemDriverList @ 0x140A60174 (CmGetSystemDriverList.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     CmpLoadServicesNode @ 0x140A612C8 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140A6136C (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x140A6197C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140A6212C (CmpIsLoadType.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140A62328 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140A8FE84 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        int a3,
        int a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        __int64 a7,
        char **a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  unsigned int v15; // edi
  __int64 v16; // r14
  __int64 v17; // rsi
  unsigned int GroupOrderList; // eax
  char **v19; // r15
  unsigned int v20; // edi
  unsigned int v21; // r13d
  unsigned int v22; // r12d
  const UNICODE_STRING *v23; // r12
  __int64 v24; // r15
  __int64 v25; // r13
  const UNICODE_STRING *v26; // rdi
  unsigned int v28; // r13d
  char **v29; // r15
  unsigned int v30; // r12d
  ULONG_PTR v31; // rcx
  PCUNICODE_STRING Source; // [rsp+20h] [rbp-60h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int64 v34; // [rsp+40h] [rbp-40h]
  __int64 v35; // [rsp+48h] [rbp-38h]
  __int64 v36; // [rsp+50h] [rbp-30h] BYREF
  _DWORD v37[2]; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v38[2]; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v39[2]; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v40; // [rsp+70h] [rbp-10h] BYREF
  _DWORD *v41; // [rsp+78h] [rbp-8h] BYREF

  v11 = 0LL;
  a6 = 0;
  v41 = 0LL;
  a9 = 0xFFFFFFFFLL;
  v37[0] = -1;
  v38[0] = -1;
  v39[0] = -1;
  v15 = a2;
  v37[1] = 0;
  a11 = 0LL;
  v36 = 0LL;
  v38[1] = 0;
  v40 = 0LL;
  v39[1] = 0;
  if ( !CmpLoadServicesNode(BugCheckParameter3, a2, (__int64 *)&v40, (__int64)v39) )
    return 0;
  v16 = 0LL;
  a7 = 0LL;
  v17 = 0LL;
  if ( a10
    && (unsigned __int8)CmpLoadManufacturingProfileServicesNode(
                          BugCheckParameter3,
                          v15,
                          a10,
                          (unsigned int)&a7,
                          (__int64)v37) )
  {
    v17 = a7;
    v16 = BugCheckParameter3;
  }
  if ( (unsigned __int8)CmpFindRedirectedDriverServiceStateNode(
                          BugCheckParameter3,
                          v15,
                          a3,
                          a4,
                          (__int64)&a11,
                          (__int64)&v36,
                          (__int64)v38) )
    v11 = v36;
  else
    a11 = 0LL;
  v36 = v11;
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v15);
  LODWORD(a7) = GroupOrderList;
  if ( GroupOrderList == -1 )
    return 0;
  v19 = a8;
  v20 = 0;
  v21 = GroupOrderList;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v40, v20, &a6);
    v22 = a6;
    ++v20;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, (__int64)Source, v16, v17, v33, v34, v35) )
      CmpAddDriverToList(BugCheckParameter3, v22, BugCheckParameter3, v21, &CmpSystemHiveName, v19);
  }
  v23 = a5;
  v24 = a11;
  v25 = v36;
  if ( a5 )
  {
    v26 = *(const UNICODE_STRING **)&a5->Length;
    if ( *(const UNICODE_STRING **)&a5->Length != a5 )
    {
      v28 = a7;
      v29 = a8;
      do
      {
        if ( CmpLoadServicesNode(*(_QWORD *)&v26[2].Length, LODWORD(v26[2].Buffer), (__int64 *)&v41, (__int64)&a9) )
        {
          v30 = 0;
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*(_QWORD *)&v26[2].Length, v41, v30, &a6);
            v31 = *(_QWORD *)&v26[2].Length;
            ++v30;
            if ( a6 == -1 )
              break;
            if ( (unsigned __int8)CmpIsLoadType(v31, (__int64)Source, v16, v17, v33, v34, v35) )
              CmpAddDriverToList(*(_QWORD *)&v26[2].Length, a6, BugCheckParameter3, v28, v26 + 1, v29);
          }
          (*(void (__fastcall **)(ULONG_PTR, __int64 *))(v31 + 16))(v31, &a9);
          v23 = a5;
        }
        v26 = *(const UNICODE_STRING **)&v26->Length;
      }
      while ( v26 != v23 );
      v24 = a11;
      v25 = v36;
    }
  }
  if ( v16 && v17 )
    (*(void (__fastcall **)(__int64, _DWORD *))(v16 + 16))(v16, v37);
  if ( v24 && v25 )
    (*(void (__fastcall **)(__int64, _DWORD *))(v24 + 16))(v24, v38);
  (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(BugCheckParameter3 + 16))(BugCheckParameter3, v39);
  return 1;
}

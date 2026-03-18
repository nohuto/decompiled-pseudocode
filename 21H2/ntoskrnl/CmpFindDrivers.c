/*
 * XREFs of CmpFindDrivers @ 0x140B141E0
 * Callers:
 *     CmGetSystemDriverList @ 0x140B12C84 (CmGetSystemDriverList.c)
 * Callees:
 *     CmpFindSubKeyByNumber @ 0x1406BF278 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     CmpFindRedirectedDriverServiceStateNode @ 0x140B13268 (CmpFindRedirectedDriverServiceStateNode.c)
 *     CmpLoadServicesNode @ 0x140B133D8 (CmpLoadServicesNode.c)
 *     CmpFindGroupOrderList @ 0x140B1349C (CmpFindGroupOrderList.c)
 *     CmpAddDriverToList @ 0x140B13B7C (CmpAddDriverToList.c)
 *     CmpIsLoadType @ 0x140B143B0 (CmpIsLoadType.c)
 *     CmpLoadManufacturingProfileServicesNode @ 0x140B4E4C8 (CmpLoadManufacturingProfileServicesNode.c)
 */

char __fastcall CmpFindDrivers(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        unsigned int a4,
        const UNICODE_STRING *a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        char **a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  unsigned int v15; // edi
  ULONG_PTR v16; // rsi
  __int64 v17; // r15
  unsigned int GroupOrderList; // r13d
  char **v19; // r14
  unsigned int v20; // edi
  unsigned int v21; // r12d
  const UNICODE_STRING *v22; // r12
  __int64 v23; // r14
  const UNICODE_STRING *v24; // rdi
  unsigned int v26; // r14d
  unsigned int v27; // r12d
  unsigned int v28; // r13d
  ULONG_PTR v29; // rcx
  PCUNICODE_STRING Source; // [rsp+20h] [rbp-60h]
  __int64 v31; // [rsp+38h] [rbp-48h]
  __int64 v32; // [rsp+40h] [rbp-40h]
  __int64 v33; // [rsp+48h] [rbp-38h]
  __int64 v34; // [rsp+50h] [rbp-30h] BYREF
  __int64 v35; // [rsp+58h] [rbp-28h]
  __int64 v36; // [rsp+60h] [rbp-20h] BYREF
  __int64 v37; // [rsp+68h] [rbp-18h] BYREF
  _DWORD *v38; // [rsp+70h] [rbp-10h] BYREF
  _DWORD *v39; // [rsp+78h] [rbp-8h] BYREF

  a6 = 0;
  v39 = 0LL;
  a7 = 0xFFFFFFFFLL;
  a10 = 0xFFFFFFFFLL;
  a12 = 0xFFFFFFFFLL;
  v34 = 0xFFFFFFFFLL;
  v15 = BugCheckParameter4;
  v36 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  if ( !CmpLoadServicesNode(BugCheckParameter3, BugCheckParameter4, (__int64 *)&v38, (unsigned int *)&v34) )
    return 0;
  v16 = 0LL;
  v35 = 0LL;
  v17 = 0LL;
  if ( a11 && (unsigned __int8)CmpLoadManufacturingProfileServicesNode(BugCheckParameter3, (__int64)&a10) )
  {
    v17 = v35;
    v16 = BugCheckParameter3;
  }
  if ( CmpFindRedirectedDriverServiceStateNode(
         BugCheckParameter3,
         v15,
         a3,
         a4,
         (__int64)&v36,
         (__int64)&v37,
         (__int64)&a12) )
  {
    v35 = v36;
  }
  else
  {
    v35 = 0LL;
    v37 = 0LL;
  }
  GroupOrderList = CmpFindGroupOrderList(BugCheckParameter3, v15);
  if ( GroupOrderList == -1 )
    return 0;
  v19 = a9;
  v20 = 0;
  while ( 1 )
  {
    CmpFindSubKeyByNumber(BugCheckParameter3, v38, v20, &a6);
    v21 = a6;
    ++v20;
    if ( a6 == -1 )
      break;
    if ( (unsigned __int8)CmpIsLoadType(BugCheckParameter3, (__int64)Source, v16, v17, v31, v32, v33) )
      CmpAddDriverToList(BugCheckParameter3, v21, BugCheckParameter3, GroupOrderList, &CmpSystemHiveName, v19, 0);
  }
  v22 = a5;
  v23 = v35;
  if ( a5 )
  {
    v24 = *(const UNICODE_STRING **)&a5->Length;
    if ( *(const UNICODE_STRING **)&a5->Length != a5 )
    {
      v26 = GroupOrderList;
      do
      {
        if ( CmpLoadServicesNode(
               *(_QWORD *)&v24[2].Length,
               LODWORD(v24[2].Buffer),
               (__int64 *)&v39,
               (unsigned int *)&a7) )
        {
          v27 = 0;
          while ( 1 )
          {
            CmpFindSubKeyByNumber(*(_QWORD *)&v24[2].Length, v39, v27, &a6);
            v28 = a6;
            ++v27;
            v29 = *(_QWORD *)&v24[2].Length;
            if ( a6 == -1 )
              break;
            if ( (unsigned __int8)CmpIsLoadType(v29, (__int64)Source, v16, v17, v31, v32, v33) )
              CmpAddDriverToList(*(_QWORD *)&v24[2].Length, v28, BugCheckParameter3, v26, v24 + 1, a9, 0);
          }
          v22 = a5;
          if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
            HvpReleaseCellFlat(v29, &a7);
          else
            HvpReleaseCellPaged(v29, (unsigned int *)&a7);
        }
        v24 = *(const UNICODE_STRING **)&v24->Length;
      }
      while ( v24 != v22 );
      v23 = v35;
    }
  }
  if ( v16 && v17 )
  {
    if ( (*(_BYTE *)(v16 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v16, &a10);
    else
      HvpReleaseCellPaged(v16, (unsigned int *)&a10);
  }
  if ( v23 && v37 )
  {
    if ( (*(_BYTE *)(v23 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v23, &a12);
    else
      HvpReleaseCellPaged(v23, (unsigned int *)&a12);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, &v34);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v34);
  return 1;
}

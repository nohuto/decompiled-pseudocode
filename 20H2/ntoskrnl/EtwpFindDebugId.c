/*
 * XREFs of EtwpFindDebugId @ 0x1406AFA1C
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1406AFC40 (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpCovSampContextGetModule @ 0x140945C50 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     EtwpIsValidImageAddress @ 0x1405CF600 (EtwpIsValidImageAddress.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpFindDebugId(char *a1, SIZE_T a2, char a3, void **a4, _DWORD *a5)
{
  char v5; // di
  SIZE_T v6; // r14
  ULONG v8; // esi
  char *v9; // rbx
  ULONG v10; // r12d
  SIZE_T v12; // rcx
  SIZE_T v13; // rbx
  char *v14; // r14
  PVOID PoolWithTag; // rax
  void **v16; // rcx
  ULONG Size[2]; // [rsp+20h] [rbp-88h] BYREF
  ULONG v18; // [rsp+28h] [rbp-80h]
  unsigned __int64 v19; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-70h] BYREF
  char *v21; // [rsp+40h] [rbp-68h]
  __int128 v22; // [rsp+48h] [rbp-60h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-50h]
  int v24; // [rsp+60h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v19 = 0LL;
  v20 = 0LL;
  Size[0] = 0;
  v9 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 6u, Size);
  v21 = v9;
  if ( !v9 || Size[0] < 0x1C )
    return 3221225485LL;
  v10 = Size[0] / 0x1C;
  v18 = 0;
  while ( 1 )
  {
    if ( v8 >= v10 )
      return 3221226021LL;
    if ( v9 < a1 )
      return 3221225485LL;
    *(_QWORD *)Size = v9 + 28;
    if ( v9 + 28 > &a1[v6] )
      return 3221225485LL;
    if ( v5 && !EtwpIsValidImageAddress((__int64)v9, 28LL, &v19) )
      return 3221227779LL;
    v22 = *(_OWORD *)v9;
    NumberOfBytes = *((_QWORD *)v9 + 2);
    v24 = *((_DWORD *)v9 + 6);
    v12 = HIDWORD(NumberOfBytes);
    if ( HIDWORD(NumberOfBytes) > v6 )
      return 3221225485LL;
    v13 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > v6 || v12 > v6 - (unsigned int)NumberOfBytes )
      return 3221225485LL;
    if ( HIDWORD(v22) == 2 )
      break;
LABEL_26:
    v9 = *(char **)Size;
    v21 = *(char **)Size;
    v18 = ++v8;
    v5 = a3;
  }
  v14 = &a1[v12];
  if ( a3 && !EtwpIsValidImageAddress((__int64)&a1[v12], (unsigned int)NumberOfBytes, &v20) )
    return 3221227779LL;
  if ( *(_DWORD *)v14 != 1396986706 )
  {
    v6 = a2;
    goto LABEL_26;
  }
  if ( (unsigned int)v13 < 0x1C )
    return 3221225595LL;
  if ( *a5 >= (unsigned int)v13 )
  {
    v16 = a4;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v13, 0x62777445u);
    v16 = a4;
    *a4 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
  }
  *a5 = v13;
  memmove(*v16, v14, v13);
  return 0LL;
}

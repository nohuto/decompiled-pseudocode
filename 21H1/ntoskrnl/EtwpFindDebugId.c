/*
 * XREFs of EtwpFindDebugId @ 0x1406D74C4
 * Callers:
 *     EtwpLocateDbgIdForRegEntry @ 0x1406D736C (EtwpLocateDbgIdForRegEntry.c)
 *     EtwpCovSampContextGetModule @ 0x14093EC10 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     EtwpIsValidImageAddress @ 0x1405C85E4 (EtwpIsValidImageAddress.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpFindDebugId(char *a1, SIZE_T a2, char a3, void **a4, unsigned int *a5)
{
  char v5; // si
  SIZE_T v6; // r14
  ULONG v8; // edi
  char *v9; // rbx
  ULONG v10; // r12d
  SIZE_T v12; // rcx
  unsigned int v13; // esi
  SIZE_T v14; // rbx
  char *v15; // r14
  PVOID PoolWithTag; // rax
  void **v17; // rcx
  ULONG Size[2]; // [rsp+20h] [rbp-88h] BYREF
  ULONG v19; // [rsp+28h] [rbp-80h]
  unsigned __int64 v20; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v21; // [rsp+38h] [rbp-70h] BYREF
  char *v22; // [rsp+40h] [rbp-68h]
  __int128 v23; // [rsp+48h] [rbp-60h]
  SIZE_T NumberOfBytes; // [rsp+58h] [rbp-50h]
  int v25; // [rsp+60h] [rbp-48h]

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v20 = 0LL;
  v21 = 0LL;
  Size[0] = 0;
  v9 = (char *)RtlImageDirectoryEntryToData(a1, 1u, 6u, Size);
  v22 = v9;
  if ( !v9 || Size[0] < 0x1C )
    return 3221225485LL;
  v10 = Size[0] / 0x1C;
  v19 = 0;
  while ( 1 )
  {
    if ( v8 >= v10 )
      return 3221226021LL;
    if ( v9 < a1 )
      return 3221225485LL;
    *(_QWORD *)Size = v9 + 28;
    if ( v9 + 28 > &a1[v6] )
      return 3221225485LL;
    if ( v5 && !EtwpIsValidImageAddress((__int64)v9, 28LL, &v20) )
      return 3221227779LL;
    v23 = *(_OWORD *)v9;
    NumberOfBytes = *((_QWORD *)v9 + 2);
    v25 = *((_DWORD *)v9 + 6);
    v12 = HIDWORD(NumberOfBytes);
    if ( HIDWORD(NumberOfBytes) > v6 )
      return 3221225485LL;
    v13 = NumberOfBytes;
    v14 = (unsigned int)NumberOfBytes;
    if ( (unsigned int)NumberOfBytes > v6 || v12 > v6 - (unsigned int)NumberOfBytes )
      return 3221225485LL;
    if ( HIDWORD(v23) == 2 )
      break;
LABEL_24:
    v9 = *(char **)Size;
    v22 = *(char **)Size;
    v19 = ++v8;
    v5 = a3;
  }
  v15 = &a1[v12];
  if ( a3 && !EtwpIsValidImageAddress((__int64)&a1[v12], (unsigned int)NumberOfBytes, &v21) )
    return 3221227779LL;
  if ( *(_DWORD *)v15 != 1396986706 )
  {
    v6 = a2;
    goto LABEL_24;
  }
  if ( *a5 >= v13 )
  {
    v17 = a4;
  }
  else
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v14, 0x62777445u);
    v17 = a4;
    *a4 = PoolWithTag;
    if ( !PoolWithTag )
      return 3221225495LL;
  }
  *a5 = v13;
  memmove(*v17, v15, v14);
  return 0LL;
}

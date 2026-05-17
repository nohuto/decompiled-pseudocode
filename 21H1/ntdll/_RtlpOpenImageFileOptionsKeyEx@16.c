/*
 * XREFs of _RtlpOpenImageFileOptionsKeyEx@16 @ 0x4B2E5DF9
 * Callers:
 *     _LdrpQueryDllExecuteOptions@8 @ 0x4B2E76BD (_LdrpQueryDllExecuteOptions@8.c)
 *     _RtlQueryImageFileExecutionOptions@28 @ 0x4B2E9700 (_RtlQueryImageFileExecutionOptions@28.c)
 *     _LdrpInitializeExecutionOptions@24 @ 0x4B331EB9 (_LdrpInitializeExecutionOptions@24.c)
 *     _LdrpQueryAndUpdateVerifierLaunchCounter@8 @ 0x4B333771 (_LdrpQueryAndUpdateVerifierLaunchCounter@8.c)
 *     _RtlOpenImageFileOptionsKey@12 @ 0x4B33FD90 (_RtlOpenImageFileOptionsKey@12.c)
 *     _RtlQueryImageMitigationPolicy@20 @ 0x4B33FE30 (_RtlQueryImageMitigationPolicy@20.c)
 *     _RtlSetImageMitigationPolicy@20 @ 0x4B3408F0 (_RtlSetImageMitigationPolicy@20.c)
 *     _RtlpDeleteEmptyImageFileOptionsKey@4 @ 0x4B342483 (_RtlpDeleteEmptyImageFileOptionsKey@4.c)
 * Callees:
 *     _RtlpProcessIFEOKeyFilter@12 @ 0x4B2AA107 (_RtlpProcessIFEOKeyFilter@12.c)
 *     _RtlInitUnicodeStringEx@8 @ 0x4B2D1CE0 (_RtlInitUnicodeStringEx@8.c)
 *     @RtlpOpenBaseImageFileOptionsKey@4 @ 0x4B2E5F35 (@RtlpOpenBaseImageFileOptionsKey@4.c)
 *     @RtlpOpenBaseImageFileOptionsKeyEx@12 @ 0x4B2E5F7F (@RtlpOpenBaseImageFileOptionsKeyEx@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _ZwOpenKey@12 @ 0x4B2F2A80 (_ZwOpenKey@12.c)
 *     _ZwCreateKey@28 @ 0x4B2F2B50 (_ZwCreateKey@28.c)
 *     _ZwSetValueKey@24 @ 0x4B2F2F80 (_ZwSetValueKey@24.c)
 *     _ZwDeleteKey@4 @ 0x4B2F36B0 (_ZwDeleteKey@4.c)
 *     _RtlpCreateIFEOKeyFilterKey@16 @ 0x4B342064 (_RtlpCreateIFEOKeyFilterKey@16.c)
 */

int __fastcall RtlpOpenImageFileOptionsKeyEx(unsigned __int16 *a1, int a2, char a3, _DWORD *a4)
{
  int v5; // esi
  int v6; // edi
  int v7; // edx
  _WORD *v8; // esi
  int v9; // edi
  int result; // eax
  HANDLE v11; // edi
  int v12; // eax
  int inited; // esi
  int v14; // eax
  int v15; // ecx
  HANDLE v16; // edi
  int IFEOKeyFilterKey; // eax
  char v18; // [esp+Eh] [ebp-32h]
  char v19; // [esp+Fh] [ebp-31h]
  HANDLE v20; // [esp+10h] [ebp-30h] BYREF
  HANDLE Handle[2]; // [esp+14h] [ebp-2Ch] BYREF
  int v22; // [esp+1Ch] [ebp-24h] BYREF
  __int16 v23; // [esp+20h] [ebp-20h] BYREF
  _WORD *v24; // [esp+24h] [ebp-1Ch]
  _DWORD v25[6]; // [esp+28h] [ebp-18h] BYREF

  v22 = (int)a1;
  *a4 = 0;
  v5 = *((_DWORD *)a1 + 1);
  v6 = *a1;
  Handle[0] = 0;
  v20 = 0;
  v19 = 0;
  v7 = v6;
  v8 = (_WORD *)(v6 + v5);
  if ( a3 && (v6 + 2 > (unsigned int)a1[1] || *v8) )
    return -1073741811;
  if ( v6 )
  {
    while ( *(v8 - 1) != 92 )
    {
      --v8;
      v7 -= 2;
      if ( !v7 )
        goto LABEL_7;
    }
    v19 = 1;
  }
LABEL_7:
  v9 = v6 - v7;
  v24 = v8;
  v23 = v9;
  if ( (unsigned __int16)v9 != v9 )
    return -1073741789;
  if ( a3 )
  {
    v18 = 1;
    result = RtlpOpenBaseImageFileOptionsKeyEx(a3);
  }
  else
  {
    v18 = 0;
    result = RtlpOpenBaseImageFileOptionsKey(Handle);
  }
  if ( result >= 0 )
  {
    v11 = Handle[0];
    v25[2] = &v23;
    v25[0] = 24;
    v25[1] = Handle[0];
    v25[3] = 576;
    v25[4] = 0;
    v25[5] = 0;
    if ( a3 )
      v12 = ZwCreateKey(&v20, a2, v25, 0, 0, 0, 0);
    else
      v12 = ZwOpenKey(&v20, a2, v25);
    inited = v12;
    if ( v18 )
      NtClose(v11);
    if ( inited >= 0 )
    {
      Handle[0] = v20;
      v14 = RtlpProcessIFEOKeyFilter(Handle, a2, (int *)v22);
      v16 = Handle[0];
      inited = v14;
      if ( v14 < 0 )
        goto LABEL_24;
      if ( a3 && v19 && Handle[0] == v20 )
      {
        Handle[0] = 0;
        IFEOKeyFilterKey = RtlpCreateIFEOKeyFilterKey(a2 | 0x10000, v15);
        v16 = Handle[0];
        inited = IFEOKeyFilterKey;
        if ( IFEOKeyFilterKey >= 0 )
        {
          inited = RtlInitUnicodeStringEx((int)Handle, L"FilterFullPath");
          if ( inited < 0
            || (inited = ZwSetValueKey(v16, Handle, 0, 1, *(_DWORD *)(v22 + 4), *(unsigned __int16 *)(v22 + 2)),
                inited < 0)
            || (v22 = 1, inited = RtlInitUnicodeStringEx((int)Handle, L"UseFilter"), inited < 0)
            || (inited = ZwSetValueKey(v20, Handle, 0, 4, &v22, 4), inited < 0) )
          {
            ZwDeleteKey(v16);
          }
        }
        NtClose(v20);
      }
      if ( inited < 0 )
      {
LABEL_24:
        if ( v16 )
          NtClose(v16);
      }
      else
      {
        *a4 = v16;
      }
    }
    return inited;
  }
  return result;
}

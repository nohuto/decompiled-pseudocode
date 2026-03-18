/*
 * XREFs of RtlFindHotPatchInformation @ 0x14091D770
 * Callers:
 *     MiApplyDriverHotPatch @ 0x1408CB5F4 (MiApplyDriverHotPatch.c)
 *     MiOpenHotPatchFile @ 0x1408CF348 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408CF704 (MiPerformImageHotPatch.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140297240 (RtlImageNtHeader.c)
 *     RtlImageDirectoryEntryToData @ 0x1402FD940 (RtlImageDirectoryEntryToData.c)
 *     RtlFindHotPatchBase @ 0x14091D740 (RtlFindHotPatchBase.c)
 */

__int64 __fastcall RtlFindHotPatchInformation(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edx
  __int64 v4; // rdi
  _DWORD *v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // r10d
  unsigned int *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // r10d
  __int64 v14; // r9
  unsigned int v16; // [rsp+38h] [rbp+10h] BYREF

  v16 = 0;
  v2 = RtlImageNtHeader(a1);
  LOBYTE(v3) = 1;
  v4 = v2;
  v5 = (_DWORD *)RtlImageDirectoryEntryToData(a1, v3, 10, (int)&v16);
  if ( !v5 )
    return 0LL;
  if ( v16 <= 4 )
    return 0LL;
  if ( v16 != *v5 )
    return 0LL;
  if ( v16 < 0xF4 )
    return 0LL;
  if ( (_DWORD *)((char *)v5 + v16) < v5 )
    return 0LL;
  v6 = a1 + *(unsigned int *)(v4 + 80);
  if ( (unsigned __int64)v5 >= v6 )
    return 0LL;
  if ( (unsigned __int64)v5 + v16 > v6 )
    return 0LL;
  _mm_lfence();
  v7 = (unsigned int)v5[60];
  if ( (unsigned int)v7 >= 0xFFFFFFF8 || (_DWORD)v7 == 0 )
    return 0LL;
  v8 = *(_DWORD *)(v4 + 80);
  if ( (int)v7 + 8 > v8 )
    return 0LL;
  v9 = (unsigned int *)(a1 + v7);
  switch ( *(_DWORD *)(a1 + v7) )
  {
    case 1:
      v10 = 20;
      break;
    case 2:
      v10 = 24;
      break;
    case 3:
      v10 = 28;
      break;
    default:
      return 0LL;
  }
  v11 = v9[1];
  if ( v11 >= v10 )
  {
    if ( v9[2] )
    {
      if ( v11 + (unsigned int)v7 > v11 && v11 + (unsigned int)v7 <= v8 )
      {
        v12 = v9[4];
        if ( v12 <= 0x3FFFFFF9 )
        {
          v13 = 4 * v12 + v9[3];
          if ( v13 > 4 * v12 && v13 <= v11 && v12 == 1 && RtlFindHotPatchBase(v9) )
            return v14;
        }
      }
    }
  }
  return 0LL;
}

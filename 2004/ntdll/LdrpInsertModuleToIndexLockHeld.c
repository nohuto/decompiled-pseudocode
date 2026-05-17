/*
 * XREFs of LdrpInsertModuleToIndexLockHeld @ 0x180014744
 * Callers:
 *     LdrpMapDllWithSectionHandle @ 0x180014A90 (LdrpMapDllWithSectionHandle.c)
 *     LdrpInsertModuleToIndex @ 0x18007FD40 (LdrpInsertModuleToIndex.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x180027DC0 (RtlRbInsertNodeEx.c)
 */

__int64 __fastcall LdrpInsertModuleToIndexLockHeld(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  char v4; // bl
  unsigned int v5; // r10d
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 result; // rax

  v3 = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a1 + 128) = v3;
  v4 = 0;
  v5 = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 64) = v5;
  v7 = LdrpMappingInfoIndex;
  if ( (qword_18016B480 & 1) != 0 )
  {
    if ( LdrpMappingInfoIndex )
      v7 = (unsigned __int64)&LdrpMappingInfoIndex ^ LdrpMappingInfoIndex;
    else
      v7 = 0LL;
  }
  LOBYTE(a3) = 0;
  if ( v7 )
  {
    while ( 1 )
    {
      if ( v3 < *(_DWORD *)(v7 - 96) || v3 <= *(_DWORD *)(v7 - 96) && v5 < *(_DWORD *)(v7 - 160) )
      {
        v8 = *(_QWORD *)v7;
        if ( (qword_18016B480 & 1) != 0 )
        {
          if ( !v8 )
            break;
          v8 ^= v7;
        }
        if ( !v8 )
          break;
      }
      else
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( (qword_18016B480 & 1) != 0 )
        {
          if ( !v8 )
            goto LABEL_19;
          v8 ^= v7;
        }
        if ( !v8 )
        {
LABEL_19:
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v8;
    }
  }
  RtlRbInsertNodeEx(&LdrpMappingInfoIndex, v7, a3, a1 + 224);
  v9 = *(_QWORD *)(a1 + 48);
  v10 = LdrpModuleBaseAddressIndex;
  if ( (qword_18016B470 & 1) != 0 )
  {
    if ( LdrpModuleBaseAddressIndex )
      v10 = (unsigned __int64)&LdrpModuleBaseAddressIndex ^ LdrpModuleBaseAddressIndex;
    else
      v10 = 0LL;
  }
  if ( v10 )
  {
    while ( 1 )
    {
      if ( v9 < *(_QWORD *)(v10 - 152) )
      {
        v11 = *(_QWORD *)v10;
        if ( (qword_18016B470 & 1) != 0 )
        {
          if ( !v11 )
            break;
          v11 ^= v10;
        }
        if ( !v11 )
          break;
      }
      else
      {
        v11 = *(_QWORD *)(v10 + 8);
        if ( (qword_18016B470 & 1) != 0 )
        {
          if ( !v11 )
            goto LABEL_33;
          v11 ^= v10;
        }
        if ( !v11 )
        {
LABEL_33:
          v4 = 1;
          break;
        }
      }
      v10 = v11;
    }
  }
  LOBYTE(v9) = v4;
  result = RtlRbInsertNodeEx(&LdrpModuleBaseAddressIndex, v10, v9, a1 + 200);
  *(_DWORD *)(a1 + 104) |= 0x80u;
  return result;
}

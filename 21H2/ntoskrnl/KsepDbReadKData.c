/*
 * XREFs of KsepDbReadKData @ 0x1408BFDB0
 * Callers:
 *     KsepDbCacheReadDeviceInternal @ 0x140755F34 (KsepDbCacheReadDeviceInternal.c)
 * Callees:
 *     SdbGetStringTagPtr @ 0x140756740 (SdbGetStringTagPtr.c)
 *     SdbReadDWORDTag @ 0x140759F54 (SdbReadDWORDTag.c)
 *     SdbpGetMappedTagData @ 0x140759FC4 (SdbpGetMappedTagData.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     SdbGetTagDataSize @ 0x14075A500 (SdbGetTagDataSize.c)
 *     SdbReadQWORDTag @ 0x1407B3BC0 (SdbReadQWORDTag.c)
 */

__int64 __fastcall KsepDbReadKData(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  unsigned int v6; // ebx
  unsigned int FirstTag; // eax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 StringTagPtr; // r14
  unsigned int v11; // eax
  __int64 v12; // r9
  int DWORDTag; // eax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rax
  int TagDataSize; // eax
  unsigned int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r9
  unsigned int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 MappedTagData; // r15

  v4 = a2;
  v6 = -1073741823;
  if ( !(_DWORD)a2 )
    return v6;
  FirstTag = SdbFindFirstTag(a1, a2, 24577);
  if ( !FirstTag )
    return v6;
  StringTagPtr = SdbGetStringTagPtr(a1, FirstTag, v8, v9);
  if ( !StringTagPtr )
    return v6;
  v11 = SdbFindFirstTag(a1, v4, 16408);
  if ( !v11 )
    return v6;
  DWORDTag = SdbReadDWORDTag(a1, v11, 0LL, v12);
  switch ( DWORDTag )
  {
    case 1:
      v14 = SdbFindFirstTag(a1, v4, 24606);
      v17 = SdbGetStringTagPtr(a1, v14, v15, v16);
      if ( v17 )
      {
        *(_QWORD *)a3 = StringTagPtr;
        v18 = -1LL;
        *(_DWORD *)(a3 + 8) = 1;
        do
          ++v18;
        while ( *(_WORD *)(v17 + 2 * v18) );
        TagDataSize = 2 * v18 + 2;
        *(_QWORD *)(a3 + 16) = v17;
        goto LABEL_18;
      }
      return v6;
    case 4:
      v20 = SdbFindFirstTag(a1, v4, 16409);
      *(_QWORD *)a3 = StringTagPtr;
      *(_DWORD *)(a3 + 8) = 4;
      *(_DWORD *)(a3 + 12) = 4;
      v21 = a3 + 24;
      *(_DWORD *)(a3 + 24) = SdbReadDWORDTag(a1, v20, 0LL, v22);
LABEL_14:
      *(_QWORD *)(a3 + 16) = v21;
      return 0;
    case 11:
      v23 = SdbFindFirstTag(a1, v4, 20487);
      *(_QWORD *)a3 = StringTagPtr;
      *(_DWORD *)(a3 + 8) = 11;
      *(_DWORD *)(a3 + 12) = 8;
      v21 = a3 + 32;
      *(_QWORD *)(a3 + 32) = SdbReadQWORDTag(a1, v23, 0LL);
      goto LABEL_14;
  }
  if ( DWORDTag != 3 )
    return (unsigned int)-1073741811;
  v24 = SdbFindFirstTag(a1, v4, 36869);
  MappedTagData = SdbpGetMappedTagData(a1, v24);
  if ( MappedTagData )
  {
    *(_QWORD *)a3 = StringTagPtr;
    *(_DWORD *)(a3 + 8) = 3;
    TagDataSize = SdbGetTagDataSize(a1, v24, v25, v26);
    *(_QWORD *)(a3 + 16) = MappedTagData;
LABEL_18:
    *(_DWORD *)(a3 + 12) = TagDataSize;
    return 0;
  }
  return v6;
}

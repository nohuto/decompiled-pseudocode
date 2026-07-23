/*
 * XREFs of KsepDbCacheReadDeviceInternal @ 0x140755F34
 * Callers:
 *     KsepDbCacheReadDevice @ 0x14075603C (KsepDbCacheReadDevice.c)
 * Callees:
 *     SdbGetDatabaseMatchEx @ 0x140759BC8 (SdbGetDatabaseMatchEx.c)
 *     SdbFindNextTag @ 0x14075A008 (SdbFindNextTag.c)
 *     SdbFindFirstTag @ 0x14075A344 (SdbFindFirstTag.c)
 *     KsepDbReadKFlag @ 0x1407B3B20 (KsepDbReadKFlag.c)
 *     SdbTagRefToTagID @ 0x1407C25B0 (SdbTagRefToTagID.c)
 *     KsepCacheDeviceInsertData @ 0x1407CC860 (KsepCacheDeviceInsertData.c)
 *     KsepDbReadKData @ 0x1408BFDB0 (KsepDbReadKData.c)
 */

__int64 __fastcall KsepDbCacheReadDeviceInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int DatabaseMatch; // eax
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int i; // eax
  unsigned int v10; // edi
  unsigned int j; // eax
  unsigned int v12; // edi
  __int64 v13; // [rsp+20h] [rbp-60h]
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  __int64 v15; // [rsp+48h] [rbp-38h] BYREF
  __int128 v16; // [rsp+50h] [rbp-30h] BYREF
  __int128 v17; // [rsp+60h] [rbp-20h]
  __int64 v18; // [rsp+70h] [rbp-10h]

  v14 = 0;
  v15 = 0LL;
  HIDWORD(v13) = 0;
  v16 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  DatabaseMatch = SdbGetDatabaseMatchEx(a1, 1LL);
  if ( !DatabaseMatch || !(unsigned int)SdbTagRefToTagID(a1, DatabaseMatch, &v15, &v14) )
    return 3221226021LL;
  v8 = v15;
  for ( i = SdbFindFirstTag(v15, v14, 28691LL); ; i = SdbFindNextTag(v8, v14, v10) )
  {
    v10 = i;
    if ( !i )
      break;
    result = KsepDbReadKFlag(v8, i, &v16);
    if ( (int)result < 0 )
      return result;
    LODWORD(v13) = HIDWORD(v16);
    result = KsepCacheDeviceInsertData(a4, v16, v17, DWORD2(v16), v13);
    if ( (int)result < 0 )
      return result;
  }
  for ( j = SdbFindFirstTag(v8, v14, 28712LL); ; j = SdbFindNextTag(v8, v14, v12) )
  {
    v12 = j;
    if ( !j )
      break;
    result = KsepDbReadKData(v8, j, &v16);
    if ( (int)result < 0 )
      return result;
    LODWORD(v13) = HIDWORD(v16);
    result = KsepCacheDeviceInsertData(a4, v16, v17, DWORD2(v16), v13);
    if ( (int)result < 0 )
      return result;
  }
  return 0LL;
}

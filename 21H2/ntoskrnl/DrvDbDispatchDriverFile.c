/*
 * XREFs of DrvDbDispatchDriverFile @ 0x14097EF60
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x140630F58 (_PnpCtxGetObjectContext.c)
 *     DrvDbDeleteObjectRegKey @ 0x14097CE24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverFileMappedProperty @ 0x14097D864 (DrvDbGetDriverFileMappedProperty.c)
 *     DrvDbGetDriverFileMappedPropertyKeys @ 0x14097D9F8 (DrvDbGetDriverFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14097E0FC (DrvDbGetObjectList.c)
 *     DrvDbOpenDriverFileRegKey @ 0x14097E738 (DrvDbOpenDriverFileRegKey.c)
 *     DrvDbSetDriverFileMappedProperty @ 0x14097E780 (DrvDbSetDriverFileMappedProperty.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097E994 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverFile(__int64 a1, wchar_t *a2, int a3, __int64 a4, __int64 a5)
{
  signed int ObjectContext; // r8d
  int v7; // r10d
  __int64 *v8; // r11
  __int64 v9; // rcx
  int v10; // r10d
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v18; // r8d
  __int64 *v20[3]; // [rsp+40h] [rbp-18h] BYREF

  v20[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v20);
  if ( ObjectContext < 0 )
    return (unsigned int)ObjectContext;
  v8 = v20[0];
  v9 = *((unsigned int *)v20[0] + 3);
  if ( (v9 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v9 )
      return (unsigned int)-1073740697;
    if ( v7 == 2 )
    {
      if ( *(_BYTE *)(a5 + 4) )
      {
LABEL_13:
        v9 = (unsigned int)v9 >> 30;
        LOBYTE(v9) = v9 & 1;
        goto LABEL_15;
      }
    }
    else
    {
      if ( v7 <= 2 )
      {
LABEL_11:
        LOBYTE(v9) = 1;
        goto LABEL_15;
      }
      if ( v7 <= 4 )
        goto LABEL_13;
      if ( v7 > 6 && v7 != 8 )
      {
        if ( v7 != 9 )
          goto LABEL_11;
        goto LABEL_13;
      }
    }
    v9 = (unsigned int)v9 >> 31;
LABEL_15:
    ObjectContext = (_BYTE)v9 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v9 )
      return (unsigned int)ObjectContext;
  }
  v10 = v7 - 1;
  if ( !v10 )
    return (unsigned int)DrvDbValidateDriverInfFileName(v9, a2);
  v11 = v10 - 1;
  if ( !v11 )
    return (unsigned int)DrvDbOpenDriverFileRegKey(
                           v20[0],
                           (__int64)a2,
                           *(_DWORD *)a5,
                           *(_BYTE *)(a5 + 4),
                           *(_QWORD *)(a5 + 8),
                           a5 + 16);
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          v16 = v15 - 2;
          if ( v16 )
          {
            if ( v16 != 1 )
              return (unsigned int)-1073741811;
            return (unsigned int)DrvDbSetDriverFileMappedProperty(
                                   v20[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD *)(a5 + 24),
                                   *(_QWORD *)(a5 + 32),
                                   *(_DWORD *)(a5 + 40));
          }
          else
          {
            return (unsigned int)DrvDbGetDriverFileMappedProperty(
                                   (__int64)v20[0],
                                   (__int64)a2,
                                   *(HANDLE *)a5,
                                   *(_QWORD *)(a5 + 16),
                                   *(_DWORD **)(a5 + 24),
                                   *(_WORD **)(a5 + 32),
                                   *(_DWORD *)(a5 + 40),
                                   *(_DWORD **)(a5 + 48));
          }
        }
        else
        {
          return (unsigned int)DrvDbGetDriverFileMappedPropertyKeys(
                                 (__int64)v20[0],
                                 (int)a2,
                                 *(HANDLE *)a5,
                                 *(_QWORD *)(a5 + 24),
                                 *(_DWORD *)(a5 + 32),
                                 *(_QWORD *)(a5 + 40));
        }
      }
      else
      {
        return (unsigned int)DrvDbGetObjectList(
                               v20[0],
                               4,
                               *(_QWORD *)a5,
                               *(_QWORD *)(a5 + 8),
                               *(_QWORD *)(a5 + 16),
                               *(_DWORD *)(a5 + 24),
                               *(unsigned int **)(a5 + 32),
                               0);
      }
    }
    else
    {
      return (unsigned int)DrvDbDeleteObjectRegKey(v20[0], 4, a2, 0);
    }
  }
  v18 = *(_DWORD *)a5;
  LODWORD(v20[0]) = 0;
  ObjectContext = DrvDbOpenDriverFileRegKey(v8, (__int64)a2, v18, 1, a5 + 8, (__int64)v20);
  if ( ObjectContext >= 0 )
    *(_BYTE *)(a5 + 16) = LODWORD(v20[0]) == 1;
  return (unsigned int)ObjectContext;
}

/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x140630540
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbOpenDriverInfFileRegKey @ 0x14062FE24 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x14062FE6C (DrvDbGetDriverInfFileMappedProperty.c)
 *     _PnpCtxGetObjectContext @ 0x140630F58 (_PnpCtxGetObjectContext.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14072E16C (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x14097CE24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x14097DB84 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14097E0FC (DrvDbGetObjectList.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097E994 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  int v7; // r10d
  __int64 v8; // r8
  int v9; // r11d
  __int64 v10; // rcx
  int v11; // r10d
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int DriverInfFileMappedProperty; // eax
  int v20; // r8d
  __int64 v21[3]; // [rsp+40h] [rbp-18h] BYREF

  v21[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v21);
  v8 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v8;
  v9 = v21[0];
  v10 = *(unsigned int *)(v21[0] + 12);
  if ( (v10 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v10 )
    {
      LODWORD(v8) = -1073740697;
      return (unsigned int)v8;
    }
    if ( v7 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_28:
        v10 = (unsigned int)v10 >> 30;
        LOBYTE(v10) = v10 & 1;
        goto LABEL_30;
      }
    }
    else
    {
      if ( v7 <= 2 )
      {
LABEL_26:
        LOBYTE(v10) = 1;
        goto LABEL_30;
      }
      if ( v7 <= 4 )
        goto LABEL_28;
      if ( v7 > 6 && v7 != 8 )
      {
        if ( v7 != 9 )
          goto LABEL_26;
        goto LABEL_28;
      }
    }
    v10 = (unsigned int)v10 >> 31;
LABEL_30:
    v8 = (_BYTE)v10 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v10 )
      return (unsigned int)v8;
  }
  v11 = v7 - 1;
  if ( !v11 )
  {
    DriverInfFileMappedProperty = DrvDbValidateDriverInfFileName(v10, a2, v8);
    goto LABEL_11;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    DriverInfFileMappedProperty = DrvDbOpenDriverInfFileRegKey(
                                    v21[0],
                                    a2,
                                    *(_DWORD *)a5,
                                    *((_BYTE *)a5 + 4),
                                    a5[1],
                                    (__int64)(a5 + 2));
LABEL_11:
    LODWORD(v8) = DriverInfFileMappedProperty;
    return (unsigned int)v8;
  }
  v13 = v12 - 1;
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 2;
          if ( v17 )
          {
            if ( v17 != 1 )
            {
              LODWORD(v8) = -1073741811;
              return (unsigned int)v8;
            }
            DriverInfFileMappedProperty = DrvDbSetDriverInfFileMappedProperty(
                                            v21[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            *((_DWORD *)a5 + 6),
                                            a5[4],
                                            *((_DWORD *)a5 + 10));
          }
          else
          {
            DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedProperty(
                                            v21[0],
                                            a2,
                                            (HANDLE)*a5,
                                            a5[2],
                                            (_DWORD *)a5[3],
                                            a5[4],
                                            *((_DWORD *)a5 + 10),
                                            (_DWORD *)a5[6]);
          }
        }
        else
        {
          DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedPropertyKeys(
                                          v21[0],
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverInfFileMappedProperty = DrvDbGetObjectList(v21[0], 3, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverInfFileMappedProperty = DrvDbDeleteObjectRegKey(v21[0], 3LL, a2);
    }
    goto LABEL_11;
  }
  v20 = *(_DWORD *)a5;
  LODWORD(v21[0]) = 0;
  LODWORD(v8) = DrvDbOpenDriverInfFileRegKey(v9, a2, v20, 1, (__int64)(a5 + 1), (__int64)v21);
  if ( (int)v8 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v21[0]) == 1;
  return (unsigned int)v8;
}

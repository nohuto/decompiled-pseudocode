/*
 * XREFs of DrvDbDispatchDriverInfFile @ 0x1406B01F0
 * Callers:
 *     <none>
 * Callees:
 *     _PnpCtxGetObjectContext @ 0x1406AD9E8 (_PnpCtxGetObjectContext.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1406B0364 (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbGetDriverInfFileMappedProperty @ 0x1406B0740 (DrvDbGetDriverInfFileMappedProperty.c)
 *     DrvDbSetDriverInfFileMappedProperty @ 0x14071A04C (DrvDbSetDriverInfFileMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x1409783B4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverInfFileMappedPropertyKeys @ 0x140979114 (DrvDbGetDriverInfFileMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14097968C (DrvDbGetObjectList.c)
 *     DrvDbValidateDriverInfFileName @ 0x140979F24 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverInfFile(__int64 a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r10d
  int v14; // r10d
  int v15; // r10d
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int DriverInfFileMappedProperty; // eax
  int v21; // r8d
  _QWORD v22[3]; // [rsp+40h] [rbp-18h] BYREF

  v22[0] = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
  v11 = *(unsigned int *)(v22[0] + 12LL);
  if ( (v11 & 0x10000000) == 0 )
  {
    if ( !(_DWORD)v11 )
    {
      LODWORD(v9) = -1073740697;
      return (unsigned int)v9;
    }
    if ( v8 == 2 )
    {
      if ( *((_BYTE *)a5 + 4) )
      {
LABEL_28:
        v11 = (unsigned int)v11 >> 30;
        LOBYTE(v11) = v11 & 1;
        goto LABEL_30;
      }
    }
    else
    {
      if ( v8 <= 2 )
      {
LABEL_26:
        LOBYTE(v11) = 1;
        goto LABEL_30;
      }
      if ( v8 <= 4 )
        goto LABEL_28;
      if ( v8 > 6 && v8 != 8 )
      {
        if ( v8 != 9 )
          goto LABEL_26;
        goto LABEL_28;
      }
    }
    v11 = (unsigned int)v11 >> 31;
LABEL_30:
    v9 = (_BYTE)v11 == 0 ? 0xC0000022 : 0;
    if ( !(_BYTE)v11 )
      return (unsigned int)v9;
  }
  v12 = v8 - 1;
  if ( !v12 )
  {
    DriverInfFileMappedProperty = DrvDbValidateDriverInfFileName(v11, a2, v9);
    goto LABEL_11;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    DriverInfFileMappedProperty = DrvDbOpenDriverInfFileRegKey(v22[0], a2, *(_DWORD *)a5, v7, a5[1], (__int64)(a5 + 2));
LABEL_11:
    LODWORD(v9) = DriverInfFileMappedProperty;
    return (unsigned int)v9;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        v17 = v16 - 1;
        if ( v17 )
        {
          v18 = v17 - 2;
          if ( v18 )
          {
            if ( v18 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DriverInfFileMappedProperty = DrvDbSetDriverInfFileMappedProperty(
                                            v22[0],
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
                                            v22[0],
                                            a2,
                                            *a5,
                                            a5[2],
                                            a5[3],
                                            a5[4],
                                            *((_DWORD *)a5 + 10),
                                            a5[6]);
          }
        }
        else
        {
          DriverInfFileMappedProperty = DrvDbGetDriverInfFileMappedPropertyKeys(
                                          v22[0],
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverInfFileMappedProperty = DrvDbGetObjectList(v22[0], 3, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverInfFileMappedProperty = DrvDbDeleteObjectRegKey(v22[0], 3LL, a2, 0LL);
    }
    goto LABEL_11;
  }
  v21 = *(_DWORD *)a5;
  LODWORD(v22[0]) = 0;
  LOBYTE(v7) = 1;
  LODWORD(v9) = DrvDbOpenDriverInfFileRegKey(v10, a2, v21, v7, (__int64)(a5 + 1), (__int64)v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = LODWORD(v22[0]) == 1;
  return (unsigned int)v9;
}

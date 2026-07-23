/*
 * XREFs of DrvDbDispatchDriverPackage @ 0x140630DE0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     _PnpCtxGetObjectContext @ 0x140630F58 (_PnpCtxGetObjectContext.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406339AC (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14072E454 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDeleteObjectRegKey @ 0x14097CE24 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097DD10 (DrvDbGetDriverPackageMappedPropertyKeys.c)
 *     DrvDbGetObjectList @ 0x14097E0FC (DrvDbGetObjectList.c)
 *     DrvDbValidateDriverInfFileName @ 0x14097E994 (DrvDbValidateDriverInfFileName.c)
 */

__int64 __fastcall DrvDbDispatchDriverPackage(__int64 a1, _WORD *a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  int ObjectContext; // eax
  int v7; // r9d
  int v8; // r10d
  __int64 v9; // r8
  int v10; // r11d
  __int64 v11; // rcx
  int v12; // r10d
  int v13; // r10d
  int DriverPackageMappedProperty; // eax
  int v16; // r10d
  int v17; // r10d
  int v18; // r10d
  int v19; // r10d
  int v20; // r10d
  int v21; // r8d
  int v22[6]; // [rsp+40h] [rbp-18h] BYREF

  *(_QWORD *)v22 = 0LL;
  ObjectContext = PnpCtxGetObjectContext(a1, a3, v22);
  v9 = (unsigned int)ObjectContext;
  if ( ObjectContext < 0 )
    return (unsigned int)v9;
  v10 = v22[0];
  v11 = *(unsigned int *)(*(_QWORD *)v22 + 12LL);
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
    DriverPackageMappedProperty = DrvDbValidateDriverInfFileName(v11, a2, v9);
    goto LABEL_6;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    LOBYTE(v7) = *((_BYTE *)a5 + 4);
    DriverPackageMappedProperty = DrvDbOpenDriverPackageRegKey(
                                    v22[0],
                                    (_DWORD)a2,
                                    *(_DWORD *)a5,
                                    v7,
                                    a5[1],
                                    (__int64)(a5 + 2));
LABEL_6:
    LODWORD(v9) = DriverPackageMappedProperty;
    return (unsigned int)v9;
  }
  v16 = v13 - 1;
  if ( v16 )
  {
    v17 = v16 - 1;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 2;
          if ( v20 )
          {
            if ( v20 != 1 )
            {
              LODWORD(v9) = -1073741811;
              return (unsigned int)v9;
            }
            DriverPackageMappedProperty = DrvDbSetDriverPackageMappedProperty(
                                            v22[0],
                                            (int)a2,
                                            *a5,
                                            a5[2],
                                            *((_DWORD *)a5 + 6),
                                            (void *)a5[4],
                                            *((_DWORD *)a5 + 10));
          }
          else
          {
            DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                            *(_QWORD **)v22,
                                            a2,
                                            (void *)*a5,
                                            a5[2],
                                            (_DWORD *)a5[3],
                                            (NTSTRSAFE_PWSTR)a5[4],
                                            *((_DWORD *)a5 + 10),
                                            (__int64 (**)[3])a5[6]);
          }
        }
        else
        {
          DriverPackageMappedProperty = DrvDbGetDriverPackageMappedPropertyKeys(
                                          *(_QWORD *)v22,
                                          a2,
                                          *a5,
                                          a5[3],
                                          *((_DWORD *)a5 + 8),
                                          a5[5]);
        }
      }
      else
      {
        DriverPackageMappedProperty = DrvDbGetObjectList(v22[0], 2, *a5, a5[1], a5[2], *((_DWORD *)a5 + 6), a5[4], 0);
      }
    }
    else
    {
      DriverPackageMappedProperty = DrvDbDeleteObjectRegKey(*(_QWORD *)v22, 2LL, a2);
    }
    goto LABEL_6;
  }
  v21 = *(_DWORD *)a5;
  v22[0] = 0;
  LOBYTE(v7) = 1;
  LODWORD(v9) = DrvDbOpenDriverPackageRegKey(v10, (_DWORD)a2, v21, v7, (__int64)(a5 + 1), (__int64)v22);
  if ( (int)v9 >= 0 )
    *((_BYTE *)a5 + 16) = v22[0] == 1;
  return (unsigned int)v9;
}

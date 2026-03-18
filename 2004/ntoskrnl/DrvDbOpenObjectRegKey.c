/*
 * XREFs of DrvDbOpenObjectRegKey @ 0x1406C3DD8
 * Callers:
 *     DrvDbGetDeviceIdMappedProperty @ 0x1406C3318 (DrvDbGetDeviceIdMappedProperty.c)
 *     DrvDbOpenDriverInfFileRegKey @ 0x1406C36FC (DrvDbOpenDriverInfFileRegKey.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406C3D90 (DrvDbOpenDriverPackageRegKey.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406C4AB8 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDeviceIdRegKey @ 0x1407146E8 (DrvDbOpenDeviceIdRegKey.c)
 *     DrvDbSetDriverDatabaseMappedProperty @ 0x14071C518 (DrvDbSetDriverDatabaseMappedProperty.c)
 *     DrvDbGetDriverDatabaseMappedProperty @ 0x14073DB1C (DrvDbGetDriverDatabaseMappedProperty.c)
 *     DrvDbCreateDatabaseNode @ 0x14078D608 (DrvDbCreateDatabaseNode.c)
 *     DrvDbGetDriverDatabaseMappedPropertyKeys @ 0x140979EB4 (DrvDbGetDriverDatabaseMappedPropertyKeys.c)
 *     DrvDbGetObjectDatabaseNodeName @ 0x14097A970 (DrvDbGetObjectDatabaseNodeName.c)
 *     DrvDbOpenDriverFileRegKey @ 0x14097B068 (DrvDbOpenDriverFileRegKey.c)
 * Callees:
 *     DrvDbReleaseDatabaseNodeBaseKey @ 0x1406C3FC4 (DrvDbReleaseDatabaseNodeBaseKey.c)
 *     DrvDbAcquireDatabaseNodeBaseKey @ 0x1406C4060 (DrvDbAcquireDatabaseNodeBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1406C41E4 (_PnpCtxRegOpenKey.c)
 *     DrvDbGetObjectDatabaseNode @ 0x1406C421C (DrvDbGetObjectDatabaseNode.c)
 *     _PnpCtxRegCreateTree @ 0x1406C46C0 (_PnpCtxRegCreateTree.c)
 */

__int64 DrvDbOpenObjectRegKey(__int64 *a1, __int64 *a2, unsigned int a3, ...)
{
  int ObjectDatabaseNode; // eax
  __int64 v7; // r8
  __int64 *v8; // rdi
  int Tree; // ebx
  __int64 *i; // r14
  int v11; // eax
  __int64 v12; // r8
  int v14; // eax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 *v18; // [rsp+48h] [rbp-8h] BYREF
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  __int64 v22; // [rsp+A0h] [rbp+50h]
  __int64 v23; // [rsp+A8h] [rbp+58h]
  __int64 v24; // [rsp+B0h] [rbp+60h]
  _DWORD *v25; // [rsp+B8h] [rbp+68h]
  __int64 **v26; // [rsp+C0h] [rbp+70h]
  va_list va1; // [rsp+C8h] [rbp+78h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  v22 = va_arg(va1, _QWORD);
  v23 = va_arg(va1, _QWORD);
  v24 = va_arg(va1, _QWORD);
  v25 = va_arg(va1, _DWORD *);
  v26 = va_arg(va1, __int64 **);
  v17 = 0LL;
  v18 = 0LL;
  ObjectDatabaseNode = DrvDbGetObjectDatabaseNode(a1, v20, (__int64 *)va, &v18);
  v8 = v18;
  Tree = ObjectDatabaseNode;
  if ( ObjectDatabaseNode < 0 )
    goto LABEL_12;
  if ( !v18 )
  {
    v8 = a2;
    if ( !a2 )
    {
      for ( i = (__int64 *)a1[2]; i != a1 + 2; i = (__int64 *)*i )
      {
        v8 = i;
        v11 = DrvDbAcquireDatabaseNodeBaseKey(a1, i, a3, &v17);
        Tree = v11;
        if ( v11 == -1073740697 )
        {
          Tree = -1073741772;
        }
        else
        {
          if ( v11 < 0 )
            break;
          Tree = PnpCtxRegOpenKey(*a1, v17, v20, 0, v22, v24);
          DrvDbReleaseDatabaseNodeBaseKey(a1, i, v12, v17);
          v17 = 0LL;
          if ( Tree != -1073741772 )
            goto LABEL_9;
        }
      }
      if ( Tree == -1073741772 )
      {
        if ( !(_BYTE)v23 )
          goto LABEL_12;
        v8 = (__int64 *)a1[4];
        v16 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v17);
        Tree = v16;
        if ( v16 < 0 )
        {
          if ( v16 == -1073740697 )
            Tree = -1073741662;
          goto LABEL_12;
        }
        Tree = PnpCtxRegCreateTree(*a1, v17, v20, 0, v22, 0LL, v24, 0LL);
        if ( Tree < 0 )
          goto LABEL_12;
      }
LABEL_9:
      if ( Tree >= 0 && v26 )
        *v26 = v8;
      goto LABEL_12;
    }
  }
  v14 = DrvDbAcquireDatabaseNodeBaseKey(a1, v8, a3, &v17);
  Tree = v14;
  if ( v14 >= 0 )
  {
    v15 = *a1;
    if ( (_BYTE)v23 )
    {
      Tree = PnpCtxRegCreateTree(v15, v17, v20, 0, v22, 0LL, v24, (__int64)v25);
    }
    else
    {
      Tree = PnpCtxRegOpenKey(v15, v17, v20, 0, v22, v24);
      if ( Tree < 0 )
        goto LABEL_12;
      if ( v25 )
        *v25 = 2;
    }
    goto LABEL_9;
  }
  if ( v14 == -1073740697 )
    Tree = -1073741772;
LABEL_12:
  if ( v17 )
    DrvDbReleaseDatabaseNodeBaseKey(a1, v8, v7, v17);
  return (unsigned int)Tree;
}

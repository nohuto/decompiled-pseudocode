/*
 * XREFs of DrvDbGetDriverPackageMappedPropertyKeys @ 0x14097DD10
 * Callers:
 *     DrvDbDispatchDriverPackage @ 0x140630DE0 (DrvDbDispatchDriverPackage.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406306CC (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbOpenDriverPackageRegKey @ 0x1406339AC (DrvDbOpenDriverPackageRegKey.c)
 *     _RegRtlQueryValue @ 0x140637128 (_RegRtlQueryValue.c)
 *     DrvDbGetDriverPackageSignerScore @ 0x140734F00 (DrvDbGetDriverPackageSignerScore.c)
 *     DrvDbGetCompositeMappedPropertyKeys @ 0x14097D42C (DrvDbGetCompositeMappedPropertyKeys.c)
 */

__int64 __fastcall DrvDbGetDriverPackageMappedPropertyKeys(
        _QWORD *a1,
        _WORD *a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned int *v6; // rsi
  unsigned int v7; // r12d
  int v8; // r14d
  __int64 v10; // rdi
  unsigned int v11; // r15d
  signed int CompositeMappedPropertyKeys; // ebx
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // r14d
  __int64 *v16; // rbx
  HANDLE v17; // r8
  int DriverPackageMappedProperty; // eax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned int v22; // edx
  int v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // r13d
  const WCHAR **v26; // r14
  HANDLE v27; // rcx
  signed int Value; // eax
  const WCHAR *v29; // rcx
  __int64 v30; // rax
  HANDLE v31; // r8
  const WCHAR *v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // edx
  int v36; // eax
  unsigned int v37; // ecx
  unsigned int *v39; // [rsp+28h] [rbp-38h]
  int v40; // [rsp+40h] [rbp-20h] BYREF
  __int64 v41; // [rsp+44h] [rbp-1Ch] BYREF
  HANDLE Handle[2]; // [rsp+50h] [rbp-10h] BYREF

  v6 = (unsigned int *)a6;
  v7 = a5;
  v8 = (int)a2;
  v39 = (unsigned int *)a6;
  Handle[0] = 0LL;
  v41 = 0LL;
  v10 = a4;
  v11 = 0;
  v40 = 0;
  *(_DWORD *)a6 = 0;
  CompositeMappedPropertyKeys = DrvDbGetCompositeMappedPropertyKeys(
                                  (__int64)a1,
                                  (_OWORD **)&off_140C0F130,
                                  0xEu,
                                  a4,
                                  a5,
                                  v39);
  if ( CompositeMappedPropertyKeys >= 0 )
  {
    v14 = *v6;
    if ( (_DWORD)v14 )
    {
      if ( v13 )
        v10 = v13 + 20 * v14;
      v7 = a5 - v14;
    }
    if ( a3
      || (CompositeMappedPropertyKeys = DrvDbOpenDriverPackageRegKey((int)a1, v8, 1, 0, (__int64)Handle, 0LL),
          CompositeMappedPropertyKeys >= 0) )
    {
      v15 = 0;
      v16 = off_140009E40;
      while ( 1 )
      {
        v17 = Handle[0];
        if ( a3 )
          v17 = a3;
        DriverPackageMappedProperty = DrvDbGetDriverPackageMappedProperty(
                                        a1,
                                        a2,
                                        v17,
                                        *v16,
                                        (_DWORD *)&v41 + 1,
                                        0LL,
                                        0,
                                        (__int64 (**)[3])&v41);
        if ( DriverPackageMappedProperty != -1073741275 )
        {
          if ( DriverPackageMappedProperty && DriverPackageMappedProperty != -1073741789 )
            goto LABEL_23;
          if ( v10 && v11 < v7 )
          {
            v19 = *v16;
            v20 = v11++;
            v21 = 5 * v20;
            *(_OWORD *)(v10 + 4 * v21) = *(_OWORD *)*v16;
            *(_DWORD *)(v10 + 4 * v21 + 16) = *(_DWORD *)(v19 + 16);
          }
          v22 = *v6;
          v23 = -1;
          v24 = *v6 + 1;
          if ( v24 >= *v6 )
            v23 = *v6 + 1;
          *v6 = v23;
          if ( v24 < v22 )
            break;
        }
        ++v15;
        ++v16;
        if ( v15 >= 2 )
          goto LABEL_23;
      }
      *v6 = 0;
LABEL_23:
      v25 = 0;
      v26 = (const WCHAR **)&off_1400040B0;
      do
      {
        LODWORD(a6) = 0;
        v27 = Handle[0];
        if ( a3 )
          v27 = a3;
        Value = RegRtlQueryValue(v27, v26[2], 0LL, 0LL, (unsigned int *)&a6);
        CompositeMappedPropertyKeys = Value;
        if ( Value == -1073741772 )
        {
          v29 = *v26;
          if ( *((_DWORD *)*v26 + 4) != 7 )
            goto LABEL_35;
          v30 = *(_QWORD *)v29 - *(_QWORD *)&DEVPKEY_DriverPackage_SignerName;
          if ( *(_QWORD *)v29 == *(_QWORD *)&DEVPKEY_DriverPackage_SignerName )
            v30 = *((_QWORD *)v29 + 1) + 0x4524B8338B5D1E6CLL;
          if ( v30 )
            goto LABEL_35;
          v31 = Handle[0];
          if ( a3 )
            v31 = a3;
          if ( (int)DrvDbGetDriverPackageSignerScore(a1, a2, v31, (wchar_t *)&v40) < 0 || v40 != 218103811 )
          {
LABEL_35:
            CompositeMappedPropertyKeys = 0;
            goto LABEL_44;
          }
        }
        else if ( Value && Value != -1073741789 )
        {
          break;
        }
        if ( v10 && v11 < v7 )
        {
          v32 = *v26;
          v33 = v11++;
          v34 = 5 * v33;
          *(_OWORD *)(v10 + 4 * v34) = *(_OWORD *)*v26;
          *(_DWORD *)(v10 + 4 * v34 + 16) = *((_DWORD *)v32 + 4);
        }
        v35 = *v6;
        v36 = -1;
        v37 = *v6 + 1;
        if ( v37 >= *v6 )
          v36 = *v6 + 1;
        CompositeMappedPropertyKeys = v37 < v35 ? 0xC0000095 : 0;
        *v6 = v36;
        if ( v37 < v35 )
        {
          *v6 = 0;
          break;
        }
LABEL_44:
        ++v25;
        v26 += 5;
      }
      while ( v25 < 0x20 );
    }
    if ( Handle[0] )
      ZwClose(Handle[0]);
  }
  return (unsigned int)CompositeMappedPropertyKeys;
}

/*
 * XREFs of ACPIProcessPhysicalDeviceLocation @ 0x1C0094310
 * Callers:
 *     ACPIBusAndFilterIrpQueryContainerId @ 0x1C0006718 (ACPIBusAndFilterIrpQueryContainerId.c)
 *     ACPIQueryPhysicalDeviceLocation @ 0x1C00939F8 (ACPIQueryPhysicalDeviceLocation.c)
 *     ACPIBusAndFilterIrpQueryCapabilities @ 0x1C0094550 (ACPIBusAndFilterIrpQueryCapabilities.c)
 * Callees:
 *     AMLIIsNamedChildPresent @ 0x1C000A410 (AMLIIsNamedChildPresent.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     AMLIEvalPkgDataElement @ 0x1C0019244 (AMLIEvalPkgDataElement.c)
 *     AMLIFreeDataBuffs @ 0x1C001C758 (AMLIFreeDataBuffs.c)
 *     memset @ 0x1C0030080 (memset.c)
 *     ACPIProcessPhysicalDeviceLocationPackage @ 0x1C00A035C (ACPIProcessPhysicalDeviceLocationPackage.c)
 *     ACPIGetPhysicalDeviceLocationBuffer @ 0x1C00A0474 (ACPIGetPhysicalDeviceLocationBuffer.c)
 *     ACPIFreePhysicalDeviceLocationDescriptor @ 0x1C00A1774 (ACPIFreePhysicalDeviceLocationDescriptor.c)
 *     ACPIInsertPhysicalDeviceLocationDescriptor @ 0x1C00A17AC (ACPIInsertPhysicalDeviceLocationDescriptor.c)
 *     ACPICreatePhysicalDeviceLocationDescriptor @ 0x1C00A1C20 (ACPICreatePhysicalDeviceLocationDescriptor.c)
 */

__int64 __fastcall ACPIProcessPhysicalDeviceLocation(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v3; // rbx
  __int64 v7; // rdi
  int v8; // ebx
  unsigned int *v10; // r12
  int v11; // eax
  int v12; // eax
  int v13; // eax
  unsigned int v14; // r15d
  int v15; // eax
  _QWORD *i; // rax
  _OWORD v17[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v18; // [rsp+78h] [rbp+7h]
  _OWORD v19[2]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int *v20; // [rsp+A0h] [rbp+2Fh]
  __int64 v21; // [rsp+D8h] [rbp+67h] BYREF

  v3 = *(__int64 **)(a1 + 760);
  v21 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  v7 = 0LL;
  memset(v19, 0, sizeof(v19));
  memset(v17, 0, sizeof(v17));
  if ( a2 )
  {
    *(_OWORD *)a2 = 0LL;
    *(_DWORD *)(a2 + 16) = 0;
  }
  if ( a3 )
  {
    memset(a3, 0, 0x48uLL);
    a3[1] = a3;
    a3[4] = a3 + 3;
    a3[3] = a3 + 3;
    a3[6] = a3 + 5;
    a3[5] = a3 + 5;
    *a3 = a3;
  }
  if ( !v3 || !AMLIIsNamedChildPresent(v3, 1145851999) )
  {
    v8 = -1073741823;
    goto LABEL_8;
  }
  v8 = ACPIGet(a1, 1145851999, 268566528, 0LL, 0, 0LL, 0LL, (__int64)v19, 0LL);
  if ( v8 < 0 )
    goto LABEL_10;
  if ( WORD1(v19[0]) != 3 )
  {
    if ( WORD1(v19[0]) == 4 )
    {
      v10 = v20;
      if ( *v20 )
      {
        v8 = AMLIEvalPkgDataElement((__int64)v19, 0, (__int64)v17);
        if ( v8 < 0 )
          goto LABEL_10;
        if ( WORD1(v17[0]) == 3 )
        {
          if ( a2 )
          {
            v8 = ACPIGetPhysicalDeviceLocationBuffer(v17, a2);
            if ( v8 < 0 )
              goto LABEL_10;
          }
          if ( !a3 )
            goto LABEL_10;
          v11 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v21);
          v7 = v21;
          v8 = v11;
          if ( v11 < 0 )
            goto LABEL_8;
          if ( !a2 )
          {
            v8 = ACPIGetPhysicalDeviceLocationBuffer(v17, v21 + 16);
            if ( v8 < 0 )
              goto LABEL_8;
          }
          v12 = ACPIProcessPhysicalDeviceLocationPackage(v19, 0LL, v7);
LABEL_28:
          v8 = v12;
          if ( v12 < 0 )
          {
LABEL_8:
            if ( v7 )
              ACPIFreePhysicalDeviceLocationDescriptor((PVOID)v7);
            goto LABEL_10;
          }
          goto LABEL_29;
        }
        if ( WORD1(v17[0]) == 4 )
        {
          if ( a3 )
          {
            v14 = 0;
            while ( 1 )
            {
              v15 = ACPICreatePhysicalDeviceLocationDescriptor(0LL, &v21);
              v7 = v21;
              v8 = v15;
              if ( v15 < 0 )
                goto LABEL_8;
              v8 = ACPIProcessPhysicalDeviceLocationPackage(v17, v21 + 16, v21);
              if ( v8 < 0 )
                goto LABEL_8;
              if ( !v14 && a2 )
              {
                *(_OWORD *)a2 = *(_OWORD *)(v7 + 16);
                *(_DWORD *)(a2 + 16) = *(_DWORD *)(v7 + 32);
              }
              ACPIInsertPhysicalDeviceLocationDescriptor(a3, v7);
              ++v14;
              v7 = 0LL;
              v21 = 0LL;
              if ( v14 < *v10 )
              {
                AMLIFreeDataBuffs((__int64)v17);
                v8 = AMLIEvalPkgDataElement((__int64)v19, v14, (__int64)v17);
                if ( v8 < 0 )
                  goto LABEL_8;
                if ( WORD1(v17[0]) == 4 )
                  continue;
              }
              goto LABEL_30;
            }
          }
          if ( a2 )
            v8 = ACPIProcessPhysicalDeviceLocationPackage(v17, a2, 0LL);
          goto LABEL_10;
        }
      }
    }
    v8 = -1073741823;
    goto LABEL_10;
  }
  if ( a2 )
  {
    v8 = ACPIGetPhysicalDeviceLocationBuffer(v19, a2);
    if ( v8 < 0 )
      goto LABEL_10;
  }
  if ( !a3 )
    goto LABEL_10;
  v13 = ACPICreatePhysicalDeviceLocationDescriptor(a2, &v21);
  v7 = v21;
  v8 = v13;
  if ( v13 < 0 )
    goto LABEL_8;
  if ( !a2 )
  {
    v12 = ACPIGetPhysicalDeviceLocationBuffer(v19, v21 + 16);
    goto LABEL_28;
  }
LABEL_29:
  ACPIInsertPhysicalDeviceLocationDescriptor(a3, v7);
  v7 = 0LL;
LABEL_30:
  if ( a3[2] || (_QWORD *)a3[5] != a3 + 5 )
    goto LABEL_8;
  for ( i = (_QWORD *)a3[3]; i != a3 + 3; i = (_QWORD *)*i )
  {
    if ( a3[2] )
    {
      a3[2] = 0LL;
      break;
    }
    a3[2] = i - 9;
  }
LABEL_10:
  if ( v18 )
    AMLIFreeDataBuffs((__int64)v17);
  if ( v20 )
    AMLIFreeDataBuffs((__int64)v19);
  return (unsigned int)v8;
}

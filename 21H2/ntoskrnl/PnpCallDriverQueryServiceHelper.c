/*
 * XREFs of PnpCallDriverQueryServiceHelper @ 0x1407424CC
 * Callers:
 *     PipCallDriverAddDevice @ 0x140741B48 (PipCallDriverAddDevice.c)
 * Callees:
 *     RtlULongSub @ 0x14020DD44 (RtlULongSub.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _CmGetDeviceRegProp @ 0x14063627C (_CmGetDeviceRegProp.c)
 *     _CmGetInstallerClassRegProp @ 0x14073F958 (_CmGetInstallerClassRegProp.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PnpCallDriverQueryServiceHelper(
        PVOID *a1,
        ULONG *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        int a8,
        char a9,
        __int64 a10)
{
  char v10; // r15
  __int64 v11; // rdi
  __int64 v12; // rsi
  int v15; // ecx
  unsigned int v17; // r13d
  PVOID v18; // r8
  int ObjectProperty; // eax
  int v20; // ecx
  int v21; // r10d
  ULONG v23; // r9d
  _WORD *v24; // rbx
  char v25; // si
  int v26; // r14d
  __int64 v27; // rdi
  unsigned int v28; // edi
  int v29; // edx
  SIZE_T v30; // rdx
  PVOID PoolWithTag; // rax
  int InstallerClassRegProp; // eax
  int v33; // [rsp+60h] [rbp-10h] BYREF
  _DWORD v34[3]; // [rsp+64h] [rbp-Ch] BYREF
  ULONG ulMinuend; // [rsp+C8h] [rbp+58h] BYREF

  v10 = a7;
  v11 = a6;
  v12 = a5;
  v33 = 0;
  v15 = *a2;
  ulMinuend = *a2;
  v17 = 0;
  v18 = *a1;
  v34[0] = 0;
  if ( a4 )
  {
    v17 = (a7 != 0) + 1;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       a5,
                       v17,
                       a6,
                       0LL,
                       a4,
                       (__int64)v34,
                       (__int64)v18,
                       v15,
                       (__int64)&ulMinuend,
                       0);
  }
  else if ( a7 )
  {
    ObjectProperty = CmGetInstallerClassRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       a5,
                       a6,
                       a3,
                       (__int64)&v33,
                       (__int64)v18,
                       (__int64)&ulMinuend);
  }
  else
  {
    ObjectProperty = CmGetDeviceRegProp(
                       *(__int64 *)&PiPnpRtlCtx,
                       a5,
                       a6,
                       a3,
                       (__int64)&v33,
                       (__int64)v18,
                       (__int64)&ulMinuend,
                       0);
  }
  v20 = ObjectProperty;
  if ( ObjectProperty == -1073741789 )
  {
    ExFreePoolWithTag(*a1, 0);
    v30 = ulMinuend;
    *a2 = ulMinuend;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v30, 0x6E657050u);
    *a1 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    if ( a4 )
    {
      v20 = PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              v12,
              v17,
              v11,
              0LL,
              a4,
              (__int64)v34,
              (__int64)PoolWithTag,
              ulMinuend,
              (__int64)&ulMinuend,
              0);
    }
    else
    {
      if ( v10 )
        InstallerClassRegProp = CmGetInstallerClassRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  v12,
                                  v11,
                                  a3,
                                  (__int64)&v33,
                                  (__int64)PoolWithTag,
                                  (__int64)&ulMinuend);
      else
        InstallerClassRegProp = CmGetDeviceRegProp(
                                  *(__int64 *)&PiPnpRtlCtx,
                                  v12,
                                  v11,
                                  a3,
                                  (__int64)&v33,
                                  (__int64)PoolWithTag,
                                  (__int64)&ulMinuend,
                                  0);
      v20 = InstallerClassRegProp;
    }
  }
  if ( v20 >= 0 )
  {
    if ( a4 )
    {
      if ( v34[0] == 8210 )
      {
        v33 = 7;
LABEL_14:
        if ( *a2 < 2 )
          return (unsigned int)-1073741823;
        v23 = ulMinuend;
        if ( ulMinuend < 2 )
        {
          return (unsigned int)-1073741823;
        }
        else
        {
          v24 = *a1;
          if ( *(_WORD *)*a1 )
          {
            v25 = a9;
            v26 = a8;
            while ( 1 )
            {
              v27 = -1LL;
              do
                ++v27;
              while ( v24[v27] );
              v28 = v27 + 1;
              if ( RtlULongSub(v23, 2 * v28, &ulMinuend) < 0 )
                break;
              v20 = PipCallDriverAddDeviceQueryRoutine(1, (_DWORD)v24, v29, a10, v26, v25);
              if ( v20 >= 0 )
              {
                v23 = ulMinuend;
                if ( ulMinuend >= 2 )
                {
                  v24 += v28;
                  if ( *v24 )
                    continue;
                }
              }
              return (unsigned int)v20;
            }
            return 0;
          }
        }
        return (unsigned int)v20;
      }
      if ( v34[0] != 18 )
      {
        v21 = 0;
        v33 = 0;
        return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v21, (unsigned int)*a1, ulMinuend, a10, a8, a9);
      }
      v21 = 1;
      v33 = 1;
    }
    else
    {
      v21 = v33;
    }
    if ( v21 != 7 )
      return (unsigned int)PipCallDriverAddDeviceQueryRoutine(v21, (unsigned int)*a1, ulMinuend, a10, a8, a9);
    goto LABEL_14;
  }
  return (unsigned int)v20;
}

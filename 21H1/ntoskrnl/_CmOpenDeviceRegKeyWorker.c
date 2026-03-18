/*
 * XREFs of _CmOpenDeviceRegKeyWorker @ 0x140618394
 * Callers:
 *     _CmOpenDeviceRegKey @ 0x140617944 (_CmOpenDeviceRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14025BB40 (RtlInitUnicodeStringEx.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14061750C (_PnpCtxGetCachedContextBaseKey.c)
 *     _CmOpenDeviceRegKey @ 0x140617944 (_CmOpenDeviceRegKey.c)
 *     _SysCtxRegOpenKey @ 0x140617E18 (_SysCtxRegOpenKey.c)
 *     _CmGetDeviceRegKeyPath @ 0x140617F74 (_CmGetDeviceRegKeyPath.c)
 *     RtlPrefixUnicodeString @ 0x14061B6D0 (RtlPrefixUnicodeString.c)
 *     _PnpCtxRegCreateTree @ 0x1406AE344 (_PnpCtxRegCreateTree.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1407197E8 (_SysCtxRegOpenCurrentUserKey.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14075A398 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall CmOpenDeviceRegKeyWorker(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        char a6,
        _QWORD *a7,
        _DWORD *a8)
{
  __int64 v11; // rbx
  wchar_t *PoolWithTag; // r14
  int v13; // r12d
  PVOID v14; // rsi
  unsigned __int64 v15; // rsi
  int DeviceRegKeyPath; // ebx
  unsigned __int16 Length; // bx
  __int64 v18; // rsi
  HANDLE v19; // rdx
  __int64 v20; // rcx
  unsigned int v21; // r13d
  int Tree; // eax
  int v24; // r12d
  int v25; // r15d
  __int64 v26; // rcx
  HANDLE v27; // rax
  __int64 v28; // rcx
  size_t v29; // [rsp+30h] [rbp-50h]
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  HANDLE v31; // [rsp+48h] [rbp-38h] BYREF
  HANDLE v32; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v33; // [rsp+58h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+60h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-18h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp+50h] BYREF

  v37 = 0;
  v33 = 0LL;
  v11 = a2;
  v32 = 0LL;
  PoolWithTag = 0LL;
  v31 = 0LL;
  v13 = 4;
  Handle = 0LL;
  v14 = 0LL;
  P = 0LL;
  DestinationString = 0LL;
  if ( a3 && (a3 & 0xFFFFFCE8) == 0 )
  {
    LODWORD(v15) = (a3 & 0x200) != 0 ? 360 : 240;
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
    if ( PoolWithTag )
    {
      while ( 1 )
      {
        LODWORD(v29) = (unsigned int)v15 >> 1;
        DeviceRegKeyPath = CmGetDeviceRegKeyPath(a1, v11, a3, a4, a6, PoolWithTag, v29, &v37);
        if ( DeviceRegKeyPath != -1073741789 )
          break;
        ExFreePoolWithTag(PoolWithTag, 0);
        PoolWithTag = 0LL;
        v15 = 2LL * v37;
        if ( v15 > 0xFFFFFFFF )
        {
          DeviceRegKeyPath = -1073741675;
          goto LABEL_19;
        }
        PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, (unsigned int)v15, 0x52504E50u);
        if ( !PoolWithTag )
          goto LABEL_61;
        v11 = a2;
      }
    }
    else
    {
LABEL_61:
      DeviceRegKeyPath = -1073741801;
    }
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    if ( (a3 & 0x100) != 0 )
    {
      v18 = (__int64)PoolWithTag;
      if ( a1 )
        v28 = *(_QWORD *)(a1 + 224);
      else
        v28 = 0LL;
      DeviceRegKeyPath = SysCtxRegOpenCurrentUserKey(v28, 0LL, 0x2000000LL, &v32);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v32;
LABEL_15:
      v33 = v19;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 224);
      else
        v20 = 0LL;
      v21 = a5;
      Tree = SysCtxRegOpenKey(v20, (__int64)v19, v18, 0, a5, (__int64)a7);
      if ( !Tree )
      {
        *a8 = 2;
        goto LABEL_19;
      }
      if ( Tree == -1073741444 )
        goto LABEL_69;
      if ( Tree != -1073741772 )
      {
LABEL_55:
        DeviceRegKeyPath = Tree;
        goto LABEL_19;
      }
      v24 = (unsigned __int8)a3;
      if ( !a6 )
      {
        if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
          DeviceRegKeyPath = -1073741772;
        else
          DeviceRegKeyPath = -1073741810;
        goto LABEL_19;
      }
      if ( (unsigned __int8)a3 != 16 || (a3 & 0xF00) != 0 )
      {
        DeviceRegKeyPath = CmOpenDeviceRegKey(a1, a2, 16, 0, 1, 0, (__int64)&Handle, 0LL);
        if ( DeviceRegKeyPath < 0 )
          goto LABEL_19;
      }
      DeviceRegKeyPath = CmGetDeviceRegKeySecurityDescriptor(a1, a3, &P);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v25 = v21;
      if ( P )
        v25 = 917510;
      Tree = PnpCtxRegCreateTree(a1, (_DWORD)v33, v18, v24 == 19, v25, (__int64)P, (__int64)&v31, (__int64)a8);
      if ( Tree == -1073741444 )
      {
LABEL_69:
        DeviceRegKeyPath = -1073741595;
        goto LABEL_19;
      }
      if ( Tree < 0 )
        goto LABEL_55;
      if ( v25 == v21 )
      {
        v27 = v31;
        v31 = 0LL;
        *a7 = v27;
        goto LABEL_19;
      }
      if ( a1 )
        v26 = *(_QWORD *)(a1 + 224);
      else
        v26 = 0LL;
      Tree = SysCtxRegOpenKey(v26, (__int64)v31, 0LL, 0, v21, (__int64)a7);
      if ( Tree == -1073741444 )
      {
        DeviceRegKeyPath = -1073741772;
        goto LABEL_19;
      }
      if ( Tree < 0 )
        goto LABEL_55;
LABEL_19:
      v14 = P;
      goto LABEL_20;
    }
    DeviceRegKeyPath = RtlInitUnicodeStringEx(&DestinationString, PoolWithTag);
    if ( DeviceRegKeyPath < 0 )
      goto LABEL_19;
    Length = DestinationString.Length;
    if ( DestinationString.Length < (unsigned int)v15
      && DestinationString.Length > 0x32u
      && RtlPrefixUnicodeString(
           &`_CmDeleteDeviceContainerRegKeyWorker'::`2'::ObjectPathRootPrefix,
           &DestinationString,
           1u) )
    {
      v18 = (__int64)(PoolWithTag + 25);
      DestinationString.MaximumLength -= 50;
      DestinationString.Buffer = PoolWithTag + 25;
      DestinationString.Length = Length - 50;
      if ( RtlPrefixUnicodeString(&`_CmDeleteDeviceRegKeyWorker'::`2'::EnumKeyPrefix, &DestinationString, 1u) )
      {
        v13 = 5;
        v18 = (__int64)(PoolWithTag + 30);
      }
      else if ( RtlPrefixUnicodeString(
                  &`_CmDeleteDeviceInterfaceRegKeyWorker'::`2'::HardwareProfilesKeyPrefix,
                  &DestinationString,
                  1u) )
      {
        v13 = 14;
        v18 = (__int64)(PoolWithTag + 43);
      }
      DeviceRegKeyPath = PnpCtxGetCachedContextBaseKey(a1, v13, (__int64)&v33);
      if ( DeviceRegKeyPath < 0 )
        goto LABEL_19;
      v19 = v33;
      goto LABEL_15;
    }
    v14 = P;
  }
  DeviceRegKeyPath = -1073741811;
LABEL_20:
  if ( Handle )
    ZwClose(Handle);
  if ( v32 )
    ZwClose(v32);
  if ( v31 )
    ZwClose(v31);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)DeviceRegKeyPath;
}

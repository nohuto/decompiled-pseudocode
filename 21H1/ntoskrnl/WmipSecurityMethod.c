/*
 * XREFs of WmipSecurityMethod @ 0x1406CCC50
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140206450 (RtlInitUnicodeString.c)
 *     RtlStringCbPrintfW @ 0x14025B494 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ObSetSecurityDescriptorInfo @ 0x140613930 (ObSetSecurityDescriptorInfo.c)
 *     ObQuerySecurityDescriptorInfo @ 0x140617368 (ObQuerySecurityDescriptorInfo.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1406CCE20 (ObAssignObjectSecurityDescriptor.c)
 *     ObDeassignSecurity @ 0x1406CCE9C (ObDeassignSecurity.c)
 *     WmipSaveGuidSecurityDescriptor @ 0x1407BD264 (WmipSaveGuidSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WmipSecurityMethod(
        unsigned __int16 *Object,
        int a2,
        DWORD *a3,
        void *a4,
        ULONG *a5,
        __int64 a6,
        POOL_TYPE PoolType,
        PGENERIC_MAPPING a8)
{
  int v9; // edx
  __int64 v10; // rdx
  int v12; // ebx
  SIZE_T v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // r14
  POOL_TYPE v16[2]; // [rsp+20h] [rbp-F8h]
  PGENERIC_MAPPING v17; // [rsp+28h] [rbp-F0h]
  ULONG i; // [rsp+70h] [rbp-A8h] BYREF
  DWORD v19; // [rsp+74h] [rbp-A4h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-A0h] BYREF
  wchar_t pszDest[40]; // [rsp+90h] [rbp-88h] BYREF

  if ( a2 )
  {
    v9 = a2 - 1;
    if ( v9 )
    {
      v10 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v10 )
      {
        if ( (_DWORD)v10 != 1 )
          KeBugCheckEx(0x29u, 1uLL, 0xFFFFFFFFC000000DuLL, 0LL, 0LL);
        return ObAssignObjectSecurityDescriptor(Object, a4, a8, a6);
      }
      else
      {
        return ObDeassignSecurity(a6, v10, a8);
      }
    }
    else
    {
      return ObQuerySecurityDescriptorInfo((__int64)Object, a3, a4, a5);
    }
  }
  else
  {
    DestinationString = 0LL;
    v12 = ObSetSecurityDescriptorInfo(Object, a3, a4, a6, PoolType, a8);
    if ( v12 >= 0 )
    {
      v13 = 1024LL;
      for ( i = 1024; ; v13 = i )
      {
        PoolWithTag = ExAllocatePoolWithTag(PoolType, v13, 0x70696D57u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
          break;
        v19 = -1;
        v12 = ObQuerySecurityDescriptorInfo((__int64)Object, &v19, PoolWithTag, &i);
        if ( v12 != -1073741789 )
          goto LABEL_12;
        ExFreePoolWithTag(v15, 0);
      }
      v12 = -1073741670;
LABEL_12:
      if ( v12 >= 0 )
      {
        LODWORD(v17) = Object[15];
        v16[0] = Object[14];
        RtlStringCbPrintfW(
          pszDest,
          0x4CuLL,
          L"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",
          *((unsigned int *)Object + 6),
          *(_QWORD *)v16,
          v17,
          *((unsigned __int8 *)Object + 32),
          *((unsigned __int8 *)Object + 33),
          *((unsigned __int8 *)Object + 34),
          *((unsigned __int8 *)Object + 35),
          *((unsigned __int8 *)Object + 36),
          *((unsigned __int8 *)Object + 37),
          *((unsigned __int8 *)Object + 38),
          *((unsigned __int8 *)Object + 39));
        RtlInitUnicodeString(&DestinationString, pszDest);
        v12 = WmipSaveGuidSecurityDescriptor(&DestinationString, v15);
        ExFreePoolWithTag(v15, 0);
      }
    }
    return (unsigned int)v12;
  }
}

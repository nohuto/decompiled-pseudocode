/*
 * XREFs of RtlAddResourceAttributeAce @ 0x140914DC0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14020A530 (ExAllocatePoolWithQuotaTag.c)
 *     RtlUShortAdd @ 0x1403118B4 (RtlUShortAdd.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     RtlFirstFreeAce @ 0x140605550 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x140606290 (RtlValidAcl.c)
 *     RtlValidSid @ 0x1406063F0 (RtlValidSid.c)
 *     RtlCopySid @ 0x140656BB0 (RtlCopySid.c)
 *     RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x140915280 (RtlpConvertAbsoluteToRelativeSecurityAttribute.c)
 *     RtlpValidAttributeInfo @ 0x140915768 (RtlpValidAttributeInfo.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlAddResourceAttributeAce(
        unsigned __int8 *a1,
        unsigned int a2,
        int a3,
        int a4,
        char *Sid,
        __int64 a6,
        _DWORD *a7)
{
  _BYTE *v9; // rdi
  int v11; // ebx
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // rdx
  _BYTE *PoolWithQuotaTag; // rax
  size_t v16; // r13
  USHORT v17; // cx
  unsigned int v18; // r9d
  int v19; // ecx
  unsigned int v20; // r8d
  unsigned __int8 *v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r15
  int v24; // edx
  char v25; // al
  USHORT pusResult[2]; // [rsp+28h] [rbp-E0h] BYREF
  unsigned int NumberOfBytes; // [rsp+2Ch] [rbp-DCh] BYREF
  int NumberOfBytes_4; // [rsp+30h] [rbp-D8h]
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  int v31; // [rsp+40h] [rbp-C8h]
  unsigned __int16 v32; // [rsp+44h] [rbp-C4h]
  _BYTE Src[256]; // [rsp+48h] [rbp-C0h] BYREF

  NumberOfBytes_4 = a3;
  v30 = 0LL;
  v31 = 0;
  v9 = 0LL;
  v32 = 256;
  memset(Src, 0, sizeof(Src));
  NumberOfBytes = 256;
  if ( !a7 )
    return (unsigned int)-1073741811;
  *a7 = 0;
  if ( !a1 )
    return (unsigned int)-1073741705;
  if ( !RtlValidSid(Sid) )
    return (unsigned int)-1073741704;
  v13 = *(_DWORD *)(Sid + 2) - v31;
  if ( !v13 )
    v13 = *((unsigned __int16 *)Sid + 3) - v32;
  if ( v13 )
    return (unsigned int)-1073741811;
  if ( Sid[1] == 1 && !*((_DWORD *)Sid + 2) )
  {
    if ( *a1 > 4u || a2 > 4 )
      return (unsigned int)-1073741735;
    v14 = *a1;
    if ( *a1 <= (unsigned __int8)a2 )
      v14 = (unsigned __int8)a2;
    v31 = v14;
    if ( (NumberOfBytes_4 & 0xFFFFFFE0) == 0
      && !a4
      && (unsigned __int8)RtlpValidAttributeInfo(a6, v14, v12, 0LL)
      && *(_DWORD *)(a6 + 4) == 1 )
    {
      v9 = Src;
      v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), Src, &NumberOfBytes);
      if ( v11 == -1073741789 )
      {
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, NumberOfBytes, 0x62507452u);
        v9 = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
          return (unsigned int)-1073741801;
        v11 = RtlpConvertAbsoluteToRelativeSecurityAttribute(*(_QWORD *)(a6 + 8), PoolWithQuotaTag, &NumberOfBytes);
      }
      if ( v11 >= 0 )
      {
        if ( RtlValidAcl((__int64)a1) && RtlFirstFreeAce((__int64)a1, &v30) )
        {
          v16 = NumberOfBytes;
          v17 = 4 * ((unsigned __int8)Sid[1] + 4);
          pusResult[0] = v17;
          if ( NumberOfBytes > 0xFFFF || RtlUShortAdd(v17, NumberOfBytes, pusResult) < 0 )
          {
            v11 = -1073741675;
          }
          else
          {
            v19 = v18 + 8;
            v20 = v18;
            *a7 = v18 + 8;
            v21 = a1 + 8;
            if ( (unsigned __int16)v18 < *((_WORD *)a1 + 2) )
            {
              do
              {
                ++v20;
                v19 = *a7 + *((unsigned __int16 *)v21 + 1);
                *a7 = v19;
                v21 += *((unsigned __int16 *)v21 + 1);
              }
              while ( v20 < *((unsigned __int16 *)a1 + 2) );
            }
            v22 = pusResult[0];
            v23 = v30;
            v24 = v19 + pusResult[0];
            *a7 = v24;
            if ( v23 && v23 + v22 <= (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
            {
              v25 = NumberOfBytes_4;
              *(_WORD *)(v23 + 2) = v22;
              *(_BYTE *)(v23 + 1) = v25;
              *(_BYTE *)v23 = 18;
              *(_DWORD *)(v23 + 4) = v18;
              RtlCopySid(4 * (unsigned __int8)Sid[1] + 8, (PSID)(v23 + 8), Sid);
              memmove((void *)(v23 + 4 * ((unsigned __int8)Sid[1] + 4LL)), v9, v16);
              ++*((_WORD *)a1 + 2);
              *a1 = v31;
            }
            else
            {
              v11 = -1073741671;
              *a7 = (v24 + 3) & 0xFFFFFFFC;
            }
          }
        }
        else
        {
          v11 = -1073741705;
        }
      }
      goto LABEL_39;
    }
    return (unsigned int)-1073741811;
  }
  v11 = -1073741811;
LABEL_39:
  if ( v9 && v9 != Src )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v11;
}

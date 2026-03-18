/*
 * XREFs of ?CreateSharedObject@@YAJPEBG_NU_GENERIC_MAPPING@@P6AJW4_OB_OPEN_REASON@@DPEAU_EPROCESS@@PEAXPEAKK@ZP6AX45_K8@ZP6AX5@ZP6AE455D@ZPEAPEAU_OBJECT_TYPE@@KW4_POOL_TYPE@@@Z @ 0x1C017EB34
 * Callers:
 *     CreateDxgkSharedObjectTypes @ 0x1C017E798 (CreateDxgkSharedObjectTypes.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 */

__int64 __fastcall CreateSharedObject(
        PCWSTR SourceString,
        char a2,
        __m128i *a3,
        int (__high *a4)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int),
        void (*a5)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64),
        void (*a6)(void *),
        unsigned __int8 (*a7)(struct _EPROCESS *, void *, void *, char),
        struct _OBJECT_TYPE **a8,
        unsigned int a9,
        enum _POOL_TYPE a10)
{
  __m128i v10; // xmm0
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-89h] BYREF
  _WORD v13[2]; // [rsp+30h] [rbp-79h] BYREF
  unsigned int v14; // [rsp+34h] [rbp-75h]
  int v15; // [rsp+38h] [rbp-71h]
  __m128i v16; // [rsp+3Ch] [rbp-6Dh]
  __int32 v17; // [rsp+4Ch] [rbp-5Dh]
  int v18; // [rsp+50h] [rbp-59h]
  enum _POOL_TYPE v19; // [rsp+54h] [rbp-55h]
  __int64 v20; // [rsp+58h] [rbp-51h]
  __int64 v21; // [rsp+60h] [rbp-49h]
  int (__high *v22)(enum _OB_OPEN_REASON, char, struct _EPROCESS *, void *, unsigned int *, unsigned int); // [rsp+68h] [rbp-41h]
  void (*v23)(struct _EPROCESS *, void *, unsigned __int64, unsigned __int64); // [rsp+70h] [rbp-39h]
  void (*v24)(void *); // [rsp+78h] [rbp-31h]
  __int64 v25; // [rsp+80h] [rbp-29h]
  __int64 v26; // [rsp+88h] [rbp-21h]
  __int64 v27; // [rsp+90h] [rbp-19h]
  unsigned __int8 (*v28)(struct _EPROCESS *, void *, void *, char); // [rsp+98h] [rbp-11h]
  __int64 v29; // [rsp+A0h] [rbp-9h]

  v10 = *a3;
  v18 = 0;
  v29 = 0LL;
  v13[0] = 120;
  v15 = 256;
  v22 = a4;
  v23 = a5;
  v16 = v10;
  v24 = a6;
  v14 = a9;
  v28 = a7;
  v17 = _mm_srli_si128(v10, 8).m128i_i32[1];
  v19 = a10;
  v13[1] = (unsigned __int8)((a4 != 0LL ? 0x10 : 0) | (2 * a2) & 0x8F) | 0xD;
  v20 = 0LL;
  v21 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  return ObCreateObjectType(&DestinationString, v13, 0LL, a8);
}

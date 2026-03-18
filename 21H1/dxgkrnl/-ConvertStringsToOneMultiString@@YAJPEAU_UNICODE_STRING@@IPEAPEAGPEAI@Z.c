/*
 * XREFs of ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C0187168
 * Callers:
 *     ?CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C0178BC4 (-CheckRuntimeBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 *     ?CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z @ 0x1C01792CC (-CheckKernelBlockList@@YAJPEAU_FDO_CONTEXT@@IIPEBGW4_QAI_DRIVERVERSION@@@Z.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009A84 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 */

__int64 __fastcall ConvertStringsToOneMultiString(
        struct _UNICODE_STRING *a1,
        unsigned int a2,
        unsigned __int16 **a3,
        unsigned int *a4)
{
  unsigned __int16 **v4; // r12
  __int64 v5; // rbx
  struct _UNICODE_STRING *v6; // rdi
  int v7; // r13d
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned __int64 Length; // r12
  unsigned int v11; // ebp
  unsigned __int64 v12; // rax
  wchar_t *v13; // rsi
  __int64 v14; // rdx
  char v15; // al
  unsigned int v16; // ebx
  unsigned int v17; // edi
  SIZE_T v18; // rax
  unsigned __int16 *v19; // rsi
  int v20; // ebx
  _DWORD *v21; // rbp
  const unsigned __int16 **v22; // r14
  char **v24; // r11
  char *v25; // rcx
  int v26; // r8d
  int v27; // r10d
  struct _UNICODE_STRING *v28; // [rsp+20h] [rbp-1E8h]
  __int64 v29; // [rsp+28h] [rbp-1E0h]
  wchar_t *Buffer; // [rsp+30h] [rbp-1D8h]
  _DWORD v33[32]; // [rsp+50h] [rbp-1B8h] BYREF
  _QWORD v34[30]; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a3;
  v5 = a2;
  v6 = a1;
  v28 = a1;
  v7 = 0;
  v8 = 0LL;
  memset(v34, 0, sizeof(v34));
  if ( (_DWORD)v5 )
  {
    v9 = (unsigned int)v5;
    v29 = v5;
    do
    {
      Length = v6->Length;
      v11 = 0;
      Buffer = v6->Buffer;
      if ( v6->Length )
      {
        v12 = 0LL;
        do
        {
          v13 = &Buffer[v12 / 2];
          v14 = -1LL;
          do
            ++v14;
          while ( v13[v14] );
          if ( !(_DWORD)v14 )
            break;
          v15 = 0;
          v16 = 0;
          if ( (_DWORD)v8 )
          {
            v24 = (char **)v34;
            while ( !v15 )
            {
              v25 = *v24;
              do
              {
                v26 = *(unsigned __int16 *)&v25[(char *)v13 - *v24];
                v27 = *(unsigned __int16 *)v25 - v26;
                if ( v27 )
                  break;
                v25 += 2;
              }
              while ( v26 );
              if ( !v27 )
                v15 = 1;
              ++v16;
              ++v24;
              if ( v16 >= (unsigned int)v8 )
              {
                if ( v15 )
                  break;
                goto LABEL_9;
              }
            }
          }
          else
          {
LABEL_9:
            if ( (unsigned int)v8 < 0x1E )
            {
              v34[v8] = v13;
              v33[v8] = v14 + 1;
              v8 = (unsigned int)(v8 + 1);
              v7 += v14 + 1;
            }
          }
          v11 += v14 + 1;
          v12 = 2LL * v11;
        }
        while ( v12 < Length );
        v6 = v28;
        v9 = v29;
      }
      ++v6;
      --v9;
      v28 = v6;
      v29 = v9;
    }
    while ( v9 );
    v4 = a3;
  }
  v17 = v7 + 1;
  if ( (unsigned int)(v7 + 1) >= 0xFA00 )
    return 3221225659LL;
  v18 = 2LL * v17;
  if ( !is_mul_ok(v17, 2uLL) )
    v18 = -1LL;
  v19 = (unsigned __int16 *)operator new[](v18, 0x4B677844u, PagedPool);
  if ( !v19 )
    return 3221225495LL;
  v20 = 0;
  if ( (_DWORD)v8 )
  {
    v21 = v33;
    v22 = (const unsigned __int16 **)v34;
    do
    {
      if ( v17 != v20 )
      {
        RtlStringCchCopyW(&v19[v20], v17 - v20, *v22);
        v20 += *v21;
      }
      ++v22;
      ++v21;
      --v8;
    }
    while ( v8 );
  }
  v19[v20] = 0;
  *v4 = v19;
  *a4 = v17;
  return 0LL;
}

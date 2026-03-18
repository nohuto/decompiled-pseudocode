/*
 * XREFs of FastGetProfileKeysW @ 0x1C012A0E0
 * Callers:
 *     <none>
 * Callees:
 *     OpenCacheKeyEx @ 0x1C0014290 (OpenCacheKeyEx.c)
 *     UserReAllocPoolWithQuota @ 0x1C00429E0 (UserReAllocPoolWithQuota.c)
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolWithQuota @ 0x1C008F360 (Win32AllocPoolWithQuota.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

unsigned __int64 __fastcall FastGetProfileKeysW(const UNICODE_STRING *a1, __int64 a2, void *a3, _QWORD *a4)
{
  _WORD *v5; // rsi
  __int64 v6; // rdi
  _WORD *v7; // rbx
  unsigned int v8; // r14d
  ULONG v9; // r15d
  ULONG Length; // r12d
  void *v11; // r13
  _DWORD *v12; // rsi
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  ULONG v16; // eax
  __int64 v17; // rax
  unsigned int v18; // ebp
  _WORD *v19; // rax
  size_t v20; // r8
  __int64 v21; // rax
  __int64 v22; // rsi
  _WORD *v23; // rax
  unsigned __int64 result; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-278h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-274h]
  void *Src; // [rsp+38h] [rbp-270h]
  _QWORD *v28; // [rsp+40h] [rbp-268h]
  _BYTE KeyValueInformation[512]; // [rsp+50h] [rbp-258h] BYREF

  v28 = a4;
  Src = a3;
  v5 = a3;
  v26 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0;
  Length = 512;
  v11 = OpenCacheKeyEx(a1, a2, 0x20019u, 0LL);
  if ( !v11 )
    goto LABEL_19;
  *a4 = 0LL;
  v12 = KeyValueInformation;
  while ( 1 )
  {
    ResultLength = 0;
    v13 = ZwEnumerateValueKey(v11, v9, KeyValueBasicInformation, v12, Length, &ResultLength);
    if ( v13 != -2147483643 )
      break;
    v16 = ResultLength;
    if ( ResultLength <= Length )
      goto LABEL_13;
    if ( v6 )
    {
      Win32FreePool(v6, v14, v15);
      v16 = ResultLength;
      v12 = KeyValueInformation;
      Length = 512;
    }
    v17 = Win32AllocPoolWithQuota(v16, 0x72707355u);
    v6 = v17;
    if ( v17 )
    {
      Length = ResultLength;
      v12 = (_DWORD *)v17;
    }
    else
    {
LABEL_18:
      ++v9;
    }
  }
  if ( v13 < 0 )
    goto LABEL_13;
  v18 = (v12[2] + v8 + 4099) & 0xFFFFF000;
  if ( v26 >= v18 )
  {
LABEL_17:
    v20 = (unsigned int)v12[2];
    v26 = v18;
    memmove(&v7[(unsigned __int64)v8 >> 1], v12 + 3, v20);
    v7[(unsigned __int64)(v8 + v12[2]) >> 1] = 0;
    v8 += v12[2] + 2;
    goto LABEL_18;
  }
  if ( !v7 )
  {
    v7 = (_WORD *)Win32AllocPoolWithQuota(v18, 0x72707355u);
    if ( !v7 )
      goto LABEL_13;
    goto LABEL_17;
  }
  v19 = UserReAllocPoolWithQuota(v7, v8, v18, 0x72707355u);
  if ( v19 )
  {
    v7 = v19;
    goto LABEL_17;
  }
LABEL_13:
  if ( !v9 )
  {
    v5 = Src;
LABEL_19:
    v21 = -1LL;
    do
      ++v21;
    while ( v5[v21] );
    v22 = (unsigned int)(2 * v21 + 4);
    v23 = (_WORD *)Win32AllocPoolWithQuota(v22, 0x72707355u);
    v7 = v23;
    if ( v23 )
    {
      memmove(v23, Src, v22 - 2);
      v8 = v22 - 2;
    }
  }
  if ( v11 )
    ZwClose(v11);
  if ( v6 )
    Win32FreePool(v6, v14, v15);
  result = (unsigned __int64)v8 >> 1;
  if ( v7 )
    v7[result] = 0;
  *v28 = v7;
  return result;
}

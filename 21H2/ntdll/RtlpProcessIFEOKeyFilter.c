/*
 * XREFs of RtlpProcessIFEOKeyFilter @ 0x180076530
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x18007630C (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180015F60 (RtlPrefixUnicodeString.c)
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtClose @ 0x18009D820 (NtClose.c)
 *     NtOpenKey @ 0x18009D880 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D920 (NtQueryValueKey.c)
 *     NtEnumerateKey @ 0x18009DC80 (NtEnumerateKey.c)
 */

__int64 __fastcall RtlpProcessIFEOKeyFilter(HANDLE *a1, unsigned int a2, __int128 *a3)
{
  _BYTE *v3; // r13
  HANDLE *v4; // r12
  unsigned int v5; // ebx
  __int64 v6; // rsi
  __int64 result; // rax
  _BYTE *v9; // rcx
  unsigned int v10; // eax
  int inited; // edi
  int v12; // r12d
  int v13; // eax
  void *ProcessHeap; // rcx
  int v15; // eax
  __int64 Heap; // rax
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh]
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  int v20; // [rsp+40h] [rbp-C0h]
  unsigned __int16 v21[4]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE *v22; // [rsp+50h] [rbp-B0h]
  __int128 v23; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v24; // [rsp+68h] [rbp-98h]
  _BYTE *v25; // [rsp+70h] [rbp-90h]
  HANDLE *v26; // [rsp+78h] [rbp-88h]
  unsigned __int16 v27[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v28; // [rsp+88h] [rbp-78h]
  int v29; // [rsp+90h] [rbp-70h] BYREF
  HANDLE v30; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v31; // [rsp+A0h] [rbp-60h]
  int v32; // [rsp+A8h] [rbp-58h]
  __int128 v33; // [rsp+B0h] [rbp-50h]
  _BYTE v34[4]; // [rsp+C0h] [rbp-40h] BYREF
  int v35; // [rsp+C4h] [rbp-3Ch]
  int v36; // [rsp+C8h] [rbp-38h]
  int v37; // [rsp+CCh] [rbp-34h]

  v24 = a2;
  v3 = v34;
  v4 = a1;
  v26 = a1;
  v5 = 0;
  Handle = 0LL;
  v18 = 544;
  v6 = 0LL;
  result = RtlInitUnicodeStringEx((__int64)v21, (__int64)L"UseFilter");
  if ( (int)result < 0 )
    return result;
  result = NtQueryValueKey(*v4, v21, 2LL, v34, 544, &v17);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || (_DWORD)result == -1073741789 || (_DWORD)result == -2147483643 )
      return v5;
    return result;
  }
  if ( v35 != 4 || v36 != 4 || !v37 )
    return 0LL;
  v23 = *a3;
  result = RtlInitUnicodeStringEx((__int64)v21, (__int64)L"\\??\\");
  if ( (int)result >= 0 )
  {
    if ( RtlPrefixUnicodeString(v21, (__int64)&v23, 1) )
    {
      LOWORD(v23) = v23 - 8;
      WORD1(v23) -= 8;
      *((_QWORD *)&v23 + 1) += 8LL;
    }
    v9 = v34;
    v20 = 0;
    v25 = v34;
    v10 = 0;
    while ( 1 )
    {
      inited = ((__int64 (__fastcall *)(HANDLE, _QWORD, _QWORD, _BYTE *, int, unsigned int *))NtEnumerateKey)(
                 *v4,
                 v10,
                 0LL,
                 v9,
                 v18,
                 &v17);
      if ( inited < 0 )
        goto LABEL_39;
      v21[0] = *((_WORD *)v25 + 6);
      v21[1] = *((_WORD *)v25 + 6);
      v22 = v25 + 16;
      v30 = *v4;
      v31 = v21;
      v29 = 48;
      v32 = 576;
      v33 = 0LL;
      inited = NtOpenKey(&Handle, v24, &v29);
      if ( inited < 0 )
        goto LABEL_39;
      inited = RtlInitUnicodeStringEx((__int64)v21, (__int64)L"FilterFullPath");
      if ( inited < 0 )
        goto LABEL_38;
      v12 = v18;
      do
      {
        v13 = NtQueryValueKey(Handle, v21, 2LL, v3, v12, &v17);
        inited = v13;
        if ( v13 == -2147483643 || v13 == -1073741789 )
        {
          if ( v6 )
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
          ProcessHeap = NtCurrentPeb()->ProcessHeap;
          if ( ProcessHeap )
          {
            Heap = RtlAllocateHeap((__int64)ProcessHeap, NtdllBaseTag + 1572864, v17);
            v6 = Heap;
            if ( Heap )
            {
              v12 = v17;
              v3 = (_BYTE *)Heap;
              v25 = (_BYTE *)Heap;
              continue;
            }
          }
          else
          {
            v6 = 0LL;
          }
          inited = -1073741801;
        }
      }
      while ( inited == -2147483643 || inited == -1073741789 );
      v18 = v12;
      v4 = v26;
      if ( inited >= 0 )
      {
        if ( *((_DWORD *)v3 + 1) == 1 && *((_DWORD *)v3 + 2) <= 0xFFFEu )
        {
          v27[0] = *((_WORD *)v3 + 4) - 2;
          v27[1] = v27[0];
          v28 = v3 + 12;
          if ( !(unsigned int)RtlCompareUnicodeString((unsigned __int16 *)&v23, v27, 1) )
            goto LABEL_40;
        }
LABEL_38:
        NtClose(Handle);
        goto LABEL_39;
      }
      NtClose(Handle);
      v15 = 0;
      if ( inited != -1073741772 )
        v15 = inited;
      inited = v15;
LABEL_39:
      v9 = v25;
      v10 = ++v20;
      if ( inited < 0 )
      {
LABEL_40:
        if ( v6 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
        if ( inited >= 0 )
        {
          NtClose(*v4);
          *v4 = Handle;
        }
        if ( inited != -2147483622 )
          return (unsigned int)inited;
        return v5;
      }
    }
  }
  return result;
}

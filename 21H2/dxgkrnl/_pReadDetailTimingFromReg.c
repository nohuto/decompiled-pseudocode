/*
 * XREFs of _pReadDetailTimingFromReg @ 0x1C03B4C68
 * Callers:
 *     _pLoadAdditinalMode @ 0x1C01DC608 (_pLoadAdditinalMode.c)
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z @ 0x1C006BA90 (-IsValidVideoStandardType@@YAJW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@@Z.c)
 */

__int64 __fastcall pReadDetailTimingFromReg(HANDLE KeyHandle, int a2, unsigned int a3, __int64 a4)
{
  unsigned int *v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r14
  __int64 v8; // rbp
  NTSTATUS v10; // eax
  int valid; // ebx
  unsigned int v12; // eax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-78h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+38h] [rbp-70h] BYREF
  int v19; // [rsp+3Ch] [rbp-6Ch]
  int v20; // [rsp+40h] [rbp-68h]
  unsigned int v21; // [rsp+44h] [rbp-64h]

  ResultLength = 0;
  v4 = (unsigned int *)(a4 + 4);
  v5 = 0;
  v6 = a3;
  v8 = a2;
  do
  {
    v10 = ZwQueryValueKey(
            KeyHandle,
            (PUNICODE_STRING)&unk_1C0087CD0 + v5,
            KeyValuePartialInformation,
            KeyValueInformation,
            0x13u,
            &ResultLength);
    valid = v10;
    if ( v10 < 0 )
    {
      WdLogSingleEntry4(3LL, v8, v6, v5, v10);
      return (unsigned int)valid;
    }
    if ( v19 != 4 || v20 != 4 )
    {
      WdLogSingleEntry4(3LL, v8, v6, v5, v10);
      return (unsigned int)-1073741811;
    }
    v12 = v21;
    if ( v5 )
    {
      *v4 = v21;
    }
    else
    {
      *(_DWORD *)a4 = HIBYTE(v21);
      *(_DWORD *)(a4 + 4) = v12 & 0xFFFFFF;
      valid = IsValidVideoStandardType((enum _D3DKMDT_VIDEO_SIGNAL_STANDARD)HIBYTE(v12));
      if ( valid < 0 )
      {
        WdLogSingleEntry2(3LL, v6, v8);
        return (unsigned int)valid;
      }
    }
    ++v5;
    ++v4;
  }
  while ( v5 < 6 );
  v13 = *(_DWORD *)(a4 + 8);
  if ( (v13 & 0xFFFFFF) == 0 )
  {
    v14 = v13 & 0xFFFFFF;
    goto LABEL_12;
  }
  v15 = *(unsigned __int16 *)(a4 + 12);
  if ( (unsigned int)v15 < 0x64 || (v15 = *(unsigned __int16 *)(a4 + 20), (unsigned int)v15 < 0x64) )
  {
    v14 = v15;
LABEL_12:
    WdLogSingleEntry2(3LL, v14, a4 + 8);
    return (unsigned int)-1073741811;
  }
  return 0;
}

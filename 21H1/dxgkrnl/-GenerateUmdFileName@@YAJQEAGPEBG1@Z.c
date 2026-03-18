/*
 * XREFs of ?GenerateUmdFileName@@YAJQEAGPEBG1@Z @ 0x1C021DA10
 * Callers:
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C021E410 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0009634 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCbCatW@@YAJPEAG_KPEBG@Z @ 0x1C0036F64 (-RtlStringCbCatW@@YAJPEAG_KPEBG@Z.c)
 */

signed int __fastcall GenerateUmdFileName(unsigned __int16 *const a1, const unsigned __int16 *a2, size_t *a3)
{
  size_t *NtSystemRoot; // rax
  __int64 v6; // rdx
  signed int result; // eax
  unsigned __int16 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rax
  char *v13; // r9
  __int16 v14; // r8
  _WORD *v15; // rax
  __int64 v16; // rdx

  RtlStringCbCopyW(a1, 0x208uLL, (size_t *)L"\\??\\");
  NtSystemRoot = (size_t *)RtlGetNtSystemRoot();
  result = RtlStringCbCatW(a1, v6, NtSystemRoot);
  if ( result >= 0 )
  {
    v8 = a1;
    v9 = 260LL;
    do
    {
      if ( !*v8 )
        break;
      ++v8;
      --v9;
    }
    while ( v9 );
    result = v9 == 0 ? 0xC000000D : 0;
    if ( v9 )
      v10 = 260 - v9;
    else
      v10 = 0LL;
    if ( v9 )
    {
      v9 = (__int64)&a1[v10];
      v11 = 260 - v10;
      if ( 260 != v10 )
      {
        v12 = 2147483646LL;
        v13 = (char *)L"\\System32\\" - v9;
        do
        {
          if ( !v12 )
            break;
          v14 = *(_WORD *)&v13[v9];
          if ( !v14 )
            break;
          *(_WORD *)v9 = v14;
          --v12;
          v9 += 2LL;
          --v11;
        }
        while ( v11 );
      }
      v15 = (_WORD *)(v9 - 2);
      if ( v11 )
        v15 = (_WORD *)v9;
      *v15 = 0;
      result = v11 == 0 ? 0x80000005 : 0;
    }
    if ( result >= 0 )
    {
      result = RtlStringCbCatW(a1, v9, (size_t *)L"HostDriverStore");
      if ( result >= 0 )
        return RtlStringCbCatW(a1, v16, a3);
    }
  }
  return result;
}

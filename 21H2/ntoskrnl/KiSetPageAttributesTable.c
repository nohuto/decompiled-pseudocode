/*
 * XREFs of KiSetPageAttributesTable @ 0x14099A66C
 * Callers:
 *     KeRestoreProcessorSpecificFeatures @ 0x140383E7C (KeRestoreProcessorSpecificFeatures.c)
 *     KiInitializeKernel @ 0x14099E6F0 (KiInitializeKernel.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x1403A0BD0 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 */

unsigned __int64 KiSetPageAttributesTable()
{
  int v0; // ebx
  bool v1; // di
  unsigned __int64 result; // rax
  unsigned int v3; // r9d
  __int64 v4; // rdx
  char v5; // r8
  int v6; // ecx
  int v7; // ebx
  unsigned __int64 v8; // [rsp+20h] [rbp-28h]
  unsigned __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+40h] [rbp-8h]

  v8 = 0x7010600070106LL;
  v0 = 0;
  _disable();
  v1 = (v10 & 0x200) != 0;
  result = __readmsr(0x277u);
  v3 = 0;
  v9 = result;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = *((_BYTE *)&v9 + v4);
    if ( v5 == 6 && *((_BYTE *)&v8 + v4) != 6 )
      break;
    v6 = v0 | 1;
    if ( v5 == *((_BYTE *)&v8 + v4) )
      v6 = v0;
    ++v3;
    ++v4;
    v0 = v6;
    if ( v3 >= 8 )
      goto LABEL_6;
  }
  v0 = 3;
LABEL_6:
  if ( v0 )
  {
    v7 = v0 & 2;
    if ( v7 )
      __wbinvd();
    KeFlushCurrentTbImmediately();
    __writemsr(0x277u, v8);
    if ( v7 )
      __wbinvd();
    result = KeFlushCurrentTbImmediately();
  }
  if ( v1 )
    _enable();
  return result;
}

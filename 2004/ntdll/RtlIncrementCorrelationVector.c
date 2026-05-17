/*
 * XREFs of RtlIncrementCorrelationVector @ 0x1800837D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpGetCorrelationVectorBufferLength @ 0x1800838DC (RtlpGetCorrelationVectorBufferLength.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     _snprintf_s @ 0x1800969E0 (_snprintf_s.c)
 *     sscanf_s @ 0x180097560 (sscanf_s.c)
 *     strcpy_s @ 0x180097660 (strcpy_s.c)
 */

__int64 __fastcall RtlIncrementCorrelationVector(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  int CorrelationVectorBufferLength; // ebp
  int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // r10
  __int64 v12; // rax
  char v13; // dl
  int v14; // ecx
  __int64 v15; // rsi
  int v16; // eax
  int v18; // [rsp+30h] [rbp-28h] BYREF
  char Buffer[16]; // [rsp+38h] [rbp-20h] BYREF

  v2 = 0;
  v18 = 0;
  CorrelationVectorBufferLength = RtlpGetCorrelationVectorBufferLength(a1, a2, a1);
  v4 = -1;
  v8 = RtlpGetCorrelationVectorBufferLength(v6, v5, v7);
  v11 = v8;
  if ( v8 <= 0 )
    return (unsigned int)-2147483643;
  v12 = 0LL;
  do
  {
    v13 = *(_BYTE *)(v9 + v12 + 1);
    v14 = v10;
    if ( !v13 )
      break;
    ++v10;
    ++v12;
    if ( v13 != 46 )
      v14 = v4;
    v4 = v14;
  }
  while ( v12 < v11 );
  if ( v4 >= 0
    && (v15 = v9 + v4 + 1, sscanf_s((const char *const)(v15 + 1), "%d", &v18) == 1)
    && (++v18, v16 = snprintf_s(Buffer, 0xCuLL, 0xCuLL, "%d", v18), v16 < CorrelationVectorBufferLength - v4 - 2) )
  {
    strcpy_s((char *)(v15 + 1), v16 + 1, Buffer);
  }
  else
  {
    return (unsigned int)-2147483643;
  }
  return v2;
}

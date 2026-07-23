/*
 * XREFs of MiLimitLoaderBlockHighMemory @ 0x140A68950
 * Callers:
 *     MiMemoryLicense @ 0x140A6878C (MiMemoryLicense.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall MiLimitLoaderBlockHighMemory(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // r11
  unsigned __int64 v3; // rcx
  unsigned __int64 result; // rax
  ULONG_PTR v5; // rbx
  __int64 v7; // r9
  ULONG_PTR v8; // r9
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  unsigned __int64 *v11; // rdx

  v2 = a1 + 32;
  v3 = *(_QWORD *)(a1 + 32);
  result = 0x2000000000LL;
  v5 = KeFeatureBits & 0x2000000000LL;
  while ( v3 != v2 )
  {
    v9 = *(unsigned int *)(v3 + 16);
    if ( v5 )
      goto LABEL_7;
    if ( (_DWORD)v9 != 38 )
    {
      if ( (_DWORD)v9 == 39 )
      {
        v9 = 2LL;
        *(_DWORD *)(v3 + 16) = 2;
      }
LABEL_7:
      result = (unsigned int)(v9 - 30);
      if ( (unsigned int)result <= 2 || (_DWORD)v9 == 6 )
        goto LABEL_4;
      goto LABEL_9;
    }
    v9 = 24LL;
    *(_DWORD *)(v3 + 16) = 24;
LABEL_9:
    if ( (unsigned int)v9 > 0x28 || (v7 = 0x1C400C00008LL, !_bittest64(&v7, v9)) )
    {
      v8 = *(_QWORD *)(v3 + 24);
      result = v8 + *(_QWORD *)(v3 + 32);
      if ( result > a2 )
      {
        if ( (unsigned int)v9 > 0x23 || (v10 = 0xA01000134LL, !_bittest64(&v10, v9)) )
          KeBugCheckEx(0x1Au, 0x3030308uLL, a2, v8, *(_QWORD *)(v3 + 32));
        if ( v8 < a2 )
        {
          result = a2 - v8;
          *(_QWORD *)(v3 + 32) = a2 - v8;
        }
        else
        {
          result = *(_QWORD *)v3;
          if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || (v11 = *(unsigned __int64 **)(v3 + 8), *v11 != v3) )
            __fastfail(3u);
          *v11 = result;
          *(_QWORD *)(result + 8) = v11;
        }
      }
    }
LABEL_4:
    v3 = *(_QWORD *)v3;
  }
  return result;
}
